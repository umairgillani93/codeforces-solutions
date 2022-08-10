import transformers
import torch.nn as nn 

class BertBaseUncase(nn.Module):
  def __init__(self, bert_path):
    super(BertBaseUncased, self).__init__()
    self.bert_path = bert_path 
    self.bert = transformers.BertMo

    
