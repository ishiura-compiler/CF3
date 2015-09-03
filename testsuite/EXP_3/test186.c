#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x11 = 7U;
int8_t x17 = INT8_MAX;
volatile int32_t t4 = -44244937;
volatile int32_t t6 = -182848;
static int32_t x56 = -6019;
uint32_t t7 = 8649U;
int16_t x58 = 56;
int16_t x60 = INT16_MIN;
uint32_t x63 = 1246793754U;
uint32_t t9 = 2289538U;
static volatile uint32_t t11 = 6U;
static uint16_t x77 = 2661U;
volatile int32_t t12 = 144;
uint64_t x81 = 1452697014495470LLU;
uint64_t t14 = 523579980713076428LLU;
uint32_t x97 = UINT32_MAX;
int64_t x101 = 8LL;
uint16_t x116 = UINT16_MAX;
volatile int64_t t19 = 15LL;
static int32_t t20 = 1014730;
volatile uint32_t x125 = UINT32_MAX;
int64_t x128 = 17004570123835214LL;
volatile int32_t x139 = -3288703;
uint64_t t23 = 64695802530389LLU;
int8_t x144 = INT8_MIN;
volatile uint64_t t24 = 219239794LLU;
volatile int32_t t25 = 80532715;
int16_t x154 = INT16_MIN;
volatile int32_t t28 = -16148244;
int64_t x187 = -1814100440LL;
uint16_t x189 = UINT16_MAX;
uint16_t x191 = 1313U;
int16_t x192 = -25;
int64_t x194 = -21688LL;
uint64_t x201 = 414046238059616LLU;
uint64_t x205 = UINT64_MAX;
static volatile int64_t x217 = 2967735290625934LL;
volatile uint64_t t35 = 1775958756807159335LLU;
int16_t x221 = INT16_MIN;
uint32_t x222 = 39777192U;
uint64_t x233 = UINT64_MAX;
volatile int16_t x238 = -1;
uint8_t x240 = 9U;
int16_t x244 = -2284;
uint8_t x251 = 1U;
int8_t x260 = INT8_MAX;
int64_t x278 = 13LL;
static volatile uint32_t x296 = 5598943U;
uint32_t t49 = 705411U;
int8_t x324 = INT8_MIN;
static int32_t x326 = 75077;
uint32_t t55 = 7579470U;
volatile int16_t x330 = INT16_MAX;
volatile int32_t t56 = 105600606;
int32_t x342 = -1;
static int64_t x344 = -1LL;
int64_t t57 = -299409800487607155LL;
int16_t x346 = -5288;
uint16_t x353 = 213U;
volatile uint64_t t60 = 7317752962544554659LLU;
int8_t x362 = INT8_MIN;
int8_t x369 = 3;
static int32_t x371 = INT32_MAX;
uint64_t t64 = 203088358396LLU;
int16_t x384 = INT16_MIN;
int8_t x388 = -28;
uint8_t x398 = 1U;
int32_t x411 = INT32_MIN;
uint16_t x413 = 213U;
volatile uint32_t t74 = 1312U;
int64_t x425 = 56862826LL;
int64_t t75 = 111283LL;
volatile int8_t x434 = 11;
int8_t x435 = -1;
int16_t x445 = INT16_MIN;
int32_t x447 = -1;
uint64_t x448 = 607874009618LLU;
volatile uint64_t t78 = 9616LLU;
int8_t x454 = -1;
int16_t x463 = INT16_MAX;
uint64_t t81 = 184329912507616109LLU;
static int32_t x475 = -1;
int64_t x476 = INT64_MIN;
int64_t t82 = 569LL;
uint32_t x478 = UINT32_MAX;
int32_t x480 = INT32_MAX;
int16_t x498 = 2;
int8_t x502 = 1;
int16_t x503 = 6412;
int32_t x506 = -239306;
volatile int16_t x508 = INT16_MIN;
int64_t t89 = 494382LL;
volatile int16_t x514 = INT16_MIN;
static int64_t t90 = 100949LL;
volatile uint64_t x517 = 14LLU;
int16_t x518 = INT16_MAX;
static uint64_t x519 = 1058234617LLU;
volatile uint64_t t91 = 3LLU;
int32_t x528 = INT32_MIN;
uint16_t x535 = 10675U;
volatile int64_t t94 = -125295827538LL;
uint16_t x545 = UINT16_MAX;
uint64_t x547 = UINT64_MAX;
volatile uint8_t x548 = 23U;
uint64_t t95 = 1622322LLU;
uint8_t x558 = UINT8_MAX;
volatile int32_t t97 = 518433;
int8_t x561 = -4;
int8_t x562 = INT8_MAX;
static volatile int64_t x563 = -125494LL;
volatile uint8_t x564 = 6U;


void f0(void) {
	int64_t x5 = -1LL;
	int32_t x6 = 78543929;
	static int16_t x7 = -865;
	int64_t x8 = INT64_MIN;
	volatile int64_t t0 = -25679413201828LL;

	t0 = ((x5-x6)/(x7-x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = INT8_MIN;
	uint16_t x10 = UINT16_MAX;
	int8_t x12 = INT8_MAX;
	volatile int32_t t1 = -1;

	t1 = ((x9-x10)/(x11-x12));

	if (t1 != 547) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x18 = -149;
	static int16_t x19 = INT16_MIN;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t2 = 394;

	t2 = ((x17-x18)/(x19-x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 4504491768064LLU;
	volatile uint32_t x22 = 13051U;
	static uint8_t x23 = UINT8_MAX;
	volatile int64_t x24 = -1LL;
	volatile uint64_t t3 = 12641LLU;

	t3 = ((x21-x22)/(x23-x24));

	if (t3 != 17595670918LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MIN;
	int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	int16_t x36 = 31;

	t4 = ((x33-x34)/(x35-x36));

	if (t4 != 65473) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x45 = -1;
	int16_t x46 = INT16_MIN;
	static int64_t x47 = -76277150148384647LL;
	int16_t x48 = -288;
	int64_t t5 = 1699440729929393LL;

	t5 = ((x45-x46)/(x47-x48));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = 1;
	volatile int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MIN;
	volatile int8_t x52 = -4;

	t6 = ((x49-x50)/(x51-x52));

	if (t6 != -264) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x53 = 2U;
	volatile int16_t x54 = -1;
	static volatile uint32_t x55 = UINT32_MAX;

	t7 = ((x53-x54)/(x55-x56));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x57 = INT16_MIN;
	int32_t x59 = 29166;
	int32_t t8 = -15045;

	t8 = ((x57-x58)/(x59-x60));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x61 = 241U;
	int32_t x62 = -4;
	int8_t x64 = INT8_MIN;

	t9 = ((x61-x62)/(x63-x64));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = UINT8_MAX;
	volatile int16_t x66 = INT16_MIN;
	static int8_t x67 = INT8_MIN;
	volatile int32_t x68 = -1;
	volatile int32_t t10 = 4066;

	t10 = ((x65-x66)/(x67-x68));

	if (t10 != -260) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x73 = 1622894U;
	volatile int8_t x74 = INT8_MIN;
	int32_t x75 = -1;
	uint32_t x76 = 2396074U;

	t11 = ((x73-x74)/(x75-x76));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x78 = 6U;
	int8_t x79 = INT8_MAX;
	static int8_t x80 = 1;

	t12 = ((x77-x78)/(x79-x80));

	if (t12 != 21) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x82 = -1;
	int32_t x83 = INT32_MIN;
	int64_t x84 = 379487198LL;
	volatile uint64_t t13 = 681LLU;

	t13 = ((x81-x82)/(x83-x84));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = INT8_MIN;
	volatile uint64_t x90 = 3963136225LLU;
	int16_t x91 = -1;
	int32_t x92 = INT32_MIN;

	t14 = ((x89-x90)/(x91-x92));

	if (t14 != 8589934594LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x93 = INT16_MAX;
	int64_t x94 = 17212037074736LL;
	uint32_t x95 = 7U;
	volatile uint32_t x96 = 14910428U;
	int64_t t15 = 1LL;

	t15 = ((x93-x94)/(x95-x96));

	if (t15 != -4021LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x98 = 8U;
	uint32_t x99 = 1U;
	static int8_t x100 = -19;
	uint32_t t16 = 6837286U;

	t16 = ((x97-x98)/(x99-x100));

	if (t16 != 214748364U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x102 = UINT16_MAX;
	int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MIN;
	int64_t t17 = -127902828091190LL;

	t17 = ((x101-x102)/(x103-x104));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x113 = INT64_MAX;
	volatile uint16_t x114 = UINT16_MAX;
	int64_t x115 = INT64_MAX;
	volatile int64_t t18 = -18614313462LL;

	t18 = ((x113-x114)/(x115-x116));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x117 = 7U;
	int16_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int8_t x120 = -1;

	t19 = ((x117-x118)/(x119-x120));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = -1;
	volatile int8_t x122 = -1;
	int16_t x123 = -1;
	int16_t x124 = INT16_MAX;

	t20 = ((x121-x122)/(x123-x124));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x126 = 38U;
	int16_t x127 = -1;
	int64_t t21 = -15798667095547LL;

	t21 = ((x125-x126)/(x127-x128));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = INT8_MIN;
	static int16_t x130 = INT16_MIN;
	uint8_t x131 = UINT8_MAX;
	int64_t x132 = -1LL;
	volatile int64_t t22 = -6011296805LL;

	t22 = ((x129-x130)/(x131-x132));

	if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x137 = INT32_MAX;
	uint8_t x138 = 0U;
	uint64_t x140 = UINT64_MAX;

	t23 = ((x137-x138)/(x139-x140));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x141 = 139085553137271LLU;
	int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;

	t24 = ((x141-x142)/(x143-x144));

	if (t24 != 1095161835984LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = -1;
	int32_t x150 = -1;
	static int8_t x151 = INT8_MIN;
	int16_t x152 = 149;

	t25 = ((x149-x150)/(x151-x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x153 = 117476409773LLU;
	static int64_t x155 = INT64_MIN;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t26 = 18LLU;

	t26 = ((x153-x154)/(x155-x156));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x157 = 71784606178680359LL;
	uint64_t x158 = 9292LLU;
	int64_t x159 = -14130868488LL;
	uint8_t x160 = UINT8_MAX;
	volatile uint64_t t27 = 25187433694911465LLU;

	t27 = ((x157-x158)/(x159-x160));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = 96089;
	static int16_t x166 = 13571;
	volatile uint16_t x167 = UINT16_MAX;
	uint8_t x168 = 0U;

	t28 = ((x165-x166)/(x167-x168));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x169 = 863;
	volatile int8_t x170 = INT8_MAX;
	volatile int16_t x171 = 293;
	uint64_t x172 = 2196581654039LLU;
	volatile uint64_t t29 = 1574447781358742851LLU;

	t29 = ((x169-x170)/(x171-x172));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x185 = 12406LL;
	uint64_t x186 = 38436LLU;
	static uint64_t x188 = UINT64_MAX;
	volatile uint64_t t30 = 586440052LLU;

	t30 = ((x185-x186)/(x187-x188));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x190 = 66281;
	volatile int32_t t31 = 7371768;

	t31 = ((x189-x190)/(x191-x192));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = INT64_MIN;
	uint64_t x195 = UINT64_MAX;
	uint64_t x196 = 111158084011284LLU;
	uint64_t t32 = 4903230038820238865LLU;

	t32 = ((x193-x194)/(x195-x196));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	uint64_t t33 = 6339589166372683137LLU;

	t33 = ((x201-x202)/(x203-x204));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x206 = 786LLU;
	int32_t x207 = 1694263;
	int8_t x208 = -1;
	uint64_t t34 = 328976327921613LLU;

	t34 = ((x205-x206)/(x207-x208));

	if (t34 != 10887762517358LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x218 = UINT64_MAX;
	int32_t x219 = INT32_MIN;
	int64_t x220 = -79LL;

	t35 = ((x217-x218)/(x219-x220));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x223 = UINT64_MAX;
	volatile int64_t x224 = INT64_MIN;
	volatile uint64_t t36 = 100174184484013LLU;

	t36 = ((x221-x222)/(x223-x224));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x234 = -1;
	int16_t x235 = 61;
	volatile int8_t x236 = -1;
	static volatile uint64_t t37 = 80LLU;

	t37 = ((x233-x234)/(x235-x236));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x237 = 293;
	uint16_t x239 = 217U;
	volatile int32_t t38 = -10;

	t38 = ((x237-x238)/(x239-x240));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	uint8_t x243 = 0U;
	int64_t t39 = 7007038798073967LL;

	t39 = ((x241-x242)/(x243-x244));

	if (t39 != 4038253956591407LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x245 = 9680144LL;
	uint32_t x246 = UINT32_MAX;
	volatile uint8_t x247 = 46U;
	int64_t x248 = INT64_MAX;
	static int64_t t40 = -1937964LL;

	t40 = ((x245-x246)/(x247-x248));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x249 = 0U;
	static int8_t x250 = INT8_MIN;
	uint64_t x252 = 25402LLU;
	volatile uint64_t t41 = 37LLU;

	t41 = ((x249-x250)/(x251-x252));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x257 = INT16_MIN;
	static volatile int32_t x258 = -118;
	int8_t x259 = INT8_MIN;
	int32_t t42 = -45809;

	t42 = ((x257-x258)/(x259-x260));

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x265 = -1;
	static int16_t x266 = 3;
	uint16_t x267 = 2U;
	int16_t x268 = -1;
	volatile int32_t t43 = 48145;

	t43 = ((x265-x266)/(x267-x268));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x269 = -1;
	static volatile int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MAX;
	volatile int64_t x272 = -28558591796LL;
	volatile int64_t t44 = -2040184089LL;

	t44 = ((x269-x270)/(x271-x272));

	if (t44 != 300376127LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x273 = -3055596449746LL;
	static volatile uint32_t x274 = 24653017U;
	int32_t x275 = -1;
	volatile uint16_t x276 = 15U;
	volatile int64_t t45 = 61592275LL;

	t45 = ((x273-x274)/(x275-x276));

	if (t45 != 190976318922LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x277 = 1U;
	static int64_t x279 = -89389784025253672LL;
	volatile int8_t x280 = INT8_MAX;
	volatile int64_t t46 = 5LL;

	t46 = ((x277-x278)/(x279-x280));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = INT8_MAX;
	int16_t x286 = INT16_MIN;
	volatile int8_t x287 = INT8_MAX;
	volatile uint16_t x288 = 6U;
	static int32_t t47 = 83613;

	t47 = ((x285-x286)/(x287-x288));

	if (t47 != 271) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x289 = 11LLU;
	volatile int64_t x290 = 107241006LL;
	volatile int8_t x291 = INT8_MIN;
	uint64_t x292 = 3864096LLU;
	volatile uint64_t t48 = 1007616126278166924LLU;

	t48 = ((x289-x290)/(x291-x292));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x293 = 14912U;
	static int16_t x294 = INT16_MIN;
	volatile uint8_t x295 = 1U;

	t49 = ((x293-x294)/(x295-x296));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x297 = INT8_MIN;
	volatile int16_t x298 = -1;
	int16_t x299 = -273;
	int8_t x300 = INT8_MAX;
	int32_t t50 = 968988299;

	t50 = ((x297-x298)/(x299-x300));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x301 = 3091U;
	static uint32_t x302 = 9787U;
	int64_t x303 = -247231274227192LL;
	uint64_t x304 = 7960591793126102LLU;
	volatile uint64_t t51 = 15965256318228327LLU;

	t51 = ((x301-x302)/(x303-x304));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x305 = -23175524;
	uint16_t x306 = 42U;
	static int32_t x307 = INT32_MAX;
	uint8_t x308 = 0U;
	int32_t t52 = 293;

	t52 = ((x305-x306)/(x307-x308));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x309 = UINT8_MAX;
	uint8_t x310 = 0U;
	volatile uint16_t x311 = UINT16_MAX;
	static volatile uint32_t x312 = 735677402U;
	uint32_t t53 = 6U;

	t53 = ((x309-x310)/(x311-x312));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x321 = 112U;
	static int8_t x322 = INT8_MAX;
	static int32_t x323 = INT32_MIN;
	int32_t t54 = 1294505;

	t54 = ((x321-x322)/(x323-x324));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x325 = 4671958U;
	uint32_t x327 = 173U;
	volatile int16_t x328 = INT16_MAX;

	t55 = ((x325-x326)/(x327-x328));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x329 = -1;
	volatile int16_t x331 = -867;
	static uint8_t x332 = 3U;

	t56 = ((x329-x330)/(x331-x332));

	if (t56 != 37) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x341 = 1;
	volatile int8_t x343 = INT8_MAX;

	t57 = ((x341-x342)/(x343-x344));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x345 = 1966U;
	int64_t x347 = 4075703145739LL;
	int16_t x348 = INT16_MAX;
	int64_t t58 = 709808850LL;

	t58 = ((x345-x346)/(x347-x348));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x354 = UINT32_MAX;
	static uint8_t x355 = UINT8_MAX;
	int16_t x356 = -4020;
	volatile uint32_t t59 = 1746U;

	t59 = ((x353-x354)/(x355-x356));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x357 = -55;
	volatile int8_t x358 = 6;
	int64_t x359 = 54916394590715LL;
	uint64_t x360 = 204302502415254599LLU;

	t60 = ((x357-x358)/(x359-x360));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x363 = INT16_MAX;
	uint8_t x364 = UINT8_MAX;
	uint32_t t61 = 1817154U;

	t61 = ((x361-x362)/(x363-x364));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x365 = 4136045178227LL;
	int64_t x366 = -1LL;
	uint16_t x367 = UINT16_MAX;
	uint32_t x368 = 13U;
	int64_t t62 = 1952367603547450367LL;

	t62 = ((x365-x366)/(x367-x368));

	if (t62 != 63124525LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x370 = 3553481382599LLU;
	volatile int8_t x372 = INT8_MAX;
	static volatile uint64_t t63 = 1915165616908987258LLU;

	t63 = ((x369-x370)/(x371-x372));

	if (t63 != 8589933449LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x377 = -1;
	volatile uint32_t x378 = 31U;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = UINT64_MAX;

	t64 = ((x377-x378)/(x379-x380));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x381 = UINT32_MAX;
	volatile int32_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	static volatile uint32_t t65 = 171907U;

	t65 = ((x381-x382)/(x383-x384));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x385 = -4390626527LL;
	static int16_t x386 = INT16_MIN;
	int16_t x387 = -1;
	volatile int64_t t66 = 141290660LL;

	t66 = ((x385-x386)/(x387-x388));

	if (t66 != -162614583LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x389 = UINT64_MAX;
	static int16_t x390 = INT16_MIN;
	int8_t x391 = 1;
	int16_t x392 = 397;
	uint64_t t67 = 44704886312021LLU;

	t67 = ((x389-x390)/(x391-x392));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x397 = 4065014;
	volatile int8_t x399 = 3;
	static volatile int32_t x400 = -22507;
	volatile int32_t t68 = -342696;

	t68 = ((x397-x398)/(x399-x400));

	if (t68 != 180) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x401 = -346826082559455LL;
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = INT8_MIN;
	volatile int8_t x404 = INT8_MAX;
	int64_t t69 = 1085878LL;

	t69 = ((x401-x402)/(x403-x404));

	if (t69 != 1360102284803LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x405 = 5;
	int32_t x406 = -24;
	volatile int64_t x407 = -4464074681656177LL;
	uint8_t x408 = UINT8_MAX;
	int64_t t70 = -2099LL;

	t70 = ((x405-x406)/(x407-x408));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x409 = INT16_MAX;
	int16_t x410 = 152;
	int64_t x412 = 7199987LL;
	int64_t t71 = -897LL;

	t71 = ((x409-x410)/(x411-x412));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x414 = UINT8_MAX;
	static int64_t x415 = INT64_MIN;
	volatile int32_t x416 = -77;
	volatile int64_t t72 = 707226LL;

	t72 = ((x413-x414)/(x415-x416));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x417 = INT8_MIN;
	uint16_t x418 = UINT16_MAX;
	int32_t x419 = -97;
	volatile uint8_t x420 = 127U;
	static volatile int32_t t73 = -25004;

	t73 = ((x417-x418)/(x419-x420));

	if (t73 != 293) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x421 = -1;
	static volatile int32_t x422 = INT32_MIN;
	static uint8_t x423 = UINT8_MAX;
	uint32_t x424 = 3U;

	t74 = ((x421-x422)/(x423-x424));

	if (t74 != 8521760U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x426 = 381U;
	uint8_t x427 = 1U;
	int64_t x428 = -1LL;

	t75 = ((x425-x426)/(x427-x428));

	if (t75 != 28431222LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x433 = INT8_MAX;
	volatile uint64_t x436 = 355210LLU;
	uint64_t t76 = 2056725962263400866LLU;

	t76 = ((x433-x434)/(x435-x436));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x437 = INT8_MIN;
	volatile int32_t x438 = 105;
	int32_t x439 = -1107;
	uint32_t x440 = 2013006684U;
	volatile uint32_t t77 = 4229483U;

	t77 = ((x437-x438)/(x439-x440));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x446 = INT32_MIN;

	t78 = ((x445-x446)/(x447-x448));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x453 = 0;
	int64_t x455 = INT64_MAX;
	int8_t x456 = 0;
	volatile int64_t t79 = 1546LL;

	t79 = ((x453-x454)/(x455-x456));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x461 = -10701742173077LL;
	uint8_t x462 = UINT8_MAX;
	uint32_t x464 = UINT32_MAX;
	static int64_t t80 = 1LL;

	t80 = ((x461-x462)/(x463-x464));

	if (t80 != -326591252LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x465 = 3U;
	int64_t x466 = 0LL;
	int8_t x467 = 1;
	static uint64_t x468 = 701690391030659LLU;

	t81 = ((x465-x466)/(x467-x468));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x473 = 16097U;
	int64_t x474 = INT64_MAX;

	t82 = ((x473-x474)/(x475-x476));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x477 = -1;
	int64_t x479 = 2LL;
	volatile int64_t t83 = 12259486146890LL;

	t83 = ((x477-x478)/(x479-x480));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x485 = UINT32_MAX;
	volatile uint16_t x486 = 63U;
	int8_t x487 = -1;
	int8_t x488 = INT8_MIN;
	uint32_t t84 = 6346801U;

	t84 = ((x485-x486)/(x487-x488));

	if (t84 != 33818639U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x493 = INT64_MIN;
	static volatile int64_t x494 = -147630964551104267LL;
	static uint32_t x495 = 103U;
	volatile int64_t x496 = -1LL;
	static int64_t t85 = 4669973660354391LL;

	t85 = ((x493-x494)/(x495-x496));

	if (t85 != -87266741079842995LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x497 = -197;
	int16_t x499 = INT16_MIN;
	uint32_t x500 = 8603U;
	uint32_t t86 = 5697U;

	t86 = ((x497-x498)/(x499-x500));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x501 = -1067681445664LL;
	static int64_t x504 = -1LL;
	volatile int64_t t87 = -1275386959LL;

	t87 = ((x501-x502)/(x503-x504));

	if (t87 != -166487049LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x505 = 1590U;
	static int64_t x507 = INT64_MIN;
	int64_t t88 = 180LL;

	t88 = ((x505-x506)/(x507-x508));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x509 = 7721LL;
	int16_t x510 = INT16_MAX;
	static int64_t x511 = -770240527968887451LL;
	static volatile int16_t x512 = -3186;

	t89 = ((x509-x510)/(x511-x512));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x513 = INT8_MIN;
	int64_t x515 = INT64_MIN;
	volatile int8_t x516 = -1;

	t90 = ((x513-x514)/(x515-x516));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x520 = -13;

	t91 = ((x517-x518)/(x519-x520));

	if (t91 != 17431620125LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x525 = UINT16_MAX;
	int64_t x526 = INT64_MAX;
	int64_t x527 = -1LL;
	int64_t t92 = -2738890231886508907LL;

	t92 = ((x525-x526)/(x527-x528));

	if (t92 != -4294967297LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x529 = INT32_MIN;
	int32_t x530 = INT32_MIN;
	static volatile int8_t x531 = 6;
	int32_t x532 = INT32_MAX;
	static volatile int32_t t93 = -171;

	t93 = ((x529-x530)/(x531-x532));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x533 = -1LL;
	static uint8_t x534 = 1U;
	int64_t x536 = -1LL;

	t94 = ((x533-x534)/(x535-x536));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x546 = -1LL;

	t95 = ((x545-x546)/(x547-x548));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x549 = INT8_MAX;
	int16_t x550 = INT16_MIN;
	static int16_t x551 = INT16_MIN;
	static volatile int32_t x552 = INT32_MIN;
	static int32_t t96 = 0;

	t96 = ((x549-x550)/(x551-x552));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x557 = -22;
	int8_t x559 = INT8_MAX;
	uint8_t x560 = 13U;

	t97 = ((x557-x558)/(x559-x560));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t t98 = -276984457LL;

	t98 = ((x561-x562)/(x563-x564));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x573 = INT16_MIN;
	volatile uint8_t x574 = 25U;
	uint64_t x575 = 51136619225597815LLU;
	static int16_t x576 = 251;
	volatile uint64_t t99 = 68LLU;

	t99 = ((x573-x574)/(x575-x576));

	if (t99 != 360LLU) { NG(); } else { ; }
	
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

