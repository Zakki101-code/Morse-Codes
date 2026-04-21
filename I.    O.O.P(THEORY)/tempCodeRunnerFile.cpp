class Collection 
{
    public:
    Element el1, el2;
    Collection() { 
        cout<<"Collection constructed!" << endl; 
    }
};

int main(void) 
{
    Collection coll;
    cout<<"Size of Collection: "<<sizeof(coll)<<endl;
    cout<<coll.el1.value<<endl;
    cout<<coll.el2.value;
    
    
    cout<<endl<<endl<<endl;