struct inputs{
    float num1;
    float num2;
    char operador;
};
program calculador_pro{
    version calculador_x{
        float Sum(inputs)=1;
        float Res(inputs)=2;
        float Mul(inputs)=3;
        float Div(inputs)=4;
    }=1;
}=0x2fffffff;