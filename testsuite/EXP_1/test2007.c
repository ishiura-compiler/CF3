#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MAX;
volatile uint64_t t0 = 339952483LLU;
uint64_t x7 = 0LLU;
static uint64_t t1 = 5045446019007253LLU;
volatile uint32_t t2 = 80U;
static uint8_t x17 = 120U;
int64_t x18 = INT64_MIN;
int8_t x19 = INT8_MIN;
int16_t x22 = -1559;
static int64_t x25 = INT64_MAX;
uint16_t x31 = 1259U;
volatile uint32_t x34 = UINT32_MAX;
volatile int8_t x36 = -1;
volatile int16_t x37 = INT16_MIN;
int8_t x40 = INT8_MIN;
volatile int32_t x42 = INT32_MIN;
int64_t x43 = 618733843305935692LL;
volatile int64_t t9 = -175605159412374LL;
int16_t x53 = -1;
static uint32_t x58 = UINT32_MAX;
uint16_t x59 = 150U;
int8_t x60 = -3;
int32_t x63 = -1;
int64_t t15 = -619203LL;
int64_t t16 = -21040109679LL;
static int32_t x74 = INT32_MAX;
uint16_t x76 = UINT16_MAX;
static int32_t t17 = -3385;
uint16_t x84 = UINT16_MAX;
uint64_t t19 = 2108980LLU;
volatile int32_t x85 = INT32_MAX;
int8_t x91 = INT8_MIN;
uint64_t x94 = 36826LLU;
uint8_t x99 = 35U;
volatile int64_t t23 = -1945181385020LL;
volatile uint16_t x106 = UINT16_MAX;
int8_t x111 = INT8_MIN;
static uint16_t x119 = 946U;
volatile int32_t t28 = 843456;
volatile uint32_t t29 = 19100573U;
volatile uint16_t x128 = 2766U;
int64_t x133 = -1LL;
uint64_t x134 = 3991904348785663LLU;
static int64_t t35 = 6135792797544LL;
static int32_t t37 = -2;
volatile uint8_t x160 = 27U;
static int16_t x163 = INT16_MIN;
int64_t x164 = 1276590657128LL;
int8_t x168 = INT8_MIN;
static volatile int64_t t40 = -31071618136LL;
volatile int16_t x173 = INT16_MIN;
uint64_t t42 = 260241LLU;
static int64_t x179 = 5523552478530882LL;
volatile uint32_t x181 = UINT32_MAX;
uint16_t x182 = UINT16_MAX;
int64_t x183 = 578LL;
volatile int64_t x186 = INT64_MIN;
uint32_t x190 = 29U;
int16_t x191 = INT16_MAX;
static volatile int8_t x192 = INT8_MIN;
volatile int16_t x195 = 3639;
int64_t x205 = INT64_MIN;
int32_t x214 = INT32_MAX;
static volatile uint64_t t52 = 52LLU;
int8_t x223 = -6;
uint8_t x225 = 46U;
int16_t x230 = INT16_MIN;
static int32_t x232 = 633966;
static volatile uint64_t x234 = 6570LLU;
uint8_t x240 = UINT8_MAX;
static int64_t t59 = 10378694426786LL;
int64_t x254 = -166844LL;
static uint32_t x259 = 470309098U;
int8_t x261 = INT8_MAX;
volatile uint64_t x263 = 33933286148LLU;
static volatile uint8_t x276 = 2U;
int64_t t67 = 1018787451103298LL;
volatile int64_t t69 = -1057897443LL;
static uint32_t x293 = 7898U;
volatile uint8_t x302 = 0U;
volatile int64_t x306 = INT64_MIN;
static int32_t x307 = -7878072;
volatile uint64_t x310 = 19LLU;
volatile uint8_t x312 = UINT8_MAX;
static uint16_t x315 = UINT16_MAX;
static uint64_t t77 = 17037618389284LLU;
volatile int8_t x319 = -27;
volatile int8_t x322 = -1;
volatile int64_t t79 = -187699955991670559LL;
static volatile int8_t x343 = -1;
int32_t x345 = INT32_MAX;
static uint8_t x349 = 44U;
int32_t t85 = 0;
volatile int16_t x357 = -1;
int8_t x365 = INT8_MIN;
uint32_t x369 = UINT32_MAX;
static volatile int8_t x372 = -1;
uint32_t t89 = 1659861U;
int8_t x374 = 3;
int32_t x376 = INT32_MAX;
int8_t x380 = INT8_MAX;
static volatile int32_t t93 = 6;
volatile uint64_t x394 = UINT64_MAX;
uint64_t t95 = 1535050487552553LLU;
uint32_t x400 = 19978U;
volatile int8_t x402 = -19;
int8_t x405 = -1;
int8_t x411 = INT8_MIN;
int64_t t99 = -1LL;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	volatile int64_t x3 = -1LL;
	uint64_t x4 = UINT64_MAX;

	t0 = (((x1|x2)|x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 0;
	int32_t x6 = -1;
	int64_t x8 = 1758LL;

	t1 = (((x5|x6)|x7)%x8);

	if (t1 != 987LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	uint8_t x14 = 0U;
	static int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;

	t2 = (((x13|x14)|x15)%x16);

	if (t2 != 32767U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x20 = 1826U;
	int64_t t3 = -7LL;

	t3 = (((x17|x18)|x19)%x20);

	if (t3 != -8LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 5U;
	uint64_t x23 = UINT64_MAX;
	volatile int8_t x24 = 15;
	uint64_t t4 = 1674476LLU;

	t4 = (((x21|x22)|x23)%x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x26 = INT64_MIN;
	uint32_t x27 = UINT32_MAX;
	static int32_t x28 = INT32_MAX;
	static int64_t t5 = -24311800020654803LL;

	t5 = (((x25|x26)|x27)%x28);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 135892460U;
	static volatile int16_t x30 = INT16_MAX;
	static int64_t x32 = INT64_MAX;
	volatile int64_t t6 = -23LL;

	t6 = (((x29|x30)|x31)%x32);

	if (t6 != 135921663LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MIN;
	volatile int64_t x35 = -1LL;
	volatile int64_t t7 = 4560118173691589881LL;

	t7 = (((x33|x34)|x35)%x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x38 = INT64_MAX;
	static int32_t x39 = INT32_MIN;
	int64_t t8 = -3032376113239953LL;

	t8 = (((x37|x38)|x39)%x40);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = -2;
	int8_t x44 = INT8_MIN;

	t9 = (((x41|x42)|x43)%x44);

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 26U;
	int64_t x46 = INT64_MAX;
	uint32_t x47 = 162562U;
	uint16_t x48 = 19U;
	int64_t t10 = -133479715LL;

	t10 = (((x45|x46)|x47)%x48);

	if (t10 != 17LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = INT8_MAX;
	uint16_t x50 = 23945U;
	uint32_t x51 = 6267660U;
	volatile int16_t x52 = INT16_MIN;
	static volatile uint32_t t11 = 764U;

	t11 = (((x49|x50)|x51)%x52);

	if (t11 != 6291455U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = 47LLU;
	int8_t x55 = 1;
	int64_t x56 = INT64_MIN;
	volatile uint64_t t12 = 15LLU;

	t12 = (((x53|x54)|x55)%x56);

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	uint32_t t13 = 155576354U;

	t13 = (((x57|x58)|x59)%x60);

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	static uint8_t x64 = UINT8_MAX;
	int32_t t14 = 13857;

	t14 = (((x61|x62)|x63)%x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x65 = 123093625U;
	int32_t x66 = INT32_MIN;
	static int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MAX;

	t15 = (((x65|x66)|x67)%x68);

	if (t15 != -102LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -55160LL;
	volatile int64_t x70 = -1LL;
	int16_t x71 = INT16_MAX;
	static uint16_t x72 = 1U;

	t16 = (((x69|x70)|x71)%x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	static int16_t x75 = INT16_MAX;

	t17 = (((x73|x74)|x75)%x76);

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	static volatile int16_t x78 = 17;
	uint8_t x79 = UINT8_MAX;
	int32_t x80 = -25;
	static uint32_t t18 = 0U;

	t18 = (((x77|x78)|x79)%x80);

	if (t18 != 24U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MAX;
	int64_t x82 = INT64_MIN;
	uint64_t x83 = UINT64_MAX;

	t19 = (((x81|x82)|x83)%x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = INT64_MIN;
	int64_t x87 = -1LL;
	uint64_t x88 = 171652637LLU;
	static uint64_t t20 = 68673591830LLU;

	t20 = (((x85|x86)|x87)%x88);

	if (t20 != 78211213LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 7U;
	uint8_t x90 = 1U;
	int32_t x92 = -1;
	volatile int32_t t21 = -1;

	t21 = (((x89|x90)|x91)%x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	int64_t x95 = -4367LL;
	uint16_t x96 = 2U;
	volatile uint64_t t22 = 31921942056446LLU;

	t22 = (((x93|x94)|x95)%x96);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x100 = INT64_MAX;

	t23 = (((x97|x98)|x99)%x100);

	if (t23 != -93LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MIN;
	int16_t x102 = 14;
	uint64_t x103 = 65529938045369LLU;
	int32_t x104 = INT32_MIN;
	uint64_t t24 = 17107788LLU;

	t24 = (((x101|x102)|x103)%x104);

	if (t24 != 1622010303LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = -510188299496757436LL;
	static volatile int8_t x107 = -1;
	int64_t x108 = -1314926452873345590LL;
	static volatile int64_t t25 = 905LL;

	t25 = (((x105|x106)|x107)%x108);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = 7059;
	static volatile int16_t x110 = INT16_MIN;
	int64_t x112 = INT64_MIN;
	int64_t t26 = 241304552644126596LL;

	t26 = (((x109|x110)|x111)%x112);

	if (t26 != -109LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = INT8_MAX;
	uint64_t x114 = 22820322LLU;
	int8_t x115 = INT8_MIN;
	static int64_t x116 = -1LL;
	volatile uint64_t t27 = 16465769793144LLU;

	t27 = (((x113|x114)|x115)%x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -109514733;
	static int8_t x118 = -1;
	int32_t x120 = -1;

	t28 = (((x117|x118)|x119)%x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = INT16_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 50U;
	uint32_t x124 = UINT32_MAX;

	t29 = (((x121|x122)|x123)%x124);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x125 = INT8_MAX;
	volatile int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MAX;
	volatile int64_t t30 = -1117247454742321LL;

	t30 = (((x125|x126)|x127)%x128);

	if (t30 != -1441LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -1LL;
	int16_t x130 = INT16_MAX;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = -3;
	volatile int64_t t31 = 69605438424967LL;

	t31 = (((x129|x130)|x131)%x132);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x135 = 7395U;
	int8_t x136 = INT8_MIN;
	uint64_t t32 = 13161LLU;

	t32 = (((x133|x134)|x135)%x136);

	if (t32 != 127LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	volatile uint8_t x138 = 2U;
	static volatile int8_t x139 = INT8_MIN;
	volatile int32_t x140 = -1;
	uint32_t t33 = 28U;

	t33 = (((x137|x138)|x139)%x140);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = -1;
	uint32_t x142 = 15361976U;
	static uint8_t x143 = UINT8_MAX;
	static int16_t x144 = INT16_MAX;
	static volatile uint32_t t34 = 297U;

	t34 = (((x141|x142)|x143)%x144);

	if (t34 != 3U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 4119U;
	int64_t x146 = -6696177573LL;
	int64_t x147 = INT64_MAX;
	volatile int32_t x148 = INT32_MIN;

	t35 = (((x145|x146)|x147)%x148);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 1U;
	int16_t x150 = INT16_MIN;
	volatile int32_t x151 = INT32_MIN;
	uint32_t x152 = 1970952U;
	uint32_t t36 = 680524U;

	t36 = (((x149|x150)|x151)%x152);

	if (t36 != 230121U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = 175;
	static int32_t x155 = INT32_MIN;
	static volatile int8_t x156 = -19;

	t37 = (((x153|x154)|x155)%x156);

	if (t37 != -18) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 735684812LLU;
	volatile uint8_t x158 = UINT8_MAX;
	int16_t x159 = -1;
	volatile uint64_t t38 = 5678956015522887LLU;

	t38 = (((x157|x158)|x159)%x160);

	if (t38 != 24LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -30;
	static int8_t x162 = INT8_MIN;
	volatile int64_t t39 = -132023015195811LL;

	t39 = (((x161|x162)|x163)%x164);

	if (t39 != -30LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x165 = UINT16_MAX;
	volatile int8_t x166 = -1;
	volatile int64_t x167 = -2LL;

	t40 = (((x165|x166)|x167)%x168);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MAX;
	uint64_t x170 = 5574506215297LLU;
	int32_t x171 = -1;
	uint32_t x172 = 174017U;
	static volatile uint64_t t41 = 4325263680665LLU;

	t41 = (((x169|x170)|x171)%x172);

	if (t41 != 7049LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x174 = 1105097727465814LLU;
	static volatile int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;

	t42 = (((x173|x174)|x175)%x176);

	if (t42 != 18446744073709541718LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MIN;
	volatile int32_t x180 = INT32_MIN;
	volatile uint64_t t43 = 65LLU;

	t43 = (((x177|x178)|x179)%x180);

	if (t43 != 2147483647LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x184 = INT8_MIN;
	volatile int64_t t44 = 183275LL;

	t44 = (((x181|x182)|x183)%x184);

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = UINT8_MAX;
	int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	volatile int64_t t45 = 988LL;

	t45 = (((x185|x186)|x187)%x188);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x189 = 9588839U;
	static uint32_t t46 = 499822U;

	t46 = (((x189|x190)|x191)%x192);

	if (t46 != 9601023U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = 9;
	int32_t x194 = -1;
	static volatile uint16_t x196 = 177U;
	static volatile int32_t t47 = -705;

	t47 = (((x193|x194)|x195)%x196);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	uint32_t x198 = UINT32_MAX;
	volatile uint32_t x199 = UINT32_MAX;
	uint16_t x200 = 20513U;
	volatile uint32_t t48 = 0U;

	t48 = (((x197|x198)|x199)%x200);

	if (t48 != 16894U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = INT64_MAX;
	uint32_t x202 = 463257697U;
	volatile int16_t x203 = INT16_MAX;
	uint8_t x204 = 5U;
	int64_t t49 = 200299LL;

	t49 = (((x201|x202)|x203)%x204);

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = INT8_MIN;
	static int64_t x207 = -1LL;
	int16_t x208 = INT16_MAX;
	int64_t t50 = -1892469044750LL;

	t50 = (((x205|x206)|x207)%x208);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = INT16_MIN;
	static int8_t x210 = INT8_MIN;
	uint64_t x211 = 1161321514LLU;
	uint32_t x212 = UINT32_MAX;
	static volatile uint64_t t51 = 547456942389911LLU;

	t51 = (((x209|x210)|x211)%x212);

	if (t51 != 4294967210LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -3416;
	int64_t x215 = -1494846235653514LL;
	uint64_t x216 = 2433547997216LLU;

	t52 = (((x213|x214)|x215)%x216);

	if (t52 != 48432786655LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	static volatile int32_t x219 = INT32_MIN;
	int16_t x220 = -1;
	volatile int32_t t53 = 13708068;

	t53 = (((x217|x218)|x219)%x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x222 = UINT32_MAX;
	int32_t x224 = INT32_MAX;
	volatile int64_t t54 = 406262LL;

	t54 = (((x221|x222)|x223)%x224);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x226 = -6572006282911LL;
	int8_t x227 = INT8_MIN;
	int64_t x228 = INT64_MAX;
	volatile int64_t t55 = 66850890LL;

	t55 = (((x225|x226)|x227)%x228);

	if (t55 != -17LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = INT16_MIN;
	int16_t x231 = 57;
	volatile int32_t t56 = -2472634;

	t56 = (((x229|x230)|x231)%x232);

	if (t56 != -32711) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -1;
	int8_t x235 = -1;
	int8_t x236 = 1;
	volatile uint64_t t57 = 427874258403051LLU;

	t57 = (((x233|x234)|x235)%x236);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -1LL;
	uint32_t x238 = 16229352U;
	uint8_t x239 = 6U;
	static volatile int64_t t58 = 13196483734853LL;

	t58 = (((x237|x238)|x239)%x240);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = 1345258021U;
	int64_t x242 = INT64_MAX;
	int32_t x243 = 57547;
	volatile int8_t x244 = -1;

	t59 = (((x241|x242)|x243)%x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -61;
	static int32_t x246 = -6397;
	static volatile int32_t x247 = -1;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t60 = 50415;

	t60 = (((x245|x246)|x247)%x248);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MAX;
	uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -36;
	volatile int64_t t61 = -24604404425907728LL;

	t61 = (((x249|x250)|x251)%x252);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x253 = 172;
	uint8_t x255 = 19U;
	int32_t x256 = -481523;
	int64_t t62 = 29369591LL;

	t62 = (((x253|x254)|x255)%x256);

	if (t62 != -166657LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x257 = 194;
	uint8_t x258 = UINT8_MAX;
	volatile int16_t x260 = INT16_MIN;
	volatile uint32_t t63 = 31834U;

	t63 = (((x257|x258)|x259)%x260);

	if (t63 != 470309119U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x262 = 187U;
	volatile int32_t x264 = -1;
	static uint64_t t64 = 3668663LLU;

	t64 = (((x261|x262)|x263)%x264);

	if (t64 != 33933286399LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 717624749U;
	static int16_t x266 = -15;
	int32_t x267 = 30220312;
	int8_t x268 = INT8_MIN;
	static volatile uint32_t t65 = 98U;

	t65 = (((x265|x266)|x267)%x268);

	if (t65 != 125U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = 223269570;
	int16_t x271 = INT16_MIN;
	static int16_t x272 = -1;
	static volatile int64_t t66 = 2626678000387LL;

	t66 = (((x269|x270)|x271)%x272);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x273 = 344600U;
	static int64_t x274 = 4LL;
	static int16_t x275 = INT16_MIN;

	t67 = (((x273|x274)|x275)%x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	volatile uint16_t x278 = 61U;
	int32_t x279 = INT32_MAX;
	volatile uint32_t x280 = 5450U;
	volatile uint32_t t68 = 16854U;

	t68 = (((x277|x278)|x279)%x280);

	if (t68 != 2145U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = -1LL;
	volatile uint16_t x282 = UINT16_MAX;
	static int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MIN;

	t69 = (((x281|x282)|x283)%x284);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MAX;
	int8_t x286 = -45;
	int64_t x287 = 560532750181849582LL;
	int16_t x288 = INT16_MAX;
	volatile int64_t t70 = -3908622932715863712LL;

	t70 = (((x285|x286)|x287)%x288);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MIN;
	uint8_t x290 = 36U;
	volatile uint32_t x291 = 101U;
	int32_t x292 = INT32_MAX;
	static volatile uint32_t t71 = 2228191U;

	t71 = (((x289|x290)|x291)%x292);

	if (t71 != 102U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MAX;
	int32_t x296 = INT32_MIN;
	volatile uint32_t t72 = 1U;

	t72 = (((x293|x294)|x295)%x296);

	if (t72 != 7935U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x297 = 592478480;
	static volatile int32_t x298 = -1;
	uint32_t x299 = UINT32_MAX;
	static int8_t x300 = 44;
	static volatile uint32_t t73 = 86035U;

	t73 = (((x297|x298)|x299)%x300);

	if (t73 != 3U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	volatile int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MAX;
	int64_t t74 = 32LL;

	t74 = (((x301|x302)|x303)%x304);

	if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MAX;
	int64_t x308 = INT64_MIN;
	int64_t t75 = -171386850LL;

	t75 = (((x305|x306)|x307)%x308);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x309 = UINT32_MAX;
	static uint8_t x311 = 8U;
	volatile uint64_t t76 = 607644LLU;

	t76 = (((x309|x310)|x311)%x312);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MAX;
	static int16_t x314 = INT16_MIN;
	uint64_t x316 = 140403591307469081LLU;

	t77 = (((x313|x314)|x315)%x316);

	if (t77 != 53873612431102004LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x317 = UINT64_MAX;
	uint64_t x318 = 115806656316333737LLU;
	static volatile uint16_t x320 = UINT16_MAX;
	uint64_t t78 = 677022220LLU;

	t78 = (((x317|x318)|x319)%x320);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = -56861482;
	static volatile uint32_t x323 = 2068U;
	int64_t x324 = INT64_MAX;

	t79 = (((x321|x322)|x323)%x324);

	if (t79 != 4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 7048LL;
	int64_t x326 = 93777227629763LL;
	static uint8_t x327 = UINT8_MAX;
	static int8_t x328 = INT8_MIN;
	volatile int64_t t80 = 53769LL;

	t80 = (((x325|x326)|x327)%x328);

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MAX;
	static uint16_t x334 = UINT16_MAX;
	uint64_t x335 = 0LLU;
	int8_t x336 = INT8_MIN;
	volatile uint64_t t81 = 1397LLU;

	t81 = (((x333|x334)|x335)%x336);

	if (t81 != 65535LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = -70352518;
	int8_t x339 = INT8_MIN;
	static volatile uint8_t x340 = UINT8_MAX;
	int32_t t82 = -1;

	t82 = (((x337|x338)|x339)%x340);

	if (t82 != -6) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x341 = 17U;
	int32_t x342 = INT32_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t83 = 6615;

	t83 = (((x341|x342)|x343)%x344);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x346 = UINT64_MAX;
	int8_t x347 = INT8_MIN;
	uint64_t x348 = 29754280137LLU;
	static volatile uint64_t t84 = 395270567738198LLU;

	t84 = (((x345|x346)|x347)%x348);

	if (t84 != 6867619842LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x350 = INT32_MIN;
	int16_t x351 = -145;
	int16_t x352 = INT16_MAX;

	t85 = (((x349|x350)|x351)%x352);

	if (t85 != -145) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1;
	static volatile int8_t x354 = INT8_MIN;
	int32_t x355 = -401115;
	int64_t x356 = 3945324LL;
	static volatile int64_t t86 = 32203882LL;

	t86 = (((x353|x354)|x355)%x356);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	volatile int16_t x360 = INT16_MIN;
	int64_t t87 = 14540565468049301LL;

	t87 = (((x357|x358)|x359)%x360);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x366 = UINT32_MAX;
	int64_t x367 = INT64_MIN;
	int8_t x368 = 2;
	int64_t t88 = 2362165669LL;

	t88 = (((x365|x366)|x367)%x368);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x370 = INT8_MIN;
	uint16_t x371 = 0U;

	t89 = (((x369|x370)|x371)%x372);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = 408325670389LL;
	static int64_t x375 = INT64_MAX;
	int64_t t90 = 0LL;

	t90 = (((x373|x374)|x375)%x376);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MAX;
	static volatile int64_t x378 = INT64_MIN;
	uint8_t x379 = 1U;
	volatile int64_t t91 = -760059142LL;

	t91 = (((x377|x378)|x379)%x380);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = 545;
	static int64_t x382 = 8186074659271LL;
	uint16_t x383 = 3U;
	uint32_t x384 = 274053U;
	volatile int64_t t92 = 3203702054657986LL;

	t92 = (((x381|x382)|x383)%x384);

	if (t92 != 10244LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MIN;
	uint8_t x386 = 1U;
	int32_t x387 = 933405;
	volatile int8_t x388 = -1;

	t93 = (((x385|x386)|x387)%x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = 1;
	uint64_t x391 = UINT64_MAX;
	int16_t x392 = INT16_MIN;
	volatile uint64_t t94 = 54944632LLU;

	t94 = (((x389|x390)|x391)%x392);

	if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MIN;
	int32_t x395 = -1;
	int16_t x396 = -2231;

	t95 = (((x393|x394)|x395)%x396);

	if (t95 != 2230LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MAX;
	uint8_t x398 = 28U;
	int32_t x399 = INT32_MAX;
	uint32_t t96 = 16079U;

	t96 = (((x397|x398)|x399)%x400);

	if (t96 != 8471U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = -1LL;
	int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MIN;
	static volatile int64_t t97 = 3LL;

	t97 = (((x401|x402)|x403)%x404);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x406 = UINT32_MAX;
	int64_t x407 = -1LL;
	int16_t x408 = -5662;
	static int64_t t98 = 25735LL;

	t98 = (((x405|x406)|x407)%x408);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = 1883133154LL;
	int64_t x410 = INT64_MIN;
	volatile int32_t x412 = INT32_MIN;

	t99 = (((x409|x410)|x411)%x412);

	if (t99 != -30LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

