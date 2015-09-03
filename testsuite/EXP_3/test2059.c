#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x10 = INT64_MIN;
static int32_t x15 = -62728362;
int64_t x17 = 2850518456129LL;
uint32_t x22 = UINT32_MAX;
uint16_t x23 = UINT16_MAX;
static uint64_t x25 = 209623193745359LLU;
uint64_t t5 = 41117758136896582LLU;
int64_t x29 = 127432305370LL;
static int32_t x33 = INT32_MAX;
uint16_t x37 = 8696U;
uint64_t x38 = UINT64_MAX;
volatile uint64_t t8 = 13207393152LLU;
volatile uint64_t x44 = 8812013650581044721LLU;
int32_t x45 = -1;
int64_t x47 = 1LL;
static volatile int8_t x50 = -1;
int8_t x58 = INT8_MIN;
uint8_t x59 = 6U;
int64_t x60 = INT64_MIN;
volatile int64_t t12 = -238LL;
volatile int16_t x66 = INT16_MAX;
static uint16_t x75 = 6251U;
int16_t x76 = -1;
static volatile int32_t t17 = 56;
static int8_t x94 = INT8_MIN;
int8_t x96 = INT8_MAX;
static int32_t x113 = -1;
static int8_t x121 = INT8_MAX;
uint64_t x131 = UINT64_MAX;
uint64_t x134 = 6640LLU;
static volatile uint32_t x135 = 386067U;
int16_t x159 = -26;
int8_t x160 = INT8_MIN;
int8_t x161 = INT8_MAX;
int32_t t30 = 138584660;
uint64_t x174 = UINT64_MAX;
uint64_t x191 = 107086666LLU;
uint64_t t35 = 8947817415305459876LLU;
int64_t x198 = 56LL;
int8_t x219 = 1;
volatile int64_t x220 = INT64_MIN;
volatile int64_t t42 = 769589389LL;
uint16_t x237 = 13U;
volatile uint32_t x246 = UINT32_MAX;
uint64_t x248 = 2186869577LLU;
static int32_t x252 = INT32_MAX;
volatile int16_t x259 = -6;
static int64_t x260 = INT64_MIN;
static int8_t x263 = -1;
uint8_t x267 = 1U;
volatile uint16_t x268 = UINT16_MAX;
volatile uint64_t t51 = 9275674593309LLU;
volatile int8_t x270 = 1;
int64_t t52 = 4LL;
uint8_t x275 = 11U;
int8_t x295 = INT8_MAX;
int64_t x311 = INT64_MIN;
static volatile int64_t x323 = INT64_MAX;
int8_t x324 = -3;
static volatile int16_t x325 = -1;
volatile int16_t x327 = INT16_MAX;
int8_t x329 = -1;
volatile int8_t x332 = INT8_MIN;
uint64_t x337 = UINT64_MAX;
uint64_t x339 = UINT64_MAX;
static uint64_t x342 = UINT64_MAX;
static int64_t x354 = -14LL;
int64_t x360 = -1LL;
static volatile int32_t t67 = 95;
int32_t x373 = -1;
static uint8_t x377 = 1U;
uint8_t x378 = UINT8_MAX;
static uint16_t x379 = 5076U;
int8_t x381 = INT8_MIN;
int64_t x384 = INT64_MIN;
static volatile int8_t x395 = INT8_MIN;
uint64_t x396 = UINT64_MAX;
int64_t x403 = -1LL;
volatile int16_t x408 = 1552;
uint16_t x415 = 954U;
volatile uint64_t t76 = 15981068629LLU;
static volatile uint16_t x427 = 13108U;
int8_t x431 = INT8_MIN;
int64_t x432 = INT64_MAX;
volatile int64_t t79 = 2LL;
int32_t x439 = INT32_MIN;
int64_t x442 = -1LL;
int64_t t82 = 7463941LL;
int16_t x447 = 3;
static volatile uint64_t t83 = 230LLU;
uint64_t x450 = 142161813195LLU;
static int64_t x459 = -7LL;
uint64_t x475 = 3672986LLU;
int16_t x490 = INT16_MAX;
volatile int32_t x503 = 6558;
int64_t x504 = INT64_MAX;
int32_t x507 = -1;
int64_t t91 = -30002500483227LL;
uint64_t x509 = 3387564616027843LLU;
uint16_t x512 = 4U;
int32_t x514 = INT32_MAX;
static uint32_t x515 = UINT32_MAX;
static volatile int32_t x523 = INT32_MIN;
volatile uint64_t x545 = 1078040065517642LLU;
static uint64_t x548 = UINT64_MAX;


void f0(void) {
	uint32_t x1 = 6U;
	int32_t x2 = INT32_MAX;
	volatile int64_t x3 = INT64_MAX;
	uint32_t x4 = 15U;
	volatile int64_t t0 = 911468350681LL;

	t0 = ((x1*x2)%(x3^x4));

	if (t0 != 4294967290LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 20441LLU;
	int64_t x11 = INT64_MAX;
	int64_t x12 = INT64_MIN;
	volatile uint64_t t1 = 6759750546LLU;

	t1 = ((x9*x10)%(x11^x12));

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = -1;
	int16_t x14 = INT16_MAX;
	int8_t x16 = INT8_MIN;
	volatile int32_t t2 = -173;

	t2 = ((x13*x14)%(x15^x16));

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = UINT16_MAX;
	volatile int16_t x19 = INT16_MAX;
	volatile int32_t x20 = INT32_MIN;
	int64_t t3 = -4433626231446080719LL;

	t3 = ((x17*x18)%(x19^x20));

	if (t3 != 1376864376LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	static uint64_t x24 = 974888LLU;
	uint64_t t4 = 2898134770LLU;

	t4 = ((x21*x22)%(x23^x24));

	if (t4 != 853496LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = 0;
	static int32_t x27 = -22052;
	int16_t x28 = INT16_MAX;

	t5 = ((x25*x26)%(x27^x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = 10117;
	int32_t x31 = INT32_MAX;
	int32_t x32 = -1;
	static int64_t t6 = 663677552590LL;

	t6 = ((x29*x30)%(x31^x32));

	if (t6 != 1562769730LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = -1;
	static uint8_t x35 = UINT8_MAX;
	uint32_t x36 = 52698U;
	uint32_t t7 = 2055210U;

	t7 = ((x33*x34)%(x35^x36));

	if (t7 != 11002U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x39 = 1U;
	uint32_t x40 = 39U;

	t8 = ((x37*x38)%(x39^x40));

	if (t8 != 4LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MIN;
	volatile uint64_t t9 = 199827748673LLU;

	t9 = ((x41*x42)%(x43^x44));

	if (t9 != 2147483648LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = 3;
	volatile int16_t x48 = -1;
	static int64_t t10 = 89942310517LL;

	t10 = ((x45*x46)%(x47^x48));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = -1;
	static int8_t x51 = INT8_MAX;
	int16_t x52 = INT16_MAX;
	volatile int32_t t11 = -17029;

	t11 = ((x49*x50)%(x51^x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 30297576595099LL;

	t12 = ((x57*x58)%(x59^x60));

	if (t12 != -3878089804172672LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = -1;
	int16_t x67 = 345;
	int32_t x68 = INT32_MIN;
	int32_t t13 = -966;

	t13 = ((x65*x66)%(x67^x68));

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x73 = INT8_MIN;
	int16_t x74 = 5415;
	int32_t t14 = 3390;

	t14 = ((x73*x74)%(x75^x76));

	if (t14 != -5400) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = 107LL;
	int64_t x83 = 931LL;
	int8_t x84 = INT8_MAX;
	volatile int64_t t15 = 1LL;

	t15 = ((x81*x82)%(x83^x84));

	if (t15 != -644LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = UINT64_MAX;
	int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MAX;
	static int16_t x88 = INT16_MIN;
	uint64_t t16 = 1473042052852LLU;

	t16 = ((x85*x86)%(x87^x88));

	if (t16 != 2147483648LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x89 = 2;
	uint8_t x90 = 3U;
	int32_t x91 = INT32_MIN;
	static uint16_t x92 = 1209U;

	t17 = ((x89*x90)%(x91^x92));

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x93 = -1;
	int16_t x95 = 118;
	int32_t t18 = -401916;

	t18 = ((x93*x94)%(x95^x96));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = 3425U;
	int8_t x98 = -29;
	int32_t x99 = 13769008;
	static int8_t x100 = 55;
	volatile uint32_t t19 = 19324216U;

	t19 = ((x97*x98)%(x99^x100));

	if (t19 != 12719234U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = 21851U;
	int32_t x106 = -1;
	uint8_t x107 = 119U;
	volatile uint64_t x108 = 9535776957151LLU;
	uint64_t t20 = 498466129303336650LLU;

	t20 = ((x105*x106)%(x107^x108));

	if (t20 != 2873077330973LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x109 = INT32_MAX;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	int16_t x112 = -1;
	static volatile uint32_t t21 = 514149074U;

	t21 = ((x109*x110)%(x111^x112));

	if (t21 != 3U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x114 = -1;
	uint8_t x115 = 2U;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t22 = 13;

	t22 = ((x113*x114)%(x115^x116));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x122 = -1;
	int8_t x123 = INT8_MAX;
	int64_t x124 = -1LL;
	static volatile int64_t t23 = 56785LL;

	t23 = ((x121*x122)%(x123^x124));

	if (t23 != -127LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x125 = -1;
	int8_t x126 = INT8_MIN;
	uint64_t x127 = 11310358869342LLU;
	int32_t x128 = -1;
	uint64_t t24 = 274LLU;

	t24 = ((x125*x126)%(x127^x128));

	if (t24 != 128LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x129 = INT8_MIN;
	volatile int64_t x130 = -1LL;
	int8_t x132 = INT8_MAX;
	uint64_t t25 = 76173641LLU;

	t25 = ((x129*x130)%(x131^x132));

	if (t25 != 128LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = INT32_MIN;
	volatile int64_t x136 = -853703033491404120LL;
	volatile uint64_t t26 = 115LLU;

	t26 = ((x133*x134)%(x135^x136));

	if (t26 != 853688774199628101LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MIN;
	int32_t x143 = 143355;
	uint8_t x144 = 97U;
	static uint32_t t27 = 735833U;

	t27 = ((x141*x142)%(x143^x144));

	if (t27 != 46228U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x145 = UINT8_MAX;
	static uint16_t x146 = 10695U;
	uint8_t x147 = UINT8_MAX;
	static uint64_t x148 = 1962LLU;
	static volatile uint64_t t28 = 1842313758LLU;

	t28 = ((x145*x146)%(x147^x148));

	if (t28 != 1821LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = 107U;
	uint8_t x158 = 0U;
	volatile int32_t t29 = -45043287;

	t29 = ((x157*x158)%(x159^x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x162 = 874408;
	uint8_t x163 = 1U;
	uint8_t x164 = 28U;

	t30 = ((x161*x162)%(x163^x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x165 = -1LL;
	static uint8_t x166 = UINT8_MAX;
	int8_t x167 = 60;
	int64_t x168 = -1LL;
	volatile int64_t t31 = 5350790505757LL;

	t31 = ((x165*x166)%(x167^x168));

	if (t31 != -11LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x175 = 711U;
	volatile uint64_t x176 = 492589258274LLU;
	volatile uint64_t t32 = 32631741897544LLU;

	t32 = ((x173*x174)%(x175^x176));

	if (t32 != 128LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x181 = 1577230U;
	static int64_t x182 = -1LL;
	uint64_t x183 = 7823123580LLU;
	volatile int8_t x184 = -13;
	volatile uint64_t t33 = 226173LLU;

	t33 = ((x181*x182)%(x183^x184));

	if (t33 != 7821546339LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x186 = INT8_MIN;
	static uint16_t x187 = UINT16_MAX;
	int64_t x188 = 134672290708LL;
	int64_t t34 = -26799437987LL;

	t34 = ((x185*x186)%(x187^x188));

	if (t34 != 128LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x189 = -1;
	static int64_t x190 = -2252667LL;
	int16_t x192 = 1833;

	t35 = ((x189*x190)%(x191^x192));

	if (t35 != 2252667LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = 8;
	volatile int8_t x194 = 0;
	int8_t x195 = INT8_MIN;
	int32_t x196 = -1;
	volatile int32_t t36 = 2023;

	t36 = ((x193*x194)%(x195^x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = 0;
	volatile uint64_t x199 = 44556LLU;
	volatile int32_t x200 = INT32_MIN;
	static volatile uint64_t t37 = 1607699183689319LLU;

	t37 = ((x197*x198)%(x199^x200));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x213 = 5LL;
	int8_t x214 = INT8_MIN;
	static uint64_t x215 = UINT64_MAX;
	int64_t x216 = 8559LL;
	uint64_t t38 = 3386LLU;

	t38 = ((x213*x214)%(x215^x216));

	if (t38 != 7920LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x217 = INT8_MAX;
	int8_t x218 = INT8_MIN;
	int64_t t39 = 4191396707LL;

	t39 = ((x217*x218)%(x219^x220));

	if (t39 != -16256LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = 170;
	uint8_t x222 = 16U;
	static uint32_t x223 = 1084324129U;
	uint64_t x224 = 916337885443134LLU;
	uint64_t t40 = 4502577LLU;

	t40 = ((x221*x222)%(x223^x224));

	if (t40 != 2720LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x225 = UINT16_MAX;
	uint32_t x226 = 81712U;
	int64_t x227 = INT64_MAX;
	static uint8_t x228 = 1U;
	static volatile int64_t t41 = 262900368112139LL;

	t41 = ((x225*x226)%(x227^x228));

	if (t41 != 1060028624LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x229 = -1LL;
	int8_t x230 = INT8_MIN;
	int32_t x231 = 1634637;
	static uint16_t x232 = 0U;

	t42 = ((x229*x230)%(x231^x232));

	if (t42 != 128LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x233 = INT8_MAX;
	static int64_t x234 = -19633747441083929LL;
	static uint32_t x235 = 840941329U;
	int32_t x236 = -6195;
	static volatile int64_t t43 = -207033687250835LL;

	t43 = ((x233*x234)%(x235^x236));

	if (t43 != -71570071LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x238 = -1;
	volatile int8_t x239 = -2;
	int64_t x240 = INT64_MAX;
	volatile int64_t t44 = -551555649508412699LL;

	t44 = ((x237*x238)%(x239^x240));

	if (t44 != -13LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x241 = -1LL;
	volatile int32_t x242 = INT32_MAX;
	static uint64_t x243 = UINT64_MAX;
	int32_t x244 = -230329;
	uint64_t t45 = 3LLU;

	t45 = ((x241*x242)%(x243^x244));

	if (t45 != 47769LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x245 = 41467LLU;
	uint8_t x247 = 124U;
	volatile uint64_t t46 = 4380122286934166LLU;

	t46 = ((x245*x246)%(x247^x248));

	if (t46 != 752099685LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x249 = 4176669356523LLU;
	volatile int32_t x250 = -1;
	static int32_t x251 = -2163975;
	volatile uint64_t t47 = 1591958090LLU;

	t47 = ((x249*x250)%(x251^x252));

	if (t47 != 18446739897040195093LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x253 = 6613896U;
	int8_t x254 = -1;
	int64_t x255 = 244LL;
	int16_t x256 = 0;
	volatile int64_t t48 = 4LL;

	t48 = ((x253*x254)%(x255^x256));

	if (t48 != 208LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = INT8_MIN;
	static int16_t x258 = INT16_MIN;
	int64_t t49 = 48397963LL;

	t49 = ((x257*x258)%(x259^x260));

	if (t49 != 4194304LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x261 = UINT64_MAX;
	static int64_t x262 = INT64_MIN;
	static int8_t x264 = INT8_MIN;
	volatile uint64_t t50 = 6906255577415505LLU;

	t50 = ((x261*x262)%(x263^x264));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x265 = UINT64_MAX;
	volatile int32_t x266 = -29057800;

	t51 = ((x265*x266)%(x267^x268));

	if (t51 != 26238LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x269 = INT8_MIN;
	volatile int16_t x271 = INT16_MAX;
	static int64_t x272 = INT64_MIN;

	t52 = ((x269*x270)%(x271^x272));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x273 = INT8_MAX;
	int16_t x274 = INT16_MAX;
	static int64_t x276 = INT64_MIN;
	volatile int64_t t53 = -3310971416999LL;

	t53 = ((x273*x274)%(x275^x276));

	if (t53 != 4161409LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x277 = INT64_MAX;
	volatile int64_t x278 = -1LL;
	static uint32_t x279 = 57U;
	uint16_t x280 = UINT16_MAX;
	int64_t t54 = 74809LL;

	t54 = ((x277*x278)%(x279^x280));

	if (t54 != -27139LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x281 = 15U;
	volatile int16_t x282 = 8;
	int8_t x283 = INT8_MAX;
	static int16_t x284 = 6;
	int32_t t55 = 97177083;

	t55 = ((x281*x282)%(x283^x284));

	if (t55 != 120) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x293 = INT32_MAX;
	uint16_t x294 = 1U;
	uint32_t x296 = 102007U;
	volatile uint32_t t56 = 512887355U;

	t56 = ((x293*x294)%(x295^x296));

	if (t56 != 25447U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x309 = UINT8_MAX;
	volatile uint64_t x310 = UINT64_MAX;
	static uint16_t x312 = 449U;
	uint64_t t57 = 507504782351682LLU;

	t57 = ((x309*x310)%(x311^x312));

	if (t57 != 9223372036854775104LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x313 = INT16_MAX;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = 19226;
	uint32_t x316 = 23875681U;
	uint32_t t58 = 167U;

	t58 = ((x313*x314)%(x315^x316));

	if (t58 != 8355585U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x321 = INT32_MAX;
	uint64_t x322 = UINT64_MAX;
	uint64_t t59 = 502151934547423LLU;

	t59 = ((x321*x322)%(x323^x324));

	if (t59 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x326 = INT16_MAX;
	volatile int16_t x328 = -1;
	volatile int32_t t60 = -1005057427;

	t60 = ((x325*x326)%(x327^x328));

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x330 = INT64_MAX;
	int64_t x331 = INT64_MIN;
	volatile int64_t t61 = 305356733644LL;

	t61 = ((x329*x330)%(x331^x332));

	if (t61 != -127LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x334 = 11336375783757LLU;
	volatile int16_t x335 = INT16_MIN;
	static uint32_t x336 = 1969383U;
	static uint64_t t62 = 82045704898LLU;

	t62 = ((x333*x334)%(x335^x336));

	if (t62 != 1017353209LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x338 = INT32_MAX;
	int64_t x340 = -882LL;
	uint64_t t63 = 130699045584392LLU;

	t63 = ((x337*x338)%(x339^x340));

	if (t63 != 177LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x341 = -1LL;
	int64_t x343 = -1LL;
	uint16_t x344 = 13016U;
	uint64_t t64 = 13798445335775721LLU;

	t64 = ((x341*x342)%(x343^x344));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x353 = 847;
	int8_t x355 = INT8_MIN;
	uint8_t x356 = UINT8_MAX;
	static volatile int64_t t65 = -6503LL;

	t65 = ((x353*x354)%(x355^x356));

	if (t65 != -119LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x357 = INT32_MIN;
	static uint32_t x358 = 26059195U;
	uint16_t x359 = 592U;
	int64_t t66 = -173314925121LL;

	t66 = ((x357*x358)%(x359^x360));

	if (t66 != 564LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x365 = 58U;
	volatile int8_t x366 = INT8_MIN;
	int8_t x367 = -6;
	uint8_t x368 = 87U;

	t67 = ((x365*x366)%(x367^x368));

	if (t67 != -37) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x374 = 1;
	volatile int64_t x375 = 536735776452LL;
	uint64_t x376 = 402960851578LLU;
	uint64_t t68 = 132530837494537148LLU;

	t68 = ((x373*x374)%(x375^x376));

	if (t68 != 80371883601LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x380 = 27U;
	int32_t t69 = 3;

	t69 = ((x377*x378)%(x379^x380));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x382 = 11790U;
	int32_t x383 = INT32_MIN;
	volatile int64_t t70 = -5551920LL;

	t70 = ((x381*x382)%(x383^x384));

	if (t70 != 4293458176LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x385 = 1;
	int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MAX;
	static uint32_t x388 = UINT32_MAX;
	int64_t t71 = -33526603075772LL;

	t71 = ((x385*x386)%(x387^x388));

	if (t71 != -8192LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x393 = 7U;
	int8_t x394 = -1;
	volatile uint64_t t72 = 5153507521LLU;

	t72 = ((x393*x394)%(x395^x396));

	if (t72 != 122LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x401 = -3;
	static uint64_t x402 = UINT64_MAX;
	uint16_t x404 = 6U;
	uint64_t t73 = 563086384856LLU;

	t73 = ((x401*x402)%(x403^x404));

	if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x405 = -1LL;
	int16_t x406 = INT16_MIN;
	int64_t x407 = INT64_MIN;
	int64_t t74 = 405LL;

	t74 = ((x405*x406)%(x407^x408));

	if (t74 != 32768LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x409 = -447033055208467LL;
	uint8_t x410 = 9U;
	int16_t x411 = -11692;
	uint8_t x412 = 3U;
	int64_t t75 = 537418697498791LL;

	t75 = ((x409*x410)%(x411^x412));

	if (t75 != -7221LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x413 = -1;
	static int64_t x414 = INT64_MAX;
	volatile uint64_t x416 = UINT64_MAX;

	t76 = ((x413*x414)%(x415^x416));

	if (t76 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x417 = -1;
	uint32_t x418 = UINT32_MAX;
	int64_t x419 = INT64_MIN;
	int8_t x420 = INT8_MAX;
	int64_t t77 = -11245LL;

	t77 = ((x417*x418)%(x419^x420));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x425 = UINT8_MAX;
	int16_t x426 = INT16_MAX;
	int64_t x428 = INT64_MIN;
	int64_t t78 = -7401089777339009LL;

	t78 = ((x425*x426)%(x427^x428));

	if (t78 != 8355585LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x429 = 10529789;
	uint8_t x430 = 31U;

	t79 = ((x429*x430)%(x431^x432));

	if (t79 != 326423459LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x433 = 2;
	volatile uint16_t x434 = UINT16_MAX;
	int8_t x435 = -1;
	static volatile int64_t x436 = INT64_MIN;
	int64_t t80 = -23583363LL;

	t80 = ((x433*x434)%(x435^x436));

	if (t80 != 131070LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x437 = INT16_MIN;
	uint32_t x438 = UINT32_MAX;
	uint16_t x440 = 8750U;
	volatile uint32_t t81 = 488U;

	t81 = ((x437*x438)%(x439^x440));

	if (t81 != 32768U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x441 = 14U;
	volatile uint8_t x443 = 13U;
	uint16_t x444 = UINT16_MAX;

	t82 = ((x441*x442)%(x443^x444));

	if (t82 != -14LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x445 = 6U;
	uint64_t x446 = 18580LLU;
	volatile int64_t x448 = INT64_MIN;

	t83 = ((x445*x446)%(x447^x448));

	if (t83 != 111480LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x449 = UINT16_MAX;
	int32_t x451 = -30786032;
	int64_t x452 = -1LL;
	uint64_t t84 = 4396538163242LLU;

	t84 = ((x449*x450)%(x451^x452));

	if (t84 != 7283871LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x457 = -1;
	volatile uint16_t x458 = UINT16_MAX;
	uint16_t x460 = UINT16_MAX;
	static volatile int64_t t85 = -3335532473736276LL;

	t85 = ((x457*x458)%(x459^x460));

	if (t85 != -5LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x473 = 5913803721264273LLU;
	uint32_t x474 = 400242U;
	int64_t x476 = INT64_MIN;
	volatile uint64_t t86 = 60LLU;

	t86 = ((x473*x474)%(x475^x476));

	if (t86 != 5769387571432547218LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x477 = INT32_MAX;
	volatile uint64_t x478 = 94885854942LLU;
	int64_t x479 = INT64_MIN;
	int32_t x480 = 83420897;
	static volatile uint64_t t87 = 8400775827482LLU;

	t87 = ((x477*x478)%(x479^x480));

	if (t87 != 851637008754065698LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x489 = -1;
	volatile int8_t x491 = INT8_MIN;
	volatile uint64_t x492 = 15LLU;
	static uint64_t t88 = 14094559313774546LLU;

	t88 = ((x489*x490)%(x491^x492));

	if (t88 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x497 = 747U;
	uint32_t x498 = 2239U;
	static uint8_t x499 = 0U;
	volatile uint64_t x500 = 51629317214LLU;
	volatile uint64_t t89 = 481253258853154154LLU;

	t89 = ((x497*x498)%(x499^x500));

	if (t89 != 1672533LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x501 = -1;
	int8_t x502 = -1;
	int64_t t90 = -77886LL;

	t90 = ((x501*x502)%(x503^x504));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x505 = -1LL;
	int32_t x506 = INT32_MIN;
	int64_t x508 = 1LL;

	t91 = ((x505*x506)%(x507^x508));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x510 = 359U;
	uint16_t x511 = 48U;
	static volatile uint64_t t92 = 1LLU;

	t92 = ((x509*x510)%(x511^x512));

	if (t92 != 45LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x513 = -1;
	volatile uint16_t x516 = 1U;
	uint32_t t93 = 13898076U;

	t93 = ((x513*x514)%(x515^x516));

	if (t93 != 2147483649U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x521 = INT8_MIN;
	volatile int64_t x522 = 113425626LL;
	volatile int64_t x524 = -550347220471LL;
	static volatile int64_t t94 = 8414709428124451LL;

	t94 = ((x521*x522)%(x523^x524));

	if (t94 != -14518480128LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x529 = UINT8_MAX;
	int8_t x530 = -3;
	int8_t x531 = -1;
	static int8_t x532 = 48;
	int32_t t95 = -198;

	t95 = ((x529*x530)%(x531^x532));

	if (t95 != -30) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x533 = 0;
	static int32_t x534 = INT32_MAX;
	int32_t x535 = INT32_MAX;
	int8_t x536 = INT8_MAX;
	volatile int32_t t96 = 72;

	t96 = ((x533*x534)%(x535^x536));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x537 = -3873;
	static uint8_t x538 = UINT8_MAX;
	uint64_t x539 = 62573208260498469LLU;
	static int64_t x540 = INT64_MIN;
	uint64_t t97 = 621181699289558LLU;

	t97 = ((x537*x538)%(x539^x540));

	if (t97 != 9160798828593289724LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x541 = INT16_MIN;
	int8_t x542 = 12;
	static volatile int32_t x543 = INT32_MAX;
	int32_t x544 = INT32_MIN;
	int32_t t98 = 664;

	t98 = ((x541*x542)%(x543^x544));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x546 = UINT16_MAX;
	volatile int32_t x547 = INT32_MAX;
	uint64_t t99 = 2280421370683286LLU;

	t99 = ((x545*x546)%(x547^x548));

	if (t99 != 15309123472570013622LLU) { NG(); } else { ; }
	
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

