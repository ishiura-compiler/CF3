#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
static int32_t x4 = -3488;
int64_t t0 = 127621224LL;
volatile int64_t x5 = INT64_MAX;
int32_t t3 = 3;
int64_t x21 = INT64_MIN;
volatile uint64_t x23 = 337548LLU;
uint64_t x24 = 8LLU;
uint64_t t5 = 2707910817133993599LLU;
volatile int32_t t8 = 133;
uint32_t x38 = 244U;
int32_t x40 = 718;
volatile uint32_t t9 = 179687U;
static int64_t x45 = INT64_MIN;
uint64_t t13 = 1390LLU;
volatile int32_t t17 = -671;
uint16_t x87 = 1U;
int64_t x90 = INT64_MIN;
static uint64_t t21 = 222282547LLU;
static int64_t x111 = -1LL;
uint64_t x112 = 1296253797356240LLU;
static volatile uint16_t x120 = 530U;
int16_t x127 = INT16_MIN;
static uint32_t x129 = 19046U;
int64_t x137 = INT64_MIN;
int8_t x138 = INT8_MAX;
uint64_t x140 = 65LLU;
volatile int64_t t29 = -202012LL;
uint8_t x158 = 59U;
uint64_t t33 = 274899LLU;
volatile int64_t t34 = 5561326521697889LL;
uint8_t x175 = UINT8_MAX;
static int32_t x177 = INT32_MIN;
int32_t x178 = -19;
int32_t x180 = 1480;
int32_t t36 = -217608056;
uint16_t x181 = 9U;
volatile int8_t x186 = INT8_MIN;
volatile int16_t x188 = -4;
static uint64_t x209 = 947771LLU;
int64_t x210 = -1LL;
uint8_t x221 = 2U;
uint32_t x230 = UINT32_MAX;
static int16_t x232 = -15549;
uint32_t x235 = UINT32_MAX;
int64_t t45 = -2792203701239757586LL;
static int16_t x250 = INT16_MIN;
static uint32_t x257 = UINT32_MAX;
uint64_t t50 = 497LLU;
uint64_t x277 = 525486191LLU;
static int8_t x278 = 2;
static volatile int64_t t55 = -15880433318LL;
static int16_t x316 = INT16_MIN;
volatile uint8_t x317 = 3U;
int32_t x337 = INT32_MIN;
static uint64_t t64 = 1174399879LLU;
volatile uint32_t x365 = 7U;
int32_t x366 = 434079544;
int16_t x367 = -4793;
static volatile uint64_t t65 = 3720781540LLU;
uint8_t x369 = 6U;
static volatile uint64_t x376 = UINT64_MAX;
uint32_t x380 = 13512388U;
static volatile int32_t x384 = INT32_MIN;
static int64_t t69 = 26732981LL;
int8_t x393 = INT8_MIN;
volatile int8_t x405 = INT8_MIN;
int32_t x407 = -366888;
uint64_t x411 = UINT64_MAX;
volatile int64_t x438 = -1LL;
volatile int64_t t78 = -9388LL;
int8_t x451 = -1;
int16_t x462 = INT16_MIN;
int64_t x466 = INT64_MAX;
volatile int64_t t84 = -5908522682888427LL;
static int32_t x469 = -6820804;
int16_t x471 = 7749;
uint32_t x472 = 529375022U;
int64_t x478 = 2372627LL;
int32_t x480 = INT32_MIN;
volatile int64_t t86 = 211LL;
int64_t x481 = -6473482728110486LL;
static int64_t x486 = -1LL;
volatile uint32_t x498 = 8U;
int64_t x500 = INT64_MAX;
static int64_t t90 = -52LL;
int8_t x504 = -9;
int8_t x505 = 17;
uint16_t x508 = 316U;
volatile uint16_t x512 = 2U;
static uint64_t t94 = 1192719LLU;
int8_t x520 = -6;
int64_t t95 = -57235LL;
static int64_t x524 = INT64_MIN;
uint32_t t99 = 867793017U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x3 = INT64_MIN;

	t0 = ((x1/x2)%(x3%x4));

	if (t0 != -2208LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = INT64_MIN;
	volatile int8_t x7 = INT8_MIN;
	int32_t x8 = 3;
	volatile int64_t t1 = -45554323093727LL;

	t1 = ((x5/x6)%(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = -1LL;
	int32_t x11 = 3;
	int16_t x12 = INT16_MIN;
	int64_t t2 = -2038964052623LL;

	t2 = ((x9/x10)%(x11%x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -114;
	volatile int16_t x14 = INT16_MIN;
	int32_t x15 = 1587;
	int32_t x16 = INT32_MIN;

	t3 = ((x13/x14)%(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -97;
	int8_t x18 = INT8_MIN;
	uint32_t x19 = 69U;
	int32_t x20 = INT32_MIN;
	volatile uint32_t t4 = 1745U;

	t4 = ((x17/x18)%(x19%x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x22 = INT32_MIN;

	t5 = ((x21/x22)%(x23%x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int64_t x26 = INT64_MAX;
	static uint32_t x27 = 18U;
	static int8_t x28 = INT8_MAX;
	volatile int64_t t6 = 3071LL;

	t6 = ((x25/x26)%(x27%x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint8_t x30 = 23U;
	uint64_t x31 = 4238766741LLU;
	int16_t x32 = INT16_MIN;
	static uint64_t t7 = 8322781LLU;

	t7 = ((x29/x30)%(x31%x32));

	if (t7 != 2300318834LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int8_t x34 = 3;
	static volatile int32_t x35 = INT32_MAX;
	int8_t x36 = INT8_MAX;

	t8 = ((x33/x34)%(x35%x36));

	if (t8 != 5) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 20U;
	volatile int32_t x39 = -1;

	t9 = ((x37/x38)%(x39%x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 131;
	volatile int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	uint32_t x44 = 41965U;
	volatile uint32_t t10 = 13U;

	t10 = ((x41/x42)%(x43%x44));

	if (t10 != 2055U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MIN;
	int8_t x47 = -1;
	volatile int8_t x48 = INT8_MAX;
	volatile int64_t t11 = -753205494724436935LL;

	t11 = ((x45/x46)%(x47%x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = -1;
	int16_t x54 = INT16_MIN;
	uint64_t x55 = 15757875LLU;
	volatile uint32_t x56 = 404U;
	uint64_t t12 = 848475412347836804LLU;

	t12 = ((x53/x54)%(x55%x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = INT16_MIN;
	volatile uint64_t x59 = 1522155474368378741LLU;
	uint8_t x60 = 4U;

	t13 = ((x57/x58)%(x59%x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 682900532U;
	int8_t x62 = -6;
	static int32_t x63 = -10170369;
	static uint64_t x64 = 19527701LLU;
	uint64_t t14 = 36692487821LLU;

	t14 = ((x61/x62)%(x63%x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 1U;
	int16_t x70 = -251;
	int32_t x71 = -1;
	volatile int8_t x72 = INT8_MAX;
	volatile uint32_t t15 = 0U;

	t15 = ((x69/x70)%(x71%x72));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	int16_t x74 = INT16_MAX;
	static uint32_t x75 = 40076298U;
	uint32_t x76 = 180212U;
	uint32_t t16 = 794884U;

	t16 = ((x73/x74)%(x75%x76));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 199U;
	int16_t x78 = INT16_MAX;
	uint16_t x79 = 43U;
	int8_t x80 = -2;

	t17 = ((x77/x78)%(x79%x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x85 = UINT32_MAX;
	static int16_t x86 = 1;
	uint8_t x88 = 2U;
	volatile uint32_t t18 = 0U;

	t18 = ((x85/x86)%(x87%x88));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -2;
	int64_t x91 = -1LL;
	int64_t x92 = -11297121807685LL;
	static int64_t t19 = 67016292LL;

	t19 = ((x89/x90)%(x91%x92));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = INT16_MIN;
	static int32_t x94 = INT32_MIN;
	static int32_t x95 = INT32_MIN;
	uint16_t x96 = 7U;
	volatile int32_t t20 = 152407;

	t20 = ((x93/x94)%(x95%x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 221U;
	uint16_t x98 = 229U;
	volatile uint64_t x99 = UINT64_MAX;
	static int16_t x100 = INT16_MIN;

	t21 = ((x97/x98)%(x99%x100));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 228LLU;
	volatile int16_t x110 = INT16_MAX;
	static uint64_t t22 = 93598140LLU;

	t22 = ((x109/x110)%(x111%x112));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = 1396;
	int64_t x118 = INT64_MAX;
	uint16_t x119 = 14528U;
	volatile int64_t t23 = 7LL;

	t23 = ((x117/x118)%(x119%x120));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = 2513561832LL;
	int8_t x123 = INT8_MIN;
	int8_t x124 = 13;
	int64_t t24 = -553509214LL;

	t24 = ((x121/x122)%(x123%x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = INT64_MIN;
	static volatile uint32_t x126 = 818U;
	static int32_t x128 = INT32_MIN;
	volatile int64_t t25 = -327449436982435534LL;

	t25 = ((x125/x126)%(x127%x128));

	if (t25 != -19148LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x130 = -1107;
	uint8_t x131 = UINT8_MAX;
	volatile uint32_t x132 = 3736788U;
	uint32_t t26 = 14U;

	t26 = ((x129/x130)%(x131%x132));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x139 = UINT32_MAX;
	volatile uint64_t t27 = 13349502835863LLU;

	t27 = ((x137/x138)%(x139%x140));

	if (t27 != 15LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x141 = 126748868U;
	int32_t x142 = INT32_MAX;
	uint64_t x143 = 1734736812843121656LLU;
	volatile int8_t x144 = INT8_MAX;
	volatile uint64_t t28 = 6286917248LLU;

	t28 = ((x141/x142)%(x143%x144));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MAX;
	int64_t x146 = INT64_MIN;
	uint32_t x147 = 55740U;
	uint16_t x148 = 137U;

	t29 = ((x145/x146)%(x147%x148));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = 3821129545242060LLU;
	static volatile int8_t x150 = INT8_MIN;
	uint16_t x151 = 59U;
	static volatile int16_t x152 = INT16_MIN;
	static volatile uint64_t t30 = 16451263295654660LLU;

	t30 = ((x149/x150)%(x151%x152));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = 2892U;
	int64_t x159 = 2162361LL;
	uint64_t x160 = 54070887105LLU;
	volatile uint64_t t31 = 498663441363365117LLU;

	t31 = ((x157/x158)%(x159%x160));

	if (t31 != 49LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = 398475587966121LL;
	static uint32_t x162 = 7869256U;
	int32_t x163 = INT32_MIN;
	static uint32_t x164 = 60U;
	static volatile int64_t t32 = -3LL;

	t32 = ((x161/x162)%(x163%x164));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x165 = 380U;
	uint64_t x166 = 3037469548866641408LLU;
	int32_t x167 = -1;
	int32_t x168 = -105;

	t33 = ((x165/x166)%(x167%x168));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = 13;
	volatile int16_t x170 = -1;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = UINT16_MAX;

	t34 = ((x169/x170)%(x171%x172));

	if (t34 != -13LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = UINT64_MAX;
	static int32_t x174 = -1915283;
	uint16_t x176 = 14743U;
	uint64_t t35 = 12100103279LLU;

	t35 = ((x173/x174)%(x175%x176));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x179 = 1035U;

	t36 = ((x177/x178)%(x179%x180));

	if (t36 != 350) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x182 = -1;
	static int16_t x183 = INT16_MAX;
	volatile int8_t x184 = -5;
	static volatile int32_t t37 = 23707750;

	t37 = ((x181/x182)%(x183%x184));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = 4;
	static uint32_t x187 = UINT32_MAX;
	uint32_t t38 = 2289U;

	t38 = ((x185/x186)%(x187%x188));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x193 = 27;
	volatile int8_t x194 = INT8_MIN;
	static uint8_t x195 = UINT8_MAX;
	uint64_t x196 = 16LLU;
	volatile uint64_t t39 = 204237LLU;

	t39 = ((x193/x194)%(x195%x196));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x197 = 235U;
	static int32_t x198 = -1;
	int32_t x199 = 1;
	int32_t x200 = INT32_MAX;
	int32_t t40 = -1054075030;

	t40 = ((x197/x198)%(x199%x200));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = -123;
	uint64_t t41 = 3402350606961LLU;

	t41 = ((x209/x210)%(x211%x212));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x222 = -1LL;
	static volatile int64_t x223 = INT64_MAX;
	static volatile int8_t x224 = INT8_MIN;
	static int64_t t42 = -39475348067LL;

	t42 = ((x221/x222)%(x223%x224));

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x225 = INT16_MIN;
	int8_t x226 = 59;
	uint8_t x227 = 5U;
	int8_t x228 = INT8_MAX;
	int32_t t43 = 22230;

	t43 = ((x225/x226)%(x227%x228));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x229 = -1;
	volatile int64_t x231 = INT64_MIN;
	volatile int64_t t44 = 21054248929LL;

	t44 = ((x229/x230)%(x231%x232));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x233 = INT64_MAX;
	int8_t x234 = 1;
	volatile uint32_t x236 = 2501355U;

	t45 = ((x233/x234)%(x235%x236));

	if (t45 != 63367LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x245 = 0U;
	int8_t x246 = -1;
	uint16_t x247 = 2U;
	int16_t x248 = 3;
	static int32_t t46 = 255;

	t46 = ((x245/x246)%(x247%x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x249 = 3U;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = UINT64_MAX;
	uint64_t t47 = 63LLU;

	t47 = ((x249/x250)%(x251%x252));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x253 = 1060436189U;
	int32_t x254 = -1;
	volatile uint32_t x255 = 140963U;
	uint32_t x256 = UINT32_MAX;
	uint32_t t48 = 157664U;

	t48 = ((x253/x254)%(x255%x256));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x258 = INT64_MIN;
	int64_t x259 = -3762646254LL;
	int8_t x260 = INT8_MIN;
	int64_t t49 = -24211257LL;

	t49 = ((x257/x258)%(x259%x260));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 26U;
	static uint8_t x263 = UINT8_MAX;
	uint64_t x264 = 188758LLU;

	t50 = ((x261/x262)%(x263%x264));

	if (t50 != 9LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = -1;
	int8_t x266 = INT8_MIN;
	uint16_t x267 = 416U;
	static int64_t x268 = INT64_MAX;
	volatile int64_t t51 = -59138687664LL;

	t51 = ((x265/x266)%(x267%x268));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x273 = INT8_MAX;
	int16_t x274 = INT16_MIN;
	static uint32_t x275 = 219U;
	uint64_t x276 = 22901658788068LLU;
	volatile uint64_t t52 = 663028567LLU;

	t52 = ((x273/x274)%(x275%x276));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x279 = 46986626;
	int32_t x280 = INT32_MIN;
	uint64_t t53 = 675024056535LLU;

	t53 = ((x277/x278)%(x279%x280));

	if (t53 != 27809965LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x293 = INT64_MAX;
	static uint8_t x294 = UINT8_MAX;
	static uint8_t x295 = UINT8_MAX;
	uint64_t x296 = 7LLU;
	uint64_t t54 = 17250836116LLU;

	t54 = ((x293/x294)%(x295%x296));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x309 = INT32_MAX;
	volatile uint8_t x310 = UINT8_MAX;
	int64_t x311 = -56221647826765LL;
	static int32_t x312 = INT32_MIN;

	t55 = ((x309/x310)%(x311%x312));

	if (t55 != 8421504LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x313 = 6766370353LL;
	uint16_t x314 = 949U;
	int64_t x315 = -450190LL;
	volatile int64_t t56 = -496LL;

	t56 = ((x313/x314)%(x315%x316));

	if (t56 != 13436LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x318 = 648151074526LLU;
	uint32_t x319 = UINT32_MAX;
	int8_t x320 = INT8_MAX;
	volatile uint64_t t57 = 67803004993LLU;

	t57 = ((x317/x318)%(x319%x320));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x321 = UINT64_MAX;
	volatile int64_t x322 = INT64_MIN;
	int32_t x323 = -6594;
	static uint8_t x324 = UINT8_MAX;
	volatile uint64_t t58 = 237298668009LLU;

	t58 = ((x321/x322)%(x323%x324));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x329 = UINT8_MAX;
	int8_t x330 = INT8_MAX;
	volatile uint8_t x331 = 6U;
	int64_t x332 = INT64_MAX;
	volatile int64_t t59 = 269204569123823996LL;

	t59 = ((x329/x330)%(x331%x332));

	if (t59 != 2LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x333 = 2U;
	int64_t x334 = INT64_MAX;
	volatile int16_t x335 = -1;
	int8_t x336 = INT8_MIN;
	int64_t t60 = -2189855879902375264LL;

	t60 = ((x333/x334)%(x335%x336));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x338 = UINT16_MAX;
	int8_t x339 = -1;
	uint16_t x340 = 75U;
	volatile int32_t t61 = 0;

	t61 = ((x337/x338)%(x339%x340));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MIN;
	int16_t x347 = -2947;
	uint8_t x348 = UINT8_MAX;
	volatile int64_t t62 = -1110096145174362LL;

	t62 = ((x345/x346)%(x347%x348));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x349 = -1860442160567911LL;
	uint16_t x350 = 57U;
	static int16_t x351 = -1;
	static int8_t x352 = INT8_MIN;
	volatile int64_t t63 = -36463834LL;

	t63 = ((x349/x350)%(x351%x352));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x361 = UINT16_MAX;
	static uint64_t x362 = 12939350LLU;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = UINT64_MAX;

	t64 = ((x361/x362)%(x363%x364));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x368 = UINT64_MAX;

	t65 = ((x365/x366)%(x367%x368));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x370 = INT64_MIN;
	uint16_t x371 = 4U;
	int16_t x372 = 63;
	volatile int64_t t66 = -585810601256935401LL;

	t66 = ((x369/x370)%(x371%x372));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x373 = UINT8_MAX;
	static uint8_t x374 = 1U;
	int64_t x375 = INT64_MIN;
	static volatile uint64_t t67 = 108984324612380087LLU;

	t67 = ((x373/x374)%(x375%x376));

	if (t67 != 255LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x377 = 13009U;
	int64_t x378 = 34356696223147551LL;
	uint64_t x379 = UINT64_MAX;
	static volatile uint64_t t68 = 671LLU;

	t68 = ((x377/x378)%(x379%x380));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x381 = 0;
	uint16_t x382 = 13647U;
	int64_t x383 = 419730LL;

	t69 = ((x381/x382)%(x383%x384));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x385 = INT8_MAX;
	uint8_t x386 = UINT8_MAX;
	int64_t x387 = -1LL;
	int32_t x388 = -460627;
	int64_t t70 = 6101047376267LL;

	t70 = ((x385/x386)%(x387%x388));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 3U;
	volatile int32_t x392 = INT32_MIN;
	uint32_t t71 = 32U;

	t71 = ((x389/x390)%(x391%x392));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x394 = 58U;
	int32_t x395 = 7612448;
	static int16_t x396 = INT16_MIN;
	static volatile int32_t t72 = -14;

	t72 = ((x393/x394)%(x395%x396));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x406 = INT64_MIN;
	volatile int32_t x408 = INT32_MAX;
	volatile int64_t t73 = -5080887991409LL;

	t73 = ((x405/x406)%(x407%x408));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x409 = INT32_MIN;
	static uint64_t x410 = 448032071497399LLU;
	int64_t x412 = INT64_MIN;
	uint64_t t74 = 35791LLU;

	t74 = ((x409/x410)%(x411%x412));

	if (t74 != 41172LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x417 = 15;
	volatile int64_t x418 = -3021439399490628LL;
	int8_t x419 = INT8_MAX;
	static int16_t x420 = INT16_MIN;
	volatile int64_t t75 = 35456LL;

	t75 = ((x417/x418)%(x419%x420));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x425 = UINT64_MAX;
	int8_t x426 = INT8_MAX;
	int64_t x427 = -38958456LL;
	int32_t x428 = INT32_MIN;
	volatile uint64_t t76 = 358424313447225LLU;

	t76 = ((x425/x426)%(x427%x428));

	if (t76 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x433 = 663U;
	int16_t x434 = INT16_MIN;
	static uint16_t x435 = 969U;
	int64_t x436 = -1125316722201031878LL;
	volatile int64_t t77 = 717LL;

	t77 = ((x433/x434)%(x435%x436));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x437 = INT32_MAX;
	volatile uint16_t x439 = 10043U;
	uint8_t x440 = 7U;

	t78 = ((x437/x438)%(x439%x440));

	if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x441 = 8236U;
	int16_t x442 = INT16_MIN;
	int16_t x443 = -172;
	static volatile uint32_t x444 = 764325184U;
	static volatile uint32_t t79 = 5U;

	t79 = ((x441/x442)%(x443%x444));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x445 = 40459134LL;
	int16_t x446 = 7044;
	int16_t x447 = INT16_MIN;
	int64_t x448 = INT64_MAX;
	volatile int64_t t80 = -3521533LL;

	t80 = ((x445/x446)%(x447%x448));

	if (t80 != 5743LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x449 = INT32_MIN;
	int8_t x450 = 1;
	static volatile uint32_t x452 = 1000U;
	volatile uint32_t t81 = 1897584U;

	t81 = ((x449/x450)%(x451%x452));

	if (t81 != 173U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x453 = INT64_MAX;
	uint16_t x454 = 12667U;
	volatile uint32_t x455 = UINT32_MAX;
	static int8_t x456 = INT8_MIN;
	static volatile int64_t t82 = 3727393725503LL;

	t82 = ((x453/x454)%(x455%x456));

	if (t82 != 76LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x461 = INT32_MIN;
	volatile int64_t x463 = -1LL;
	uint8_t x464 = UINT8_MAX;
	static int64_t t83 = 3238378816623418LL;

	t83 = ((x461/x462)%(x463%x464));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x465 = UINT8_MAX;
	int64_t x467 = -29722LL;
	int16_t x468 = INT16_MIN;

	t84 = ((x465/x466)%(x467%x468));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x470 = INT64_MAX;
	volatile int64_t t85 = -86728LL;

	t85 = ((x469/x470)%(x471%x472));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x477 = INT32_MIN;
	int8_t x479 = INT8_MAX;

	t86 = ((x477/x478)%(x479%x480));

	if (t86 != -16LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x482 = INT64_MIN;
	int32_t x483 = 16025972;
	static int8_t x484 = INT8_MIN;
	volatile int64_t t87 = -2027554708LL;

	t87 = ((x481/x482)%(x483%x484));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x485 = UINT32_MAX;
	int8_t x487 = -4;
	int16_t x488 = INT16_MIN;
	volatile int64_t t88 = 27113767692LL;

	t88 = ((x485/x486)%(x487%x488));

	if (t88 != -3LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x489 = 3;
	int16_t x490 = -1;
	int16_t x491 = INT16_MIN;
	int16_t x492 = 1608;
	int32_t t89 = -18930593;

	t89 = ((x489/x490)%(x491%x492));

	if (t89 != -3) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x497 = -51445218273LL;
	int16_t x499 = -235;

	t90 = ((x497/x498)%(x499%x500));

	if (t90 != -189LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x501 = -1;
	int16_t x502 = -1;
	static int32_t x503 = INT32_MIN;
	int32_t t91 = -49;

	t91 = ((x501/x502)%(x503%x504));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x506 = -30;
	int64_t x507 = -14332837802695811LL;
	int64_t t92 = -1LL;

	t92 = ((x505/x506)%(x507%x508));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x509 = INT8_MIN;
	volatile int16_t x510 = 1217;
	int8_t x511 = -1;
	int32_t t93 = -812678069;

	t93 = ((x509/x510)%(x511%x512));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x513 = UINT64_MAX;
	int32_t x514 = INT32_MIN;
	int32_t x515 = INT32_MAX;
	uint8_t x516 = UINT8_MAX;

	t94 = ((x513/x514)%(x515%x516));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x517 = INT32_MIN;
	static int16_t x518 = INT16_MAX;
	int64_t x519 = INT64_MIN;

	t95 = ((x517/x518)%(x519%x520));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x521 = INT8_MAX;
	volatile uint16_t x522 = 157U;
	volatile int64_t x523 = 479416965LL;
	volatile int64_t t96 = -307LL;

	t96 = ((x521/x522)%(x523%x524));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x525 = 0;
	int16_t x526 = INT16_MAX;
	int32_t x527 = INT32_MIN;
	uint8_t x528 = UINT8_MAX;
	int32_t t97 = -38;

	t97 = ((x525/x526)%(x527%x528));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x529 = 41U;
	int16_t x530 = 16254;
	int16_t x531 = -1;
	int16_t x532 = INT16_MIN;
	int32_t t98 = -85;

	t98 = ((x529/x530)%(x531%x532));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x533 = -1;
	uint16_t x534 = 2U;
	int8_t x535 = 1;
	uint32_t x536 = 13531U;

	t99 = ((x533/x534)%(x535%x536));

	if (t99 != 0U) { NG(); } else { ; }
	
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

