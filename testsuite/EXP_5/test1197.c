#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x15 = -1;
uint64_t t1 = 80368576093030040LLU;
volatile int8_t x19 = -1;
int16_t x21 = INT16_MIN;
static uint64_t x23 = 12156376LLU;
int64_t x24 = -1LL;
volatile int32_t t4 = -62366860;
volatile int8_t x29 = -28;
uint64_t x40 = 42997LLU;
volatile int32_t x44 = 387;
int16_t x48 = -12720;
volatile int64_t t8 = -987704498LL;
volatile int32_t x55 = -10;
static int8_t x57 = -1;
volatile uint16_t x70 = 33U;
int8_t x73 = -1;
volatile uint32_t x93 = UINT32_MAX;
volatile int16_t x94 = INT16_MAX;
static uint32_t x106 = UINT32_MAX;
int32_t x107 = INT32_MIN;
volatile int32_t t22 = 0;
int16_t x131 = INT16_MIN;
volatile uint32_t t24 = 4U;
int8_t x145 = 16;
int32_t x147 = INT32_MAX;
static int32_t t26 = -20;
volatile int8_t x155 = 1;
uint32_t x157 = 407U;
uint32_t t28 = 8U;
int16_t x164 = INT16_MIN;
uint16_t x165 = 12217U;
static volatile int32_t x171 = INT32_MIN;
uint8_t x174 = UINT8_MAX;
int8_t x186 = -1;
int64_t x188 = -71137687904483605LL;
static int64_t x201 = -1LL;
volatile int32_t x227 = 11763732;
volatile uint32_t t42 = 193214385U;
uint32_t t44 = 1U;
volatile int64_t t45 = -2LL;
uint16_t x253 = 28U;
uint64_t x257 = UINT64_MAX;
volatile int32_t x265 = INT32_MIN;
uint64_t t51 = 272398111167325LLU;
uint8_t x270 = 28U;
volatile uint32_t t52 = 31942179U;
uint64_t x273 = UINT64_MAX;
int64_t x278 = INT64_MIN;
static uint32_t x280 = UINT32_MAX;
int16_t x284 = INT16_MAX;
volatile int32_t t55 = 106614;
int32_t t56 = -5504;
uint32_t x293 = UINT32_MAX;
uint32_t t58 = 45529U;
static volatile int16_t x297 = INT16_MIN;
volatile int8_t x303 = INT8_MIN;
int8_t x306 = INT8_MAX;
uint16_t x308 = 6691U;
static volatile int32_t t64 = -3078;
static int64_t x336 = -16409235LL;
int64_t x342 = 762336LL;
uint8_t x346 = 0U;
static int16_t x351 = INT16_MIN;
int8_t x357 = -1;
uint64_t x358 = 31LLU;
int64_t x360 = -1LL;
static volatile int64_t x362 = INT64_MIN;
static int32_t t73 = 1;
int8_t x373 = -58;
uint16_t x374 = UINT16_MAX;
int32_t x375 = -9975;
uint16_t x378 = 213U;
int64_t x379 = INT64_MIN;
static volatile int64_t t77 = 1LL;
int8_t x387 = INT8_MIN;
static int16_t x390 = INT16_MIN;
volatile int32_t x391 = -31;
volatile uint64_t t79 = 1921LLU;
volatile uint64_t x401 = 9LLU;
static int8_t x404 = -3;
int64_t x410 = INT64_MIN;
int16_t x412 = 103;
static int64_t x414 = INT64_MAX;
static volatile int32_t t84 = 1;
int16_t x437 = -1016;
static volatile int32_t t87 = 39059890;
int64_t x448 = INT64_MAX;
uint16_t x451 = 7824U;
static int32_t x453 = -157125726;
static volatile int32_t t92 = 379390;
uint8_t x467 = UINT8_MAX;
volatile int32_t t94 = -6465041;
static uint16_t x474 = 1U;
static int32_t x479 = INT32_MAX;
static volatile uint16_t x490 = 3249U;
int64_t t99 = -5LL;


void f0(void) {
	int32_t x9 = -1;
	static volatile uint64_t x10 = UINT64_MAX;
	volatile int64_t x11 = 24536895LL;
	uint16_t x12 = UINT16_MAX;
	int32_t t0 = -5372661;

	t0 = (x9+((x10==x11)-x12));

	if (t0 != -65536) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x13 = 8865864280LLU;
	uint32_t x14 = 8140588U;
	int32_t x16 = -1;

	t1 = (x13+((x14==x15)-x16));

	if (t1 != 8865864281LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x17 = INT32_MIN;
	int64_t x18 = -1LL;
	int8_t x20 = INT8_MIN;
	volatile int32_t t2 = 2;

	t2 = (x17+((x18==x19)-x20));

	if (t2 != -2147483519) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x22 = UINT32_MAX;
	static volatile int64_t t3 = 350738569800957637LL;

	t3 = (x21+((x22==x23)-x24));

	if (t3 != -32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	static volatile int16_t x26 = -1;
	int8_t x27 = INT8_MIN;
	uint16_t x28 = UINT16_MAX;

	t4 = (x25+((x26==x27)-x28));

	if (t4 != -98303) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x30 = -1;
	int16_t x31 = INT16_MIN;
	volatile uint16_t x32 = 57U;
	volatile int32_t t5 = 183637035;

	t5 = (x29+((x30==x31)-x32));

	if (t5 != -85) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x37 = INT32_MAX;
	volatile uint16_t x38 = 3412U;
	static int32_t x39 = INT32_MIN;
	uint64_t t6 = 3432225LLU;

	t6 = (x37+((x38==x39)-x40));

	if (t6 != 2147440650LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 0U;
	int16_t x42 = INT16_MAX;
	static int16_t x43 = INT16_MIN;
	volatile int32_t t7 = -6;

	t7 = (x41+((x42==x43)-x44));

	if (t7 != -387) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -3627151084LL;
	volatile int32_t x46 = INT32_MAX;
	volatile int8_t x47 = -18;

	t8 = (x45+((x46==x47)-x48));

	if (t8 != -3627138364LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -6;
	volatile int8_t x50 = 0;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -1;
	volatile int32_t t9 = -462;

	t9 = (x49+((x50==x51)-x52));

	if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x53 = 2951LL;
	int16_t x54 = 466;
	int16_t x56 = INT16_MIN;
	volatile int64_t t10 = 14LL;

	t10 = (x53+((x54==x55)-x56));

	if (t10 != 35719LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = -1996;
	int32_t x59 = 5720679;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t11 = 4306311642701LLU;

	t11 = (x57+((x58==x59)-x60));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = -1;
	uint8_t x62 = 25U;
	uint16_t x63 = 16090U;
	int8_t x64 = -40;
	static volatile int32_t t12 = 720781;

	t12 = (x61+((x62==x63)-x64));

	if (t12 != 39) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 8475082585824456997LLU;
	int8_t x66 = INT8_MIN;
	volatile int16_t x67 = -1;
	static uint64_t x68 = UINT64_MAX;
	uint64_t t13 = 26541068037LLU;

	t13 = (x65+((x66==x67)-x68));

	if (t13 != 8475082585824456998LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -1;
	static uint64_t x71 = 109LLU;
	int8_t x72 = INT8_MIN;
	volatile int32_t t14 = -103;

	t14 = (x69+((x70==x71)-x72));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = INT8_MIN;
	int64_t x75 = -17080LL;
	volatile int64_t x76 = INT64_MAX;
	int64_t t15 = INT64_MIN;

	t15 = (x73+((x74==x75)-x76));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -10693138;
	volatile int8_t x78 = INT8_MAX;
	int64_t x79 = 702869708828956LL;
	uint16_t x80 = UINT16_MAX;
	int32_t t16 = -43317462;

	t16 = (x77+((x78==x79)-x80));

	if (t16 != -10758673) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x85 = 224182;
	uint8_t x86 = UINT8_MAX;
	uint32_t x87 = UINT32_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t17 = -20;

	t17 = (x85+((x86==x87)-x88));

	if (t17 != 224310) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -1;
	int32_t x90 = -264453329;
	int32_t x91 = INT32_MIN;
	int64_t x92 = -7119910734LL;
	volatile int64_t t18 = 233587LL;

	t18 = (x89+((x90==x91)-x92));

	if (t18 != 7119910733LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x95 = INT8_MAX;
	int64_t x96 = INT64_MAX;
	volatile int64_t t19 = 1582803LL;

	t19 = (x93+((x94==x95)-x96));

	if (t19 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x108 = -1;
	volatile uint64_t t20 = 26LLU;

	t20 = (x105+((x106==x107)-x108));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = 722582332849LLU;
	int16_t x114 = 10690;
	int32_t x115 = INT32_MAX;
	int64_t x116 = -1LL;
	static volatile uint64_t t21 = 338978LLU;

	t21 = (x113+((x114==x115)-x116));

	if (t21 != 722582332850LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MAX;
	int32_t x123 = 1116214;
	uint8_t x124 = UINT8_MAX;

	t22 = (x121+((x122==x123)-x124));

	if (t22 != -383) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x125 = -36571LL;
	uint16_t x126 = 2701U;
	int8_t x127 = INT8_MAX;
	int8_t x128 = INT8_MIN;
	volatile int64_t t23 = -31922481373511388LL;

	t23 = (x125+((x126==x127)-x128));

	if (t23 != -36443LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x129 = INT8_MIN;
	volatile int16_t x130 = INT16_MIN;
	uint32_t x132 = 26U;

	t24 = (x129+((x130==x131)-x132));

	if (t24 != 4294967143U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = INT32_MIN;
	volatile int64_t x138 = -1LL;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = -57;
	volatile int32_t t25 = -3239004;

	t25 = (x137+((x138==x139)-x140));

	if (t25 != -2147483591) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x146 = INT32_MIN;
	volatile uint16_t x148 = 106U;

	t26 = (x145+((x146==x147)-x148));

	if (t26 != -90) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x153 = 28432891554730823LLU;
	static uint16_t x154 = 1024U;
	int16_t x156 = -1;
	uint64_t t27 = 325811LLU;

	t27 = (x153+((x154==x155)-x156));

	if (t27 != 28432891554730824LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x158 = INT32_MIN;
	static int8_t x159 = INT8_MIN;
	uint32_t x160 = 162U;

	t28 = (x157+((x158==x159)-x160));

	if (t28 != 245U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x161 = -1;
	int64_t x162 = INT64_MIN;
	volatile int16_t x163 = INT16_MIN;
	volatile int32_t t29 = -3804;

	t29 = (x161+((x162==x163)-x164));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x166 = -9;
	int64_t x167 = -15LL;
	int64_t x168 = -15614118292401398LL;
	static int64_t t30 = -566LL;

	t30 = (x165+((x166==x167)-x168));

	if (t30 != 15614118292413615LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x169 = 2033968U;
	int16_t x170 = INT16_MIN;
	uint16_t x172 = 4U;
	volatile uint32_t t31 = 1207U;

	t31 = (x169+((x170==x171)-x172));

	if (t31 != 2033964U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x173 = 1;
	uint64_t x175 = 73979694259LLU;
	int32_t x176 = 21225400;
	int32_t t32 = 1;

	t32 = (x173+((x174==x175)-x176));

	if (t32 != -21225399) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = 653;
	uint16_t x187 = 20412U;
	int64_t t33 = -106652638LL;

	t33 = (x185+((x186==x187)-x188));

	if (t33 != 71137687904484258LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x189 = UINT64_MAX;
	int32_t x190 = -1;
	static int16_t x191 = INT16_MAX;
	static int32_t x192 = -437277649;
	static volatile uint64_t t34 = 4816365728833145LLU;

	t34 = (x189+((x190==x191)-x192));

	if (t34 != 437277648LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x197 = -1;
	int32_t x198 = -1;
	uint32_t x199 = 213U;
	int8_t x200 = 1;
	int32_t t35 = -13510;

	t35 = (x197+((x198==x199)-x200));

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x202 = 1744U;
	uint8_t x203 = 32U;
	int16_t x204 = 0;
	volatile int64_t t36 = 122536LL;

	t36 = (x201+((x202==x203)-x204));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x205 = 2U;
	int8_t x206 = -1;
	volatile uint32_t x207 = 14421U;
	int8_t x208 = INT8_MIN;
	uint32_t t37 = 0U;

	t37 = (x205+((x206==x207)-x208));

	if (t37 != 130U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x209 = 1262932028U;
	static uint8_t x210 = 3U;
	int32_t x211 = -1179;
	int32_t x212 = -1;
	volatile uint32_t t38 = 66402760U;

	t38 = (x209+((x210==x211)-x212));

	if (t38 != 1262932029U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x213 = 54;
	static uint8_t x214 = 0U;
	static volatile int8_t x215 = 2;
	volatile uint32_t x216 = 78446296U;
	static uint32_t t39 = 480U;

	t39 = (x213+((x214==x215)-x216));

	if (t39 != 4216521054U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x217 = 2U;
	uint8_t x218 = UINT8_MAX;
	volatile int32_t x219 = INT32_MIN;
	volatile int8_t x220 = INT8_MAX;
	volatile uint32_t t40 = 242U;

	t40 = (x217+((x218==x219)-x220));

	if (t40 != 4294967171U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x221 = UINT32_MAX;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = INT32_MIN;
	int32_t x224 = INT32_MAX;
	uint32_t t41 = 12347U;

	t41 = (x221+((x222==x223)-x224));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x225 = 29180U;
	uint64_t x226 = UINT64_MAX;
	volatile int32_t x228 = 25;

	t42 = (x225+((x226==x227)-x228));

	if (t42 != 29155U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x229 = 46LLU;
	static uint64_t x230 = UINT64_MAX;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	volatile uint64_t t43 = 3520890808LLU;

	t43 = (x229+((x230==x231)-x232));

	if (t43 != 32814LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x233 = -1847442;
	int16_t x234 = INT16_MIN;
	uint64_t x235 = UINT64_MAX;
	uint32_t x236 = 48387U;

	t44 = (x233+((x234==x235)-x236));

	if (t44 != 4293071467U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x237 = 391177078LL;
	int32_t x238 = INT32_MIN;
	uint32_t x239 = 87590U;
	static int64_t x240 = 480LL;

	t45 = (x237+((x238==x239)-x240));

	if (t45 != 391176598LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x245 = INT32_MIN;
	static int32_t x246 = INT32_MAX;
	uint8_t x247 = UINT8_MAX;
	int64_t x248 = -5609LL;
	int64_t t46 = -13417393LL;

	t46 = (x245+((x246==x247)-x248));

	if (t46 != -2147478039LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x249 = -199;
	int16_t x250 = INT16_MIN;
	int16_t x251 = 1;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t47 = 7;

	t47 = (x249+((x250==x251)-x252));

	if (t47 != -454) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x254 = 13;
	uint16_t x255 = 11651U;
	volatile uint32_t x256 = 25U;
	uint32_t t48 = 796071932U;

	t48 = (x253+((x254==x255)-x256));

	if (t48 != 3U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x258 = INT8_MIN;
	int64_t x259 = -1LL;
	int8_t x260 = INT8_MIN;
	volatile uint64_t t49 = 54876732LLU;

	t49 = (x257+((x258==x259)-x260));

	if (t49 != 127LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x261 = 231195U;
	int8_t x262 = INT8_MIN;
	int64_t x263 = -1LL;
	uint8_t x264 = 7U;
	uint32_t t50 = 14216U;

	t50 = (x261+((x262==x263)-x264));

	if (t50 != 231188U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x266 = 17U;
	volatile uint8_t x267 = 9U;
	volatile uint64_t x268 = 1688176487264903810LLU;

	t51 = (x265+((x266==x267)-x268));

	if (t51 != 16758567584297164158LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x269 = 25;
	uint32_t x271 = UINT32_MAX;
	uint32_t x272 = 20743768U;

	t52 = (x269+((x270==x271)-x272));

	if (t52 != 4274223553U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x274 = INT32_MIN;
	uint16_t x275 = 32756U;
	volatile int8_t x276 = INT8_MAX;
	volatile uint64_t t53 = 176148604LLU;

	t53 = (x273+((x274==x275)-x276));

	if (t53 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = 85;
	volatile int8_t x279 = 9;
	volatile uint32_t t54 = 725U;

	t54 = (x277+((x278==x279)-x280));

	if (t54 != 86U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x281 = 0U;
	static int8_t x282 = -1;
	int16_t x283 = INT16_MIN;

	t55 = (x281+((x282==x283)-x284));

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MIN;
	int64_t x287 = -1LL;
	int16_t x288 = -1;

	t56 = (x285+((x286==x287)-x288));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x289 = -6611LL;
	static volatile int16_t x290 = -1;
	static volatile uint64_t x291 = UINT64_MAX;
	int64_t x292 = -1LL;
	volatile int64_t t57 = 77930708LL;

	t57 = (x289+((x290==x291)-x292));

	if (t57 != -6609LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x294 = 328U;
	uint8_t x295 = 34U;
	uint32_t x296 = UINT32_MAX;

	t58 = (x293+((x294==x295)-x296));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x298 = 0U;
	volatile uint16_t x299 = UINT16_MAX;
	static volatile uint8_t x300 = 0U;
	int32_t t59 = 176704;

	t59 = (x297+((x298==x299)-x300));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x301 = 9U;
	static int8_t x302 = -1;
	int16_t x304 = -1;
	static volatile int32_t t60 = 9;

	t60 = (x301+((x302==x303)-x304));

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x305 = -1LL;
	volatile int64_t x307 = -1LL;
	volatile int64_t t61 = 35786LL;

	t61 = (x305+((x306==x307)-x308));

	if (t61 != -6692LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x309 = -1LL;
	int32_t x310 = INT32_MIN;
	int8_t x311 = -1;
	volatile int16_t x312 = -13;
	static volatile int64_t t62 = -26LL;

	t62 = (x309+((x310==x311)-x312));

	if (t62 != 12LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x313 = -1LL;
	static int16_t x314 = -3;
	volatile uint64_t x315 = 2880085896LLU;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t63 = 15LLU;

	t63 = (x313+((x314==x315)-x316));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x321 = 11;
	int32_t x322 = INT32_MIN;
	int8_t x323 = 1;
	int8_t x324 = INT8_MIN;

	t64 = (x321+((x322==x323)-x324));

	if (t64 != 139) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x325 = -1;
	uint8_t x326 = 5U;
	static uint64_t x327 = 451711166LLU;
	int16_t x328 = INT16_MIN;
	int32_t t65 = 2;

	t65 = (x325+((x326==x327)-x328));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = INT32_MAX;
	int64_t x334 = INT64_MAX;
	int64_t x335 = -1338254319289334LL;
	static volatile int64_t t66 = 1LL;

	t66 = (x333+((x334==x335)-x336));

	if (t66 != 2163892882LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x337 = UINT8_MAX;
	int64_t x338 = INT64_MAX;
	volatile uint16_t x339 = 14U;
	int32_t x340 = INT32_MAX;
	int32_t t67 = -9751;

	t67 = (x337+((x338==x339)-x340));

	if (t67 != -2147483392) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x341 = -3;
	static int64_t x343 = INT64_MIN;
	static volatile uint8_t x344 = 50U;
	static volatile int32_t t68 = 1306;

	t68 = (x341+((x342==x343)-x344));

	if (t68 != -53) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x345 = UINT16_MAX;
	int8_t x347 = INT8_MIN;
	uint32_t x348 = 216473U;
	volatile uint32_t t69 = 221982954U;

	t69 = (x345+((x346==x347)-x348));

	if (t69 != 4294816358U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x349 = INT16_MAX;
	int8_t x350 = 1;
	uint32_t x352 = 2071038U;
	uint32_t t70 = 10U;

	t70 = (x349+((x350==x351)-x352));

	if (t70 != 4292929025U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x359 = UINT32_MAX;
	int64_t t71 = 4476615838LL;

	t71 = (x357+((x358==x359)-x360));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x361 = 0U;
	int32_t x363 = INT32_MIN;
	uint8_t x364 = UINT8_MAX;
	int32_t t72 = 2404839;

	t72 = (x361+((x362==x363)-x364));

	if (t72 != -255) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x365 = INT8_MAX;
	static volatile uint32_t x366 = 102985255U;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;

	t73 = (x365+((x366==x367)-x368));

	if (t73 != 32895) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = 1249331376317LL;
	int16_t x370 = -1;
	volatile uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MAX;
	int64_t t74 = 6LL;

	t74 = (x369+((x370==x371)-x372));

	if (t74 != 1249331376190LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x376 = UINT64_MAX;
	volatile uint64_t t75 = 3021271LLU;

	t75 = (x373+((x374==x375)-x376));

	if (t75 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x377 = 0;
	int8_t x380 = 0;
	static volatile int32_t t76 = 15;

	t76 = (x377+((x378==x379)-x380));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x381 = 0LL;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = 103321U;
	int16_t x384 = INT16_MIN;

	t77 = (x381+((x382==x383)-x384));

	if (t77 != 32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x385 = -1;
	uint64_t x386 = 0LLU;
	volatile uint8_t x388 = 28U;
	volatile int32_t t78 = -202979;

	t78 = (x385+((x386==x387)-x388));

	if (t78 != -29) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x389 = UINT64_MAX;
	volatile int8_t x392 = INT8_MIN;

	t79 = (x389+((x390==x391)-x392));

	if (t79 != 127LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x393 = 1055U;
	int8_t x394 = 0;
	int8_t x395 = -1;
	uint8_t x396 = UINT8_MAX;
	uint32_t t80 = 940U;

	t80 = (x393+((x394==x395)-x396));

	if (t80 != 800U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = -1LL;
	uint32_t x398 = 3907818U;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 4U;
	volatile int64_t t81 = 29459645LL;

	t81 = (x397+((x398==x399)-x400));

	if (t81 != -5LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x402 = -59542602219854977LL;
	int8_t x403 = -49;
	uint64_t t82 = 1071520LLU;

	t82 = (x401+((x402==x403)-x404));

	if (t82 != 12LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x409 = 783U;
	static volatile int64_t x411 = INT64_MAX;
	int32_t t83 = -51;

	t83 = (x409+((x410==x411)-x412));

	if (t83 != 680) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x413 = 26U;
	int8_t x415 = -1;
	static int8_t x416 = INT8_MIN;

	t84 = (x413+((x414==x415)-x416));

	if (t84 != 154) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x421 = UINT16_MAX;
	int64_t x422 = INT64_MAX;
	volatile int32_t x423 = 969949026;
	int32_t x424 = 11;
	static volatile int32_t t85 = -1;

	t85 = (x421+((x422==x423)-x424));

	if (t85 != 65524) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x433 = INT16_MAX;
	int16_t x434 = INT16_MIN;
	volatile uint16_t x435 = UINT16_MAX;
	int16_t x436 = INT16_MIN;
	volatile int32_t t86 = 0;

	t86 = (x433+((x434==x435)-x436));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x438 = INT64_MAX;
	uint64_t x439 = 3297LLU;
	volatile int8_t x440 = INT8_MIN;

	t87 = (x437+((x438==x439)-x440));

	if (t87 != -888) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x441 = 2;
	int64_t x442 = -4352281863646LL;
	uint8_t x443 = 3U;
	volatile int64_t x444 = -626LL;
	volatile int64_t t88 = 15968272LL;

	t88 = (x441+((x442==x443)-x444));

	if (t88 != 628LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x445 = INT32_MAX;
	int64_t x446 = 218094345LL;
	volatile int8_t x447 = INT8_MIN;
	volatile int64_t t89 = 3125983536LL;

	t89 = (x445+((x446==x447)-x448));

	if (t89 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x449 = -1;
	volatile int64_t x450 = 240481LL;
	static volatile int8_t x452 = INT8_MIN;
	static volatile int32_t t90 = -330460;

	t90 = (x449+((x450==x451)-x452));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x454 = -61;
	int32_t x455 = -38860805;
	volatile int8_t x456 = INT8_MIN;
	volatile int32_t t91 = -4108149;

	t91 = (x453+((x454==x455)-x456));

	if (t91 != -157125598) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x461 = -1;
	int32_t x462 = INT32_MIN;
	int8_t x463 = 45;
	int16_t x464 = INT16_MIN;

	t92 = (x461+((x462==x463)-x464));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x465 = -631789275;
	int32_t x466 = -1420;
	static int64_t x468 = 0LL;
	volatile int64_t t93 = 6LL;

	t93 = (x465+((x466==x467)-x468));

	if (t93 != -631789275LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x469 = 24080852;
	int16_t x470 = 5541;
	int64_t x471 = INT64_MIN;
	volatile int32_t x472 = -1;

	t94 = (x469+((x470==x471)-x472));

	if (t94 != 24080853) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x473 = 19503088007413063LLU;
	int32_t x475 = 21;
	uint16_t x476 = UINT16_MAX;
	uint64_t t95 = 147889110527168LLU;

	t95 = (x473+((x474==x475)-x476));

	if (t95 != 19503088007347528LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x477 = 545852826;
	uint64_t x478 = 7543176618899LLU;
	int8_t x480 = -1;
	volatile int32_t t96 = -94250;

	t96 = (x477+((x478==x479)-x480));

	if (t96 != 545852827) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x481 = -1;
	uint32_t x482 = 25U;
	int8_t x483 = 6;
	int16_t x484 = INT16_MIN;
	volatile int32_t t97 = -972415;

	t97 = (x481+((x482==x483)-x484));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x485 = INT16_MIN;
	volatile uint16_t x486 = 113U;
	volatile int16_t x487 = INT16_MIN;
	uint8_t x488 = 24U;
	static volatile int32_t t98 = 7870;

	t98 = (x485+((x486==x487)-x488));

	if (t98 != -32792) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x489 = -475891181515161147LL;
	volatile int32_t x491 = INT32_MIN;
	uint32_t x492 = 67279U;

	t99 = (x489+((x490==x491)-x492));

	if (t99 != -475891177220261130LL) { NG(); } else { ; }
	
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

