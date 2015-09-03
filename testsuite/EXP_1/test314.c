#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x12 = UINT8_MAX;
int8_t x26 = 2;
int32_t t4 = 841899;
int16_t x39 = INT16_MIN;
static volatile int64_t t7 = -60187099LL;
volatile int8_t x51 = 1;
volatile uint64_t t10 = 19163940193427LLU;
volatile int64_t x70 = INT64_MIN;
static uint16_t x75 = UINT16_MAX;
volatile uint64_t t13 = 14LLU;
static uint8_t x89 = 11U;
static volatile uint16_t x99 = UINT16_MAX;
static volatile uint32_t t16 = 11U;
int16_t x109 = -3023;
static volatile uint16_t x111 = 291U;
uint64_t t19 = 52794LLU;
int16_t x121 = INT16_MIN;
volatile uint16_t x126 = 226U;
int32_t x127 = -3;
static volatile uint16_t x128 = 4U;
volatile int32_t t21 = 15840;
static volatile int32_t x156 = INT32_MIN;
static volatile uint16_t x163 = 128U;
int32_t t29 = 788;
uint32_t x173 = UINT32_MAX;
int16_t x179 = INT16_MAX;
uint8_t x181 = UINT8_MAX;
int16_t x183 = -1;
int8_t x184 = INT8_MIN;
uint8_t x190 = 9U;
int8_t x192 = 0;
uint64_t x196 = 6374502748545933LLU;
int64_t t38 = 3545634741705977LL;
int32_t x210 = -1;
static volatile int8_t x212 = -1;
volatile int32_t t40 = 5131;
static int16_t x229 = -1;
uint64_t x243 = UINT64_MAX;
volatile uint16_t x250 = 4040U;
uint64_t x263 = 816377395LLU;
volatile uint64_t t47 = 43911621797LLU;
uint32_t x268 = UINT32_MAX;
int32_t x272 = -1;
static int8_t x273 = INT8_MIN;
int32_t t50 = INT32_MAX;
static uint64_t x277 = 1381864271LLU;
int16_t x279 = -4;
static int16_t x281 = INT16_MAX;
int32_t x285 = -1;
int64_t x287 = INT64_MIN;
static int32_t x298 = -1;
uint16_t x307 = 20700U;
volatile int16_t x309 = INT16_MAX;
static int32_t t58 = -41;
int8_t x315 = -1;
int8_t x321 = -15;
int8_t x326 = INT8_MAX;
int8_t x328 = INT8_MIN;
int32_t x339 = -1;
static uint32_t x346 = UINT32_MAX;
static uint64_t x348 = 411LLU;
int16_t x351 = INT16_MIN;
static int8_t x352 = -1;
int8_t x357 = INT8_MIN;
volatile uint64_t t69 = 223049293447934225LLU;
static uint16_t x364 = 0U;
volatile uint8_t x367 = 2U;
static int64_t x370 = -1LL;
uint32_t x381 = 0U;
int16_t x385 = 264;
static uint8_t x387 = 13U;
int16_t x388 = INT16_MIN;
static volatile int32_t x391 = -1026;
static int32_t t76 = 254408;
static volatile uint64_t x395 = 443384788450950750LLU;
volatile uint64_t t77 = 2967480067905186LLU;
volatile uint32_t x409 = 998955712U;
int32_t x418 = -2;
volatile int32_t x420 = -1;
volatile int64_t t82 = 32761830LL;
int32_t x429 = -3998382;
uint8_t x440 = 27U;
int64_t x445 = -1LL;
int16_t x448 = INT16_MAX;
volatile int32_t t88 = 12;
static int64_t x457 = -1LL;
volatile uint32_t x463 = 0U;
static int16_t x464 = -5;
int64_t t92 = 4432292808194518657LL;
uint64_t x470 = 222LLU;
int8_t x472 = INT8_MIN;
uint8_t x480 = 0U;
uint64_t x483 = 62LLU;
int8_t x489 = -1;
static volatile int8_t x496 = INT8_MIN;
volatile uint64_t t99 = 70109LLU;


void f0(void) {
	uint8_t x5 = 22U;
	uint32_t x6 = 197059712U;
	int8_t x7 = 7;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t0 = 5504833U;

	t0 = (((x5-x6)|x7)-x8);

	if (t0 != 1950423959U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	volatile uint16_t x10 = UINT16_MAX;
	int32_t x11 = INT32_MIN;
	volatile int64_t t1 = 22942979209LL;

	t1 = (((x9-x10)|x11)-x12);

	if (t1 != -65791LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = UINT8_MAX;
	uint16_t x14 = 3867U;
	int16_t x15 = -1;
	int64_t x16 = -6832LL;
	int64_t t2 = -7852LL;

	t2 = (((x13-x14)|x15)-x16);

	if (t2 != 6831LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x21 = 1U;
	static int16_t x22 = INT16_MIN;
	static int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MIN;
	int64_t t3 = 345860170LL;

	t3 = (((x21-x22)|x23)-x24);

	if (t3 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MAX;
	volatile int32_t x27 = INT32_MIN;
	static uint8_t x28 = 95U;

	t4 = (((x25-x26)|x27)-x28);

	if (t4 != -2147483618) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = INT32_MAX;
	volatile int64_t x30 = 47398270LL;
	int32_t x31 = -1;
	uint32_t x32 = UINT32_MAX;
	int64_t t5 = -1LL;

	t5 = (((x29-x30)|x31)-x32);

	if (t5 != -4294967296LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = -1LL;
	int32_t x35 = INT32_MAX;
	volatile uint32_t x36 = 168821316U;
	int64_t t6 = -22320833986LL;

	t6 = (((x33-x34)|x35)-x36);

	if (t6 != -9223372034876113477LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = -69749LL;
	int64_t x40 = 2027449LL;

	t7 = (((x37-x38)|x39)-x40);

	if (t7 != -2056132LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x45 = -11786;
	uint8_t x46 = 0U;
	uint8_t x47 = 58U;
	uint8_t x48 = 12U;
	volatile int32_t t8 = 12029433;

	t8 = (((x45-x46)|x47)-x48);

	if (t8 != -11790) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MAX;
	int8_t x52 = -1;
	volatile int32_t t9 = 51;

	t9 = (((x49-x50)|x51)-x52);

	if (t9 != 130) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x57 = INT64_MAX;
	uint32_t x58 = 1U;
	volatile int32_t x59 = INT32_MAX;
	uint64_t x60 = 124974771889594590LLU;

	t10 = (((x57-x58)|x59)-x60);

	if (t10 != 9098397264965181217LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x69 = -1;
	static int8_t x71 = 19;
	uint64_t x72 = 815181889LLU;
	uint64_t t11 = 1982632LLU;

	t11 = (((x69-x70)|x71)-x72);

	if (t11 != 9223372036039593918LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MAX;
	int32_t x74 = INT32_MAX;
	int64_t x76 = 3LL;
	int64_t t12 = 15493200241LL;

	t12 = (((x73-x74)|x75)-x76);

	if (t12 != -2147418116LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = 13072641209996677LLU;
	volatile int32_t x78 = INT32_MAX;
	int64_t x79 = -1LL;
	int32_t x80 = INT32_MIN;

	t13 = (((x77-x78)|x79)-x80);

	if (t13 != 2147483647LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x90 = 252130844U;
	uint64_t x91 = 9531784LLU;
	static int8_t x92 = 6;
	volatile uint64_t t14 = 1565354539439LLU;

	t14 = (((x89-x90)|x91)-x92);

	if (t14 != 4042914281LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x93 = -5;
	volatile int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MIN;
	int16_t x96 = 1181;
	int32_t t15 = 39237;

	t15 = (((x93-x94)|x95)-x96);

	if (t15 != -1186) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x97 = 15020U;
	static volatile int16_t x98 = INT16_MIN;
	volatile int32_t x100 = 763222;

	t16 = (((x97-x98)|x99)-x100);

	if (t16 != 4294269609U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x110 = 304064203640LLU;
	int64_t x112 = -1LL;
	volatile uint64_t t17 = 2862597536LLU;

	t17 = (((x109-x110)|x111)-x112);

	if (t17 != 18446743769645345212LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x113 = 0U;
	int8_t x114 = -43;
	int64_t x115 = -1332654647890LL;
	int32_t x116 = 64;
	volatile int64_t t18 = 1219950483435277133LL;

	t18 = (((x113-x114)|x115)-x116);

	if (t18 != -1332654647953LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x117 = INT16_MIN;
	uint64_t x118 = 7097490775742600434LLU;
	int64_t x119 = INT64_MIN;
	uint16_t x120 = UINT16_MAX;

	t19 = (((x117-x118)|x119)-x120);

	if (t19 != 11349253297966852879LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x122 = UINT8_MAX;
	static uint64_t x123 = 704093854LLU;
	int8_t x124 = -1;
	uint64_t t20 = 93960100210496LLU;

	t20 = (((x121-x122)|x123)-x124);

	if (t20 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = 20;

	t21 = (((x125-x126)|x127)-x128);

	if (t21 != -5) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = 0;
	int16_t x130 = INT16_MIN;
	volatile int8_t x131 = 0;
	static uint64_t x132 = 11799670264LLU;
	volatile uint64_t t22 = 50857LLU;

	t22 = (((x129-x130)|x131)-x132);

	if (t22 != 18446744061909914120LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x133 = -4710;
	uint32_t x134 = 18428611U;
	int16_t x135 = INT16_MAX;
	static uint8_t x136 = UINT8_MAX;
	static volatile uint32_t t23 = 36U;

	t23 = (((x133-x134)|x135)-x136);

	if (t23 != 4276551424U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x137 = INT8_MIN;
	volatile uint16_t x138 = 107U;
	static int32_t x139 = INT32_MAX;
	static int64_t x140 = INT64_MIN;
	volatile int64_t t24 = INT64_MAX;

	t24 = (((x137-x138)|x139)-x140);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	uint32_t x143 = UINT32_MAX;
	uint64_t x144 = UINT64_MAX;
	static uint64_t t25 = 781536301400LLU;

	t25 = (((x141-x142)|x143)-x144);

	if (t25 != 4294967296LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x149 = 616U;
	static int32_t x150 = -1;
	static int64_t x151 = INT64_MIN;
	volatile int8_t x152 = 0;
	volatile int64_t t26 = -123115474578184525LL;

	t26 = (((x149-x150)|x151)-x152);

	if (t26 != -9223372036854775191LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = 1U;
	uint64_t x154 = 331LLU;
	volatile int16_t x155 = INT16_MIN;
	volatile uint64_t t27 = 236754437LLU;

	t27 = (((x153-x154)|x155)-x156);

	if (t27 != 2147483318LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x161 = -1LL;
	volatile int64_t x162 = -1LL;
	static int64_t x164 = -128504013034045311LL;
	int64_t t28 = 307257339LL;

	t28 = (((x161-x162)|x163)-x164);

	if (t28 != 128504013034045439LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = 333152318;
	volatile int8_t x166 = INT8_MAX;
	int16_t x167 = 1;
	int16_t x168 = -1;

	t29 = (((x165-x166)|x167)-x168);

	if (t29 != 333152192) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	uint8_t x171 = 3U;
	volatile int8_t x172 = INT8_MIN;
	static volatile int32_t t30 = 5686;

	t30 = (((x169-x170)|x171)-x172);

	if (t30 != 131) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x174 = -156024LL;
	volatile int32_t x175 = 0;
	static uint64_t x176 = UINT64_MAX;
	volatile uint64_t t31 = 40281350954060695LLU;

	t31 = (((x173-x174)|x175)-x176);

	if (t31 != 4295123320LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x177 = 1U;
	int64_t x178 = INT64_MAX;
	volatile int64_t x180 = -1LL;
	int64_t t32 = -1808657029779374LL;

	t32 = (((x177-x178)|x179)-x180);

	if (t32 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x182 = 11800U;
	uint32_t t33 = 132027936U;

	t33 = (((x181-x182)|x183)-x184);

	if (t33 != 127U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x185 = 32LL;
	uint64_t x186 = 2776882197LLU;
	uint8_t x187 = UINT8_MAX;
	int32_t x188 = INT32_MIN;
	volatile uint64_t t34 = 2558968288959LLU;

	t34 = (((x185-x186)|x187)-x188);

	if (t34 != 18446744073080153343LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x189 = 46U;
	uint16_t x191 = 3678U;
	volatile int32_t t35 = 126910440;

	t35 = (((x189-x190)|x191)-x192);

	if (t35 != 3711) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x193 = INT16_MIN;
	int64_t x194 = -1LL;
	uint32_t x195 = 14U;
	uint64_t t36 = 4687728LLU;

	t36 = (((x193-x194)|x195)-x196);

	if (t36 != 18440369570960972930LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x197 = INT16_MIN;
	static int16_t x198 = -100;
	int32_t x199 = -1;
	volatile int16_t x200 = -1;
	int32_t t37 = 37;

	t37 = (((x197-x198)|x199)-x200);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = INT16_MIN;
	volatile int64_t x202 = INT64_MIN;
	uint32_t x203 = 122U;
	volatile int8_t x204 = INT8_MAX;

	t38 = (((x201-x202)|x203)-x204);

	if (t38 != 9223372036854743035LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x209 = -1;
	int16_t x211 = INT16_MAX;
	volatile int32_t t39 = 1;

	t39 = (((x209-x210)|x211)-x212);

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x217 = 82352;
	int8_t x218 = 1;
	static int8_t x219 = INT8_MAX;
	static int8_t x220 = INT8_MAX;

	t40 = (((x217-x218)|x219)-x220);

	if (t40 != 82304) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x221 = 0;
	volatile uint16_t x222 = 4581U;
	volatile uint8_t x223 = 4U;
	static volatile int64_t x224 = -1LL;
	int64_t t41 = 196654LL;

	t41 = (((x221-x222)|x223)-x224);

	if (t41 != -4576LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x230 = UINT8_MAX;
	uint16_t x231 = 2U;
	int64_t x232 = -257227LL;
	volatile int64_t t42 = 3049LL;

	t42 = (((x229-x230)|x231)-x232);

	if (t42 != 256973LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x233 = 1;
	volatile int8_t x234 = 4;
	static int8_t x235 = -1;
	int16_t x236 = 4343;
	int32_t t43 = -116752;

	t43 = (((x233-x234)|x235)-x236);

	if (t43 != -4344) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MIN;
	volatile int64_t x239 = INT64_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t44 = -1LL;

	t44 = (((x237-x238)|x239)-x240);

	if (t44 != -98175LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x241 = 1LL;
	uint16_t x242 = UINT16_MAX;
	int32_t x244 = 31349285;
	static uint64_t t45 = 2834095555LLU;

	t45 = (((x241-x242)|x243)-x244);

	if (t45 != 18446744073678202330LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x249 = 472077LL;
	static int32_t x251 = 41580;
	static int32_t x252 = INT32_MIN;
	static volatile int64_t t46 = 78746437773603LL;

	t46 = (((x249-x250)|x251)-x252);

	if (t46 != 2147985005LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x261 = INT16_MAX;
	int8_t x262 = -7;
	uint64_t x264 = UINT64_MAX;

	t47 = (((x261-x262)|x263)-x264);

	if (t47 != 816377400LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x265 = 1402U;
	volatile int8_t x266 = -1;
	int8_t x267 = 9;
	volatile uint32_t t48 = 535U;

	t48 = (((x265-x266)|x267)-x268);

	if (t48 != 1404U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x269 = INT64_MIN;
	static int32_t x270 = -1;
	static uint16_t x271 = 19428U;
	static volatile int64_t t49 = 15723781801419111LL;

	t49 = (((x269-x270)|x271)-x272);

	if (t49 != -9223372036854756378LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x274 = 10713U;
	uint16_t x275 = UINT16_MAX;
	int32_t x276 = INT32_MIN;

	t50 = (((x273-x274)|x275)-x276);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x278 = INT8_MAX;
	static volatile int64_t x280 = 74510314953657110LL;
	uint64_t t51 = 34417357661239LLU;

	t51 = (((x277-x278)|x279)-x280);

	if (t51 != 18372233758755894502LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x282 = 0U;
	uint16_t x283 = UINT16_MAX;
	uint64_t x284 = 158738287805598883LLU;
	volatile uint64_t t52 = 175657357556LLU;

	t52 = (((x281-x282)|x283)-x284);

	if (t52 != 18288005785904018268LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x286 = -213914448;
	int32_t x288 = 1;
	volatile int64_t t53 = 350LL;

	t53 = (((x285-x286)|x287)-x288);

	if (t53 != -9223372036640861362LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x289 = UINT64_MAX;
	uint16_t x290 = 7356U;
	int32_t x291 = INT32_MIN;
	static uint16_t x292 = 323U;
	uint64_t t54 = 41100214836877LLU;

	t54 = (((x289-x290)|x291)-x292);

	if (t54 != 18446744073709543936LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x293 = INT8_MAX;
	static volatile uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 6821930611662LLU;
	uint32_t x296 = 1809821U;
	uint64_t t55 = 4LLU;

	t55 = (((x293-x294)|x295)-x296);

	if (t55 != 6821928801841LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = INT64_MIN;
	int32_t x299 = 4918768;
	int16_t x300 = INT16_MAX;
	static int64_t t56 = 2365LL;

	t56 = (((x297-x298)|x299)-x300);

	if (t56 != -9223372036849889806LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x305 = INT64_MIN;
	int16_t x306 = INT16_MIN;
	int64_t x308 = -1LL;
	static int64_t t57 = 1247395LL;

	t57 = (((x305-x306)|x307)-x308);

	if (t57 != -9223372036854722339LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x310 = 12;
	int32_t x311 = -1;
	volatile int8_t x312 = -1;

	t58 = (((x309-x310)|x311)-x312);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x313 = UINT64_MAX;
	int8_t x314 = -1;
	int16_t x316 = INT16_MIN;
	uint64_t t59 = 24730467647LLU;

	t59 = (((x313-x314)|x315)-x316);

	if (t59 != 32767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x317 = -9;
	uint64_t x318 = 53954287903902404LLU;
	int16_t x319 = 1958;
	volatile int8_t x320 = INT8_MIN;
	static volatile uint64_t t60 = 71092LLU;

	t60 = (((x317-x318)|x319)-x320);

	if (t60 != 18392789785805649975LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x322 = -7;
	int16_t x323 = INT16_MAX;
	static int16_t x324 = -1;
	volatile int32_t t61 = 22637;

	t61 = (((x321-x322)|x323)-x324);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x325 = 46U;
	int16_t x327 = 244;
	int32_t t62 = 119819615;

	t62 = (((x325-x326)|x327)-x328);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x329 = 69190902802141LL;
	volatile int16_t x330 = INT16_MAX;
	int32_t x331 = INT32_MIN;
	static uint64_t x332 = UINT64_MAX;
	uint64_t t63 = 74433LLU;

	t63 = (((x329-x330)|x331)-x332);

	if (t63 != 18446744072689182431LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = INT8_MAX;
	uint32_t x334 = 6285863U;
	uint16_t x335 = UINT16_MAX;
	static uint8_t x336 = 5U;
	uint32_t t64 = 51046U;

	t64 = (((x333-x334)|x335)-x336);

	if (t64 != 4288741370U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x337 = INT8_MIN;
	uint32_t x338 = UINT32_MAX;
	int32_t x340 = -39856;
	uint32_t t65 = 2U;

	t65 = (((x337-x338)|x339)-x340);

	if (t65 != 39855U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x341 = INT16_MAX;
	volatile int8_t x342 = INT8_MIN;
	uint16_t x343 = UINT16_MAX;
	volatile int64_t x344 = 97208170242097LL;
	volatile int64_t t66 = -13308108784012845LL;

	t66 = (((x341-x342)|x343)-x344);

	if (t66 != -97208170176562LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x345 = INT16_MIN;
	static int32_t x347 = 3723;
	uint64_t t67 = 450LLU;

	t67 = (((x345-x346)|x347)-x348);

	if (t67 != 4294937840LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = -1;
	uint16_t x350 = UINT16_MAX;
	int32_t t68 = 10;

	t68 = (((x349-x350)|x351)-x352);

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x358 = 7U;
	static uint64_t x359 = 3978833908840394206LLU;
	uint16_t x360 = 943U;

	t69 = (((x357-x358)|x359)-x360);

	if (t69 != 18446744073709550672LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = -1;
	int32_t x363 = INT32_MIN;
	static int32_t t70 = 0;

	t70 = (((x361-x362)|x363)-x364);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x365 = -1357;
	int64_t x366 = INT64_MIN;
	static int32_t x368 = -913;
	volatile int64_t t71 = 253LL;

	t71 = (((x365-x366)|x367)-x368);

	if (t71 != 9223372036854775364LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x369 = 1617704458LLU;
	uint32_t x371 = 821U;
	uint8_t x372 = 0U;
	static uint64_t t72 = 1163244134182633LLU;

	t72 = (((x369-x370)|x371)-x372);

	if (t72 != 1617704767LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x373 = -1;
	static volatile uint32_t x374 = 25U;
	int16_t x375 = 464;
	int32_t x376 = INT32_MIN;
	uint32_t t73 = 9472439U;

	t73 = (((x373-x374)|x375)-x376);

	if (t73 != 2147483638U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x382 = INT8_MIN;
	volatile int8_t x383 = INT8_MIN;
	int8_t x384 = 6;
	uint32_t t74 = 10950U;

	t74 = (((x381-x382)|x383)-x384);

	if (t74 != 4294967162U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x386 = INT8_MIN;
	volatile int32_t t75 = 112;

	t75 = (((x385-x386)|x387)-x388);

	if (t75 != 33165) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x389 = 12U;
	volatile int8_t x390 = INT8_MIN;
	int16_t x392 = 14650;

	t76 = (((x389-x390)|x391)-x392);

	if (t76 != -15676) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x393 = -526623718;
	int32_t x394 = INT32_MIN;
	static int64_t x396 = INT64_MAX;

	t77 = (((x393-x394)|x395)-x396);

	if (t77 != 9666756826388921951LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x397 = INT16_MAX;
	int32_t x398 = INT32_MAX;
	int16_t x399 = INT16_MAX;
	uint8_t x400 = 51U;
	volatile int32_t t78 = -47014;

	t78 = (((x397-x398)|x399)-x400);

	if (t78 != -2147418164) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x401 = 29;
	int64_t x402 = 1652LL;
	uint32_t x403 = UINT32_MAX;
	int8_t x404 = -1;
	volatile int64_t t79 = 4929305LL;

	t79 = (((x401-x402)|x403)-x404);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x410 = UINT8_MAX;
	uint32_t x411 = UINT32_MAX;
	int16_t x412 = INT16_MAX;
	volatile uint32_t t80 = 4U;

	t80 = (((x409-x410)|x411)-x412);

	if (t80 != 4294934528U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x413 = 165800895;
	volatile int32_t x414 = -31;
	int8_t x415 = INT8_MAX;
	volatile uint8_t x416 = UINT8_MAX;
	volatile int32_t t81 = 3652;

	t81 = (((x413-x414)|x415)-x416);

	if (t81 != 165800704) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x417 = 13217092LL;
	uint32_t x419 = 47U;

	t82 = (((x417-x418)|x419)-x420);

	if (t82 != 13217136LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x421 = INT64_MIN;
	static int32_t x422 = INT32_MIN;
	volatile int8_t x423 = INT8_MIN;
	volatile int32_t x424 = 64;
	static int64_t t83 = 1LL;

	t83 = (((x421-x422)|x423)-x424);

	if (t83 != -192LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x425 = UINT16_MAX;
	static int16_t x426 = INT16_MIN;
	int16_t x427 = -2;
	int32_t x428 = INT32_MIN;
	volatile int32_t t84 = INT32_MAX;

	t84 = (((x425-x426)|x427)-x428);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x430 = INT16_MAX;
	int64_t x431 = INT64_MIN;
	volatile uint16_t x432 = 6474U;
	int64_t t85 = -3322926888LL;

	t85 = (((x429-x430)|x431)-x432);

	if (t85 != -4037623LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x437 = 2;
	volatile uint64_t x438 = 9031030LLU;
	uint32_t x439 = 14272370U;
	uint64_t t86 = 74LLU;

	t86 = (((x437-x438)|x439)-x440);

	if (t86 != 18446744073709549539LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x446 = UINT8_MAX;
	int8_t x447 = -1;
	volatile int64_t t87 = 25545117LL;

	t87 = (((x445-x446)|x447)-x448);

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x449 = 5U;
	uint16_t x450 = UINT16_MAX;
	uint16_t x451 = UINT16_MAX;
	int16_t x452 = 1;

	t88 = (((x449-x450)|x451)-x452);

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x453 = INT8_MAX;
	static int16_t x454 = INT16_MIN;
	int16_t x455 = 5;
	int32_t x456 = -2;
	volatile int32_t t89 = 188387;

	t89 = (((x453-x454)|x455)-x456);

	if (t89 != 32897) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x458 = INT32_MIN;
	static int32_t x459 = INT32_MIN;
	static uint16_t x460 = UINT16_MAX;
	static int64_t t90 = -134632853475706217LL;

	t90 = (((x457-x458)|x459)-x460);

	if (t90 != -65536LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x461 = INT32_MAX;
	static uint16_t x462 = 31U;
	volatile uint32_t t91 = 14U;

	t91 = (((x461-x462)|x463)-x464);

	if (t91 != 2147483621U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x465 = INT8_MAX;
	int8_t x466 = 0;
	static int64_t x467 = INT64_MIN;
	int16_t x468 = -1;

	t92 = (((x465-x466)|x467)-x468);

	if (t92 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x469 = UINT8_MAX;
	int8_t x471 = INT8_MAX;
	static volatile uint64_t t93 = 30113467010911251LLU;

	t93 = (((x469-x470)|x471)-x472);

	if (t93 != 255LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x473 = INT8_MAX;
	uint32_t x474 = UINT32_MAX;
	uint32_t x475 = UINT32_MAX;
	int64_t x476 = INT64_MAX;
	int64_t t94 = -101457LL;

	t94 = (((x473-x474)|x475)-x476);

	if (t94 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x477 = INT16_MIN;
	uint32_t x478 = 8060U;
	static uint64_t x479 = 69021205231589167LLU;
	volatile uint64_t t95 = 308701649114LLU;

	t95 = (((x477-x478)|x479)-x480);

	if (t95 != 69021206778443695LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x481 = -1;
	int64_t x482 = INT64_MAX;
	uint16_t x484 = 198U;
	uint64_t t96 = 7562476LLU;

	t96 = (((x481-x482)|x483)-x484);

	if (t96 != 9223372036854775672LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x485 = -1;
	volatile int32_t x486 = -1;
	int32_t x487 = -50;
	static int16_t x488 = INT16_MIN;
	int32_t t97 = 345;

	t97 = (((x485-x486)|x487)-x488);

	if (t97 != 32718) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x490 = 3050;
	static volatile int8_t x491 = 0;
	volatile int16_t x492 = 18;
	int32_t t98 = 125900;

	t98 = (((x489-x490)|x491)-x492);

	if (t98 != -3069) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x493 = INT16_MIN;
	volatile uint64_t x494 = UINT64_MAX;
	int32_t x495 = INT32_MIN;

	t99 = (((x493-x494)|x495)-x496);

	if (t99 != 18446744073709518977LLU) { NG(); } else { ; }
	
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

