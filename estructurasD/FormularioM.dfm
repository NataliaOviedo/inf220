object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 513
  ClientWidth = 835
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 286
    Top = 44
    Width = 65
    Height = 24
    Caption = 'Libre ='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object GroupBox1: TGroupBox
    Left = 40
    Top = 72
    Width = 217
    Height = 353
    Caption = 'Metodos'
    TabOrder = 0
    object Button1: TButton
      Left = 32
      Top = 63
      Width = 105
      Height = 25
      Caption = 'Liberar Espacio'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 46
      Top = 32
      Width = 75
      Height = 25
      Caption = 'Crear'
      TabOrder = 1
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 32
      Top = 110
      Width = 105
      Height = 25
      Caption = 'Pedir Espacio'
      TabOrder = 2
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 32
      Top = 141
      Width = 105
      Height = 25
      Caption = 'Colocar Dato'
      TabOrder = 3
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 32
      Top = 172
      Width = 105
      Height = 25
      Caption = 'Obtener Dato'
      TabOrder = 4
    end
    object Button6: TButton
      Left = 32
      Top = 240
      Width = 105
      Height = 25
      Caption = 'Nuevo'
      TabOrder = 5
    end
  end
end
