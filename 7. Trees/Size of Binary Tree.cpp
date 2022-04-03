int getSize(Node* node)
{
   int x,y;
   if(node != NULL)
   {
       x= getSize(node->left);
       y=getSize(node->right);
       
       return x + y +1;
   }
   return 0;
}