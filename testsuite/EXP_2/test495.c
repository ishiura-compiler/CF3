#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x19 = 4U;
int64_t x23 = -1LL;
static uint32_t x26 = 11378466U;
int16_t x35 = -1;
int64_t x38 = 12LL;
int8_t x41 = INT8_MAX;
int16_t x46 = -1;
int64_t x49 = INT64_MIN;
uint64_t x50 = UINT64_MAX;
volatile int64_t x51 = -14446673365LL;
uint64_t t9 = 407846LLU;
volatile int8_t x56 = -1;
uint64_t x58 = 77093952002827255LLU;
int32_t x86 = 57;
static volatile uint16_t x101 = 17U;
int8_t x102 = -10;
int32_t x118 = -1;
static volatile uint32_t x128 = UINT32_MAX;
int8_t x133 = 0;
uint64_t x138 = 323637LLU;
int16_t x139 = 12565;
static int8_t x143 = -1;
int16_t x149 = INT16_MIN;
volatile uint32_t x150 = 0U;
int16_t x165 = INT16_MAX;
volatile uint32_t x167 = 379641U;
int8_t x171 = INT8_MIN;
static uint64_t x173 = 81LLU;
static uint8_t x176 = 65U;
int8_t x177 = -1;
int64_t t30 = -1273376155LL;
static int64_t t32 = 326LL;
static volatile int32_t x193 = INT32_MAX;
static int8_t x210 = 6;
int64_t t36 = -52LL;
static uint16_t x224 = UINT16_MAX;
int32_t t37 = 133949;
volatile int8_t x229 = -9;
volatile uint64_t x230 = 1010043963402LLU;
uint64_t t38 = 395688054LLU;
volatile int8_t x233 = INT8_MIN;
int16_t x235 = -1;
int64_t x243 = -3330403LL;
uint16_t x244 = 9U;
static uint32_t t42 = 30U;
int64_t x280 = -3915400335020LL;
int8_t x283 = INT8_MIN;
int8_t x289 = INT8_MAX;
uint16_t x290 = UINT16_MAX;
volatile int64_t t47 = -13LL;
static volatile int64_t t48 = -1164LL;
uint8_t x307 = 2U;
static uint32_t x319 = UINT32_MAX;
uint32_t x320 = 0U;
int8_t x322 = INT8_MIN;
volatile int16_t x325 = INT16_MIN;
static volatile uint64_t x327 = 8140615437030LLU;
volatile int64_t t55 = 354588516140LL;
uint64_t x336 = 329198581280736LLU;
static int16_t x337 = -191;
static int16_t x342 = -1;
int32_t x354 = INT32_MIN;
int64_t x355 = -25096LL;
uint16_t x357 = 28297U;
int64_t t63 = 104380226620527LL;
static int64_t x380 = -3721656287LL;
static int8_t x393 = 0;
static int64_t x408 = INT64_MAX;
int64_t x417 = INT64_MIN;
static volatile uint32_t t71 = 964U;
static int16_t x431 = 9;
static int16_t x438 = 0;
uint8_t x447 = 118U;
int32_t t76 = -1629492;
volatile uint32_t x461 = UINT32_MAX;
int32_t x462 = INT32_MIN;
uint8_t x463 = 0U;
uint16_t x464 = 27U;
uint64_t x465 = 2314673476LLU;
static int32_t x467 = 3;
int32_t x479 = -1;
int32_t x481 = INT32_MIN;
uint8_t x493 = 0U;
static int64_t x494 = -1LL;
int64_t t85 = -480998938LL;
uint32_t x499 = UINT32_MAX;
int64_t t87 = -3408256811974LL;
int16_t x517 = 0;
uint64_t x524 = UINT64_MAX;
volatile uint64_t t95 = 255936959641836LLU;
uint64_t x550 = 1819893698LLU;
int32_t x555 = -1;
uint64_t t99 = 227LLU;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint64_t x2 = UINT64_MAX;
	static int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MIN;
	static volatile uint64_t t0 = 1LLU;

	t0 = ((x1^(x2*x3))+x4);

	if (t0 != 2147549055LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = -1LL;
	static volatile int32_t x18 = 18653;
	int16_t x20 = -347;
	int64_t t1 = 586533532LL;

	t1 = ((x17^(x18*x19))+x20);

	if (t1 != -74960LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x21 = INT32_MIN;
	uint32_t x22 = 249U;
	volatile int64_t x24 = 62334918081979LL;
	int64_t t2 = 477797LL;

	t2 = ((x21^(x22*x23))+x24);

	if (t2 != 62337065565378LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MAX;
	volatile uint16_t x27 = 8U;
	static int32_t x28 = -1;
	uint32_t t3 = 206251U;

	t3 = ((x25^(x26*x27))+x28);

	if (t3 != 91027822U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = INT64_MAX;
	int16_t x30 = 235;
	int8_t x31 = INT8_MAX;
	uint32_t x32 = 108U;
	int64_t t4 = 324773LL;

	t4 = ((x29^(x30*x31))+x32);

	if (t4 != 9223372036854746070LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x33 = 64U;
	int16_t x34 = -1;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t5 = 1LLU;

	t5 = ((x33^(x34*x35))+x36);

	if (t5 != 64LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = -1LL;
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t6 = 67541862LLU;

	t6 = ((x37^(x38*x39))+x40);

	if (t6 != 18446744022169944074LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x42 = 8682737524LL;
	uint32_t x43 = 69U;
	static int64_t x44 = -1LL;
	int64_t t7 = 125860076121LL;

	t7 = ((x41^(x42*x43))+x44);

	if (t7 != 599108889146LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -98655146LL;
	int8_t x47 = INT8_MIN;
	int16_t x48 = -1;
	volatile int64_t t8 = -3829909530LL;

	t8 = ((x45^(x46*x47))+x48);

	if (t8 != -98655019LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x52 = 2U;

	t9 = ((x49^(x50*x51))+x52);

	if (t9 != 9223372051301449175LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -1LL;
	volatile int8_t x54 = INT8_MAX;
	int16_t x55 = 178;
	volatile int64_t t10 = -30687841314LL;

	t10 = ((x53^(x54*x55))+x56);

	if (t10 != -22608LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MAX;
	static int32_t x59 = INT32_MIN;
	volatile uint16_t x60 = 8U;
	volatile uint64_t t11 = 93LLU;

	t11 = ((x57^(x58*x59))+x60);

	if (t11 != 14142760803836624903LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MIN;
	volatile uint32_t x62 = 1909044183U;
	uint32_t x63 = 3858865U;
	int64_t x64 = INT64_MAX;
	volatile int64_t t12 = -336532LL;

	t12 = ((x61^(x62*x63))+x64);

	if (t12 != 2990231206LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = INT16_MAX;
	int64_t x66 = INT64_MIN;
	uint32_t x67 = 1U;
	int8_t x68 = -31;
	volatile int64_t t13 = -8101LL;

	t13 = ((x65^(x66*x67))+x68);

	if (t13 != -9223372036854743072LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = -1;
	static int32_t x70 = -1;
	uint8_t x71 = 115U;
	int8_t x72 = -1;
	volatile int32_t t14 = 7175236;

	t14 = ((x69^(x70*x71))+x72);

	if (t14 != 113) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = -13465;
	static uint32_t x78 = UINT32_MAX;
	volatile int32_t x79 = INT32_MIN;
	uint32_t x80 = 53U;
	static uint32_t t15 = 162U;

	t15 = ((x77^(x78*x79))+x80);

	if (t15 != 2147470236U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x81 = UINT8_MAX;
	uint8_t x82 = 1U;
	uint16_t x83 = UINT16_MAX;
	volatile int32_t x84 = INT32_MIN;
	int32_t t16 = 1563;

	t16 = ((x81^(x82*x83))+x84);

	if (t16 != -2147418368) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -1LL;
	int8_t x87 = 1;
	int64_t x88 = INT64_MAX;
	volatile int64_t t17 = 41027462604349LL;

	t17 = ((x85^(x86*x87))+x88);

	if (t17 != 9223372036854775749LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x103 = INT8_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t18 = 108918912890815LLU;

	t18 = ((x101^(x102*x103))+x104);

	if (t18 != 1296LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	uint16_t x107 = 5U;
	uint16_t x108 = 1U;
	volatile int32_t t19 = 0;

	t19 = ((x105^(x106*x107))+x108);

	if (t19 != 32129) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x113 = 8U;
	static int16_t x114 = 11466;
	uint64_t x115 = 22LLU;
	int16_t x116 = -1;
	static volatile uint64_t t20 = 1200LLU;

	t20 = ((x113^(x114*x115))+x116);

	if (t20 != 252243LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x117 = 25U;
	uint8_t x119 = UINT8_MAX;
	uint16_t x120 = 40U;
	int32_t t21 = -193517;

	t21 = ((x117^(x118*x119))+x120);

	if (t21 != -192) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x125 = -1LL;
	uint8_t x126 = UINT8_MAX;
	static int16_t x127 = 194;
	static volatile int64_t t22 = 1LL;

	t22 = ((x125^(x126*x127))+x128);

	if (t22 != 4294917824LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x134 = -1;
	int32_t x135 = 6117;
	static volatile int64_t x136 = INT64_MAX;
	volatile int64_t t23 = 1001114609562631545LL;

	t23 = ((x133^(x134*x135))+x136);

	if (t23 != 9223372036854769690LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x137 = INT8_MIN;
	static volatile uint8_t x140 = UINT8_MAX;
	volatile uint64_t t24 = 1927661LLU;

	t24 = ((x137^(x138*x139))+x140);

	if (t24 != 18446744069643053016LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x141 = 0LLU;
	volatile uint8_t x142 = 1U;
	uint16_t x144 = 29059U;
	volatile uint64_t t25 = 3852627332LLU;

	t25 = ((x141^(x142*x143))+x144);

	if (t25 != 29058LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x151 = INT16_MIN;
	int16_t x152 = 4;
	uint32_t t26 = 1094322548U;

	t26 = ((x149^(x150*x151))+x152);

	if (t26 != 4294934532U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x166 = INT16_MIN;
	volatile uint8_t x168 = UINT8_MAX;
	volatile uint32_t t27 = 377192U;

	t27 = ((x165^(x166*x167))+x168);

	if (t27 != 444858622U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x169 = UINT64_MAX;
	uint8_t x170 = 2U;
	int64_t x172 = INT64_MAX;
	uint64_t t28 = 5020253LLU;

	t28 = ((x169^(x170*x171))+x172);

	if (t28 != 9223372036854776062LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x174 = 2426683;
	int8_t x175 = INT8_MIN;
	uint64_t t29 = 103LLU;

	t29 = ((x173^(x174*x175))+x176);

	if (t29 != 18446744073398936338LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x178 = -552916382592401LL;
	uint16_t x179 = 2U;
	uint16_t x180 = 1845U;

	t30 = ((x177^(x178*x179))+x180);

	if (t30 != 1105832765186646LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x185 = -1;
	volatile uint64_t x186 = 3889086LLU;
	volatile int32_t x187 = -57575624;
	volatile int32_t x188 = INT32_MIN;
	uint64_t t31 = 327056LLU;

	t31 = ((x185^(x186*x187))+x188);

	if (t31 != 223914405756015LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x189 = 3U;
	static int32_t x190 = 3183505;
	int64_t x191 = -1LL;
	uint16_t x192 = 6U;

	t32 = ((x189^(x190*x191))+x192);

	if (t32 != -3183502LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x194 = INT16_MIN;
	static uint16_t x195 = UINT16_MAX;
	volatile uint8_t x196 = 18U;
	volatile int32_t t33 = -436;

	t33 = ((x193^(x194*x195))+x196);

	if (t33 != -32751) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x201 = INT8_MAX;
	int8_t x202 = 11;
	volatile uint8_t x203 = 0U;
	uint16_t x204 = 734U;
	volatile int32_t t34 = 31680367;

	t34 = ((x201^(x202*x203))+x204);

	if (t34 != 861) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x209 = -1;
	static int16_t x211 = INT16_MAX;
	int16_t x212 = -1;
	static int32_t t35 = 1;

	t35 = ((x209^(x210*x211))+x212);

	if (t35 != -196604) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x213 = INT64_MAX;
	static int8_t x214 = -1;
	int8_t x215 = 2;
	static uint32_t x216 = 502570U;

	t36 = ((x213^(x214*x215))+x216);

	if (t36 != -9223372036854273237LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x221 = INT32_MIN;
	volatile uint8_t x222 = 1U;
	int8_t x223 = INT8_MAX;

	t37 = ((x221^(x222*x223))+x224);

	if (t37 != -2147417986) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x231 = 4U;
	int16_t x232 = -6;

	t38 = ((x229^(x230*x231))+x232);

	if (t38 != 18446740033533698009LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x234 = 97269102566LLU;
	static int64_t x236 = -23882423863LL;
	static uint64_t t39 = 268LLU;

	t39 = ((x233^(x234*x235))+x236);

	if (t39 != 73386678627LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x237 = -1;
	int16_t x238 = 0;
	uint32_t x239 = 2613898U;
	int8_t x240 = -1;
	uint32_t t40 = 44481049U;

	t40 = ((x237^(x238*x239))+x240);

	if (t40 != 4294967294U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x241 = UINT16_MAX;
	volatile uint32_t x242 = 206U;
	volatile int64_t t41 = 38222222701687LL;

	t41 = ((x241^(x242*x243))+x244);

	if (t41 != -686064206LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x253 = INT16_MIN;
	static uint16_t x254 = 8U;
	int32_t x255 = -339;
	uint32_t x256 = 20956941U;

	t42 = ((x253^(x254*x255))+x256);

	if (t42 != 20986997U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x261 = 21453546255LLU;
	int32_t x262 = -1;
	volatile int32_t x263 = -2772100;
	volatile int32_t x264 = -1;
	volatile uint64_t t43 = 11458923LLU;

	t43 = ((x261^(x262*x263))+x264);

	if (t43 != 21450813322LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x273 = INT32_MAX;
	int64_t x274 = INT64_MIN;
	volatile int16_t x275 = 1;
	int32_t x276 = -53077;
	static int64_t t44 = -380556517LL;

	t44 = ((x273^(x274*x275))+x276);

	if (t44 != -9223372034707345238LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x277 = 3U;
	static uint16_t x278 = 387U;
	static int8_t x279 = INT8_MAX;
	volatile int64_t t45 = 223370598LL;

	t45 = ((x277^(x278*x279))+x280);

	if (t45 != -3915400285870LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x281 = -11995534;
	static volatile int16_t x282 = INT16_MIN;
	uint32_t x284 = 1336U;
	volatile uint32_t t46 = 131495937U;

	t46 = ((x281^(x282*x283))+x284);

	if (t46 != 4278778794U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x291 = -94;
	static int64_t x292 = INT64_MAX;

	t47 = ((x289^(x290*x291))+x292);

	if (t47 != 9223372036848615456LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x293 = 312;
	volatile int32_t x294 = 251721;
	static int16_t x295 = 695;
	static int64_t x296 = -15045054LL;

	t48 = ((x293^(x294*x295))+x296);

	if (t48 != 159900761LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x301 = INT64_MIN;
	int32_t x302 = -1;
	static int64_t x303 = -101071040025971LL;
	int8_t x304 = -1;
	int64_t t49 = 1442093444783569732LL;

	t49 = ((x301^(x302*x303))+x304);

	if (t49 != -9223270965814749838LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x305 = 4U;
	int16_t x306 = INT16_MIN;
	int8_t x308 = -1;
	static volatile int32_t t50 = 56;

	t50 = ((x305^(x306*x307))+x308);

	if (t50 != -65533) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x313 = 4;
	int16_t x314 = INT16_MAX;
	uint64_t x315 = 256565289092896880LLU;
	uint32_t x316 = 1048850592U;
	static volatile uint64_t t51 = 31718140569365LLU;

	t51 = ((x313^(x314*x315))+x316);

	if (t51 != 13606274170154932276LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x317 = 3341;
	int32_t x318 = 322410;
	static uint32_t t52 = 28U;

	t52 = ((x317^(x318*x319))+x320);

	if (t52 != 4294646171U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x321 = 86U;
	int64_t x323 = 108LL;
	int32_t x324 = INT32_MIN;
	int64_t t53 = 1LL;

	t53 = ((x321^(x322*x323))+x324);

	if (t53 != -2147497386LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x326 = UINT32_MAX;
	volatile int16_t x328 = INT16_MAX;
	uint64_t t54 = 23090906242197931LLU;

	t54 = ((x325^(x326*x327))+x328);

	if (t54 != 11349700537327957273LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MAX;
	static int32_t x331 = -1;
	uint8_t x332 = 61U;

	t55 = ((x329^(x330*x331))+x332);

	if (t55 != 9223372036854743102LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x333 = 1LL;
	uint32_t x334 = 647461U;
	uint16_t x335 = 6U;
	volatile uint64_t t56 = 0LLU;

	t56 = ((x333^(x334*x335))+x336);

	if (t56 != 329198585165503LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x338 = -4;
	int64_t x339 = -450085LL;
	uint64_t x340 = 2819346057666LLU;
	uint64_t t57 = 555595191876268LLU;

	t57 = ((x337^(x338*x339))+x340);

	if (t57 != 2819344257431LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = INT8_MIN;
	int8_t x343 = 10;
	uint16_t x344 = UINT16_MAX;
	static int32_t t58 = -25024228;

	t58 = ((x341^(x342*x343))+x344);

	if (t58 != 65653) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x345 = 9015;
	static int16_t x346 = INT16_MAX;
	uint64_t x347 = UINT64_MAX;
	int64_t x348 = 1225791651370LL;
	uint64_t t59 = 26462835LLU;

	t59 = ((x345^(x346*x347))+x348);

	if (t59 != 1225791627616LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x353 = INT8_MIN;
	uint8_t x356 = 0U;
	volatile int64_t t60 = 162098710387806765LL;

	t60 = ((x353^(x354*x355))+x356);

	if (t60 != -53893249630336LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x358 = -489470;
	uint16_t x359 = 2U;
	int64_t x360 = INT64_MAX;
	static volatile int64_t t61 = 29LL;

	t61 = ((x357^(x358*x359))+x360);

	if (t61 != 9223372036853825164LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x369 = -1LL;
	static int32_t x370 = -1;
	int64_t x371 = 50780LL;
	int16_t x372 = -3;
	volatile int64_t t62 = 7134857168736359LL;

	t62 = ((x369^(x370*x371))+x372);

	if (t62 != 50776LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = -54022LL;
	volatile uint16_t x375 = UINT16_MAX;
	uint16_t x376 = 2U;

	t63 = ((x373^(x374*x375))+x376);

	if (t63 != 3540331656LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x377 = -1;
	int32_t x378 = INT32_MIN;
	static uint64_t x379 = UINT64_MAX;
	volatile uint64_t t64 = 9075973LLU;

	t64 = ((x377^(x378*x379))+x380);

	if (t64 != 18446744067840411680LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x385 = 195502LLU;
	uint64_t x386 = UINT64_MAX;
	volatile int8_t x387 = -1;
	static int32_t x388 = INT32_MAX;
	volatile uint64_t t65 = 600792985255663774LLU;

	t65 = ((x385^(x386*x387))+x388);

	if (t65 != 2147679150LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x394 = 1LLU;
	static int16_t x395 = INT16_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile uint64_t t66 = 42624960660592405LLU;

	t66 = ((x393^(x394*x395))+x396);

	if (t66 != 4295000062LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x397 = 35055U;
	uint32_t x398 = 78482626U;
	uint8_t x399 = 1U;
	int64_t x400 = 0LL;
	volatile int64_t t67 = 143274546LL;

	t67 = ((x397^(x398*x399))+x400);

	if (t67 != 78447661LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x401 = UINT16_MAX;
	static uint16_t x402 = 15803U;
	int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t68 = -768574903;

	t68 = ((x401^(x402*x403))+x404);

	if (t68 != -1975041) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x405 = -1;
	int64_t x406 = -1LL;
	uint8_t x407 = 1U;
	static volatile int64_t t69 = INT64_MAX;

	t69 = ((x405^(x406*x407))+x408);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x418 = -1LL;
	static int32_t x419 = -1;
	uint16_t x420 = 633U;
	static volatile int64_t t70 = 350115638909168176LL;

	t70 = ((x417^(x418*x419))+x420);

	if (t70 != -9223372036854775174LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x425 = -11;
	int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	static volatile uint32_t x428 = UINT32_MAX;

	t71 = ((x425^(x426*x427))+x428);

	if (t71 != 4294950900U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x429 = INT64_MIN;
	int64_t x430 = -467552062873LL;
	uint16_t x432 = UINT16_MAX;
	int64_t t72 = 59881501056572LL;

	t72 = ((x429^(x430*x431))+x432);

	if (t72 != 9223367828886275486LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x433 = INT32_MIN;
	static uint8_t x434 = 9U;
	static int8_t x435 = INT8_MIN;
	int32_t x436 = INT32_MIN;
	volatile int32_t t73 = 48607;

	t73 = ((x433^(x434*x435))+x436);

	if (t73 != -1152) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x437 = UINT8_MAX;
	int64_t x439 = INT64_MIN;
	static int32_t x440 = INT32_MIN;
	static int64_t t74 = -812LL;

	t74 = ((x437^(x438*x439))+x440);

	if (t74 != -2147483393LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x445 = 568832117LLU;
	uint32_t x446 = 147U;
	static int16_t x448 = INT16_MAX;
	volatile uint64_t t75 = 69957542765816261LLU;

	t75 = ((x445^(x446*x447))+x448);

	if (t75 != 568882102LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x453 = -1;
	static uint8_t x454 = UINT8_MAX;
	uint8_t x455 = 0U;
	int8_t x456 = 28;

	t76 = ((x453^(x454*x455))+x456);

	if (t76 != 27) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t t77 = 19224317U;

	t77 = ((x461^(x462*x463))+x464);

	if (t77 != 26U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x466 = 79U;
	int16_t x468 = -902;
	uint64_t t78 = 321201944LLU;

	t78 = ((x465^(x466*x467))+x468);

	if (t78 != 2314672675LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x469 = -9746;
	int8_t x470 = -1;
	int64_t x471 = INT64_MAX;
	int8_t x472 = 4;
	volatile int64_t t79 = 10LL;

	t79 = ((x469^(x470*x471))+x472);

	if (t79 != 9223372036854766067LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x473 = UINT32_MAX;
	uint32_t x474 = UINT32_MAX;
	int8_t x475 = INT8_MIN;
	int16_t x476 = -1;
	uint32_t t80 = 373726715U;

	t80 = ((x473^(x474*x475))+x476);

	if (t80 != 4294967166U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x477 = INT8_MIN;
	uint64_t x478 = 256833LLU;
	volatile int8_t x480 = INT8_MAX;
	static uint64_t t81 = 11LLU;

	t81 = ((x477^(x478*x479))+x480);

	if (t81 != 256958LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x482 = -1;
	volatile int16_t x483 = INT16_MIN;
	uint64_t x484 = 49LLU;
	uint64_t t82 = 13442005766659LLU;

	t82 = ((x481^(x482*x483))+x484);

	if (t82 != 18446744071562100785LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x485 = 4U;
	volatile int8_t x486 = INT8_MIN;
	int16_t x487 = 0;
	static int16_t x488 = -1;
	int32_t t83 = -1961;

	t83 = ((x485^(x486*x487))+x488);

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x489 = -1;
	int8_t x490 = -1;
	uint32_t x491 = 1878U;
	uint8_t x492 = UINT8_MAX;
	volatile uint32_t t84 = 121445U;

	t84 = ((x489^(x490*x491))+x492);

	if (t84 != 2132U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x495 = -4114;
	int16_t x496 = -1;

	t85 = ((x493^(x494*x495))+x496);

	if (t85 != 4113LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x497 = INT16_MIN;
	static int8_t x498 = 1;
	uint8_t x500 = UINT8_MAX;
	volatile uint32_t t86 = 14575U;

	t86 = ((x497^(x498*x499))+x500);

	if (t86 != 33022U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x505 = 28U;
	volatile int32_t x506 = -195637;
	int64_t x507 = -3387500497170LL;
	int32_t x508 = INT32_MIN;

	t87 = ((x505^(x506*x507))+x508);

	if (t87 != 662720432617363622LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x509 = INT16_MIN;
	int16_t x510 = INT16_MAX;
	static int32_t x511 = -1;
	uint32_t x512 = 520895U;
	uint32_t t88 = 9515007U;

	t88 = ((x509^(x510*x511))+x512);

	if (t88 != 520896U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x513 = INT16_MAX;
	uint16_t x514 = 1U;
	uint8_t x515 = 126U;
	int16_t x516 = INT16_MAX;
	volatile int32_t t89 = -980698;

	t89 = ((x513^(x514*x515))+x516);

	if (t89 != 65408) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x518 = UINT8_MAX;
	int32_t x519 = -1;
	int8_t x520 = INT8_MIN;
	volatile int32_t t90 = -367171;

	t90 = ((x517^(x518*x519))+x520);

	if (t90 != -383) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x521 = -1;
	int64_t x522 = -1LL;
	volatile int64_t x523 = -1LL;
	uint64_t t91 = 3LLU;

	t91 = ((x521^(x522*x523))+x524);

	if (t91 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x525 = UINT64_MAX;
	int64_t x526 = -1LL;
	volatile int16_t x527 = INT16_MIN;
	static int32_t x528 = 123;
	volatile uint64_t t92 = 1364014610302708LLU;

	t92 = ((x525^(x526*x527))+x528);

	if (t92 != 18446744073709518970LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x537 = -1;
	volatile int8_t x538 = 2;
	volatile int32_t x539 = -1;
	uint64_t x540 = 5281391591314476354LLU;
	uint64_t t93 = 37620611430LLU;

	t93 = ((x537^(x538*x539))+x540);

	if (t93 != 5281391591314476355LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x541 = -5418LL;
	volatile uint8_t x542 = UINT8_MAX;
	int8_t x543 = -1;
	int8_t x544 = INT8_MAX;
	static int64_t t94 = 0LL;

	t94 = ((x541^(x542*x543))+x544);

	if (t94 != 5718LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x545 = -56;
	uint64_t x546 = UINT64_MAX;
	static int8_t x547 = -1;
	uint16_t x548 = 22U;

	t95 = ((x545^(x546*x547))+x548);

	if (t95 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x549 = INT16_MIN;
	int32_t x551 = INT32_MIN;
	uint64_t x552 = 71043LLU;
	static uint64_t t96 = 228LLU;

	t96 = ((x549^(x550*x551))+x552);

	if (t96 != 3908191957553288579LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x553 = -12;
	uint64_t x554 = 4562LLU;
	static volatile int64_t x556 = 16982968141144LL;
	static uint64_t t97 = 6LLU;

	t97 = ((x553^(x554*x555))+x556);

	if (t97 != 16982968145714LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x557 = 3U;
	static int64_t x558 = -2198056065934622774LL;
	static uint64_t x559 = 3026LLU;
	int64_t x560 = INT64_MAX;
	uint64_t t98 = 66728650508897LLU;

	t98 = ((x557^(x558*x559))+x560);

	if (t98 != 17180327127834395062LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x561 = INT8_MAX;
	uint64_t x562 = UINT64_MAX;
	volatile int16_t x563 = INT16_MIN;
	int32_t x564 = 675;

	t99 = ((x561^(x562*x563))+x564);

	if (t99 != 33570LLU) { NG(); } else { ; }
	
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

