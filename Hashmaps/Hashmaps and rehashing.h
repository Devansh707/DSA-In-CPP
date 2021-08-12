#include<string>
using namespace std;

template <typename V>
class Mapnode{
	public:
		string key;
		V value;
		Mapnode<V>* next;
	
		Mapnode(string key, V value){
			this->key = key;
			this->value = value;
			next = NULL;
		}
		~Mapnode(){
			delete next;
		}
};

template <typename V>
class Ourmap{
	Mapnode<V>** Buckets;
	int count;
	int numBuckets;
	
	public:
		Ourmap(){
			count = 0;
			numBuckets = 5;
			Buckets = new Mapnode<V>*[numBuckets];
			for(int i=0;i<numBuckets;i++)
			{
				Buckets[i] = NULL;
			}
		}
		~Ourmap(){
			for(int i=0;i<numBuckets;i++){
				delete Buckets[i];
			}
			delete [] Buckets;
		}
		int size(){
			return count;
		}
	private:
		int getbucketindex(string key){
			int hashcode = 0;
			int currcoeff = 1;
			for(int i=key.length() - 1;i>=0;i--)
			{
				hashcode = key[i] * currcoeff;
				hashcode = hashcode % numBuckets; // to keep hashcode in limit
				currcoeff *= 37; // ; where currcoeff = p = prime no.
				currcoeff = currcoeff % numBuckets; // to keep currcoeff in limit
			}
			return hashcode % numBuckets;
		}
		
		void rehash()
		{
			Mapnode<V>** temp = Buckets;
			Buckets = new Mapnode<V>*[2*numBuckets];
			for(int i=0;i<numBuckets;i++)
			{
				Buckets[i] = NULL;
			}
			int oldnumbucket = numBuckets;
			numBuckets *= 2;
			count = 0;
			for(int i=0;i<oldnumbucket;i++)
			{
				Mapnode<V> *head = temp[i];
				while(head != NULL)
				{
					string key = head->key;
					V value = value;
					insert(key , value);
					head = head->next;
				}
			}
			for(int i=0;i<oldnumbucket;i++)
			{
				Mapnode<V> *head = temp[i];
				delete head;
			}
			delete [] temp;
		}		
	public:
		
		double getloadfactor(){
			return (1.0 * count) / numBuckets;
		}
				
		void insert(string key, V value)
		{
			int bucketindex = getbucketindex(key);
			Mapnode<V> *head = Buckets[bucketindex];
			while(head != NULL){
				if(head->key == key)
				{
					head->value = value;
					return;
				}
				head = head->next;
			}
			head = Buckets[bucketindex];
			Mapnode<V> *newnode = new Mapnode<V>(key, value);
			newnode->next = head;
			Buckets[bucketindex] = newnode;
			count++;
			// Now rehashing
			double loadfactor = (1.0 *count)/numBuckets;
			if(loadfactor > 0.7)
			{
				rehash();				
			}
		}
		V remove(string key){
			int bucketindex = getbucketindex(key);
			Mapnode<V> *head = Buckets[bucketindex];
			Mapnode<V> *prev = NULL;
			while(head != NULL)
			{
				if(head->key == key)
				{
					if(prev == NULL)
					{
						Buckets[bucketindex] = head->next;
					}
					else{
						prev->next = head->next;
					}
					V ans = head->value;
					head->next = NULL;
					delete head;
					count--;
					return ans;
				}
				prev = head;
				head = head->next;
			}
			return 0;
		}
		
		V getvalue(string key)
		{
			int bucketindex = getbucketindex(key);
			Mapnode<V> *head = Buckets[bucketindex];
			while(head != NULL){
				if(head->key == key)
				{
					return head->value;
				}
				head = head->next;
			}
			return 0;
		}
};

