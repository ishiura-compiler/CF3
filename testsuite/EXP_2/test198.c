#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x13 = INT16_MIN;
int16_t x15 = INT16_MIN;
int64_t x25 = INT64_MIN;
uint32_t x28 = 0U;
int32_t x31 = INT32_MIN;
static int64_t x32 = 261025477521646289LL;
static volatile uint64_t t3 = 238LLU;
uint64_t x33 = UINT64_MAX;
int8_t x34 = INT8_MAX;
int32_t x37 = 41564710;
int64_t x39 = -1LL;
int64_t x59 = -1LL;
int32_t x60 = INT32_MAX;
int32_t x71 = -1182431;
uint32_t x83 = 14708U;
int8_t x85 = INT8_MIN;
uint64_t t12 = 3389908325508463500LLU;
int16_t x89 = -1;
int8_t x105 = 4;
volatile uint32_t t14 = 0U;
int32_t x117 = INT32_MIN;
volatile uint16_t x122 = 1U;
int32_t x138 = 395;
static volatile int16_t x140 = 1;
static int32_t t18 = -2;
uint32_t x141 = UINT32_MAX;
static uint32_t t19 = 725587U;
int32_t x145 = INT32_MIN;
volatile uint32_t t20 = 9270U;
uint32_t x150 = 66307082U;
int16_t x152 = INT16_MAX;
uint64_t t22 = 60LLU;
volatile int8_t x173 = INT8_MIN;
int16_t x176 = INT16_MAX;
int64_t x178 = -1LL;
volatile int64_t t25 = 8084LL;
int8_t x187 = INT8_MAX;
static uint32_t t29 = 248711628U;
uint32_t x217 = 0U;
uint64_t x218 = 3LLU;
int8_t x219 = INT8_MIN;
static int16_t x227 = INT16_MAX;
static int16_t x228 = -1;
static volatile uint16_t x231 = 68U;
volatile uint64_t x242 = UINT64_MAX;
uint64_t t34 = 121LLU;
uint64_t x258 = UINT64_MAX;
uint8_t x259 = 12U;
int64_t x260 = -13390080710LL;
uint64_t x262 = 1209287LLU;
int8_t x276 = INT8_MIN;
static int32_t x290 = -1;
int64_t x301 = -61LL;
volatile int8_t x304 = INT8_MAX;
uint8_t x316 = 1U;
volatile uint64_t x334 = 36499875LLU;
int8_t x340 = INT8_MIN;
volatile int64_t t51 = -46759098806409LL;
volatile uint64_t x359 = 12038375LLU;
int8_t x372 = -38;
uint16_t x375 = 2709U;
int16_t x378 = 32;
uint64_t x379 = 315LLU;
uint64_t t57 = 730392469407LLU;
static volatile int64_t x390 = 20435LL;
volatile int64_t t58 = 2934LL;
static uint16_t x396 = 2U;
int8_t x408 = -1;
uint64_t x445 = 16406103494LLU;
volatile uint64_t x447 = 29245659929641LLU;
volatile int8_t x450 = INT8_MAX;
int16_t x451 = -640;
uint32_t x466 = 3697971U;
uint32_t t71 = 2717U;
int16_t x489 = INT16_MIN;
int64_t x511 = -5846051156448588LL;
int16_t x515 = 1;
static int32_t x527 = 69;
volatile int32_t t82 = -10;
int16_t x544 = INT16_MIN;
uint64_t x545 = 1973606092828928LLU;
volatile int32_t x548 = INT32_MIN;
volatile uint64_t x554 = UINT64_MAX;
volatile int32_t x557 = -1;
static uint64_t x560 = 1870576LLU;
uint16_t x567 = UINT16_MAX;
uint8_t x574 = UINT8_MAX;
uint16_t x576 = 1U;
volatile uint8_t x592 = 0U;
uint64_t t92 = 104629209LLU;
uint64_t x593 = 1682LLU;
int8_t x594 = INT8_MAX;
volatile uint64_t t93 = 3841448364457LLU;
volatile uint64_t t94 = 4820496LLU;
uint32_t x636 = 14285U;
uint32_t t95 = 1782280U;
static uint32_t x638 = 27700U;
volatile uint64_t x646 = 1744364326947925LLU;
int16_t x648 = -1;
static uint64_t t98 = 8LLU;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = 966LL;
	int8_t x3 = INT8_MAX;
	int32_t x4 = -1;
	static volatile int64_t t0 = 1395LL;

	t0 = ((x1*(x2-x3))*x4);

	if (t0 != 1801738780672LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x14 = -1LL;
	int32_t x16 = -1;
	volatile int64_t t1 = -86LL;

	t1 = ((x13*(x14-x15))*x16);

	if (t1 != 1073709056LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x26 = -1;
	int32_t x27 = -1;
	int64_t t2 = -181364185278434083LL;

	t2 = ((x25*(x26-x27))*x28);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x29 = UINT16_MAX;
	uint64_t x30 = UINT64_MAX;

	t3 = ((x29*(x30-x31))*x32);

	if (t3 != 4845124295504962257LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x35 = 65080;
	int16_t x36 = 17;
	volatile uint64_t t4 = 85238175867433449LLU;

	t4 = ((x33*(x34-x35))*x36);

	if (t4 != 1104201LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x38 = INT16_MIN;
	volatile int32_t x40 = 844;
	int64_t t5 = -222031485366252LL;

	t5 = ((x37*(x38-x39))*x40);

	if (t5 != -1149486519569080LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = 592848U;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = 1;
	int8_t x44 = -1;
	volatile uint64_t t6 = 1993491518144LLU;

	t6 = ((x41*(x42-x43))*x44);

	if (t6 != 1185696LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x45 = 22;
	uint64_t x46 = UINT64_MAX;
	int8_t x47 = INT8_MAX;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t7 = 688801007056LLU;

	t7 = ((x45*(x46-x47))*x48);

	if (t7 != 6047313952768LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = 1;
	uint64_t x58 = 14847139354411LLU;
	volatile uint64_t t8 = 21427515550462LLU;

	t8 = ((x57*(x58-x59))*x60);

	if (t8 != 8015208959802108116LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = -1;
	static uint64_t x62 = 2235066335LLU;
	uint32_t x63 = 110691275U;
	uint32_t x64 = UINT32_MAX;
	volatile uint64_t t9 = 4371887943247LLU;

	t9 = ((x61*(x62-x63))*x64);

	if (t9 != 9322622668695888916LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x69 = -2046104LL;
	int8_t x70 = INT8_MIN;
	uint16_t x72 = UINT16_MAX;
	volatile int64_t t10 = 32460648831LL;

	t10 = ((x69*(x70-x71))*x72);

	if (t10 != -158536694808448920LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x81 = INT16_MIN;
	volatile int16_t x82 = 1;
	volatile int32_t x84 = INT32_MIN;
	volatile uint32_t t11 = 116288U;

	t11 = ((x81*(x82-x83))*x84);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x86 = UINT64_MAX;
	uint32_t x87 = 88799637U;
	static int64_t x88 = -1586602886LL;

	t12 = ((x85*(x86-x87))*x88);

	if (t12 != 412854547110477312LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x90 = -2;
	volatile uint64_t x91 = 911592087LLU;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t13 = 280595LLU;

	t13 = ((x89*(x90-x91))*x92);

	if (t13 != 18446743957025764224LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x106 = UINT32_MAX;
	uint8_t x107 = 50U;
	static int16_t x108 = INT16_MIN;

	t14 = ((x105*(x106-x107))*x108);

	if (t14 != 6684672U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x118 = INT64_MIN;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MIN;
	volatile int64_t t15 = -239739LL;

	t15 = ((x117*(x118-x119))*x120);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x121 = -25;
	int64_t x123 = -1LL;
	volatile int8_t x124 = 39;
	static int64_t t16 = 23382558142358LL;

	t16 = ((x121*(x122-x123))*x124);

	if (t16 != -1950LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x125 = -21;
	uint8_t x126 = 24U;
	uint8_t x127 = 1U;
	int8_t x128 = INT8_MIN;
	static int32_t t17 = -5800040;

	t17 = ((x125*(x126-x127))*x128);

	if (t17 != 61824) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x137 = -1;
	volatile uint16_t x139 = 6536U;

	t18 = ((x137*(x138-x139))*x140);

	if (t18 != 6141) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x142 = INT8_MIN;
	uint16_t x143 = 1U;
	static volatile int16_t x144 = -20;

	t19 = ((x141*(x142-x143))*x144);

	if (t19 != 4294964716U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x146 = 4011U;
	volatile uint32_t x147 = UINT32_MAX;
	int16_t x148 = INT16_MIN;

	t20 = ((x145*(x146-x147))*x148);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x149 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	volatile uint32_t t21 = 30190553U;

	t21 = ((x149*(x150-x151))*x152);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = 146042158461LLU;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;

	t22 = ((x157*(x158-x159))*x160);

	if (t22 != 3647774136048025600LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x169 = 10022U;
	volatile uint16_t x170 = 2U;
	uint16_t x171 = 262U;
	static uint32_t x172 = 7518333U;
	volatile uint32_t t23 = 1118U;

	t23 = ((x169*(x170-x171))*x172);

	if (t23 != 2970139592U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x174 = UINT32_MAX;
	int32_t x175 = 2412970;
	static uint32_t t24 = 1062034U;

	t24 = ((x173*(x174-x175))*x176);

	if (t24 != 1482107520U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x177 = UINT8_MAX;
	int64_t x179 = 43632415LL;
	volatile int8_t x180 = INT8_MIN;

	t25 = ((x177*(x178-x179))*x180);

	if (t25 != 1424162058240LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x181 = INT8_MIN;
	int32_t x182 = 0;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = -1;
	volatile uint32_t t26 = 48108615U;

	t26 = ((x181*(x182-x183))*x184);

	if (t26 != 128U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x185 = 0LL;
	uint16_t x186 = 96U;
	int16_t x188 = -1;
	static int64_t t27 = 338070312614497LL;

	t27 = ((x185*(x186-x187))*x188);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x189 = UINT64_MAX;
	uint8_t x190 = UINT8_MAX;
	uint32_t x191 = 3015607U;
	static volatile uint32_t x192 = 25U;
	static volatile uint64_t t28 = 8167205LLU;

	t28 = ((x189*(x190-x191))*x192);

	if (t28 != 18446743966410753016LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x205 = 377U;
	int32_t x206 = -1;
	int32_t x207 = -577549791;
	static int32_t x208 = -1;

	t29 = ((x205*(x206-x207))*x208);

	if (t29 != 1307061266U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x220 = 7748U;
	uint64_t t30 = 66005981600411600LLU;

	t30 = ((x217*(x218-x219))*x220);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x225 = 106U;
	uint16_t x226 = 1063U;
	volatile int32_t t31 = -215412;

	t31 = ((x225*(x226-x227))*x228);

	if (t31 != 3360624) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x229 = 62U;
	volatile uint16_t x230 = UINT16_MAX;
	volatile int32_t x232 = 29;
	int32_t t32 = 1;

	t32 = ((x229*(x230-x231))*x232);

	if (t32 != 117709666) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = 51;
	int64_t x235 = 151LL;
	static int16_t x236 = -2055;
	static volatile int64_t t33 = -200543179LL;

	t33 = ((x233*(x234-x235))*x236);

	if (t33 != -6733824000LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x241 = INT16_MIN;
	int64_t x243 = -1LL;
	int8_t x244 = INT8_MIN;

	t34 = ((x241*(x242-x243))*x244);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x245 = 27U;
	int64_t x246 = 5498672370LL;
	int32_t x247 = -1;
	int8_t x248 = INT8_MAX;
	volatile int64_t t35 = 1LL;

	t35 = ((x245*(x246-x247))*x248);

	if (t35 != 18854947560159LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x249 = 44LLU;
	static volatile uint64_t x250 = 97009729LLU;
	int32_t x251 = 0;
	uint8_t x252 = UINT8_MAX;
	uint64_t t36 = 4436328907LLU;

	t36 = ((x249*(x250-x251))*x252);

	if (t36 != 1088449159380LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x257 = INT16_MIN;
	volatile uint64_t t37 = 374730152289LLU;

	t37 = ((x257*(x258-x259))*x260);

	if (t37 != 18441040113568382976LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x261 = INT64_MAX;
	int64_t x263 = 14248719LL;
	uint64_t x264 = 1050004289260834252LLU;
	volatile uint64_t t38 = 153346484147340071LLU;

	t38 = ((x261*(x262-x263))*x264);

	if (t38 != 9376856643639555424LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x265 = INT64_MIN;
	static uint64_t x266 = UINT64_MAX;
	int64_t x267 = -1LL;
	int16_t x268 = INT16_MIN;
	uint64_t t39 = 549274922887624LLU;

	t39 = ((x265*(x266-x267))*x268);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x273 = INT16_MIN;
	volatile uint32_t x274 = 109U;
	static uint64_t x275 = 76905675619029LLU;
	volatile uint64_t t40 = 8143LLU;

	t40 = ((x273*(x274-x275))*x276);

	if (t40 != 9475610455633297408LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x281 = INT16_MIN;
	int64_t x282 = -118160LL;
	int32_t x283 = -4306;
	static int8_t x284 = -3;
	int64_t t41 = -333495LL;

	t41 = ((x281*(x282-x283))*x284);

	if (t41 != -11192303616LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x289 = -1;
	int32_t x291 = INT32_MIN;
	uint32_t x292 = UINT32_MAX;
	static volatile uint32_t t42 = 20048U;

	t42 = ((x289*(x290-x291))*x292);

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x297 = UINT64_MAX;
	uint16_t x298 = UINT16_MAX;
	static int64_t x299 = 89978693510660LL;
	int64_t x300 = -1LL;
	volatile uint64_t t43 = 34348925218452254LLU;

	t43 = ((x297*(x298-x299))*x300);

	if (t43 != 18446654095016106491LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x302 = INT16_MIN;
	uint64_t x303 = 427794663409321LLU;
	static volatile uint64_t t44 = 55830719LLU;

	t44 = ((x301*(x302-x303))*x304);

	if (t44 != 3314125257685863483LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x309 = 38873565U;
	uint32_t x310 = 1797365U;
	static uint16_t x311 = 1U;
	int8_t x312 = INT8_MIN;
	uint32_t t45 = 906354U;

	t45 = ((x309*(x310-x311))*x312);

	if (t45 != 1441705472U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = -1;
	static int32_t x315 = -1;
	int64_t t46 = -248846492LL;

	t46 = ((x313*(x314-x315))*x316);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x325 = INT64_MAX;
	volatile int16_t x326 = -1;
	uint8_t x327 = 0U;
	int8_t x328 = -1;
	int64_t t47 = INT64_MAX;

	t47 = ((x325*(x326-x327))*x328);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x333 = -1LL;
	int64_t x335 = 111801487528LL;
	int8_t x336 = INT8_MIN;
	static volatile uint64_t t48 = 22342271942066441LLU;

	t48 = ((x333*(x334-x335))*x336);

	if (t48 != 18446729767791132032LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x337 = INT8_MIN;
	uint64_t x338 = 34LLU;
	int8_t x339 = 2;
	volatile uint64_t t49 = 3LLU;

	t49 = ((x337*(x338-x339))*x340);

	if (t49 != 524288LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = -3646334903LL;
	int32_t x343 = -261942;
	uint32_t x344 = 68U;
	volatile int64_t t50 = 1367844733301LL;

	t50 = ((x341*(x342-x343))*x344);

	if (t50 != 31735419052544LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x353 = INT16_MAX;
	int8_t x354 = INT8_MAX;
	static volatile uint32_t x355 = 60333U;
	volatile int64_t x356 = -1LL;

	t51 = ((x353*(x354-x355))*x356);

	if (t51 != -2322197294LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x357 = -4033343;
	int32_t x358 = -1;
	uint16_t x360 = 1U;
	uint64_t t52 = 33008549155426LLU;

	t52 = ((x357*(x358-x359))*x360);

	if (t52 != 48554899570968LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x361 = 1035U;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	volatile int16_t x364 = -4013;
	static volatile int32_t t53 = 3320;

	t53 = ((x361*(x362-x363))*x364);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x365 = 2LLU;
	int64_t x366 = INT64_MIN;
	int16_t x367 = -1054;
	int16_t x368 = -24;
	uint64_t t54 = 58519918630LLU;

	t54 = ((x365*(x366-x367))*x368);

	if (t54 != 18446744073709501024LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x369 = -1;
	uint64_t x370 = 128609460393LLU;
	int64_t x371 = INT64_MIN;
	volatile uint64_t t55 = 162839530LLU;

	t55 = ((x369*(x370-x371))*x372);

	if (t55 != 4887159494934LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x373 = -1;
	uint64_t x374 = 344953858754929311LLU;
	int32_t x376 = 942288;
	uint64_t t56 = 7149498LLU;

	t56 = ((x373*(x374-x375))*x376);

	if (t56 != 4195664373731080160LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x377 = 1145918LLU;
	int8_t x380 = -1;

	t57 = ((x377*(x378-x379))*x380);

	if (t57 != 324294794LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x389 = 0U;
	uint32_t x391 = 119974395U;
	static int8_t x392 = INT8_MAX;

	t58 = ((x389*(x390-x391))*x392);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x393 = -1;
	int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	volatile int32_t t59 = 1051793554;

	t59 = ((x393*(x394-x395))*x396);

	if (t59 != -254) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x397 = -1;
	static int32_t x398 = -1;
	int64_t x399 = -23129140404LL;
	int8_t x400 = INT8_MAX;
	volatile int64_t t60 = -361LL;

	t60 = ((x397*(x398-x399))*x400);

	if (t60 != -2937400831181LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x405 = UINT64_MAX;
	int64_t x406 = INT64_MIN;
	volatile uint64_t x407 = 1730LLU;
	volatile uint64_t t61 = 247648187841LLU;

	t61 = ((x405*(x406-x407))*x408);

	if (t61 != 9223372036854774078LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x413 = UINT8_MAX;
	uint64_t x414 = UINT64_MAX;
	volatile uint16_t x415 = 0U;
	int16_t x416 = -2221;
	uint64_t t62 = 72774143LLU;

	t62 = ((x413*(x414-x415))*x416);

	if (t62 != 566355LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x421 = INT32_MIN;
	uint32_t x422 = 7612488U;
	int16_t x423 = -16345;
	int16_t x424 = INT16_MIN;
	volatile uint32_t t63 = 130072134U;

	t63 = ((x421*(x422-x423))*x424);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x429 = INT8_MIN;
	int64_t x430 = 1LL;
	volatile int8_t x431 = -8;
	uint64_t x432 = UINT64_MAX;
	uint64_t t64 = 25359737503LLU;

	t64 = ((x429*(x430-x431))*x432);

	if (t64 != 1152LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x437 = INT8_MAX;
	volatile uint8_t x438 = 1U;
	uint8_t x439 = UINT8_MAX;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t65 = -193;

	t65 = ((x437*(x438-x439))*x440);

	if (t65 != 4129024) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x446 = -1LL;
	uint64_t x448 = 0LLU;
	static volatile uint64_t t66 = 985340842491111836LLU;

	t66 = ((x445*(x446-x447))*x448);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x449 = INT8_MIN;
	volatile uint8_t x452 = 2U;
	static volatile int32_t t67 = -9530774;

	t67 = ((x449*(x450-x451))*x452);

	if (t67 != -196352) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x453 = -464362337LL;
	static uint32_t x454 = 920852994U;
	uint8_t x455 = UINT8_MAX;
	uint64_t x456 = 17LLU;
	volatile uint64_t t68 = 799315980LLU;

	t68 = ((x453*(x454-x455))*x456);

	if (t68 != 11177385465156403885LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x457 = 447390373363215LLU;
	int16_t x458 = INT16_MAX;
	uint64_t x459 = 3661811618026444LLU;
	static int8_t x460 = INT8_MIN;
	volatile uint64_t t69 = 2305260135053271622LLU;

	t69 = ((x457*(x458-x459))*x460);

	if (t69 != 16947462938248577408LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x465 = UINT16_MAX;
	uint16_t x467 = 30244U;
	uint16_t x468 = 7304U;
	uint32_t t70 = 3U;

	t70 = ((x465*(x466-x467))*x468);

	if (t70 != 2805406728U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x473 = INT16_MIN;
	int8_t x474 = INT8_MIN;
	uint32_t x475 = 202875U;
	int8_t x476 = INT8_MIN;

	t71 = ((x473*(x474-x475))*x476);

	if (t71 != 3242196992U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x477 = UINT64_MAX;
	uint16_t x478 = UINT16_MAX;
	int64_t x479 = 11986LL;
	int8_t x480 = -1;
	static uint64_t t72 = 3157939174090756653LLU;

	t72 = ((x477*(x478-x479))*x480);

	if (t72 != 53549LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x481 = 1539U;
	volatile uint32_t x482 = 1962730U;
	static int16_t x483 = INT16_MIN;
	volatile uint8_t x484 = 13U;
	uint32_t t73 = 44892U;

	t73 = ((x481*(x482-x483))*x484);

	if (t73 != 1269222822U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x485 = INT64_MIN;
	static volatile int32_t x486 = INT32_MIN;
	int32_t x487 = INT32_MIN;
	static int16_t x488 = -1;
	static volatile int64_t t74 = 43541096437LL;

	t74 = ((x485*(x486-x487))*x488);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x490 = -1;
	uint8_t x491 = 1U;
	int64_t x492 = -1LL;
	volatile int64_t t75 = -56781800162LL;

	t75 = ((x489*(x490-x491))*x492);

	if (t75 != -65536LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x497 = INT64_MAX;
	uint32_t x498 = UINT32_MAX;
	static uint64_t x499 = 651477626285385LLU;
	uint8_t x500 = 16U;
	volatile uint64_t t76 = 27682LLU;

	t76 = ((x497*(x498-x499))*x500);

	if (t76 != 10423573301089440LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x509 = 0;
	int64_t x510 = INT64_MIN;
	static uint32_t x512 = 369856728U;
	int64_t t77 = -22092094LL;

	t77 = ((x509*(x510-x511))*x512);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x513 = INT16_MIN;
	uint8_t x514 = 0U;
	int8_t x516 = 22;
	volatile int32_t t78 = -1;

	t78 = ((x513*(x514-x515))*x516);

	if (t78 != 720896) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x517 = 93U;
	int16_t x518 = INT16_MIN;
	uint32_t x519 = UINT32_MAX;
	int32_t x520 = -1;
	uint32_t t79 = 1494515412U;

	t79 = ((x517*(x518-x519))*x520);

	if (t79 != 3047331U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x521 = UINT16_MAX;
	int16_t x522 = -1;
	volatile int32_t x523 = -1;
	int64_t x524 = INT64_MIN;
	volatile int64_t t80 = -1602LL;

	t80 = ((x521*(x522-x523))*x524);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x525 = 4862LLU;
	static int32_t x526 = 211299;
	int8_t x528 = -1;
	uint64_t t81 = 118468737141LLU;

	t81 = ((x525*(x526-x527))*x528);

	if (t81 != 18446744072682551356LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x537 = 0U;
	int16_t x538 = 0;
	static uint8_t x539 = 61U;
	int32_t x540 = INT32_MIN;

	t82 = ((x537*(x538-x539))*x540);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x541 = INT16_MIN;
	uint8_t x542 = 1U;
	uint64_t x543 = 69LLU;
	uint64_t t83 = 59508LLU;

	t83 = ((x541*(x542-x543))*x544);

	if (t83 != 18446744000695107584LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x546 = -1;
	int64_t x547 = 40LL;
	uint64_t t84 = 13135002LLU;

	t84 = ((x545*(x546-x547))*x548);

	if (t84 != 9716037358737948672LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x549 = -1;
	volatile uint16_t x550 = 177U;
	static uint64_t x551 = 586LLU;
	static uint32_t x552 = UINT32_MAX;
	uint64_t t85 = 38550539212009LLU;

	t85 = ((x549*(x550-x551))*x552);

	if (t85 != 1756641623655LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x553 = 19123444U;
	int32_t x555 = -1;
	int16_t x556 = INT16_MIN;
	volatile uint64_t t86 = 1040236947103639LLU;

	t86 = ((x553*(x554-x555))*x556);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x558 = INT16_MIN;
	int32_t x559 = INT32_MIN;
	volatile uint64_t t87 = 370887941698790LLU;

	t87 = ((x557*(x558-x559))*x560);

	if (t87 != 18442727103632244736LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x565 = 561U;
	volatile int16_t x566 = 82;
	int32_t x568 = -1;
	uint32_t t88 = 3U;

	t88 = ((x565*(x566-x567))*x568);

	if (t88 != 36719133U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x569 = 2779426157671047LLU;
	static int32_t x570 = INT32_MAX;
	uint8_t x571 = 0U;
	int64_t x572 = -1LL;
	static volatile uint64_t t89 = 2815163634LLU;

	t89 = ((x569*(x570-x571))*x572);

	if (t89 != 3864799435159417479LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x573 = 217U;
	uint16_t x575 = UINT16_MAX;
	int32_t t90 = 104;

	t90 = ((x573*(x574-x575))*x576);

	if (t90 != -14165760) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x585 = 272866LLU;
	int16_t x586 = INT16_MIN;
	uint8_t x587 = 54U;
	uint64_t x588 = UINT64_MAX;
	uint64_t t91 = 24LLU;

	t91 = ((x585*(x586-x587))*x588);

	if (t91 != 8956007852LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x589 = 481397533LLU;
	static uint32_t x590 = 379U;
	static uint32_t x591 = 76U;

	t92 = ((x589*(x590-x591))*x592);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x595 = INT16_MIN;
	int32_t x596 = -1;

	t93 = ((x593*(x594-x595))*x596);

	if (t93 != 18446744073654222226LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x609 = UINT32_MAX;
	int8_t x610 = -1;
	uint64_t x611 = 574LLU;
	int8_t x612 = -8;

	t94 = ((x609*(x610-x611))*x612);

	if (t94 != 19756849557000LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x633 = UINT16_MAX;
	int16_t x634 = INT16_MIN;
	volatile int8_t x635 = -30;

	t95 = ((x633*(x634-x635))*x636);

	if (t95 != 635827706U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x637 = -216;
	uint16_t x639 = UINT16_MAX;
	static int64_t x640 = -60LL;
	volatile int64_t t96 = -14LL;

	t96 = ((x637*(x638-x639))*x640);

	if (t96 != -490341600LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x641 = -1;
	int16_t x642 = INT16_MIN;
	uint8_t x643 = UINT8_MAX;
	int16_t x644 = 0;
	int32_t t97 = 109601;

	t97 = ((x641*(x642-x643))*x644);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x645 = INT8_MAX;
	int16_t x647 = INT16_MIN;

	t98 = ((x645*(x646-x647))*x648);

	if (t98 != 18225209804183003605LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x649 = UINT64_MAX;
	static int32_t x650 = 155;
	int8_t x651 = -1;
	int64_t x652 = INT64_MAX;
	volatile uint64_t t99 = 26877627184006LLU;

	t99 = ((x649*(x650-x651))*x652);

	if (t99 != 156LLU) { NG(); } else { ; }
	
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

