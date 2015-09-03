#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x16 = INT32_MAX;
int64_t x21 = 15260422426207073LL;
static volatile int32_t x34 = -1;
int32_t t3 = -3;
int64_t x47 = -1LL;
static int8_t x48 = INT8_MIN;
volatile int32_t t5 = 14488;
int8_t x50 = -46;
uint16_t x53 = 29128U;
int8_t x55 = 1;
int16_t x68 = -1458;
int32_t t9 = -778;
int64_t x74 = INT64_MAX;
int8_t x76 = INT8_MIN;
volatile int16_t x81 = INT16_MAX;
static volatile uint64_t x104 = 23162177740LLU;
static int64_t t17 = -67350645060LL;
int64_t x105 = 202450LL;
int16_t x106 = -241;
int32_t x108 = INT32_MAX;
int64_t t18 = 76784392628790758LL;
uint32_t t19 = 216668145U;
uint64_t x121 = UINT64_MAX;
volatile uint16_t x123 = 16U;
static volatile uint8_t x125 = UINT8_MAX;
volatile int64_t x126 = 1650037413701104LL;
uint16_t x132 = 25066U;
volatile int32_t t23 = -1;
uint16_t x145 = 3U;
int32_t x148 = -1;
static int16_t x154 = INT16_MIN;
static int16_t x164 = INT16_MAX;
int16_t x165 = INT16_MIN;
int64_t x173 = 53563604LL;
volatile int8_t x176 = 1;
volatile uint16_t x177 = UINT16_MAX;
static int8_t x178 = 0;
int16_t x201 = -1;
static int64_t x202 = 2286948LL;
uint32_t t39 = 352U;
uint8_t x210 = UINT8_MAX;
static int32_t x217 = -48150303;
volatile int32_t t42 = -1;
static int32_t x228 = -29232;
int32_t t45 = -127599;
static int32_t x238 = -1;
static uint64_t x239 = 4929647659048517672LLU;
volatile int64_t t47 = 101830707LL;
volatile uint64_t t49 = 2LLU;
static uint16_t x264 = 2351U;
volatile int64_t t52 = 81748212LL;
uint32_t x272 = UINT32_MAX;
int64_t x286 = -1LL;
uint64_t x288 = 2112672244LLU;
uint64_t x289 = 348910720945LLU;
static int16_t x290 = INT16_MIN;
static uint16_t x291 = 178U;
volatile int64_t t57 = -14614115386827846LL;
volatile int32_t t58 = 105;
uint32_t x314 = 4589U;
uint64_t t60 = 781357026406LLU;
int64_t x322 = -1LL;
volatile int64_t x329 = 1849985428LL;
int16_t x330 = INT16_MAX;
static int8_t x331 = 1;
volatile int64_t t62 = -959849541661746264LL;
int8_t x340 = 1;
volatile uint32_t x342 = 32702U;
static int8_t x345 = INT8_MIN;
int16_t x346 = -3242;
uint64_t t69 = 1881213442371779LLU;
int16_t x362 = 198;
int64_t x363 = INT64_MIN;
volatile uint64_t x364 = 100465230050234950LLU;
static volatile uint32_t x366 = 3U;
int8_t x367 = -1;
volatile uint64_t t74 = 11192015346238LLU;
int32_t x385 = -7017156;
uint16_t x387 = 17710U;
uint8_t x388 = 0U;
volatile uint64_t t76 = 818489LLU;
int16_t x409 = INT16_MIN;
int8_t x416 = 0;
int16_t x420 = 0;
static volatile uint16_t x429 = UINT16_MAX;
uint64_t x432 = UINT64_MAX;
static uint16_t x433 = 7U;
static uint16_t x435 = 0U;
volatile uint16_t x443 = 83U;
volatile uint32_t t84 = 399U;
int64_t x445 = -1LL;
volatile int32_t x446 = 30;
uint32_t x450 = UINT32_MAX;
int16_t x455 = 1;
static int16_t x458 = INT16_MIN;
int64_t x463 = -984902LL;
int8_t x465 = -1;
uint64_t x466 = UINT64_MAX;
int8_t x504 = -1;
static int16_t x513 = INT16_MIN;
volatile int8_t x515 = -1;
int32_t t96 = 0;
uint64_t x521 = 5158493884634LLU;
int16_t x524 = 3;


void f0(void) {
	int16_t x1 = -15851;
	volatile int32_t x2 = -12;
	int64_t x3 = -1LL;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -3;

	t0 = ((x1*x2)-(x3<x4));

	if (t0 != 190211) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x13 = 1843497734070903165LLU;
	int64_t x14 = -5732419922301LL;
	int32_t x15 = 2255;
	uint64_t t1 = 2806131664758606LLU;

	t1 = ((x13*x14)-(x15<x16));

	if (t1 != 14221038290955067638LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x22 = 20U;
	static uint8_t x23 = 9U;
	static volatile int16_t x24 = INT16_MIN;
	int64_t t2 = 14647054682595LL;

	t2 = ((x21*x22)-(x23<x24));

	if (t2 != 305208448524141460LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = 302;
	volatile uint8_t x35 = 0U;
	uint64_t x36 = UINT64_MAX;

	t3 = ((x33*x34)-(x35<x36));

	if (t3 != -303) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x41 = 3807;
	uint64_t x42 = 35536073666758421LLU;
	static int8_t x43 = INT8_MAX;
	int32_t x44 = 1;
	uint64_t t4 = 31177380544338592LLU;

	t4 = ((x41*x42)-(x43<x44));

	if (t4 != 6158623933382447435LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = -4619;
	uint8_t x46 = UINT8_MAX;

	t5 = ((x45*x46)-(x47<x48));

	if (t5 != -1177845) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = -81;
	static int64_t x51 = -11435003LL;
	int8_t x52 = INT8_MAX;
	static int32_t t6 = -22603;

	t6 = ((x49*x50)-(x51<x52));

	if (t6 != 3725) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x54 = 5;
	uint16_t x56 = 10U;
	volatile int32_t t7 = -215;

	t7 = ((x53*x54)-(x55<x56));

	if (t7 != 145639) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x61 = 460756691U;
	int32_t x62 = INT32_MIN;
	int16_t x63 = INT16_MIN;
	int16_t x64 = INT16_MAX;
	volatile uint32_t t8 = 58U;

	t8 = ((x61*x62)-(x63<x64));

	if (t8 != 2147483647U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x65 = 693U;
	static uint16_t x66 = UINT16_MAX;
	int32_t x67 = 1;

	t9 = ((x65*x66)-(x67<x68));

	if (t9 != 45415755) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = INT8_MAX;
	int16_t x70 = 7179;
	volatile int8_t x71 = -7;
	volatile uint16_t x72 = 32756U;
	int32_t t10 = 208490405;

	t10 = ((x69*x70)-(x71<x72));

	if (t10 != 911732) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x73 = 1;
	uint8_t x75 = UINT8_MAX;
	volatile int64_t t11 = INT64_MAX;

	t11 = ((x73*x74)-(x75<x76));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = -1;
	volatile int16_t x79 = -1;
	uint64_t x80 = UINT64_MAX;
	int32_t t12 = 121;

	t12 = ((x77*x78)-(x79<x80));

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x82 = INT8_MIN;
	int64_t x83 = 1802LL;
	static int32_t x84 = -21891;
	static volatile int32_t t13 = -612;

	t13 = ((x81*x82)-(x83<x84));

	if (t13 != -4194176) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x85 = UINT8_MAX;
	volatile int8_t x86 = INT8_MIN;
	uint16_t x87 = 4U;
	int64_t x88 = INT64_MIN;
	volatile int32_t t14 = 229;

	t14 = ((x85*x86)-(x87<x88));

	if (t14 != -32640) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x89 = INT8_MIN;
	uint64_t x90 = 102LLU;
	static uint8_t x91 = UINT8_MAX;
	static int16_t x92 = INT16_MIN;
	uint64_t t15 = 919695LLU;

	t15 = ((x89*x90)-(x91<x92));

	if (t15 != 18446744073709538560LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x93 = 2U;
	static int64_t x94 = 73804384415712873LL;
	volatile uint16_t x95 = UINT16_MAX;
	uint32_t x96 = 13U;
	volatile int64_t t16 = -295464820880032LL;

	t16 = ((x93*x94)-(x95<x96));

	if (t16 != 147608768831425746LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x101 = 12U;
	int64_t x102 = -1LL;
	static int8_t x103 = -1;

	t17 = ((x101*x102)-(x103<x104));

	if (t17 != -12LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x107 = UINT16_MAX;

	t18 = ((x105*x106)-(x107<x108));

	if (t18 != -48790451LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = -1;
	uint32_t x118 = 37266U;
	static uint32_t x119 = 3U;
	uint16_t x120 = UINT16_MAX;

	t19 = ((x117*x118)-(x119<x120));

	if (t19 != 4294930029U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x122 = UINT64_MAX;
	volatile int8_t x124 = INT8_MIN;
	static uint64_t t20 = 8025584669365875395LLU;

	t20 = ((x121*x122)-(x123<x124));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x127 = INT8_MIN;
	static volatile int8_t x128 = INT8_MIN;
	static volatile int64_t t21 = 180711623856428LL;

	t21 = ((x125*x126)-(x127<x128));

	if (t21 != 420759540493781520LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x129 = -1;
	volatile int64_t x130 = -246038079LL;
	int64_t x131 = 1354348796LL;
	volatile int64_t t22 = 6232923781050269LL;

	t22 = ((x129*x130)-(x131<x132));

	if (t22 != 246038079LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x133 = 46U;
	int8_t x134 = INT8_MAX;
	volatile uint16_t x135 = UINT16_MAX;
	static int64_t x136 = -4992412LL;

	t23 = ((x133*x134)-(x135<x136));

	if (t23 != 5842) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x137 = UINT16_MAX;
	int8_t x138 = INT8_MIN;
	uint32_t x139 = 63801U;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t24 = -1;

	t24 = ((x137*x138)-(x139<x140));

	if (t24 != -8388480) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = INT8_MIN;
	uint64_t x142 = 675LLU;
	int8_t x143 = INT8_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile uint64_t t25 = 99886491937155LLU;

	t25 = ((x141*x142)-(x143<x144));

	if (t25 != 18446744073709465215LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x146 = 1U;
	int8_t x147 = -3;
	int32_t t26 = 919747584;

	t26 = ((x145*x146)-(x147<x148));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x153 = INT16_MIN;
	int16_t x155 = -3;
	volatile int64_t x156 = 112167489058LL;
	static int32_t t27 = 0;

	t27 = ((x153*x154)-(x155<x156));

	if (t27 != 1073741823) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = 20500LL;
	static volatile uint64_t x159 = 0LLU;
	uint32_t x160 = UINT32_MAX;
	volatile int64_t t28 = -276135241950329LL;

	t28 = ((x157*x158)-(x159<x160));

	if (t28 != 2603499LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x161 = UINT32_MAX;
	static uint64_t x162 = 126550LLU;
	int32_t x163 = 163825;
	volatile uint64_t t29 = 3349312963070LLU;

	t29 = ((x161*x162)-(x163<x164));

	if (t29 != 543528111182250LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x166 = -1;
	int8_t x167 = INT8_MAX;
	uint16_t x168 = 220U;
	int32_t t30 = 1828829;

	t30 = ((x165*x166)-(x167<x168));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = INT16_MAX;
	uint64_t x170 = UINT64_MAX;
	static int32_t x171 = -1;
	int32_t x172 = INT32_MIN;
	static uint64_t t31 = 184953LLU;

	t31 = ((x169*x170)-(x171<x172));

	if (t31 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x174 = 178297LLU;
	static int64_t x175 = -1655466481LL;
	volatile uint64_t t32 = 27572617779LLU;

	t32 = ((x173*x174)-(x175<x176));

	if (t32 != 9550229902387LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x179 = -940LL;
	uint8_t x180 = 9U;
	int32_t t33 = 3704;

	t33 = ((x177*x178)-(x179<x180));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x181 = 45802LLU;
	uint64_t x182 = 14108LLU;
	int16_t x183 = INT16_MIN;
	int64_t x184 = -1LL;
	uint64_t t34 = 0LLU;

	t34 = ((x181*x182)-(x183<x184));

	if (t34 != 646174615LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x185 = -3694LL;
	volatile int32_t x186 = -1;
	int64_t x187 = INT64_MAX;
	int8_t x188 = 0;
	static volatile int64_t t35 = -563198713641647948LL;

	t35 = ((x185*x186)-(x187<x188));

	if (t35 != 3694LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = -395LL;
	uint32_t x190 = 29U;
	static int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MAX;
	int64_t t36 = -17468360042338855LL;

	t36 = ((x189*x190)-(x191<x192));

	if (t36 != -11456LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = 1;
	int8_t x198 = INT8_MAX;
	int64_t x199 = INT64_MAX;
	int16_t x200 = -1;
	static int32_t t37 = 33658;

	t37 = ((x197*x198)-(x199<x200));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x203 = 22;
	int64_t x204 = -1LL;
	volatile int64_t t38 = 1179042538562609LL;

	t38 = ((x201*x202)-(x203<x204));

	if (t38 != -2286948LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MAX;
	uint32_t x206 = 91411U;
	static uint8_t x207 = UINT8_MAX;
	static volatile int64_t x208 = INT64_MIN;

	t39 = ((x205*x206)-(x207<x208));

	if (t39 != 11609197U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x209 = UINT16_MAX;
	volatile uint16_t x211 = 1536U;
	volatile int32_t x212 = 37;
	int32_t t40 = -837427810;

	t40 = ((x209*x210)-(x211<x212));

	if (t40 != 16711425) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x213 = INT32_MAX;
	volatile uint64_t x214 = UINT64_MAX;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = 1U;
	volatile uint64_t t41 = 26216LLU;

	t41 = ((x213*x214)-(x215<x216));

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x218 = -1;
	int32_t x219 = INT32_MIN;
	int16_t x220 = 1952;

	t42 = ((x217*x218)-(x219<x220));

	if (t42 != 48150302) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x225 = 5365921355LLU;
	int16_t x226 = INT16_MIN;
	int8_t x227 = -9;
	volatile uint64_t t43 = 449647LLU;

	t43 = ((x225*x226)-(x227<x228));

	if (t43 != 18446568243198590976LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = 432;
	uint64_t x230 = 15202LLU;
	static int32_t x231 = INT32_MAX;
	static int8_t x232 = INT8_MIN;
	uint64_t t44 = 2221251039190989904LLU;

	t44 = ((x229*x230)-(x231<x232));

	if (t44 != 6567264LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = -5;
	int8_t x234 = -3;
	static uint8_t x235 = 4U;
	uint16_t x236 = 5U;

	t45 = ((x233*x234)-(x235<x236));

	if (t45 != 14) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x237 = INT8_MIN;
	static int8_t x240 = INT8_MIN;
	int32_t t46 = 1;

	t46 = ((x237*x238)-(x239<x240));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = 3430912LL;
	volatile uint16_t x242 = 62U;
	int8_t x243 = -1;
	int64_t x244 = -1LL;

	t47 = ((x241*x242)-(x243<x244));

	if (t47 != 212716544LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x245 = 8LL;
	volatile int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	int64_t x248 = 40378230LL;
	int64_t t48 = -15919074951109LL;

	t48 = ((x245*x246)-(x247<x248));

	if (t48 != -17179869185LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x249 = 1295762480796115159LLU;
	int8_t x250 = INT8_MIN;
	static int8_t x251 = INT8_MIN;
	int32_t x252 = 30078;

	t49 = ((x249*x250)-(x251<x252));

	if (t49 != 163099121483224191LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x253 = 2U;
	int32_t x254 = -6;
	int64_t x255 = INT64_MIN;
	static int16_t x256 = -1;
	int32_t t50 = 7374;

	t50 = ((x253*x254)-(x255<x256));

	if (t50 != -13) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x261 = 0;
	static int32_t x262 = INT32_MIN;
	int64_t x263 = -154435LL;
	static volatile int32_t t51 = -44263;

	t51 = ((x261*x262)-(x263<x264));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x265 = INT64_MAX;
	uint8_t x266 = 0U;
	int64_t x267 = -1LL;
	volatile int64_t x268 = INT64_MAX;

	t52 = ((x265*x266)-(x267<x268));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = INT8_MIN;
	uint32_t x270 = 161180407U;
	uint32_t x271 = UINT32_MAX;
	volatile uint32_t t53 = 124U;

	t53 = ((x269*x270)-(x271<x272));

	if (t53 != 843744384U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x285 = -4056719991LL;
	int64_t x287 = INT64_MAX;
	volatile int64_t t54 = 2185057471225020LL;

	t54 = ((x285*x286)-(x287<x288));

	if (t54 != 4056719991LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x292 = INT8_MAX;
	uint64_t t55 = 2806071492132064021LLU;

	t55 = ((x289*x290)-(x291<x292));

	if (t55 != 18435310967205625856LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x297 = 42U;
	static uint16_t x298 = 1778U;
	int16_t x299 = INT16_MIN;
	uint8_t x300 = 2U;
	volatile int32_t t56 = 0;

	t56 = ((x297*x298)-(x299<x300));

	if (t56 != 74675) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x305 = -1074952263804150LL;
	static int8_t x306 = INT8_MIN;
	int8_t x307 = 10;
	volatile int32_t x308 = INT32_MIN;

	t57 = ((x305*x306)-(x307<x308));

	if (t57 != 137593889766931200LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = -1;
	uint16_t x310 = 7U;
	static uint16_t x311 = 21U;
	int32_t x312 = INT32_MIN;

	t58 = ((x309*x310)-(x311<x312));

	if (t58 != -7) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x313 = -843162739272LL;
	static volatile uint64_t x315 = 459LLU;
	volatile uint16_t x316 = 26U;
	static int64_t t59 = -3LL;

	t59 = ((x313*x314)-(x315<x316));

	if (t59 != -3869273810519208LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x317 = 31004LLU;
	int64_t x318 = INT64_MIN;
	static int16_t x319 = -1;
	int32_t x320 = -1;

	t60 = ((x317*x318)-(x319<x320));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x321 = UINT16_MAX;
	static int16_t x323 = -1;
	int64_t x324 = INT64_MAX;
	static int64_t t61 = 1684607527LL;

	t61 = ((x321*x322)-(x323<x324));

	if (t61 != -65536LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x332 = -1;

	t62 = ((x329*x330)-(x331<x332));

	if (t62 != 60618472519276LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x333 = INT32_MIN;
	volatile int64_t x334 = 277690946LL;
	uint32_t x335 = 560772U;
	int8_t x336 = INT8_MIN;
	int64_t t63 = -454552759LL;

	t63 = ((x333*x334)-(x335<x336));

	if (t63 != -596336765732651009LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x337 = INT32_MAX;
	uint64_t x338 = 17899910608064LLU;
	volatile int16_t x339 = 1;
	uint64_t t64 = 343324272LLU;

	t64 = ((x337*x338)-(x339<x340));

	if (t64 != 15197408042270313280LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x341 = UINT8_MAX;
	volatile int64_t x343 = -1LL;
	uint32_t x344 = 69799105U;
	volatile uint32_t t65 = 1625U;

	t65 = ((x341*x342)-(x343<x344));

	if (t65 != 8339009U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x347 = INT16_MAX;
	uint8_t x348 = 1U;
	int32_t t66 = -3;

	t66 = ((x345*x346)-(x347<x348));

	if (t66 != 414976) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x349 = 23308U;
	int32_t x350 = -3943;
	int16_t x351 = INT16_MIN;
	int64_t x352 = 4LL;
	volatile int32_t t67 = -200199;

	t67 = ((x349*x350)-(x351<x352));

	if (t67 != -91903445) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x353 = 1881502518635LL;
	int16_t x354 = INT16_MIN;
	int16_t x355 = -1;
	uint8_t x356 = UINT8_MAX;
	int64_t t68 = -110129LL;

	t68 = ((x353*x354)-(x355<x356));

	if (t68 != -61653074530631681LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x357 = 29LLU;
	int32_t x358 = INT32_MIN;
	volatile uint8_t x359 = UINT8_MAX;
	uint8_t x360 = 3U;

	t69 = ((x357*x358)-(x359<x360));

	if (t69 != 18446744011432525824LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x361 = 1837505U;
	volatile uint32_t t70 = 5203U;

	t70 = ((x361*x362)-(x363<x364));

	if (t70 != 363825990U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x365 = -159636;
	static int64_t x368 = INT64_MAX;
	uint32_t t71 = 4U;

	t71 = ((x365*x366)-(x367<x368));

	if (t71 != 4294488387U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x369 = INT8_MIN;
	int64_t x370 = -4803726047373028LL;
	int8_t x371 = INT8_MIN;
	int64_t x372 = -1LL;
	volatile int64_t t72 = 525LL;

	t72 = ((x369*x370)-(x371<x372));

	if (t72 != 614876934063747583LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x373 = -1;
	int16_t x374 = INT16_MAX;
	int64_t x375 = INT64_MAX;
	uint8_t x376 = 1U;
	int32_t t73 = -13429;

	t73 = ((x373*x374)-(x375<x376));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x381 = -22292985;
	uint64_t x382 = 681784143776352LLU;
	volatile int8_t x383 = INT8_MIN;
	uint32_t x384 = 4U;

	t74 = ((x381*x382)-(x383<x384));

	if (t74 != 1113426292612040864LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x386 = -20;
	volatile int32_t t75 = -30869601;

	t75 = ((x385*x386)-(x387<x388));

	if (t75 != 140343120) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x393 = UINT64_MAX;
	uint16_t x394 = 11U;
	static int32_t x395 = -8835203;
	static uint16_t x396 = UINT16_MAX;

	t76 = ((x393*x394)-(x395<x396));

	if (t76 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x397 = 58U;
	int32_t x398 = 6043;
	volatile uint8_t x399 = UINT8_MAX;
	int64_t x400 = -1LL;
	volatile int32_t t77 = -1338389;

	t77 = ((x397*x398)-(x399<x400));

	if (t77 != 350494) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x410 = 943125849LLU;
	int16_t x411 = INT16_MIN;
	static uint16_t x412 = UINT16_MAX;
	static volatile uint64_t t78 = 88421561127827169LLU;

	t78 = ((x409*x410)-(x411<x412));

	if (t78 != 18446713169361731583LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x413 = -4088594;
	uint16_t x414 = 249U;
	uint32_t x415 = 30856U;
	volatile int32_t t79 = -30647;

	t79 = ((x413*x414)-(x415<x416));

	if (t79 != -1018059906) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x417 = 71U;
	int16_t x418 = INT16_MIN;
	int64_t x419 = INT64_MAX;
	uint32_t t80 = 1607137676U;

	t80 = ((x417*x418)-(x419<x420));

	if (t80 != 4292640768U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x430 = -5;
	static uint8_t x431 = 95U;
	int32_t t81 = 56360;

	t81 = ((x429*x430)-(x431<x432));

	if (t81 != -327676) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x434 = 722987368U;
	int8_t x436 = INT8_MAX;
	volatile uint32_t t82 = 57907733U;

	t82 = ((x433*x434)-(x435<x436));

	if (t82 != 765944279U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x437 = UINT64_MAX;
	int16_t x438 = -1;
	static uint64_t x439 = 2129254996147LLU;
	uint32_t x440 = 9355U;
	uint64_t t83 = 24LLU;

	t83 = ((x437*x438)-(x439<x440));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x441 = 392465277U;
	int16_t x442 = -1;
	static uint8_t x444 = 1U;

	t84 = ((x441*x442)-(x443<x444));

	if (t84 != 3902502019U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x447 = 7584U;
	int32_t x448 = -1;
	static volatile int64_t t85 = -3560877292211299LL;

	t85 = ((x445*x446)-(x447<x448));

	if (t85 != -30LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x449 = INT16_MAX;
	uint64_t x451 = 46192682302560LLU;
	int16_t x452 = -1;
	volatile uint32_t t86 = 8082093U;

	t86 = ((x449*x450)-(x451<x452));

	if (t86 != 4294934528U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x453 = 385U;
	int64_t x454 = -1LL;
	int64_t x456 = -64051580LL;
	int64_t t87 = 0LL;

	t87 = ((x453*x454)-(x455<x456));

	if (t87 != -385LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x457 = INT16_MAX;
	volatile int64_t x459 = INT64_MIN;
	int64_t x460 = -7965870213LL;
	volatile int32_t t88 = 19667406;

	t88 = ((x457*x458)-(x459<x460));

	if (t88 != -1073709057) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x461 = 2;
	uint16_t x462 = 9U;
	int16_t x464 = INT16_MIN;
	volatile int32_t t89 = 222;

	t89 = ((x461*x462)-(x463<x464));

	if (t89 != 17) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x467 = UINT64_MAX;
	uint64_t x468 = 223377727418LLU;
	volatile uint64_t t90 = 770LLU;

	t90 = ((x465*x466)-(x467<x468));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x485 = UINT32_MAX;
	uint16_t x486 = UINT16_MAX;
	uint64_t x487 = 531306163LLU;
	uint64_t x488 = 62800747LLU;
	volatile uint32_t t91 = 84238949U;

	t91 = ((x485*x486)-(x487<x488));

	if (t91 != 4294901761U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x493 = -1;
	uint8_t x494 = UINT8_MAX;
	volatile int16_t x495 = -1;
	uint32_t x496 = UINT32_MAX;
	int32_t t92 = -67257;

	t92 = ((x493*x494)-(x495<x496));

	if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x501 = INT16_MAX;
	static int16_t x502 = -1;
	static int8_t x503 = INT8_MIN;
	volatile int32_t t93 = -590;

	t93 = ((x501*x502)-(x503<x504));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x505 = INT8_MAX;
	int32_t x506 = -91099;
	static int32_t x507 = INT32_MAX;
	uint8_t x508 = UINT8_MAX;
	static volatile int32_t t94 = -162047190;

	t94 = ((x505*x506)-(x507<x508));

	if (t94 != -11569573) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x509 = INT16_MIN;
	int16_t x510 = INT16_MAX;
	volatile int64_t x511 = INT64_MIN;
	int64_t x512 = 8118972LL;
	int32_t t95 = -122;

	t95 = ((x509*x510)-(x511<x512));

	if (t95 != -1073709057) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x514 = -1300;
	static uint32_t x516 = 51827129U;

	t96 = ((x513*x514)-(x515<x516));

	if (t96 != 42598400) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x517 = -1LL;
	volatile int8_t x518 = INT8_MAX;
	volatile int64_t x519 = INT64_MIN;
	int32_t x520 = INT32_MIN;
	volatile int64_t t97 = -4884537924LL;

	t97 = ((x517*x518)-(x519<x520));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x522 = INT8_MIN;
	int16_t x523 = INT16_MAX;
	uint64_t t98 = 25558919746322033LLU;

	t98 = ((x521*x522)-(x523<x524));

	if (t98 != 18446083786492318464LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x529 = 0U;
	int64_t x530 = -1LL;
	uint64_t x531 = 9938982322059LLU;
	uint32_t x532 = UINT32_MAX;
	volatile int64_t t99 = -11019142952937LL;

	t99 = ((x529*x530)-(x531<x532));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

