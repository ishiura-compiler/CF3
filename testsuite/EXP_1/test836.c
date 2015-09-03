#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = -74;
uint8_t x4 = UINT8_MAX;
static volatile uint32_t t0 = 8870U;
int64_t t5 = -77023584LL;
int8_t x27 = -1;
int16_t x28 = INT16_MAX;
int64_t x32 = -1LL;
volatile int32_t x35 = INT32_MAX;
volatile int32_t x43 = INT32_MAX;
uint8_t x45 = UINT8_MAX;
volatile uint16_t x49 = 0U;
static int64_t x52 = -1LL;
int32_t x62 = INT32_MIN;
volatile uint16_t x63 = 0U;
int8_t x67 = 7;
uint8_t x71 = 30U;
static int16_t x73 = 2;
int8_t x76 = INT8_MIN;
int64_t x78 = -62LL;
volatile int64_t x80 = INT64_MIN;
int64_t t21 = -4LL;
int64_t x91 = INT64_MIN;
volatile int16_t x94 = INT16_MIN;
volatile int64_t x95 = INT64_MIN;
uint32_t x96 = UINT32_MAX;
int64_t x99 = INT64_MIN;
uint32_t x100 = UINT32_MAX;
volatile uint16_t x103 = 3919U;
int8_t x104 = 19;
int16_t x107 = INT16_MIN;
static int8_t x115 = 23;
volatile int8_t x116 = INT8_MAX;
int32_t x119 = 18161005;
int16_t x122 = 40;
int32_t x124 = 30;
int16_t x126 = -31;
int32_t x127 = INT32_MIN;
int16_t x135 = 0;
static volatile int8_t x139 = -1;
static volatile int16_t x140 = -5;
volatile int64_t t34 = 8357806LL;
int64_t x141 = INT64_MIN;
static int64_t x144 = -13956742803LL;
int8_t x147 = INT8_MIN;
volatile int64_t t36 = 7705545LL;
int16_t x149 = INT16_MIN;
int32_t x156 = INT32_MAX;
uint32_t x164 = 8127U;
static volatile int64_t x165 = INT64_MAX;
int64_t x167 = 130LL;
volatile uint64_t t41 = 12906268181641593LLU;
int64_t x171 = 24001236LL;
static volatile uint16_t x172 = 1U;
volatile int64_t t42 = 10LL;
int64_t x176 = -1LL;
static volatile int64_t t43 = -25238914952231LL;
int32_t x178 = -1;
uint16_t x187 = 55U;
static int32_t x190 = INT32_MIN;
int32_t x197 = INT32_MAX;
static uint64_t x198 = 262034LLU;
int16_t x202 = INT16_MIN;
static int8_t x208 = INT8_MAX;
static int16_t x214 = -2344;
static int8_t x230 = -1;
int32_t x231 = INT32_MAX;
int32_t t55 = 338030866;
int32_t x235 = INT32_MIN;
volatile int32_t x237 = INT32_MIN;
int8_t x240 = INT8_MAX;
uint32_t x243 = 431U;
int16_t x247 = 21;
uint64_t t59 = 46586710470LLU;
int64_t x250 = INT64_MIN;
uint8_t x256 = UINT8_MAX;
int64_t t62 = 592340139958951LL;
static int8_t x261 = INT8_MIN;
volatile uint64_t t63 = 32640006LLU;
volatile int32_t x267 = 0;
static int32_t x268 = INT32_MIN;
volatile int32_t t64 = 10;
volatile uint64_t x271 = 2LLU;
uint32_t x275 = 8U;
static volatile int16_t x276 = INT16_MAX;
static volatile uint32_t t66 = 3U;
int64_t x280 = INT64_MIN;
int32_t x285 = INT32_MIN;
uint32_t x286 = 157813642U;
static volatile int32_t t69 = -1462126;
volatile uint8_t x293 = UINT8_MAX;
static int8_t x295 = -1;
int64_t t71 = 1750003080529453860LL;
static int8_t x301 = -1;
int8_t x303 = INT8_MAX;
volatile uint64_t x304 = 2155040LLU;
static uint32_t x306 = 223679U;
volatile int16_t x310 = -10231;
int64_t x313 = INT64_MIN;
int32_t x336 = -16;
int32_t x343 = INT32_MAX;
uint64_t t82 = 14250054LLU;
volatile int16_t x353 = INT16_MIN;
static uint32_t t84 = 454479248U;
uint8_t x361 = 100U;
static int32_t x362 = -50;
static int32_t x371 = -71092835;
volatile uint8_t x376 = 48U;
volatile uint64_t t91 = 54735LLU;
int32_t x385 = INT32_MIN;
static volatile uint64_t x389 = 4276875239LLU;
uint64_t x399 = UINT64_MAX;
int32_t x401 = INT32_MIN;
uint64_t x410 = UINT64_MAX;
static int16_t x411 = 1088;
volatile uint64_t t99 = 1841158LLU;


void f0(void) {
	uint16_t x1 = 7814U;
	uint32_t x3 = 16417006U;

	t0 = (((x1%x2)^x3)/x4);

	if (t0 != 64380U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int16_t x6 = -1;
	uint8_t x7 = 2U;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 87417079;

	t1 = (((x5%x6)^x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	static uint64_t x10 = UINT64_MAX;
	uint16_t x11 = 1U;
	int64_t x12 = 268864681LL;
	volatile uint64_t t2 = 3964LLU;

	t2 = (((x9%x10)^x11)/x12);

	if (t2 != 68609770554LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 861514539LL;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 572130370793162LLU;

	t3 = (((x13%x14)^x15)/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int16_t x18 = -1;
	static int64_t x19 = INT64_MAX;
	volatile int16_t x20 = INT16_MIN;
	static volatile uint64_t t4 = 57165427LLU;

	t4 = (((x17%x18)^x19)/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 23570223LL;
	int32_t x22 = -1;
	uint32_t x23 = UINT32_MAX;
	int32_t x24 = 65270;

	t5 = (((x21%x22)^x23)/x24);

	if (t5 != 65803LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -129312719276313483LL;
	volatile uint32_t x26 = 14686U;
	int64_t t6 = -467729723615872807LL;

	t6 = (((x25%x26)^x27)/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 832835LL;
	volatile uint8_t x30 = 1U;
	volatile int16_t x31 = 2929;
	int64_t t7 = 112128LL;

	t7 = (((x29%x30)^x31)/x32);

	if (t7 != -2929LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	volatile int8_t x34 = INT8_MAX;
	int64_t x36 = 1209678875926140LL;
	int64_t t8 = 450111533566LL;

	t8 = (((x33%x34)^x35)/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int32_t x38 = -1493003;
	volatile int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -374354395;

	t9 = (((x37%x38)^x39)/x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 655LLU;
	uint32_t x42 = 10U;
	int32_t x44 = 133;
	volatile uint64_t t10 = 2079115934614172LLU;

	t10 = (((x41%x42)^x43)/x44);

	if (t10 != 16146493LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 850U;
	static uint16_t x47 = 245U;
	int32_t x48 = -1;
	static uint32_t t11 = 4174140U;

	t11 = (((x45%x46)^x47)/x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	int8_t x51 = 2;
	volatile int64_t t12 = 168672333658LL;

	t12 = (((x49%x50)^x51)/x52);

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 10;
	int16_t x54 = -1;
	uint8_t x55 = 0U;
	uint32_t x56 = 24422088U;
	volatile uint32_t t13 = 53758318U;

	t13 = (((x53%x54)^x55)/x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -2546;
	int64_t x58 = INT64_MIN;
	int16_t x59 = -1;
	static volatile uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 1035740280109LLU;

	t14 = (((x57%x58)^x59)/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x64 = -1;
	int64_t t15 = -565LL;

	t15 = (((x61%x62)^x63)/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int64_t x66 = -136716464185811344LL;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t16 = 21LLU;

	t16 = (((x65%x66)^x67)/x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -254LL;
	int32_t x70 = INT32_MIN;
	int16_t x72 = -1;
	int64_t t17 = -480726894157771246LL;

	t17 = (((x69%x70)^x71)/x72);

	if (t17 != 228LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = 29;
	int32_t x75 = INT32_MIN;
	volatile int32_t t18 = 205;

	t18 = (((x73%x74)^x75)/x76);

	if (t18 != 16777215) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	static uint64_t x79 = UINT64_MAX;
	volatile uint64_t t19 = 10326LLU;

	t19 = (((x77%x78)^x79)/x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint64_t x82 = 58838498931566LLU;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MAX;
	volatile uint64_t t20 = 8255818LLU;

	t20 = (((x81%x82)^x83)/x84);

	if (t20 != 8589934595LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = 1434U;
	int64_t x87 = 4332992020737LL;
	uint16_t x88 = 492U;

	t21 = (((x85%x86)^x87)/x88);

	if (t21 != 8806894352LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 8210U;
	uint32_t x90 = 125439U;
	static uint32_t x92 = 590300U;
	volatile int64_t t22 = 7078LL;

	t22 = (((x89%x90)^x91)/x92);

	if (t22 != -15624889101905LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	volatile int64_t t23 = -53838531922726LL;

	t23 = (((x93%x94)^x95)/x96);

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -4;
	uint64_t x98 = 42240628LLU;
	static volatile uint64_t t24 = 1696804301730804326LLU;

	t24 = (((x97%x98)^x99)/x100);

	if (t24 != 2147483648LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x101 = -1;
	uint16_t x102 = 61U;
	volatile int32_t t25 = 872386193;

	t25 = (((x101%x102)^x103)/x104);

	if (t25 != -206) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MAX;
	volatile uint32_t x106 = UINT32_MAX;
	int16_t x108 = INT16_MIN;
	int64_t t26 = 40616233333131LL;

	t26 = (((x105%x106)^x107)/x108);

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 9752758186LLU;
	static int64_t x110 = -1LL;
	static uint64_t x111 = UINT64_MAX;
	uint64_t x112 = 65805LLU;
	uint64_t t27 = 94246275298555LLU;

	t27 = (((x109%x110)^x111)/x112);

	if (t27 != 280324353224782LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = 164030562;
	volatile int32_t t28 = -21338;

	t28 = (((x113%x114)^x115)/x116);

	if (t28 != -118790) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -1;
	int64_t x118 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;
	static int64_t t29 = -39089302527360300LL;

	t29 = (((x117%x118)^x119)/x120);

	if (t29 != -71219LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	uint32_t x123 = 8009772U;
	volatile int64_t t30 = -1556937059LL;

	t30 = (((x121%x122)^x123)/x124);

	if (t30 != -266992LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	int32_t x128 = INT32_MAX;
	volatile uint64_t t31 = 107357778604988885LLU;

	t31 = (((x125%x126)^x127)/x128);

	if (t31 != 8589934595LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	volatile uint16_t x130 = 19706U;
	volatile uint8_t x131 = UINT8_MAX;
	int32_t x132 = -1;
	static uint64_t t32 = 52869801LLU;

	t32 = (((x129%x130)^x131)/x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	static int16_t x134 = INT16_MIN;
	uint64_t x136 = 33LLU;
	uint64_t t33 = 36938154066LLU;

	t33 = (((x133%x134)^x135)/x136);

	if (t33 != 558992244657865200LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	static int64_t x138 = -1LL;

	t34 = (((x137%x138)^x139)/x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x142 = -1;
	uint16_t x143 = 49U;
	int64_t t35 = 24580197343275458LL;

	t35 = (((x141%x142)^x143)/x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1303713872LL;
	int16_t x146 = INT16_MIN;
	volatile int8_t x148 = INT8_MIN;

	t36 = (((x145%x146)^x147)/x148);

	if (t36 != -48LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = -44668363282664580LL;
	static volatile int64_t x151 = -1LL;
	int16_t x152 = INT16_MIN;
	volatile int64_t t37 = -1739730791130493088LL;

	t37 = (((x149%x150)^x151)/x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	uint8_t x154 = 113U;
	static int16_t x155 = -1;
	static volatile int32_t t38 = -15362;

	t38 = (((x153%x154)^x155)/x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 215880U;
	uint32_t x158 = 76876U;
	int16_t x159 = -3001;
	int32_t x160 = -1;
	uint32_t t39 = 0U;

	t39 = (((x157%x158)^x159)/x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	static volatile uint16_t x162 = 3U;
	static uint16_t x163 = 538U;
	uint32_t t40 = 56363756U;

	t40 = (((x161%x162)^x163)/x164);

	if (t40 != 528481U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x166 = INT16_MAX;
	volatile uint64_t x168 = 8354321LLU;

	t41 = (((x165%x166)^x167)/x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 0;
	uint32_t x170 = 139U;

	t42 = (((x169%x170)^x171)/x172);

	if (t42 != 24001236LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -2LL;
	volatile uint16_t x174 = 1U;
	uint32_t x175 = UINT32_MAX;

	t43 = (((x173%x174)^x175)/x176);

	if (t43 != -4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	int16_t x179 = 350;
	uint32_t x180 = UINT32_MAX;
	static uint32_t t44 = 6920U;

	t44 = (((x177%x178)^x179)/x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -1;
	int64_t x186 = INT64_MIN;
	int64_t x188 = 7740LL;
	volatile int64_t t45 = 4157907LL;

	t45 = (((x185%x186)^x187)/x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	volatile int8_t x192 = -1;
	volatile int32_t t46 = -63015;

	t46 = (((x189%x190)^x191)/x192);

	if (t46 != 32513) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = -1LL;
	int8_t x194 = INT8_MAX;
	int8_t x195 = 4;
	volatile int8_t x196 = INT8_MIN;
	int64_t t47 = -9012711296LL;

	t47 = (((x193%x194)^x195)/x196);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x199 = 1U;
	int32_t x200 = INT32_MAX;
	uint64_t t48 = 250LLU;

	t48 = (((x197%x198)^x199)/x200);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	static int16_t x203 = INT16_MIN;
	static uint16_t x204 = UINT16_MAX;
	static volatile int64_t t49 = -3791623533272722303LL;

	t49 = (((x201%x202)^x203)/x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = INT32_MAX;
	volatile int64_t x206 = 27LL;
	uint8_t x207 = 105U;
	int64_t t50 = -87438LL;

	t50 = (((x205%x206)^x207)/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -1;
	volatile int16_t x210 = INT16_MAX;
	volatile uint8_t x211 = 13U;
	int16_t x212 = -1;
	volatile int32_t t51 = 162157643;

	t51 = (((x209%x210)^x211)/x212);

	if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	static volatile uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MIN;
	static volatile int32_t t52 = 20565246;

	t52 = (((x213%x214)^x215)/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -2438;
	volatile int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MAX;
	uint16_t x224 = 12U;
	int32_t t53 = -1;

	t53 = (((x221%x222)^x223)/x224);

	if (t53 != -212) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x225 = 0U;
	uint8_t x226 = 41U;
	uint64_t x227 = UINT64_MAX;
	static uint16_t x228 = UINT16_MAX;
	static volatile uint64_t t54 = 76LLU;

	t54 = (((x225%x226)^x227)/x228);

	if (t54 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MAX;
	volatile int8_t x232 = INT8_MIN;

	t55 = (((x229%x230)^x231)/x232);

	if (t55 != -16777215) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x233 = 148642485851271LLU;
	uint16_t x234 = 14991U;
	static volatile int16_t x236 = INT16_MAX;
	uint64_t t56 = 103851819449LLU;

	t56 = (((x233%x234)^x235)/x236);

	if (t56 != 562967133749262LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x238 = 11;
	int16_t x239 = 58;
	static volatile int32_t t57 = 448;

	t57 = (((x237%x238)^x239)/x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MAX;
	static int64_t x242 = -1LL;
	static volatile int8_t x244 = INT8_MAX;
	static int64_t t58 = -356508009457958LL;

	t58 = (((x241%x242)^x243)/x244);

	if (t58 != 3LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x245 = 498U;
	static volatile uint64_t x246 = 1699744519386071LLU;
	int8_t x248 = INT8_MIN;

	t59 = (((x245%x246)^x247)/x248);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	static int64_t x251 = INT64_MIN;
	int64_t x252 = -51858878LL;
	int64_t t60 = -2097640928353LL;

	t60 = (((x249%x250)^x251)/x252);

	if (t60 != 177855217709LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x253 = UINT16_MAX;
	int32_t x254 = 1031360;
	volatile int16_t x255 = 528;
	int32_t t61 = -42595;

	t61 = (((x253%x254)^x255)/x256);

	if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MAX;
	uint32_t x258 = 28206U;
	static int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MIN;

	t62 = (((x257%x258)^x259)/x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x262 = 907479376604599LLU;
	uint16_t x263 = UINT16_MAX;
	uint64_t x264 = 233123526296LLU;

	t63 = (((x261%x262)^x263)/x264);

	if (t63 != 1762LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = 36;
	uint8_t x266 = 5U;

	t64 = (((x265%x266)^x267)/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x269 = -1196537;
	uint32_t x270 = UINT32_MAX;
	static uint16_t x272 = UINT16_MAX;
	volatile uint64_t t65 = 1847565561919156LLU;

	t65 = (((x269%x270)^x271)/x272);

	if (t65 != 65518LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x273 = -3;
	uint8_t x274 = 1U;

	t66 = (((x273%x274)^x275)/x276);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = -3686;
	int8_t x278 = -1;
	int8_t x279 = INT8_MIN;
	int64_t t67 = 16629LL;

	t67 = (((x277%x278)^x279)/x280);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x287 = INT64_MAX;
	static int32_t x288 = INT32_MIN;
	int64_t t68 = 367576294LL;

	t68 = (((x285%x286)^x287)/x288);

	if (t68 != -4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = UINT16_MAX;
	volatile int32_t x290 = -1;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = UINT16_MAX;

	t69 = (((x289%x290)^x291)/x292);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x294 = 80LLU;
	int64_t x296 = -3134LL;
	volatile uint64_t t70 = 14748688722LLU;

	t70 = (((x293%x294)^x295)/x296);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x297 = UINT8_MAX;
	static int64_t x298 = INT64_MIN;
	static int32_t x299 = INT32_MIN;
	static int8_t x300 = -25;

	t71 = (((x297%x298)^x299)/x300);

	if (t71 != 85899335LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x302 = INT32_MIN;
	volatile uint64_t t72 = 3940088539286LLU;

	t72 = (((x301%x302)^x303)/x304);

	if (t72 != 8559815165244LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = 7U;
	int16_t x307 = -317;
	int64_t x308 = 20916LL;
	int64_t t73 = 114595295109790LL;

	t73 = (((x305%x306)^x307)/x308);

	if (t73 != 205343LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MIN;
	uint8_t x311 = 38U;
	int32_t x312 = -26625310;
	int64_t t74 = -48690103262LL;

	t74 = (((x309%x310)^x311)/x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x314 = 330U;
	uint16_t x315 = 11U;
	int32_t x316 = INT32_MIN;
	int64_t t75 = -299LL;

	t75 = (((x313%x314)^x315)/x316);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MAX;
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = -1;
	int64_t t76 = 166132888724745LL;

	t76 = (((x321%x322)^x323)/x324);

	if (t76 != 249LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = UINT32_MAX;
	uint8_t x326 = 4U;
	int8_t x327 = 0;
	uint16_t x328 = 1290U;
	static uint32_t t77 = 11U;

	t77 = (((x325%x326)^x327)/x328);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x329 = INT16_MAX;
	int32_t x330 = -1;
	uint32_t x331 = 3693U;
	static uint8_t x332 = 36U;
	static uint32_t t78 = 5018U;

	t78 = (((x329%x330)^x331)/x332);

	if (t78 != 102U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x333 = 1844493654U;
	volatile int8_t x334 = 1;
	int8_t x335 = -1;
	static uint32_t t79 = 25046401U;

	t79 = (((x333%x334)^x335)/x336);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = 1372U;
	uint8_t x338 = 24U;
	volatile int32_t x339 = 9;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t80 = 20U;

	t80 = (((x337%x338)^x339)/x340);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x341 = 11438216596984LLU;
	int8_t x342 = -2;
	int8_t x344 = 26;
	uint64_t t81 = 24531958495234LLU;

	t81 = (((x341%x342)^x343)/x344);

	if (t81 != 439958719429LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MIN;
	uint64_t x346 = 945653LLU;
	int8_t x347 = -1;
	int64_t x348 = INT64_MIN;

	t82 = (((x345%x346)^x347)/x348);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MAX;
	int32_t t83 = -307;

	t83 = (((x349%x350)^x351)/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x354 = 8841U;
	static volatile int8_t x355 = INT8_MAX;
	volatile int8_t x356 = INT8_MAX;

	t84 = (((x353%x354)^x355)/x356);

	if (t84 != 25U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x357 = 37603759377987409LLU;
	int32_t x358 = -1;
	volatile int8_t x359 = INT8_MIN;
	static int32_t x360 = 2088763;
	static uint64_t t85 = 2265837922991LLU;

	t85 = (((x357%x358)^x359)/x360);

	if (t85 != 8813417469732LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;
	int64_t t86 = 1144069291710985209LL;

	t86 = (((x361%x362)^x363)/x364);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x365 = 69;
	int8_t x366 = INT8_MIN;
	static volatile int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t87 = -3058;

	t87 = (((x365%x366)^x367)/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = 24U;
	volatile uint32_t x370 = 5U;
	static int16_t x372 = -3;
	static uint32_t t88 = 25813U;

	t88 = (((x369%x370)^x371)/x372);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MAX;
	uint16_t x375 = 13U;
	int32_t t89 = 407011;

	t89 = (((x373%x374)^x375)/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MAX;
	int8_t x378 = 3;
	volatile uint8_t x379 = 39U;
	volatile uint64_t x380 = UINT64_MAX;
	volatile uint64_t t90 = 14265LLU;

	t90 = (((x377%x378)^x379)/x380);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = INT64_MAX;
	volatile uint8_t x382 = 101U;
	static uint64_t x383 = UINT64_MAX;
	volatile int16_t x384 = 35;

	t91 = (((x381%x382)^x383)/x384);

	if (t91 != 527049830677415757LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x386 = INT16_MIN;
	volatile int32_t x387 = INT32_MIN;
	int8_t x388 = -11;
	int32_t t92 = 102;

	t92 = (((x385%x386)^x387)/x388);

	if (t92 != 195225786) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MAX;
	int64_t x392 = INT64_MIN;
	uint64_t t93 = 342656096696749LLU;

	t93 = (((x389%x390)^x391)/x392);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x393 = INT64_MIN;
	volatile uint8_t x394 = 27U;
	int8_t x395 = INT8_MIN;
	static int64_t x396 = INT64_MIN;
	int64_t t94 = 1LL;

	t94 = (((x393%x394)^x395)/x396);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x397 = -3LL;
	static int32_t x398 = INT32_MIN;
	uint32_t x400 = UINT32_MAX;
	uint64_t t95 = 423908265771541269LLU;

	t95 = (((x397%x398)^x399)/x400);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;
	int32_t t96 = -404333489;

	t96 = (((x401%x402)^x403)/x404);

	if (t96 != 256) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x405 = 0U;
	int16_t x406 = 2662;
	volatile uint8_t x407 = UINT8_MAX;
	uint8_t x408 = UINT8_MAX;
	static int32_t t97 = -9;

	t97 = (((x405%x406)^x407)/x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x409 = INT16_MIN;
	uint32_t x412 = UINT32_MAX;
	static volatile uint64_t t98 = 822783761260713LLU;

	t98 = (((x409%x410)^x411)/x412);

	if (t98 != 4294967296LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = -59934LL;
	int32_t x414 = INT32_MIN;
	uint64_t x415 = 1008399LLU;
	int64_t x416 = INT64_MAX;

	t99 = (((x413%x414)^x415)/x416);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

