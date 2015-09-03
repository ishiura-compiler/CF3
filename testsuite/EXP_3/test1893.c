#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -14;
volatile uint32_t x10 = 62145134U;
volatile int8_t x21 = 1;
uint8_t x23 = 3U;
int64_t x24 = INT64_MIN;
static int16_t x27 = -1;
uint32_t x28 = 30U;
static volatile int32_t t5 = -670;
int16_t x33 = -1;
int64_t x44 = INT64_MIN;
int64_t x52 = -6887LL;
static int32_t t10 = 0;
int8_t x62 = INT8_MIN;
int32_t x64 = -73859;
volatile int32_t x72 = INT32_MAX;
volatile int32_t t14 = 11;
int8_t x75 = INT8_MIN;
int32_t t15 = 79634865;
int32_t x88 = -1;
static volatile uint64_t x95 = 2156836953LLU;
int32_t x99 = -430;
int16_t x101 = -1;
volatile int16_t x115 = INT16_MIN;
uint32_t x123 = UINT32_MAX;
int16_t x125 = INT16_MIN;
int32_t x126 = 1047;
int32_t x127 = INT32_MIN;
int32_t x131 = 1;
static int16_t x138 = -1;
volatile int32_t t31 = 65701123;
int8_t x149 = -12;
uint16_t x151 = 2049U;
uint16_t x153 = 13U;
int32_t t34 = -283;
uint64_t x168 = 335954343101LLU;
int16_t x174 = -1525;
volatile int32_t t38 = 523851645;
int16_t x177 = INT16_MAX;
uint16_t x188 = 97U;
int8_t x190 = INT8_MIN;
uint32_t x194 = 9U;
int16_t x199 = 775;
volatile uint16_t x205 = 0U;
static volatile uint64_t x212 = 449604506610LLU;
volatile int8_t x221 = INT8_MAX;
static int8_t x226 = INT8_MIN;
uint64_t x227 = 0LLU;
uint32_t x232 = UINT32_MAX;
int64_t x238 = -8LL;
static int8_t x252 = 4;
static int32_t t57 = -37241786;
int32_t x257 = -1;
static volatile int16_t x263 = INT16_MIN;
int64_t x267 = -1LL;
int64_t x287 = -1LL;
static uint8_t x288 = 0U;
static volatile uint32_t x305 = UINT32_MAX;
volatile uint16_t x314 = 48U;
int16_t x316 = 2;
volatile int32_t t69 = 27903;
int32_t t70 = 0;
volatile int8_t x331 = -17;
int64_t x332 = INT64_MAX;
static int32_t t73 = -723;
volatile int32_t x336 = -84428;
volatile uint8_t x337 = 2U;
int16_t x343 = 1;
volatile int32_t t76 = -117532;
static int16_t x353 = INT16_MIN;
uint32_t x355 = UINT32_MAX;
uint16_t x358 = 1U;
volatile int8_t x359 = INT8_MAX;
volatile int32_t t79 = 0;
uint64_t x370 = 4024823526518LLU;
volatile int32_t t80 = 13;
volatile int32_t t82 = -114594;
static uint32_t x382 = 27198U;
static int8_t x386 = -1;
volatile int16_t x388 = INT16_MIN;
int64_t x395 = 23493201LL;
volatile uint32_t x400 = 3508326U;
int32_t x401 = -3526880;
int32_t t88 = -1;
volatile int32_t x408 = -219775850;
static volatile uint8_t x414 = UINT8_MAX;
uint64_t x424 = 14937028949729LLU;
int8_t x435 = INT8_MAX;
int64_t x436 = INT64_MIN;
uint32_t x444 = 123382664U;
static int64_t x445 = -1LL;
uint16_t x458 = 31U;
int8_t x461 = -1;


void f0(void) {
	int16_t x2 = INT16_MAX;
	int32_t x3 = 7;
	static int32_t x4 = INT32_MIN;
	int32_t t0 = 2048377;

	t0 = ((x1*x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	static volatile int16_t x11 = 0;
	int8_t x12 = -1;
	static int32_t t1 = -99530592;

	t1 = ((x9*x10)==(x11|x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = 210;
	int16_t x14 = INT16_MIN;
	int8_t x15 = -7;
	volatile int64_t x16 = INT64_MIN;
	static int32_t t2 = 7193672;

	t2 = ((x13*x14)==(x15|x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x22 = 2LLU;
	volatile int32_t t3 = -7749936;

	t3 = ((x21*x22)==(x23|x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 76167521999LLU;
	int64_t x26 = 3510447361LL;
	volatile int32_t t4 = -99552;

	t4 = ((x25*x26)==(x27|x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x29 = UINT64_MAX;
	int16_t x30 = -2;
	static volatile uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MIN;

	t5 = ((x29*x30)==(x31|x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x34 = -61LL;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MIN;
	static int32_t t6 = -3;

	t6 = ((x33*x34)==(x35|x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = -1LL;
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = 14;
	uint32_t x40 = 33333602U;
	volatile int32_t t7 = 442822;

	t7 = ((x37*x38)==(x39|x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	uint16_t x42 = 9U;
	uint64_t x43 = UINT64_MAX;
	volatile int32_t t8 = -318990;

	t8 = ((x41*x42)==(x43|x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = 0;
	int8_t x46 = INT8_MIN;
	int16_t x47 = 2024;
	static uint64_t x48 = 110510167950LLU;
	static volatile int32_t t9 = 114335;

	t9 = ((x45*x46)==(x47|x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = -1LL;
	volatile int64_t x50 = 2986865810834205LL;
	int32_t x51 = INT32_MAX;

	t10 = ((x49*x50)==(x51|x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 224377U;
	int16_t x54 = 191;
	volatile int8_t x55 = INT8_MAX;
	int32_t x56 = INT32_MAX;
	static int32_t t11 = -177904;

	t11 = ((x53*x54)==(x55|x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = UINT32_MAX;
	uint64_t x63 = 171452821433LLU;
	volatile int32_t t12 = 455315014;

	t12 = ((x61*x62)==(x63|x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x65 = -1LL;
	uint64_t x66 = UINT64_MAX;
	volatile uint64_t x67 = UINT64_MAX;
	int16_t x68 = INT16_MAX;
	volatile int32_t t13 = 13061632;

	t13 = ((x65*x66)==(x67|x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -1LL;
	volatile int32_t x70 = -1;
	static uint64_t x71 = 55861819496255988LLU;

	t14 = ((x69*x70)==(x71|x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = 21;
	int8_t x74 = INT8_MIN;
	static volatile int8_t x76 = INT8_MIN;

	t15 = ((x73*x74)==(x75|x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = UINT32_MAX;
	volatile uint64_t x78 = 400021838443LLU;
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = INT16_MAX;
	int32_t t16 = -5;

	t16 = ((x77*x78)==(x79|x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	static uint16_t x82 = UINT16_MAX;
	int16_t x83 = 5;
	volatile int64_t x84 = INT64_MAX;
	int32_t t17 = 755361;

	t17 = ((x81*x82)==(x83|x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x85 = 1347811LLU;
	static uint8_t x86 = 21U;
	uint64_t x87 = 74LLU;
	int32_t t18 = -121126;

	t18 = ((x85*x86)==(x87|x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = INT32_MAX;
	volatile uint32_t x94 = UINT32_MAX;
	int32_t x96 = INT32_MAX;
	int32_t t19 = 604233;

	t19 = ((x93*x94)==(x95|x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x97 = UINT16_MAX;
	static uint16_t x98 = 15909U;
	uint32_t x100 = 123U;
	int32_t t20 = 980202946;

	t20 = ((x97*x98)==(x99|x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x102 = INT8_MAX;
	int64_t x103 = INT64_MAX;
	static int32_t x104 = INT32_MAX;
	static volatile int32_t t21 = -4693;

	t21 = ((x101*x102)==(x103|x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 7060U;
	int8_t x106 = INT8_MAX;
	uint64_t x107 = UINT64_MAX;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t22 = 0;

	t22 = ((x105*x106)==(x107|x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 0U;
	static uint8_t x110 = 38U;
	volatile uint8_t x111 = 0U;
	static uint8_t x112 = 2U;
	static volatile int32_t t23 = -3;

	t23 = ((x109*x110)==(x111|x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = -1;
	int8_t x116 = 39;
	volatile int32_t t24 = -253297665;

	t24 = ((x113*x114)==(x115|x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x117 = 6U;
	int16_t x118 = -1;
	volatile uint8_t x119 = 7U;
	int32_t x120 = INT32_MIN;
	int32_t t25 = -1803089;

	t25 = ((x117*x118)==(x119|x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = UINT32_MAX;
	uint64_t x122 = 32572362827353789LLU;
	static uint64_t x124 = UINT64_MAX;
	volatile int32_t t26 = 27712151;

	t26 = ((x121*x122)==(x123|x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x128 = INT8_MIN;
	int32_t t27 = -52338479;

	t27 = ((x125*x126)==(x127|x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 1;
	int32_t x130 = INT32_MIN;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t28 = 998216595;

	t28 = ((x129*x130)==(x131|x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MIN;
	static uint64_t x134 = 53045LLU;
	int16_t x135 = INT16_MIN;
	static int64_t x136 = -1613131126564LL;
	int32_t t29 = 1978;

	t29 = ((x133*x134)==(x135|x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	int32_t x140 = 53;
	volatile int32_t t30 = 82335;

	t30 = ((x137*x138)==(x139|x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x141 = -1;
	int16_t x142 = -1;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = 1;

	t31 = ((x141*x142)==(x143|x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x150 = UINT8_MAX;
	int32_t x152 = 16055693;
	int32_t t32 = 38;

	t32 = ((x149*x150)==(x151|x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x154 = 3415725U;
	int64_t x155 = INT64_MIN;
	int64_t x156 = -7LL;
	volatile int32_t t33 = 48146024;

	t33 = ((x153*x154)==(x155|x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = 0LL;
	static volatile int16_t x158 = -7;
	int32_t x159 = INT32_MIN;
	int32_t x160 = 8508;

	t34 = ((x157*x158)==(x159|x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = 7;
	volatile uint16_t x162 = 1U;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = INT8_MIN;
	static volatile int32_t t35 = -2241392;

	t35 = ((x161*x162)==(x163|x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -1;
	static uint16_t x166 = 1U;
	static int16_t x167 = -31;
	int32_t t36 = -499821007;

	t36 = ((x165*x166)==(x167|x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -1;
	volatile int16_t x170 = -1348;
	volatile uint32_t x171 = 3U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t37 = -43;

	t37 = ((x169*x170)==(x171|x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -1;
	int64_t x175 = INT64_MAX;
	volatile int16_t x176 = INT16_MAX;

	t38 = ((x173*x174)==(x175|x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x178 = 1;
	volatile int64_t x179 = 905421914LL;
	int64_t x180 = -1LL;
	static int32_t t39 = -1;

	t39 = ((x177*x178)==(x179|x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -55;
	int64_t x182 = -927LL;
	static uint16_t x183 = 30151U;
	int16_t x184 = -1;
	volatile int32_t t40 = -1;

	t40 = ((x181*x182)==(x183|x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = UINT8_MAX;
	static volatile uint8_t x186 = 82U;
	volatile int32_t x187 = INT32_MIN;
	int32_t t41 = -1;

	t41 = ((x185*x186)==(x187|x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 214579LLU;
	volatile uint8_t x191 = 82U;
	uint32_t x192 = UINT32_MAX;
	int32_t t42 = 7778183;

	t42 = ((x189*x190)==(x191|x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x195 = 326599263051LLU;
	int32_t x196 = 5904851;
	volatile int32_t t43 = 3;

	t43 = ((x193*x194)==(x195|x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = 58;
	int16_t x198 = INT16_MIN;
	int64_t x200 = -1LL;
	int32_t t44 = 5;

	t44 = ((x197*x198)==(x199|x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = 0;
	int32_t x202 = 16839933;
	int16_t x203 = INT16_MIN;
	static int8_t x204 = -44;
	volatile int32_t t45 = 24952;

	t45 = ((x201*x202)==(x203|x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x206 = INT64_MIN;
	volatile uint32_t x207 = 1732U;
	int8_t x208 = -59;
	static volatile int32_t t46 = -30;

	t46 = ((x205*x206)==(x207|x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int16_t x210 = INT16_MAX;
	volatile int64_t x211 = -1LL;
	volatile int32_t t47 = -13084394;

	t47 = ((x209*x210)==(x211|x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x213 = INT8_MIN;
	int16_t x214 = -16;
	volatile int16_t x215 = INT16_MIN;
	int16_t x216 = -1;
	static int32_t t48 = 11;

	t48 = ((x213*x214)==(x215|x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 24U;
	int8_t x218 = INT8_MIN;
	static int64_t x219 = 235428718108191LL;
	int8_t x220 = -1;
	int32_t t49 = -353025;

	t49 = ((x217*x218)==(x219|x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x222 = -1LL;
	static volatile int32_t x223 = -7991937;
	int8_t x224 = INT8_MIN;
	static int32_t t50 = 0;

	t50 = ((x221*x222)==(x223|x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x228 = INT16_MAX;
	int32_t t51 = -234786;

	t51 = ((x225*x226)==(x227|x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = -4065;
	volatile uint64_t x231 = UINT64_MAX;
	volatile int32_t t52 = 6;

	t52 = ((x229*x230)==(x231|x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x233 = -110537LL;
	int8_t x234 = 0;
	uint64_t x235 = 230624LLU;
	volatile int8_t x236 = INT8_MAX;
	int32_t t53 = 157536521;

	t53 = ((x233*x234)==(x235|x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x237 = UINT16_MAX;
	int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MIN;
	int32_t t54 = 903866;

	t54 = ((x237*x238)==(x239|x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x241 = UINT8_MAX;
	uint16_t x242 = 3641U;
	int64_t x243 = 136523456236LL;
	int64_t x244 = INT64_MIN;
	volatile int32_t t55 = -200;

	t55 = ((x241*x242)==(x243|x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x245 = UINT8_MAX;
	uint32_t x246 = 1U;
	int8_t x247 = -1;
	static uint8_t x248 = UINT8_MAX;
	volatile int32_t t56 = 0;

	t56 = ((x245*x246)==(x247|x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = UINT16_MAX;
	static volatile uint64_t x250 = 4158120202LLU;
	int16_t x251 = INT16_MIN;

	t57 = ((x249*x250)==(x251|x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x258 = -1;
	int32_t x259 = INT32_MIN;
	static int8_t x260 = 1;
	volatile int32_t t58 = -1;

	t58 = ((x257*x258)==(x259|x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x261 = 514440822LLU;
	volatile int16_t x262 = INT16_MAX;
	uint16_t x264 = 80U;
	int32_t t59 = -15;

	t59 = ((x261*x262)==(x263|x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = 1;
	volatile uint16_t x268 = UINT16_MAX;
	static volatile int32_t t60 = -13;

	t60 = ((x265*x266)==(x267|x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x269 = 15789;
	uint8_t x270 = 1U;
	volatile int32_t x271 = -1;
	uint32_t x272 = 37086221U;
	volatile int32_t t61 = 2747590;

	t61 = ((x269*x270)==(x271|x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x273 = -1;
	int16_t x274 = INT16_MIN;
	int8_t x275 = -1;
	static int8_t x276 = -1;
	int32_t t62 = 181018370;

	t62 = ((x273*x274)==(x275|x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MAX;
	int16_t x282 = -1;
	int8_t x283 = INT8_MIN;
	int64_t x284 = -1LL;
	volatile int32_t t63 = 674;

	t63 = ((x281*x282)==(x283|x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x285 = -1;
	static uint8_t x286 = 1U;
	volatile int32_t t64 = -5424;

	t64 = ((x285*x286)==(x287|x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -35475562825LL;
	static int8_t x290 = INT8_MIN;
	static uint8_t x291 = 1U;
	int8_t x292 = INT8_MAX;
	volatile int32_t t65 = -132144;

	t65 = ((x289*x290)==(x291|x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = 183728550347909LLU;
	volatile uint16_t x294 = 3U;
	int16_t x295 = INT16_MIN;
	static uint64_t x296 = UINT64_MAX;
	volatile int32_t t66 = 0;

	t66 = ((x293*x294)==(x295|x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x306 = 51145;
	int64_t x307 = 150693319689LL;
	int8_t x308 = -1;
	volatile int32_t t67 = -12270;

	t67 = ((x305*x306)==(x307|x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x309 = 2U;
	static uint64_t x310 = 29123101425691LLU;
	int8_t x311 = INT8_MIN;
	uint16_t x312 = UINT16_MAX;
	int32_t t68 = -500997;

	t68 = ((x309*x310)==(x311|x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x313 = 13014533LLU;
	volatile int16_t x315 = INT16_MAX;

	t69 = ((x313*x314)==(x315|x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x317 = INT16_MAX;
	static volatile int16_t x318 = INT16_MIN;
	uint16_t x319 = 1903U;
	int16_t x320 = -1693;

	t70 = ((x317*x318)==(x319|x320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x321 = -1LL;
	int64_t x322 = -1041333830476072LL;
	static uint8_t x323 = UINT8_MAX;
	int32_t x324 = -15844;
	int32_t t71 = 416;

	t71 = ((x321*x322)==(x323|x324));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x325 = UINT16_MAX;
	int16_t x326 = -1;
	static uint8_t x327 = 25U;
	volatile int8_t x328 = -1;
	int32_t t72 = 5;

	t72 = ((x325*x326)==(x327|x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x329 = INT32_MAX;
	uint32_t x330 = 11723957U;

	t73 = ((x329*x330)==(x331|x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x333 = INT64_MAX;
	int32_t x334 = -1;
	static int32_t x335 = INT32_MIN;
	int32_t t74 = 70481243;

	t74 = ((x333*x334)==(x335|x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x338 = 68U;
	uint64_t x339 = 651855LLU;
	volatile int64_t x340 = INT64_MAX;
	volatile int32_t t75 = 1;

	t75 = ((x337*x338)==(x339|x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = 0;
	uint8_t x342 = 5U;
	uint64_t x344 = 973089416188LLU;

	t76 = ((x341*x342)==(x343|x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x354 = 208U;
	int32_t x356 = -1;
	int32_t t77 = -63;

	t77 = ((x353*x354)==(x355|x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x357 = 647U;
	uint8_t x360 = 20U;
	volatile int32_t t78 = 1884;

	t78 = ((x357*x358)==(x359|x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = INT32_MAX;
	volatile uint8_t x366 = 0U;
	int32_t x367 = 59;
	uint64_t x368 = 75037254157958650LLU;

	t79 = ((x365*x366)==(x367|x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = INT16_MIN;
	static int64_t x371 = 21LL;
	uint16_t x372 = 12749U;

	t80 = ((x369*x370)==(x371|x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MAX;
	int64_t x374 = -23997153LL;
	int32_t x375 = INT32_MAX;
	int32_t x376 = INT32_MAX;
	volatile int32_t t81 = -456982;

	t81 = ((x373*x374)==(x375|x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x377 = 20405429U;
	uint16_t x378 = 1991U;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = 129997963LLU;

	t82 = ((x377*x378)==(x379|x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = INT8_MIN;
	int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MIN;
	volatile int32_t t83 = -224355527;

	t83 = ((x381*x382)==(x383|x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = -23206585095LL;
	static int16_t x387 = INT16_MAX;
	static int32_t t84 = 6947;

	t84 = ((x385*x386)==(x387|x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = -1;
	int16_t x390 = -1;
	int16_t x391 = -1;
	uint16_t x392 = 95U;
	static volatile int32_t t85 = 56899178;

	t85 = ((x389*x390)==(x391|x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x393 = 57244089878LLU;
	volatile int32_t x394 = 292138657;
	static volatile int32_t x396 = INT32_MIN;
	int32_t t86 = -274;

	t86 = ((x393*x394)==(x395|x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x397 = 73U;
	volatile int32_t x398 = -1;
	int64_t x399 = INT64_MIN;
	volatile int32_t t87 = -720899;

	t87 = ((x397*x398)==(x399|x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x402 = 24U;
	int64_t x403 = -1LL;
	int64_t x404 = -1LL;

	t88 = ((x401*x402)==(x403|x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = INT16_MIN;
	uint64_t x406 = 87667292718404LLU;
	int8_t x407 = -1;
	static int32_t t89 = 40421;

	t89 = ((x405*x406)==(x407|x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = -1;
	int32_t x415 = INT32_MIN;
	int64_t x416 = -13905LL;
	int32_t t90 = 257;

	t90 = ((x413*x414)==(x415|x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x421 = UINT64_MAX;
	static uint32_t x422 = UINT32_MAX;
	int64_t x423 = 2187LL;
	volatile int32_t t91 = 216013;

	t91 = ((x421*x422)==(x423|x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x429 = -50;
	int32_t x430 = -1;
	volatile int8_t x431 = INT8_MAX;
	int16_t x432 = INT16_MAX;
	static int32_t t92 = -488;

	t92 = ((x429*x430)==(x431|x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x433 = -1;
	int64_t x434 = -1LL;
	int32_t t93 = 24;

	t93 = ((x433*x434)==(x435|x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x441 = -1;
	int32_t x442 = INT32_MAX;
	static uint8_t x443 = UINT8_MAX;
	int32_t t94 = 21185;

	t94 = ((x441*x442)==(x443|x444));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x446 = -1;
	int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t95 = 5622710;

	t95 = ((x445*x446)==(x447|x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x453 = INT8_MIN;
	static volatile int16_t x454 = 0;
	volatile int64_t x455 = -1LL;
	int8_t x456 = 61;
	int32_t t96 = -135485;

	t96 = ((x453*x454)==(x455|x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x457 = INT16_MIN;
	uint16_t x459 = 825U;
	uint64_t x460 = UINT64_MAX;
	static int32_t t97 = 1206;

	t97 = ((x457*x458)==(x459|x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x462 = INT16_MIN;
	volatile uint64_t x463 = UINT64_MAX;
	int16_t x464 = 58;
	int32_t t98 = -64306739;

	t98 = ((x461*x462)==(x463|x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x469 = -1;
	uint16_t x470 = UINT16_MAX;
	volatile uint16_t x471 = 12U;
	static int32_t x472 = -1;
	volatile int32_t t99 = -51044887;

	t99 = ((x469*x470)==(x471|x472));

	if (t99 != 0) { NG(); } else { ; }
	
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

