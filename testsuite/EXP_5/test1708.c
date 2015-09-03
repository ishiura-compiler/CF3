#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
uint64_t x7 = UINT64_MAX;
static int16_t x10 = INT16_MIN;
uint64_t t2 = 3539978363581580606LLU;
static volatile uint16_t x13 = UINT16_MAX;
int64_t x14 = INT64_MIN;
volatile int16_t x15 = -1;
volatile int16_t x17 = INT16_MIN;
volatile uint64_t t4 = 208745577395554LLU;
volatile int16_t x29 = -1;
volatile int8_t x37 = INT8_MAX;
int32_t x43 = -1;
static int64_t x50 = INT64_MAX;
int64_t x51 = INT64_MAX;
int32_t x54 = INT32_MIN;
int8_t x64 = INT8_MIN;
int32_t x66 = -1;
static int64_t x67 = INT64_MAX;
volatile int16_t x69 = INT16_MIN;
int64_t t17 = -13LL;
int32_t x85 = INT32_MAX;
int8_t x89 = INT8_MAX;
int8_t x90 = -1;
uint64_t t20 = 2LLU;
static volatile int64_t x97 = INT64_MIN;
int8_t x100 = INT8_MIN;
static int16_t x102 = -1;
int16_t x105 = INT16_MAX;
int16_t x118 = INT16_MIN;
uint8_t x121 = UINT8_MAX;
volatile int32_t x122 = INT32_MAX;
uint32_t t30 = 440004U;
uint64_t x141 = 3168757506LLU;
int64_t x143 = -1LL;
int32_t x144 = INT32_MIN;
int64_t x148 = INT64_MIN;
static uint32_t x155 = 326251U;
static volatile uint32_t t33 = 65341U;
volatile int8_t x162 = -1;
volatile int16_t x170 = INT16_MAX;
static int16_t x174 = 44;
uint8_t x179 = 36U;
int64_t x193 = -1686815936893380LL;
volatile uint16_t x195 = UINT16_MAX;
int32_t x206 = INT32_MIN;
int8_t x210 = -1;
uint64_t x212 = 18209377LLU;
uint64_t t42 = 3861088LLU;
volatile uint8_t x216 = 44U;
uint16_t x217 = 15U;
int32_t x219 = -1;
int32_t x224 = -1;
uint64_t x225 = 108020120683LLU;
static int16_t x226 = INT16_MIN;
volatile uint64_t t46 = 5896962164612192LLU;
uint8_t x233 = 1U;
volatile int8_t x235 = INT8_MAX;
volatile int8_t x237 = -55;
static uint16_t x240 = UINT16_MAX;
static int64_t x241 = INT64_MIN;
int32_t x242 = 3;
uint64_t t49 = 24LLU;
int32_t x248 = INT32_MIN;
int64_t x253 = INT64_MIN;
int64_t x256 = INT64_MAX;
int8_t x284 = INT8_MIN;
static int64_t t60 = -24853419412840120LL;
static int64_t x299 = -4052011266565LL;
int32_t x302 = 652;
int8_t x304 = INT8_MIN;
static int16_t x307 = 903;
uint64_t x314 = UINT64_MAX;
volatile uint64_t x324 = 132LLU;
int64_t x332 = -392679412514LL;
uint16_t x333 = UINT16_MAX;
int16_t x338 = INT16_MIN;
volatile int16_t x343 = INT16_MAX;
uint16_t x344 = 1U;
volatile int32_t t71 = -267637557;
int8_t x346 = -1;
int64_t x350 = -1LL;
int16_t x352 = -34;
static volatile int64_t t73 = -30368LL;
int16_t x355 = INT16_MIN;
int32_t t74 = 93;
int8_t x360 = 1;
static int64_t t79 = 8239071719LL;
static int16_t x403 = -1;
uint64_t t84 = 1228668084742978LLU;
int32_t x408 = 22;
uint8_t x414 = UINT8_MAX;
static int8_t x424 = 0;
static int64_t x429 = INT64_MIN;
volatile int16_t x432 = INT16_MIN;
uint16_t x436 = UINT16_MAX;
int32_t t91 = 3;
int16_t x441 = INT16_MIN;
uint64_t x442 = 14LLU;
int16_t x444 = INT16_MIN;
int16_t x453 = INT16_MAX;
int16_t x454 = INT16_MIN;
static uint32_t x463 = 55308U;
volatile int64_t x465 = 46096LL;
int32_t x466 = INT32_MIN;
volatile int64_t t98 = 798617539795433271LL;
volatile int32_t x470 = -128576;


void f0(void) {
	int16_t x2 = -1;
	int64_t x3 = -6045866LL;
	int32_t x4 = INT32_MAX;
	int64_t t0 = -1LL;

	t0 = (x1%((x2&x3)-x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 3U;
	int64_t x6 = -227430074LL;
	static int32_t x8 = -69039;
	uint64_t t1 = 17062150481LLU;

	t1 = (x5%((x6&x7)-x8));

	if (t1 != 3LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -61LL;
	int32_t x11 = 0;
	static uint64_t x12 = 370360859LLU;

	t2 = (x9%((x10&x11)-x12));

	if (t2 != 370360798LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x16 = 1891056926618232720LLU;
	volatile uint64_t t3 = 1498169991LLU;

	t3 = (x13%((x14&x15)-x16));

	if (t3 != 65535LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 7029198532LLU;
	int32_t x19 = -1;
	uint64_t x20 = 3LLU;

	t4 = (x17%((x18&x19)-x20));

	if (t4 != 6759062571LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int32_t x22 = INT32_MIN;
	uint32_t x23 = 257U;
	static int16_t x24 = -1723;
	static uint32_t t5 = 31U;

	t5 = (x21%((x22&x23)-x24));

	if (t5 != 61U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 1748;
	int64_t x26 = -1LL;
	int16_t x27 = 2678;
	uint32_t x28 = 156560644U;
	int64_t t6 = -2885211702911115LL;

	t6 = (x25%((x26&x27)-x28));

	if (t6 != 1748LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x30 = -1;
	int64_t x31 = -5LL;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -30LL;

	t7 = (x29%((x30&x31)-x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -19;
	volatile uint64_t x34 = UINT64_MAX;
	int64_t x35 = INT64_MIN;
	int64_t x36 = -12934959LL;
	uint64_t t8 = 956029LLU;

	t8 = (x33%((x34&x35)-x36));

	if (t8 != 9223372036841840830LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = UINT8_MAX;
	static int64_t x39 = 468239682LL;
	int64_t x40 = -1LL;
	int64_t t9 = 26987548LL;

	t9 = (x37%((x38&x39)-x40));

	if (t9 != 60LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 1U;
	int16_t x42 = -1;
	static int16_t x44 = -490;
	volatile int32_t t10 = -750862364;

	t10 = (x41%((x42&x43)-x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int8_t x46 = -1;
	static int64_t x47 = -17262LL;
	int64_t x48 = -1LL;
	int64_t t11 = 38262373229033935LL;

	t11 = (x45%((x46&x47)-x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	uint8_t x52 = 98U;
	int64_t t12 = -471LL;

	t12 = (x49%((x50&x51)-x52));

	if (t12 != 127LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	volatile uint32_t x55 = 970280U;
	static int32_t x56 = INT32_MAX;
	int64_t t13 = -83LL;

	t13 = (x53%((x54&x55)-x56));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int32_t x58 = INT32_MAX;
	int64_t x59 = -62050LL;
	volatile int16_t x60 = -1;
	int64_t t14 = -26408008661709LL;

	t14 = (x57%((x58&x59)-x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = UINT64_MAX;
	int64_t x62 = -1LL;
	uint8_t x63 = 29U;
	uint64_t t15 = 312096825636LLU;

	t15 = (x61%((x62&x63)-x64));

	if (t15 != 13LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 6U;
	volatile uint8_t x68 = 0U;
	static volatile int64_t t16 = 905402LL;

	t16 = (x65%((x66&x67)-x68));

	if (t16 != 6LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = -19713244008LL;
	uint16_t x71 = 7018U;
	static int16_t x72 = -1530;

	t17 = (x69%((x70&x71)-x72));

	if (t17 != -470LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -29;
	volatile int16_t x82 = INT16_MAX;
	uint8_t x83 = UINT8_MAX;
	int8_t x84 = 1;
	static volatile int32_t t18 = 515081212;

	t18 = (x81%((x82&x83)-x84));

	if (t18 != -29) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x86 = INT8_MIN;
	uint64_t x87 = 10LLU;
	static volatile int8_t x88 = -1;
	uint64_t t19 = 7304LLU;

	t19 = (x85%((x86&x87)-x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x91 = 15172LLU;
	int64_t x92 = INT64_MIN;

	t20 = (x89%((x90&x91)-x92));

	if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -733;
	static uint16_t x94 = UINT16_MAX;
	volatile uint64_t x95 = UINT64_MAX;
	int32_t x96 = -1;
	uint64_t t21 = 382437071907660LLU;

	t21 = (x93%((x94&x95)-x96));

	if (t21 != 64803LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = -3618807LL;
	uint8_t x99 = UINT8_MAX;
	int64_t t22 = 3LL;

	t22 = (x97%((x98&x99)-x100));

	if (t22 != -30LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x101 = UINT32_MAX;
	uint8_t x103 = 7U;
	int32_t x104 = -861;
	volatile uint32_t t23 = 859202U;

	t23 = (x101%((x102&x103)-x104));

	if (t23 != 3U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x106 = 7212660168LL;
	uint64_t x107 = 167743LLU;
	int64_t x108 = -93LL;
	volatile uint64_t t24 = 276419481545803LLU;

	t24 = (x105%((x106&x107)-x108));

	if (t24 != 1004LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MAX;
	static uint64_t x114 = UINT64_MAX;
	int32_t x115 = INT32_MIN;
	int8_t x116 = -1;
	uint64_t t25 = 79715753056711LLU;

	t25 = (x113%((x114&x115)-x116));

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x119 = -1;
	uint64_t x120 = UINT64_MAX;
	uint64_t t26 = 7LLU;

	t26 = (x117%((x118&x119)-x120));

	if (t26 != 4294967295LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x123 = UINT64_MAX;
	static int64_t x124 = INT64_MAX;
	volatile uint64_t t27 = 35LLU;

	t27 = (x121%((x122&x123)-x124));

	if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 104681LLU;
	volatile int8_t x126 = 1;
	int16_t x127 = INT16_MIN;
	int8_t x128 = INT8_MIN;
	static volatile uint64_t t28 = 415LLU;

	t28 = (x125%((x126&x127)-x128));

	if (t28 != 105LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	volatile uint16_t x130 = 1595U;
	static int8_t x131 = -1;
	uint8_t x132 = 21U;
	int64_t t29 = -5235576367LL;

	t29 = (x129%((x130&x131)-x132));

	if (t29 != -1170LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 0U;
	uint32_t x134 = 30441508U;
	int32_t x135 = INT32_MAX;
	static uint8_t x136 = UINT8_MAX;

	t30 = (x133%((x134&x135)-x136));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = -1;
	static volatile uint64_t t31 = 11598957007588266LLU;

	t31 = (x141%((x142&x143)-x144));

	if (t31 != 1021273859LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = 1402108LL;
	int32_t x146 = 97498;
	uint64_t x147 = 85827LLU;
	volatile uint64_t t32 = 6233735797990LLU;

	t32 = (x145%((x146&x147)-x148));

	if (t32 != 1402108LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -1;
	int32_t x154 = INT32_MAX;
	volatile int16_t x156 = 631;

	t33 = (x153%((x154&x155)-x156));

	if (t33 != 39495U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = 842089LLU;
	int8_t x163 = -1;
	int64_t x164 = 3672381LL;
	volatile uint64_t t34 = 694LLU;

	t34 = (x161%((x162&x163)-x164));

	if (t34 != 842089LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -189984334;
	uint16_t x171 = UINT16_MAX;
	static volatile int32_t x172 = INT32_MAX;
	volatile int32_t t35 = 26608333;

	t35 = (x169%((x170&x171)-x172));

	if (t35 != -189984334) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x173 = -1;
	static int8_t x175 = INT8_MIN;
	int32_t x176 = -1;
	int32_t t36 = -202253342;

	t36 = (x173%((x174&x175)-x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = 54;
	uint16_t x178 = 1018U;
	uint32_t x180 = 16283U;
	volatile uint32_t t37 = 4U;

	t37 = (x177%((x178&x179)-x180));

	if (t37 != 54U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x189 = 1514U;
	int8_t x190 = -1;
	int32_t x191 = INT32_MIN;
	int32_t x192 = -1;
	uint32_t t38 = 5195599U;

	t38 = (x189%((x190&x191)-x192));

	if (t38 != 1514U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x194 = 551;
	int32_t x196 = -1;
	static int64_t t39 = -2LL;

	t39 = (x193%((x194&x195)-x196));

	if (t39 != -516LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = -15803640;
	static int8_t x202 = 1;
	volatile int32_t x203 = INT32_MIN;
	volatile int64_t x204 = -1257029258864067LL;
	static int64_t t40 = -209LL;

	t40 = (x201%((x202&x203)-x204));

	if (t40 != -15803640LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x205 = INT16_MIN;
	uint32_t x207 = 4U;
	volatile int16_t x208 = -1;
	uint32_t t41 = 611U;

	t41 = (x205%((x206&x207)-x208));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = 25;
	uint8_t x211 = 73U;

	t42 = (x209%((x210&x211)-x212));

	if (t42 != 25LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x213 = 34985LLU;
	static int32_t x214 = INT32_MIN;
	volatile uint16_t x215 = 7U;
	volatile uint64_t t43 = 28LLU;

	t43 = (x213%((x214&x215)-x216));

	if (t43 != 34985LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x218 = INT8_MIN;
	volatile int32_t x220 = 1;
	volatile int32_t t44 = 164915564;

	t44 = (x217%((x218&x219)-x220));

	if (t44 != 15) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x221 = INT32_MAX;
	int16_t x222 = 1709;
	static int8_t x223 = INT8_MAX;
	int32_t t45 = -341491;

	t45 = (x221%((x222&x223)-x224));

	if (t45 != 5) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x227 = UINT32_MAX;
	uint64_t x228 = 458673442160LLU;

	t46 = (x225%((x226&x227)-x228));

	if (t46 != 108020120683LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x234 = -1;
	int16_t x236 = -5;
	static volatile int32_t t47 = 5086;

	t47 = (x233%((x234&x235)-x236));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x238 = INT16_MIN;
	uint64_t x239 = UINT64_MAX;
	uint64_t t48 = 1044649335LLU;

	t48 = (x237%((x238&x239)-x240));

	if (t48 != 98248LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x243 = 18415178LLU;
	int64_t x244 = -6004812850121099LL;

	t49 = (x241%((x242&x243)-x244));

	if (t49 != 5984311918885773LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x245 = 2U;
	volatile uint64_t x246 = 61092LLU;
	int16_t x247 = INT16_MAX;
	volatile uint64_t t50 = 31412LLU;

	t50 = (x245%((x246&x247)-x248));

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = -1;
	int8_t x250 = 1;
	int16_t x251 = -1;
	static int32_t x252 = 51242;
	static int32_t t51 = 1;

	t51 = (x249%((x250&x251)-x252));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x254 = -59;
	uint8_t x255 = 3U;
	int64_t t52 = 5176196977748641LL;

	t52 = (x253%((x254&x255)-x256));

	if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x257 = 222LLU;
	int8_t x258 = -7;
	int16_t x259 = INT16_MIN;
	static int8_t x260 = 5;
	uint64_t t53 = 32053972406344507LLU;

	t53 = (x257%((x258&x259)-x260));

	if (t53 != 222LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x265 = UINT16_MAX;
	int16_t x266 = -1;
	int16_t x267 = -1;
	int8_t x268 = 0;
	volatile int32_t t54 = -1385135;

	t54 = (x265%((x266&x267)-x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = -1;
	int64_t x270 = -1175186717LL;
	int64_t x271 = 219939608566959541LL;
	int32_t x272 = INT32_MIN;
	static int64_t t55 = -127040858LL;

	t55 = (x269%((x270&x271)-x272));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = 11;
	int32_t x274 = INT32_MIN;
	int32_t x275 = -605152316;
	volatile uint32_t x276 = 52607U;
	static uint32_t t56 = 1U;

	t56 = (x273%((x274&x275)-x276));

	if (t56 != 11U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	static int64_t x279 = 3855LL;
	int64_t x280 = 81557102664325LL;
	static volatile int64_t t57 = 5397797037060LL;

	t57 = (x277%((x278&x279)-x280));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MAX;
	uint64_t x283 = 75LLU;
	uint64_t t58 = 1205LLU;

	t58 = (x281%((x282&x283)-x284));

	if (t58 != 84LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x285 = UINT8_MAX;
	volatile int8_t x286 = -2;
	static uint32_t x287 = UINT32_MAX;
	volatile uint8_t x288 = 13U;
	volatile uint32_t t59 = 771467026U;

	t59 = (x285%((x286&x287)-x288));

	if (t59 != 255U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x289 = 10LL;
	int64_t x290 = -322216764255891LL;
	static int8_t x291 = -1;
	int64_t x292 = -3906LL;

	t60 = (x289%((x290&x291)-x292));

	if (t60 != 10LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = INT8_MAX;
	int8_t x298 = -1;
	static int16_t x300 = INT16_MIN;
	int64_t t61 = -24527926810414LL;

	t61 = (x297%((x298&x299)-x300));

	if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x301 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	static int32_t t62 = 0;

	t62 = (x301%((x302&x303)-x304));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x305 = -11;
	volatile int64_t x306 = -33618509067788602LL;
	static volatile uint8_t x308 = 2U;
	int64_t t63 = -1325LL;

	t63 = (x305%((x306&x307)-x308));

	if (t63 != -11LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x313 = INT64_MAX;
	int8_t x315 = -1;
	int8_t x316 = INT8_MIN;
	volatile uint64_t t64 = 5441LLU;

	t64 = (x313%((x314&x315)-x316));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = INT32_MAX;
	static int16_t x318 = INT16_MIN;
	uint64_t x319 = 151716339338508LLU;
	int16_t x320 = 40;
	volatile uint64_t t65 = 103451374078LLU;

	t65 = (x317%((x318&x319)-x320));

	if (t65 != 2147483647LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x321 = -5;
	static volatile int8_t x322 = INT8_MIN;
	volatile uint32_t x323 = UINT32_MAX;
	static volatile uint64_t t66 = 29151582901851520LLU;

	t66 = (x321%((x322&x323)-x324));

	if (t66 != 67595LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x325 = -1;
	uint32_t x326 = 7U;
	static uint8_t x327 = 120U;
	uint16_t x328 = UINT16_MAX;
	volatile uint32_t t67 = 254735U;

	t67 = (x325%((x326&x327)-x328));

	if (t67 != 65534U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x329 = 67U;
	static int16_t x330 = INT16_MIN;
	static uint8_t x331 = UINT8_MAX;
	int64_t t68 = -48613604364722LL;

	t68 = (x329%((x330&x331)-x332));

	if (t68 != 67LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x334 = UINT64_MAX;
	int32_t x335 = -49;
	int32_t x336 = INT32_MIN;
	static uint64_t t69 = 16956686733697LLU;

	t69 = (x333%((x334&x335)-x336));

	if (t69 != 65535LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x339 = -1;
	int64_t x340 = -1LL;
	volatile uint64_t t70 = 1LLU;

	t70 = (x337%((x338&x339)-x340));

	if (t70 != 32766LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = -2867;
	int16_t x342 = -194;

	t71 = (x341%((x342&x343)-x344));

	if (t71 != -2867) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x345 = INT8_MIN;
	uint8_t x347 = 2U;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t72 = 94829608;

	t72 = (x345%((x346&x347)-x348));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x349 = INT64_MIN;
	int64_t x351 = 463LL;

	t73 = (x349%((x350&x351)-x352));

	if (t73 != -218LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x353 = INT8_MIN;
	int32_t x354 = 55;
	int32_t x356 = -50823;

	t74 = (x353%((x354&x355)-x356));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x357 = UINT32_MAX;
	uint32_t x358 = 16090556U;
	int16_t x359 = -1;
	volatile uint32_t t75 = 364201982U;

	t75 = (x357%((x358&x359)-x360));

	if (t75 != 14879665U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x365 = 112U;
	int8_t x366 = INT8_MIN;
	uint32_t x367 = UINT32_MAX;
	volatile int8_t x368 = 0;
	volatile uint32_t t76 = 73170545U;

	t76 = (x365%((x366&x367)-x368));

	if (t76 != 112U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x369 = -2;
	uint16_t x370 = UINT16_MAX;
	static uint64_t x371 = 39022514951LLU;
	int16_t x372 = 96;
	uint64_t t77 = 10298614554LLU;

	t77 = (x369%((x370&x371)-x372));

	if (t77 != 6467LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x373 = -83;
	int32_t x374 = -695;
	uint32_t x375 = UINT32_MAX;
	uint32_t x376 = 1173644320U;
	volatile uint32_t t78 = 1327373559U;

	t78 = (x373%((x374&x375)-x376));

	if (t78 != 1173644932U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x377 = -1LL;
	int64_t x378 = 51627128164LL;
	volatile int64_t x379 = INT64_MAX;
	int64_t x380 = -1030442169118940115LL;

	t79 = (x377%((x378&x379)-x380));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x381 = INT8_MIN;
	volatile int64_t x382 = -54697684806341LL;
	uint32_t x383 = 3U;
	uint16_t x384 = 27U;
	volatile int64_t t80 = -24LL;

	t80 = (x381%((x382&x383)-x384));

	if (t80 != -8LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x389 = 254037715;
	int32_t x390 = -480931;
	static volatile uint64_t x391 = 680747LLU;
	int8_t x392 = 31;
	uint64_t t81 = 56LLU;

	t81 = (x389%((x390&x391)-x392));

	if (t81 != 465851LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x393 = INT16_MIN;
	static int16_t x394 = -1;
	volatile int64_t x395 = -187666841747LL;
	static uint64_t x396 = 241490054LLU;
	volatile uint64_t t82 = 31LLU;

	t82 = (x393%((x394&x395)-x396));

	if (t82 != 187908299033LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x397 = -1LL;
	volatile int8_t x398 = INT8_MIN;
	volatile int8_t x399 = 49;
	uint32_t x400 = 280815886U;
	int64_t t83 = -408104LL;

	t83 = (x397%((x398&x399)-x400));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x401 = 3801373960LLU;
	static volatile uint16_t x402 = UINT16_MAX;
	volatile uint64_t x404 = 77818034LLU;

	t84 = (x401%((x402&x403)-x404));

	if (t84 != 3801373960LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x405 = 28;
	int8_t x406 = -3;
	static uint16_t x407 = UINT16_MAX;
	volatile int32_t t85 = -6;

	t85 = (x405%((x406&x407)-x408));

	if (t85 != 28) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x409 = 75728435510468444LL;
	uint32_t x410 = 20857771U;
	uint64_t x411 = UINT64_MAX;
	static int8_t x412 = INT8_MIN;
	uint64_t t86 = 21442LLU;

	t86 = (x409%((x410&x411)-x412));

	if (t86 != 9721820LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x413 = 9;
	int64_t x415 = INT64_MIN;
	uint64_t x416 = 1816081LLU;
	uint64_t t87 = 56164957567121944LLU;

	t87 = (x413%((x414&x415)-x416));

	if (t87 != 9LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = INT8_MIN;
	int64_t x418 = INT64_MIN;
	uint64_t x419 = 31770596257719LLU;
	int32_t x420 = -3;
	volatile uint64_t t88 = 3143250731619782793LLU;

	t88 = (x417%((x418&x419)-x420));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x421 = INT64_MIN;
	static int32_t x422 = INT32_MAX;
	int8_t x423 = -3;
	static volatile int64_t t89 = 238755521183084698LL;

	t89 = (x421%((x422&x423)-x424));

	if (t89 != -18LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x430 = UINT16_MAX;
	uint32_t x431 = UINT32_MAX;
	int64_t t90 = -1415636LL;

	t90 = (x429%((x430&x431)-x432));

	if (t90 != -35195LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = -1;
	volatile int16_t x435 = 222;

	t91 = (x433%((x434&x435)-x436));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x437 = -1;
	int16_t x438 = -1;
	volatile uint64_t x439 = 6LLU;
	static int8_t x440 = -1;
	volatile uint64_t t92 = 5LLU;

	t92 = (x437%((x438&x439)-x440));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x443 = INT16_MIN;
	uint64_t t93 = 270022663920870LLU;

	t93 = (x441%((x442&x443)-x444));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x445 = INT32_MAX;
	volatile int64_t x446 = -707344428548942895LL;
	volatile int8_t x447 = -1;
	uint32_t x448 = 1769U;
	volatile int64_t t94 = 260886224697487404LL;

	t94 = (x445%((x446&x447)-x448));

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x455 = -1;
	static int64_t x456 = -1LL;
	volatile int64_t t95 = 8LL;

	t95 = (x453%((x454&x455)-x456));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x457 = 223165278LLU;
	uint8_t x458 = 1U;
	volatile int64_t x459 = -168015LL;
	static int8_t x460 = 6;
	volatile uint64_t t96 = 1LLU;

	t96 = (x457%((x458&x459)-x460));

	if (t96 != 223165278LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x461 = -42154455797286LL;
	int64_t x462 = INT64_MIN;
	static int64_t x464 = 34512143LL;
	int64_t t97 = -75150263LL;

	t97 = (x461%((x462&x463)-x464));

	if (t97 != -12875652LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x467 = INT64_MAX;
	int32_t x468 = 213524;

	t98 = (x465%((x466&x467)-x468));

	if (t98 != 46096LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x469 = INT16_MIN;
	uint32_t x471 = UINT32_MAX;
	static volatile int16_t x472 = INT16_MIN;
	uint32_t t99 = 660U;

	t99 = (x469%((x470&x471)-x472));

	if (t99 != 63040U) { NG(); } else { ; }
	
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

