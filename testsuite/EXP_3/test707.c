#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x17 = 111U;
uint32_t t1 = 177049659U;
static int64_t x22 = 113649493673287109LL;
volatile int64_t x29 = 336LL;
static int8_t x43 = INT8_MIN;
volatile int16_t x49 = INT16_MIN;
uint16_t x52 = 45U;
static uint16_t x62 = 14U;
static int64_t x63 = -16789366387LL;
static int64_t x68 = INT64_MAX;
volatile int64_t t9 = -2065233LL;
int32_t x71 = -1;
uint16_t x81 = 0U;
int8_t x94 = 0;
volatile int64_t t12 = 1LL;
uint64_t x111 = UINT64_MAX;
int8_t x114 = -1;
int32_t x125 = 146582320;
int16_t x127 = -1;
uint64_t x147 = 47516143248LLU;
int32_t x153 = -1301;
uint8_t x154 = 2U;
int32_t x167 = INT32_MAX;
static uint64_t x168 = 2081646863450151239LLU;
uint64_t t21 = 909995784LLU;
static volatile int64_t x186 = INT64_MIN;
static int64_t x210 = -1LL;
static volatile uint32_t x214 = UINT32_MAX;
volatile int64_t t25 = -257977LL;
static uint64_t x218 = 3992846LLU;
int16_t x219 = 1;
volatile uint8_t x222 = UINT8_MAX;
int32_t x243 = -1;
uint8_t x244 = 48U;
int32_t x252 = 54;
uint32_t x289 = UINT32_MAX;
uint32_t x296 = 10U;
int64_t t39 = -24202909LL;
uint32_t x333 = UINT32_MAX;
int8_t x335 = INT8_MIN;
static uint64_t x336 = 103997LLU;
static uint64_t t41 = 8197209LLU;
int8_t x344 = -1;
int32_t x363 = -43961;
int16_t x364 = INT16_MAX;
static volatile int8_t x380 = INT8_MAX;
uint64_t x391 = 1190937844LLU;
volatile uint64_t t48 = 3LLU;
int8_t x395 = INT8_MIN;
int32_t t49 = -24;
uint64_t x404 = 3357250497LLU;
int64_t x416 = -28705587LL;
int64_t t52 = 1255234721LL;
int8_t x425 = -1;
int16_t x426 = INT16_MIN;
uint32_t x427 = 16U;
int64_t t56 = -8711511LL;
uint8_t x441 = UINT8_MAX;
int64_t x444 = INT64_MAX;
uint8_t x470 = 14U;
static volatile uint64_t x471 = 2036LLU;
uint16_t x472 = 27708U;
volatile int32_t t60 = -10543;
static int64_t x494 = -47193382787LL;
uint8_t x500 = 87U;
int16_t x508 = -401;
static volatile uint64_t x532 = 12129435565885LLU;
int8_t x559 = INT8_MAX;
int32_t t71 = -1;
uint8_t x579 = UINT8_MAX;
volatile int8_t x587 = -1;
int8_t x588 = -8;
int16_t x602 = -748;
int16_t x619 = INT16_MIN;
uint64_t x620 = 714766688443428171LLU;
static volatile int8_t x626 = INT8_MIN;
int8_t x636 = INT8_MIN;
uint32_t x639 = UINT32_MAX;
static uint64_t x640 = 299851LLU;
static uint64_t x641 = 20LLU;
int16_t x653 = -1;
int32_t x656 = INT32_MAX;
int64_t x660 = INT64_MAX;
volatile int32_t x662 = 52;
volatile int64_t x663 = -1LL;
static int32_t x681 = -1;
int16_t x682 = INT16_MAX;
volatile int64_t t90 = -5441119LL;
static int32_t x712 = 29531;
uint64_t t92 = 782976888423LLU;
int64_t x736 = 25327979877363LL;
int16_t x741 = INT16_MIN;
static uint32_t x744 = 157023U;
static int64_t t98 = 1825667LL;
volatile int8_t x749 = -1;
uint8_t x751 = UINT8_MAX;


void f0(void) {
	int8_t x9 = INT8_MIN;
	static int32_t x10 = 1953504;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t0 = -30518;

	t0 = ((x9*x10)%(x11%x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x18 = 17;
	uint32_t x19 = UINT32_MAX;
	uint8_t x20 = 52U;

	t1 = ((x17*x18)%(x19%x20));

	if (t1 != 7U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x21 = 8U;
	int64_t x23 = -874LL;
	uint8_t x24 = UINT8_MAX;
	volatile int64_t t2 = 269338894031627LL;

	t2 = ((x21*x22)%(x23%x24));

	if (t2 != 10LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x30 = 3U;
	int8_t x31 = 1;
	volatile int64_t x32 = -43810975LL;
	int64_t t3 = 24894363LL;

	t3 = ((x29*x30)%(x31%x32));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x41 = 936935853282904LL;
	int16_t x42 = -3204;
	uint16_t x44 = 689U;
	volatile int64_t t4 = -115849088698LL;

	t4 = ((x41*x42)%(x43%x44));

	if (t4 != -96LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x45 = UINT64_MAX;
	static int32_t x46 = 0;
	static uint64_t x47 = 469410781355165014LLU;
	static int32_t x48 = -6;
	volatile uint64_t t5 = 40140LLU;

	t5 = ((x45*x46)%(x47%x48));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x50 = -1;
	int32_t x51 = INT32_MAX;
	int32_t t6 = 143;

	t6 = ((x49*x50)%(x51%x52));

	if (t6 != 23) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x53 = 3U;
	int8_t x54 = -52;
	volatile uint64_t x55 = 65260061502243LLU;
	uint16_t x56 = 8U;
	volatile uint64_t t7 = 1002154LLU;

	t7 = ((x53*x54)%(x55%x56));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = -1;
	static int8_t x64 = INT8_MIN;
	volatile int64_t t8 = -1720703650972093055LL;

	t8 = ((x61*x62)%(x63%x64));

	if (t8 != -14LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = -1;
	static int32_t x67 = -12748;

	t9 = ((x65*x66)%(x67%x68));

	if (t9 != 128LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = UINT8_MAX;
	int16_t x70 = 5820;
	static int64_t x72 = INT64_MIN;
	int64_t t10 = -9959391081979LL;

	t10 = ((x69*x70)%(x71%x72));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x82 = INT64_MIN;
	static uint64_t x83 = UINT64_MAX;
	volatile int32_t x84 = -900531;
	volatile uint64_t t11 = 7022651698629356LLU;

	t11 = ((x81*x82)%(x83%x84));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x93 = INT8_MIN;
	static volatile int32_t x95 = 28683939;
	static int64_t x96 = INT64_MAX;

	t12 = ((x93*x94)%(x95%x96));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x109 = INT32_MIN;
	uint64_t x110 = 251973386350LLU;
	volatile int32_t x112 = 1205944;
	uint64_t t13 = 35303945LLU;

	t13 = ((x109*x110)%(x111%x112));

	if (t13 != 1104LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x113 = INT16_MAX;
	static int8_t x115 = -36;
	uint64_t x116 = 332600727369LLU;
	static volatile uint64_t t14 = 232262LLU;

	t14 = ((x113*x114)%(x115%x116));

	if (t14 != 220939392774LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x126 = 2U;
	volatile uint8_t x128 = 60U;
	volatile int32_t t15 = 475908;

	t15 = ((x125*x126)%(x127%x128));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x137 = UINT8_MAX;
	int64_t x138 = 30808736LL;
	uint32_t x139 = 66775U;
	int16_t x140 = -1;
	volatile int64_t t16 = 163326951LL;

	t16 = ((x137*x138)%(x139%x140));

	if (t16 != 15380LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x141 = -1;
	static volatile int8_t x142 = -21;
	static volatile uint32_t x143 = 21U;
	volatile uint16_t x144 = 2635U;
	uint32_t t17 = 0U;

	t17 = ((x141*x142)%(x143%x144));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x145 = -109332179287562LL;
	int64_t x146 = -309LL;
	uint64_t x148 = UINT64_MAX;
	uint64_t t18 = 16483165LLU;

	t18 = ((x145*x146)%(x147%x148));

	if (t18 != 45679674642LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x155 = 54U;
	static int16_t x156 = INT16_MIN;
	volatile int32_t t19 = -36739662;

	t19 = ((x153*x154)%(x155%x156));

	if (t19 != -10) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x161 = 19307U;
	int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MAX;
	uint64_t x164 = 4LLU;
	uint64_t t20 = 29893LLU;

	t20 = ((x161*x162)%(x163%x164));

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x165 = INT64_MIN;
	uint16_t x166 = 1U;

	t21 = ((x165*x166)%(x167%x168));

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x177 = 1778987443808LL;
	int16_t x178 = INT16_MAX;
	int16_t x179 = INT16_MIN;
	uint64_t x180 = 896LLU;
	static volatile uint64_t t22 = 95325197295493LLU;

	t22 = ((x177*x178)%(x179%x180));

	if (t22 != 416LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x185 = 219294554508152426LLU;
	static volatile uint16_t x187 = 893U;
	static volatile int32_t x188 = 1207335;
	uint64_t t23 = 251057187033564915LLU;

	t23 = ((x185*x186)%(x187%x188));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x209 = INT8_MAX;
	uint8_t x211 = 2U;
	volatile int64_t x212 = INT64_MIN;
	int64_t t24 = 8183765LL;

	t24 = ((x209*x210)%(x211%x212));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x213 = -1LL;
	uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 2U;

	t25 = ((x213*x214)%(x215%x216));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x217 = -1;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t26 = 79248012812267LLU;

	t26 = ((x217*x218)%(x219%x220));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x221 = 1U;
	int32_t x223 = -26597;
	static uint32_t x224 = 6397U;
	uint32_t t27 = 66903074U;

	t27 = ((x221*x222)%(x223%x224));

	if (t27 != 255U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = 37;
	volatile int8_t x239 = INT8_MIN;
	volatile int16_t x240 = INT16_MIN;
	int32_t t28 = 52;

	t28 = ((x237*x238)%(x239%x240));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x241 = INT16_MAX;
	uint16_t x242 = UINT16_MAX;
	int32_t t29 = 25449400;

	t29 = ((x241*x242)%(x243%x244));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x249 = 1596U;
	int64_t x250 = -30397LL;
	int64_t x251 = 145442898812134864LL;
	int64_t t30 = 7421231947996LL;

	t30 = ((x249*x250)%(x251%x252));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x257 = 1804401U;
	uint32_t x258 = 32099U;
	volatile int32_t x259 = INT32_MIN;
	volatile int16_t x260 = INT16_MAX;
	uint32_t t31 = 1U;

	t31 = ((x257*x258)%(x259%x260));

	if (t31 != 2084892851U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x261 = 17;
	volatile int16_t x262 = -1;
	int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t32 = -51;

	t32 = ((x261*x262)%(x263%x264));

	if (t32 != -17) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x277 = INT32_MIN;
	volatile uint64_t x278 = 4046526LLU;
	uint32_t x279 = UINT32_MAX;
	uint64_t x280 = UINT64_MAX;
	uint64_t t33 = 457073388LLU;

	t33 = ((x277*x278)%(x279%x280));

	if (t33 != 4292944033LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x285 = UINT16_MAX;
	volatile int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MAX;
	uint8_t x288 = 24U;
	int32_t t34 = 2078;

	t34 = ((x285*x286)%(x287%x288));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x290 = 56U;
	uint64_t x291 = 666128409727795LLU;
	uint32_t x292 = 29U;
	volatile uint64_t t35 = 9588LLU;

	t35 = ((x289*x290)%(x291%x292));

	if (t35 != 8LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x293 = -13239;
	uint64_t x294 = 1825013267384614511LLU;
	static int64_t x295 = INT64_MIN;
	uint64_t t36 = 251627201LLU;

	t36 = ((x293*x294)%(x295%x296));

	if (t36 != 3884089654601105831LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x302 = -2691010;
	int8_t x303 = -59;
	static int16_t x304 = INT16_MAX;
	volatile int32_t t37 = 11377503;

	t37 = ((x301*x302)%(x303%x304));

	if (t37 != -26) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x309 = INT16_MAX;
	uint8_t x310 = 3U;
	volatile uint16_t x311 = UINT16_MAX;
	int32_t x312 = 66075203;
	static int32_t t38 = 10;

	t38 = ((x309*x310)%(x311%x312));

	if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x321 = 4;
	int8_t x322 = -8;
	volatile uint16_t x323 = UINT16_MAX;
	int64_t x324 = INT64_MAX;

	t39 = ((x321*x322)%(x323%x324));

	if (t39 != -32LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x325 = -1;
	int8_t x326 = -1;
	static int64_t x327 = -1LL;
	int32_t x328 = INT32_MIN;
	int64_t t40 = -104743LL;

	t40 = ((x325*x326)%(x327%x328));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x334 = UINT16_MAX;

	t41 = ((x333*x334)%(x335%x336));

	if (t41 != 14689LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x341 = -1LL;
	uint8_t x342 = UINT8_MAX;
	static uint32_t x343 = 76672082U;
	int64_t t42 = -35812978234401631LL;

	t42 = ((x341*x342)%(x343%x344));

	if (t42 != -255LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int16_t x354 = 949;
	int64_t x355 = INT64_MIN;
	volatile uint32_t x356 = UINT32_MAX;
	uint64_t t43 = 1365LLU;

	t43 = ((x353*x354)%(x355%x356));

	if (t43 != 2147482699LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x361 = 1U;
	volatile int64_t x362 = INT64_MIN;
	int64_t t44 = 51911LL;

	t44 = ((x361*x362)%(x363%x364));

	if (t44 != -6218LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x377 = INT16_MIN;
	volatile int8_t x378 = 0;
	uint16_t x379 = 234U;
	int32_t t45 = -4048343;

	t45 = ((x377*x378)%(x379%x380));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x381 = -6;
	int16_t x382 = INT16_MIN;
	int32_t x383 = -989742;
	int16_t x384 = 12998;
	int32_t t46 = -30832;

	t46 = ((x381*x382)%(x383%x384));

	if (t46 != 1526) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x385 = -1;
	static volatile int32_t x386 = -1;
	static int32_t x387 = 39088366;
	uint8_t x388 = UINT8_MAX;
	static int32_t t47 = 135;

	t47 = ((x385*x386)%(x387%x388));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x389 = 35U;
	int16_t x390 = INT16_MIN;
	int64_t x392 = INT64_MAX;

	t48 = ((x389*x390)%(x391%x392));

	if (t48 != 579120184LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x393 = 176;
	static int16_t x394 = 241;
	int16_t x396 = INT16_MAX;

	t49 = ((x393*x394)%(x395%x396));

	if (t49 != 48) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x401 = UINT8_MAX;
	volatile int16_t x402 = -1;
	int32_t x403 = INT32_MIN;
	uint64_t t50 = 911881856557615105LLU;

	t50 = ((x401*x402)%(x403%x404));

	if (t50 != 326996737LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x409 = 139536519812557LLU;
	static volatile uint32_t x410 = UINT32_MAX;
	int8_t x411 = INT8_MIN;
	int8_t x412 = -9;
	static uint64_t t51 = 257392251659227668LLU;

	t51 = ((x409*x410)%(x411%x412));

	if (t51 != 6967586375932422707LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x413 = UINT8_MAX;
	volatile int8_t x414 = INT8_MAX;
	int32_t x415 = -1;

	t52 = ((x413*x414)%(x415%x416));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x421 = 11;
	int16_t x422 = 15;
	static int16_t x423 = 7232;
	volatile int16_t x424 = -89;
	int32_t t53 = 4465;

	t53 = ((x421*x422)%(x423%x424));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x428 = 3U;
	volatile uint32_t t54 = 123U;

	t54 = ((x425*x426)%(x427%x428));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x433 = -1;
	volatile int16_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	int8_t x436 = INT8_MAX;
	volatile uint64_t t55 = 725LLU;

	t55 = ((x433*x434)%(x435%x436));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x437 = INT16_MIN;
	uint16_t x438 = UINT16_MAX;
	volatile int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MAX;

	t56 = ((x437*x438)%(x439%x440));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x442 = UINT32_MAX;
	int16_t x443 = -1;
	int64_t t57 = -230540912703LL;

	t57 = ((x441*x442)%(x443%x444));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x469 = 1LL;
	uint64_t t58 = 981LLU;

	t58 = ((x469*x470)%(x471%x472));

	if (t58 != 14LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x473 = UINT32_MAX;
	volatile int64_t x474 = -1LL;
	int32_t x475 = INT32_MAX;
	static int8_t x476 = INT8_MAX;
	volatile int64_t t59 = -93702LL;

	t59 = ((x473*x474)%(x475%x476));

	if (t59 != -3LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x481 = INT16_MAX;
	int32_t x482 = -1;
	volatile int32_t x483 = INT32_MAX;
	uint16_t x484 = 7816U;

	t60 = ((x481*x482)%(x483%x484));

	if (t60 != -852) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x493 = 501772459LLU;
	int32_t x495 = -1600;
	static int64_t x496 = -12747LL;
	uint64_t t61 = 3402933839LLU;

	t61 = ((x493*x494)%(x495%x496));

	if (t61 != 13213148417857839999LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x497 = INT8_MIN;
	uint8_t x498 = 0U;
	static int16_t x499 = INT16_MAX;
	volatile int32_t t62 = 2;

	t62 = ((x497*x498)%(x499%x500));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x501 = INT8_MIN;
	int64_t x502 = -1LL;
	int32_t x503 = -7156068;
	volatile uint64_t x504 = UINT64_MAX;
	volatile uint64_t t63 = 2LLU;

	t63 = ((x501*x502)%(x503%x504));

	if (t63 != 128LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x505 = 483LL;
	int8_t x506 = INT8_MAX;
	int64_t x507 = INT64_MAX;
	int64_t t64 = 2275800411268LL;

	t64 = ((x505*x506)%(x507%x508));

	if (t64 != 126LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x517 = 30619LLU;
	int8_t x518 = -1;
	uint64_t x519 = UINT64_MAX;
	int64_t x520 = INT64_MIN;
	uint64_t t65 = 55979657LLU;

	t65 = ((x517*x518)%(x519%x520));

	if (t65 != 9223372036854745190LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x525 = -1LL;
	int64_t x526 = INT64_MAX;
	uint16_t x527 = 200U;
	static uint32_t x528 = 385U;
	int64_t t66 = -7185LL;

	t66 = ((x525*x526)%(x527%x528));

	if (t66 != -7LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x529 = 1056U;
	volatile int16_t x530 = 5510;
	int8_t x531 = INT8_MAX;
	uint64_t t67 = 312900837352481384LLU;

	t67 = ((x529*x530)%(x531%x532));

	if (t67 != 55LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x545 = 170173951LLU;
	int8_t x546 = 3;
	int32_t x547 = INT32_MIN;
	uint64_t x548 = 10188270LLU;
	static volatile uint64_t t68 = 1464LLU;

	t68 = ((x545*x546)%(x547%x548));

	if (t68 != 4289577LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x549 = -1;
	int64_t x550 = INT64_MAX;
	uint16_t x551 = UINT16_MAX;
	uint64_t x552 = 338469173019241LLU;
	static uint64_t t69 = 4404250728LLU;

	t69 = ((x549*x550)%(x551%x552));

	if (t69 != 32769LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x557 = UINT64_MAX;
	static int64_t x558 = -1LL;
	static int16_t x560 = -25;
	volatile uint64_t t70 = 9735097109132LLU;

	t70 = ((x557*x558)%(x559%x560));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x569 = INT16_MIN;
	static uint8_t x570 = 55U;
	int8_t x571 = -7;
	static uint16_t x572 = 9816U;

	t71 = ((x569*x570)%(x571%x572));

	if (t71 != -6) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x577 = 207;
	int8_t x578 = -1;
	uint64_t x580 = UINT64_MAX;
	uint64_t t72 = 249479LLU;

	t72 = ((x577*x578)%(x579%x580));

	if (t72 != 49LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x585 = -1LL;
	int32_t x586 = INT32_MAX;
	int64_t t73 = -5LL;

	t73 = ((x585*x586)%(x587%x588));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x601 = INT16_MIN;
	int32_t x603 = 7;
	static uint32_t x604 = 1356179022U;
	uint32_t t74 = 86154U;

	t74 = ((x601*x602)%(x603%x604));

	if (t74 != 6U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x609 = 4;
	static int16_t x610 = 1;
	volatile int8_t x611 = -28;
	uint8_t x612 = 10U;
	int32_t t75 = -3425;

	t75 = ((x609*x610)%(x611%x612));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x617 = 2615U;
	int16_t x618 = INT16_MIN;
	static volatile uint64_t t76 = 199604568158835LLU;

	t76 = ((x617*x618)%(x619%x620));

	if (t76 != 541861332285611533LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x621 = UINT64_MAX;
	int8_t x622 = 0;
	int16_t x623 = INT16_MAX;
	int8_t x624 = INT8_MIN;
	static uint64_t t77 = 3893620756615868LLU;

	t77 = ((x621*x622)%(x623%x624));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x625 = INT8_MIN;
	int8_t x627 = 1;
	volatile int32_t x628 = 32631783;
	int32_t t78 = -24214158;

	t78 = ((x625*x626)%(x627%x628));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x629 = -8920;
	volatile uint8_t x630 = 20U;
	volatile uint64_t x631 = 173736LLU;
	int32_t x632 = -113568767;
	uint64_t t79 = 716096598326955LLU;

	t79 = ((x629*x630)%(x631%x632));

	if (t79 != 56552LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x633 = -1;
	uint32_t x634 = 0U;
	int8_t x635 = -10;
	static volatile uint32_t t80 = 1030U;

	t80 = ((x633*x634)%(x635%x636));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x637 = -1;
	volatile uint64_t x638 = 940129590LLU;
	uint64_t t81 = 0LLU;

	t81 = ((x637*x638)%(x639%x640));

	if (t81 != 55984LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x642 = UINT8_MAX;
	uint32_t x643 = 450268U;
	static int64_t x644 = 14098948911LL;
	uint64_t t82 = 402141710930089LLU;

	t82 = ((x641*x642)%(x643%x644));

	if (t82 != 5100LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x645 = 83U;
	int8_t x646 = 12;
	int64_t x647 = -1531LL;
	uint16_t x648 = 207U;
	volatile int64_t t83 = 472LL;

	t83 = ((x645*x646)%(x647%x648));

	if (t83 != 12LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x649 = INT32_MIN;
	static uint64_t x650 = 2518451270827572LLU;
	int32_t x651 = INT32_MAX;
	uint64_t x652 = 14827807150740443LLU;
	uint64_t t84 = 29529003980144LLU;

	t84 = ((x649*x650)%(x651%x652));

	if (t84 != 1587429838LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x654 = 16388803918LLU;
	volatile int8_t x655 = -1;
	static uint64_t t85 = 47974536LLU;

	t85 = ((x653*x654)%(x655%x656));

	if (t85 != 18446744057320747698LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x657 = 3433997453425049958LL;
	int16_t x658 = -1;
	int32_t x659 = INT32_MAX;
	volatile int64_t t86 = -8994838273609LL;

	t86 = ((x657*x658)%(x659%x660));

	if (t86 != -1112475233LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x661 = -5;
	static int16_t x664 = INT16_MIN;
	static volatile int64_t t87 = 216366LL;

	t87 = ((x661*x662)%(x663%x664));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x665 = INT8_MIN;
	uint16_t x666 = 117U;
	int8_t x667 = 7;
	uint32_t x668 = 3U;
	uint32_t t88 = 27274U;

	t88 = ((x665*x666)%(x667%x668));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x669 = -1LL;
	static volatile int16_t x670 = INT16_MAX;
	int64_t x671 = INT64_MAX;
	static uint16_t x672 = UINT16_MAX;
	static volatile int64_t t89 = -147879549LL;

	t89 = ((x669*x670)%(x671%x672));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x683 = -1;
	int64_t x684 = INT64_MIN;

	t90 = ((x681*x682)%(x683%x684));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x701 = -1;
	static uint64_t x702 = UINT64_MAX;
	uint16_t x703 = UINT16_MAX;
	static volatile int16_t x704 = 142;
	volatile uint64_t t91 = 1646953761907537LLU;

	t91 = ((x701*x702)%(x703%x704));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x709 = INT16_MIN;
	uint32_t x710 = 39649U;
	uint64_t x711 = UINT64_MAX;

	t92 = ((x709*x710)%(x711%x712));

	if (t92 != 15857LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x717 = INT8_MIN;
	int8_t x718 = 0;
	volatile uint16_t x719 = 3434U;
	int32_t x720 = INT32_MAX;
	static volatile int32_t t93 = 26446;

	t93 = ((x717*x718)%(x719%x720));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x721 = 24593U;
	int8_t x722 = INT8_MIN;
	int16_t x723 = 148;
	int16_t x724 = INT16_MAX;
	static volatile uint32_t t94 = 5405U;

	t94 = ((x721*x722)%(x723%x724));

	if (t94 != 100U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x729 = INT16_MAX;
	volatile int8_t x730 = -1;
	int64_t x731 = -4409840620573053648LL;
	volatile uint8_t x732 = UINT8_MAX;
	int64_t t95 = 48769951461LL;

	t95 = ((x729*x730)%(x731%x732));

	if (t95 != -25LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x733 = UINT32_MAX;
	volatile uint8_t x734 = 26U;
	static int64_t x735 = INT64_MAX;
	int64_t t96 = 32108846128647LL;

	t96 = ((x733*x734)%(x735%x736));

	if (t96 != 4294967270LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x742 = 11U;
	volatile int16_t x743 = INT16_MIN;
	uint32_t t97 = 30696295U;

	t97 = ((x741*x742)%(x743%x744));

	if (t97 != 14320U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x745 = -1;
	uint8_t x746 = 8U;
	int16_t x747 = INT16_MIN;
	volatile int64_t x748 = INT64_MIN;

	t98 = ((x745*x746)%(x747%x748));

	if (t98 != -8LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x750 = -1;
	int64_t x752 = INT64_MAX;
	volatile int64_t t99 = -1542649689430379192LL;

	t99 = ((x749*x750)%(x751%x752));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

