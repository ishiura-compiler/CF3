#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 100968581;
volatile int32_t t1 = -2473;
int64_t x10 = 2LL;
int16_t x21 = -1;
int8_t x26 = INT8_MIN;
int64_t x28 = -14LL;
int8_t x29 = INT8_MAX;
static uint16_t x30 = UINT16_MAX;
volatile int32_t x36 = 82437;
volatile int64_t x44 = -1LL;
uint8_t x46 = 95U;
volatile uint32_t x47 = UINT32_MAX;
uint64_t x53 = UINT64_MAX;
static int8_t x60 = 26;
uint16_t x71 = UINT16_MAX;
volatile uint64_t x76 = 88411752LLU;
volatile int32_t t18 = -94632199;
static int64_t x85 = -913486181949332104LL;
volatile int64_t x87 = INT64_MIN;
static uint8_t x88 = UINT8_MAX;
static volatile int32_t t22 = 460;
static int32_t t23 = -43;
static int64_t x98 = INT64_MIN;
volatile int32_t x99 = INT32_MIN;
volatile int32_t t24 = 413;
uint16_t x104 = 23452U;
static volatile int16_t x107 = -106;
int8_t x109 = INT8_MAX;
uint32_t x116 = 616993U;
int32_t t28 = -1;
int8_t x120 = 15;
int16_t x121 = -1;
static volatile int32_t t32 = 1;
uint8_t x134 = 99U;
volatile int32_t t34 = -770765;
int16_t x143 = -2;
static volatile int32_t t35 = 21862;
int16_t x145 = INT16_MAX;
int32_t t37 = -20;
static uint16_t x168 = UINT16_MAX;
int16_t x173 = -3;
int32_t t43 = 603570;
int32_t x178 = INT32_MIN;
int32_t x183 = INT32_MIN;
int32_t t46 = -417659;
int64_t x190 = INT64_MIN;
int16_t x193 = INT16_MIN;
uint8_t x195 = 0U;
static volatile int32_t t49 = 471201809;
uint64_t x202 = 3176636333233130692LLU;
int16_t x203 = INT16_MAX;
uint64_t x204 = UINT64_MAX;
int16_t x211 = 7;
int32_t t52 = -107131;
int32_t x216 = -70116993;
int64_t x223 = INT64_MAX;
uint16_t x231 = 124U;
static volatile int64_t x241 = INT64_MIN;
volatile uint64_t x249 = 10650341853739006LLU;
volatile uint32_t x260 = 17505350U;
volatile uint16_t x262 = 3U;
volatile int64_t x265 = 1LL;
int32_t t66 = 1742858;
int32_t t68 = -50781;
volatile int32_t t69 = -48868937;
static volatile int32_t t70 = -34401564;
static int8_t x286 = 1;
volatile int32_t t71 = 1;
volatile int32_t x292 = -1;
static volatile int32_t t72 = -272036133;
static volatile int16_t x301 = -1;
int16_t x303 = -1;
uint8_t x304 = 58U;
int32_t t75 = 28;
int16_t x308 = -1;
static int32_t x309 = 147;
int8_t x312 = -1;
int64_t x315 = INT64_MAX;
volatile int8_t x318 = INT8_MIN;
volatile uint64_t x319 = 15103757703442568LLU;
int32_t x321 = INT32_MIN;
uint8_t x322 = 1U;
int8_t x323 = 3;
int32_t x324 = -113;
volatile int32_t x326 = INT32_MIN;
volatile int16_t x335 = 381;
volatile int32_t t85 = -570974361;
int16_t x347 = INT16_MAX;
static int16_t x348 = INT16_MIN;
int16_t x349 = 16;
static int32_t x356 = 30568;
uint16_t x358 = 1853U;
int64_t x362 = -84LL;
static uint8_t x364 = 18U;
int32_t t92 = 11402;
static int16_t x375 = 4;
int16_t x384 = INT16_MIN;
volatile uint64_t x388 = UINT64_MAX;
int16_t x389 = 3186;
int32_t t97 = -52;
volatile uint8_t x393 = 4U;
uint8_t x395 = 37U;
int32_t t99 = 831942100;


void f0(void) {
	volatile uint8_t x1 = 19U;
	uint32_t x2 = UINT32_MAX;
	int32_t x3 = INT32_MAX;
	int8_t x4 = -1;

	t0 = (((x1<=x2)==x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 1223LL;
	int64_t x6 = INT64_MAX;
	int32_t x7 = INT32_MAX;
	int32_t x8 = -734066158;

	t1 = (((x5<=x6)==x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x11 = 89U;
	int8_t x12 = 1;
	volatile int32_t t2 = -42133;

	t2 = (((x9<=x10)==x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MAX;
	int64_t x15 = INT64_MAX;
	int32_t x16 = -1;
	int32_t t3 = -37883485;

	t3 = (((x13<=x14)==x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint8_t x18 = 98U;
	uint8_t x19 = 0U;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 357654;

	t4 = (((x17<=x18)==x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	int8_t x23 = -3;
	int32_t x24 = 11;
	volatile int32_t t5 = -380;

	t5 = (((x21<=x22)==x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 6U;
	uint8_t x27 = 0U;
	static volatile int32_t t6 = 1;

	t6 = (((x25<=x26)==x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x31 = 180U;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 712486;

	t7 = (((x29<=x30)==x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = 0;
	int8_t x35 = 44;
	volatile int32_t t8 = 109891062;

	t8 = (((x33<=x34)==x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x38 = INT32_MIN;
	int64_t x39 = -11772001622800452LL;
	int8_t x40 = 26;
	volatile int32_t t9 = -1431333;

	t9 = (((x37<=x38)==x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 4582373659716182LLU;
	static uint16_t x42 = 1U;
	int8_t x43 = -1;
	volatile int32_t t10 = -561;

	t10 = (((x41<=x42)==x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = 64U;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = 262367416;

	t11 = (((x45<=x46)==x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int8_t x50 = -1;
	static int8_t x51 = -1;
	volatile int16_t x52 = -1;
	int32_t t12 = -344;

	t12 = (((x49<=x50)==x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = 396225LL;
	int8_t x55 = INT8_MIN;
	int16_t x56 = -1;
	int32_t t13 = 397315656;

	t13 = (((x53<=x54)==x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 2574474LLU;
	int64_t x58 = -364744031785881LL;
	int16_t x59 = 1;
	static int32_t t14 = -114811;

	t14 = (((x57<=x58)==x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -998990;
	static int8_t x62 = INT8_MAX;
	volatile int16_t x63 = 5450;
	int64_t x64 = 11568617301708066LL;
	int32_t t15 = 329373;

	t15 = (((x61<=x62)==x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static int64_t x66 = INT64_MAX;
	int8_t x67 = -1;
	int32_t x68 = INT32_MAX;
	static volatile int32_t t16 = -36592;

	t16 = (((x65<=x66)==x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	int32_t x72 = INT32_MAX;
	static int32_t t17 = -32;

	t17 = (((x69<=x70)==x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 11427U;
	int32_t x74 = -414133;
	uint32_t x75 = 328U;

	t18 = (((x73<=x74)==x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -44;
	volatile int64_t x78 = -1LL;
	uint8_t x79 = 37U;
	volatile uint8_t x80 = 12U;
	int32_t t19 = 27139;

	t19 = (((x77<=x78)==x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	static volatile uint8_t x82 = 13U;
	int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 42;

	t20 = (((x81<=x82)==x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = 85013009524855179LLU;
	static volatile int32_t t21 = 265357217;

	t21 = (((x85<=x86)==x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 6U;
	int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MAX;
	int16_t x92 = -1;

	t22 = (((x89<=x90)==x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int16_t x94 = 205;
	static int32_t x95 = 34790381;
	int64_t x96 = 573LL;

	t23 = (((x93<=x94)==x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MAX;
	uint16_t x100 = 0U;

	t24 = (((x97<=x98)==x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	static int8_t x102 = -5;
	static volatile int32_t x103 = INT32_MIN;
	static volatile int32_t t25 = 13769635;

	t25 = (((x101<=x102)==x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	static uint8_t x106 = 0U;
	int8_t x108 = -1;
	volatile int32_t t26 = -3;

	t26 = (((x105<=x106)==x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = 25;
	int8_t x111 = -1;
	int8_t x112 = -1;
	volatile int32_t t27 = -2;

	t27 = (((x109<=x110)==x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -1;
	static int8_t x114 = 8;
	static uint32_t x115 = 7035615U;

	t28 = (((x113<=x114)==x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 12837U;
	static int64_t x118 = INT64_MIN;
	uint16_t x119 = UINT16_MAX;
	int32_t t29 = -3019956;

	t29 = (((x117<=x118)==x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = -1;
	int64_t x123 = 332325164136733LL;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t30 = -471134;

	t30 = (((x121<=x122)==x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = INT16_MIN;
	int8_t x127 = -23;
	int16_t x128 = -1;
	volatile int32_t t31 = -624959759;

	t31 = (((x125<=x126)==x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1303;
	uint64_t x130 = 1778279LLU;
	static uint32_t x131 = 392984461U;
	int64_t x132 = -1LL;

	t32 = (((x129<=x130)==x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 70228528856989LLU;
	int16_t x135 = 3;
	int16_t x136 = 571;
	int32_t t33 = -61082730;

	t33 = (((x133<=x134)==x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 75781961613976528LLU;
	int32_t x139 = INT32_MIN;
	int16_t x140 = -809;

	t34 = (((x137<=x138)==x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 0;
	static uint16_t x142 = UINT16_MAX;
	int32_t x144 = INT32_MIN;

	t35 = (((x141<=x142)==x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x146 = -1LL;
	int32_t x147 = -1;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 461;

	t36 = (((x145<=x146)==x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MAX;
	int8_t x150 = -1;
	uint8_t x151 = UINT8_MAX;
	static int8_t x152 = -24;

	t37 = (((x149<=x150)==x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	static int16_t x154 = 3162;
	int64_t x155 = -1LL;
	static int32_t x156 = INT32_MAX;
	static volatile int32_t t38 = -107;

	t38 = (((x153<=x154)==x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1499524LL;
	uint16_t x158 = UINT16_MAX;
	static uint16_t x159 = 1442U;
	uint16_t x160 = 86U;
	volatile int32_t t39 = 32252309;

	t39 = (((x157<=x158)==x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	volatile int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MAX;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = -19550;

	t40 = (((x161<=x162)==x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -5;
	int64_t x166 = 1LL;
	int8_t x167 = 0;
	int32_t t41 = 283781;

	t41 = (((x165<=x166)==x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 945;
	int16_t x170 = INT16_MIN;
	uint8_t x171 = UINT8_MAX;
	static int32_t x172 = 1876;
	static volatile int32_t t42 = 29;

	t42 = (((x169<=x170)==x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MAX;
	static volatile int16_t x175 = -1;
	static uint8_t x176 = 16U;

	t43 = (((x173<=x174)==x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	int8_t x179 = INT8_MIN;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 108;

	t44 = (((x177<=x178)==x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	static int8_t x182 = INT8_MIN;
	uint64_t x184 = 2955349055930296391LLU;
	int32_t t45 = -897;

	t45 = (((x181<=x182)==x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	volatile int8_t x186 = INT8_MAX;
	uint16_t x187 = 768U;
	static int32_t x188 = INT32_MIN;

	t46 = (((x185<=x186)==x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = 3906U;
	uint32_t x191 = UINT32_MAX;
	static int16_t x192 = -1;
	int32_t t47 = -10;

	t47 = (((x189<=x190)==x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MAX;
	int16_t x196 = 6237;
	volatile int32_t t48 = -4;

	t48 = (((x193<=x194)==x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -82209;
	int32_t x198 = INT32_MIN;
	volatile uint32_t x199 = UINT32_MAX;
	int64_t x200 = -96121080843LL;

	t49 = (((x197<=x198)==x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = INT64_MIN;
	int32_t t50 = -68526;

	t50 = (((x201<=x202)==x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MAX;
	int16_t x206 = -1;
	int16_t x207 = 1;
	volatile uint32_t x208 = 12U;
	static int32_t t51 = 440514378;

	t51 = (((x205<=x206)==x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -14980;
	int16_t x210 = -1;
	uint16_t x212 = 1U;

	t52 = (((x209<=x210)==x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	volatile int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	int32_t t53 = -28;

	t53 = (((x213<=x214)==x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	static int8_t x218 = -4;
	int8_t x219 = INT8_MAX;
	uint64_t x220 = 87084981890455891LLU;
	static int32_t t54 = 620822691;

	t54 = (((x217<=x218)==x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -11;
	volatile int16_t x222 = INT16_MIN;
	static uint32_t x224 = 3U;
	int32_t t55 = 117202;

	t55 = (((x221<=x222)==x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MAX;
	int16_t x227 = -8;
	int16_t x228 = -386;
	int32_t t56 = -1914656;

	t56 = (((x225<=x226)==x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = 31LLU;
	uint8_t x230 = 13U;
	uint32_t x232 = 2415U;
	int32_t t57 = 155;

	t57 = (((x229<=x230)==x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	uint8_t x234 = 0U;
	uint64_t x235 = 5270811812743834LLU;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 27775;

	t58 = (((x233<=x234)==x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = 833119;
	volatile uint64_t x239 = 58196717588741674LLU;
	static int64_t x240 = INT64_MIN;
	static volatile int32_t t59 = 257623322;

	t59 = (((x237<=x238)==x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	volatile int16_t x244 = INT16_MAX;
	volatile int32_t t60 = -198534720;

	t60 = (((x241<=x242)==x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	static uint32_t x246 = 2971329U;
	uint8_t x247 = 4U;
	static int16_t x248 = INT16_MIN;
	int32_t t61 = -225561;

	t61 = (((x245<=x246)==x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = 18;
	static int32_t x251 = -15;
	static int64_t x252 = INT64_MIN;
	int32_t t62 = 33798343;

	t62 = (((x249<=x250)==x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = 2122003334215LLU;
	int16_t x254 = INT16_MIN;
	volatile int16_t x255 = -1;
	int16_t x256 = -1;
	volatile int32_t t63 = -52;

	t63 = (((x253<=x254)==x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -6900101;
	int32_t x258 = 1049823331;
	int16_t x259 = -49;
	int32_t t64 = 96;

	t64 = (((x257<=x258)==x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int32_t x263 = INT32_MAX;
	volatile uint8_t x264 = 3U;
	int32_t t65 = -1628792;

	t65 = (((x261<=x262)==x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x266 = 5758U;
	int32_t x267 = 136916;
	static int8_t x268 = -3;

	t66 = (((x265<=x266)==x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x269 = -18025845;
	static uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MIN;
	static volatile int32_t t67 = 2043;

	t67 = (((x269<=x270)==x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 800163577106852898LLU;
	static uint32_t x274 = UINT32_MAX;
	static int16_t x275 = -24;
	int16_t x276 = INT16_MAX;

	t68 = (((x273<=x274)==x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int8_t x278 = -1;
	int16_t x279 = INT16_MIN;
	volatile int8_t x280 = INT8_MIN;

	t69 = (((x277<=x278)==x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 1U;
	static uint32_t x282 = 85924078U;
	int8_t x283 = -1;
	volatile uint64_t x284 = 54581LLU;

	t70 = (((x281<=x282)==x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x285 = 223420913U;
	int16_t x287 = -1;
	uint8_t x288 = UINT8_MAX;

	t71 = (((x285<=x286)==x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 3649083169879847LL;
	volatile int32_t x290 = 79360;
	volatile uint8_t x291 = UINT8_MAX;

	t72 = (((x289<=x290)==x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	static uint8_t x294 = 15U;
	int64_t x295 = -2903242209193524LL;
	static volatile int16_t x296 = 1013;
	volatile int32_t t73 = -87799;

	t73 = (((x293<=x294)==x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = -1702;

	t74 = (((x297<=x298)==x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x302 = -1LL;

	t75 = (((x301<=x302)==x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = 45;
	int64_t x306 = -863340460453447LL;
	volatile uint8_t x307 = UINT8_MAX;
	int32_t t76 = -45;

	t76 = (((x305<=x306)==x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = 28064538LLU;
	uint32_t x311 = 1145U;
	volatile int32_t t77 = -14;

	t77 = (((x309<=x310)==x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = -1LL;
	uint64_t x314 = 8107607270973471LLU;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 571;

	t78 = (((x313<=x314)==x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	static int16_t x320 = INT16_MIN;
	int32_t t79 = 0;

	t79 = (((x317<=x318)==x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t t80 = -1;

	t80 = (((x321<=x322)==x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = -1;
	volatile int32_t t81 = 1;

	t81 = (((x325<=x326)==x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = UINT64_MAX;
	int64_t x330 = -1LL;
	int64_t x331 = -1LL;
	int8_t x332 = -1;
	int32_t t82 = -132120;

	t82 = (((x329<=x330)==x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	int16_t x334 = -2;
	int64_t x336 = INT64_MIN;
	static int32_t t83 = 47333;

	t83 = (((x333<=x334)==x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 814U;
	int64_t x338 = -1LL;
	volatile int64_t x339 = -1LL;
	static uint32_t x340 = 181U;
	volatile int32_t t84 = 444664262;

	t84 = (((x337<=x338)==x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = INT8_MIN;
	uint16_t x342 = UINT16_MAX;
	static int32_t x343 = -1;
	volatile int64_t x344 = INT64_MAX;

	t85 = (((x341<=x342)==x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	uint64_t x346 = UINT64_MAX;
	volatile int32_t t86 = -720416;

	t86 = (((x345<=x346)==x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = 6835375573LLU;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 2U;
	int32_t t87 = -15617;

	t87 = (((x349<=x350)==x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	uint16_t x354 = UINT16_MAX;
	int32_t x355 = -2844379;
	volatile int32_t t88 = -1761497;

	t88 = (((x353<=x354)==x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x357 = 1U;
	int32_t x359 = 4023;
	int16_t x360 = -3397;
	volatile int32_t t89 = -31210256;

	t89 = (((x357<=x358)==x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	uint32_t x363 = UINT32_MAX;
	static int32_t t90 = 39541877;

	t90 = (((x361<=x362)==x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint16_t x366 = UINT16_MAX;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t91 = 26875401;

	t91 = (((x365<=x366)==x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	static volatile int64_t x370 = -30LL;
	int32_t x371 = 3181;
	static int64_t x372 = -1LL;

	t92 = (((x369<=x370)==x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	uint64_t x374 = UINT64_MAX;
	static volatile int32_t x376 = 34734;
	int32_t t93 = 3353;

	t93 = (((x373<=x374)==x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	static uint64_t x378 = 3140650575412305LLU;
	volatile uint16_t x379 = UINT16_MAX;
	uint64_t x380 = 316283613LLU;
	int32_t t94 = 10624;

	t94 = (((x377<=x378)==x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -8;
	int64_t x382 = INT64_MIN;
	volatile int16_t x383 = INT16_MIN;
	static volatile int32_t t95 = -7929;

	t95 = (((x381<=x382)==x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x385 = 343U;
	static int8_t x386 = 0;
	int8_t x387 = 26;
	int32_t t96 = 417991546;

	t96 = (((x385<=x386)==x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x390 = 642U;
	static int16_t x391 = INT16_MIN;
	int8_t x392 = 1;

	t97 = (((x389<=x390)==x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = 215U;
	uint16_t x396 = UINT16_MAX;
	int32_t t98 = 425122;

	t98 = (((x393<=x394)==x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = -1;
	volatile uint16_t x399 = 612U;
	int16_t x400 = 2;

	t99 = (((x397<=x398)==x399)<=x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

