#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MIN;
volatile uint32_t x4 = 594U;
uint64_t x7 = 2423637782LLU;
volatile int32_t x11 = INT32_MAX;
uint8_t x14 = 102U;
volatile int32_t t4 = 473894376;
uint64_t x24 = 6707849693526006LLU;
int8_t x25 = -1;
int16_t x27 = 0;
static volatile int32_t t6 = -102668;
static uint64_t x32 = 6020LLU;
int16_t x35 = -1;
uint64_t x42 = 20062218LLU;
int16_t x51 = -12537;
volatile int32_t t11 = -40773;
int8_t x53 = INT8_MAX;
static int32_t x70 = -92982757;
int32_t x72 = INT32_MIN;
int32_t x73 = 25434;
volatile uint64_t t16 = 493086800LLU;
int16_t x81 = -1;
int64_t x84 = -1LL;
int32_t t18 = -257234;
static uint8_t x89 = 26U;
volatile int64_t x90 = INT64_MIN;
int8_t x93 = INT8_MAX;
static volatile uint16_t x95 = 3441U;
uint32_t t21 = UINT32_MAX;
static int64_t x105 = INT64_MIN;
static int16_t x107 = -1;
int32_t t23 = 79007;
uint16_t x114 = UINT16_MAX;
uint16_t x116 = UINT16_MAX;
volatile uint32_t t24 = 117497721U;
int64_t x118 = 113446103126647203LL;
uint64_t t25 = 1530598796421354125LLU;
volatile int8_t x132 = INT8_MAX;
static int8_t x145 = INT8_MIN;
int8_t x148 = INT8_MIN;
volatile int8_t x149 = 7;
static uint64_t x150 = 6423838632375LLU;
volatile uint32_t x158 = 2365U;
int64_t x159 = -211292944054152806LL;
volatile int64_t t33 = 251LL;
volatile uint64_t x163 = 27853627LLU;
uint32_t x164 = 12337U;
volatile uint64_t t34 = 141LLU;
int8_t x167 = INT8_MIN;
int16_t x179 = -16;
volatile uint32_t x186 = UINT32_MAX;
int32_t x197 = INT32_MIN;
int64_t x207 = -47078LL;
int32_t x223 = INT32_MAX;
volatile int32_t t46 = 0;
int8_t x226 = -1;
static volatile int32_t t47 = 154;
int64_t x230 = -459374240LL;
int8_t x231 = -6;
volatile int64_t t48 = -379847LL;
static uint32_t x233 = 9553U;
int32_t x234 = INT32_MAX;
static volatile uint16_t x239 = 14U;
static int32_t t50 = 7;
int8_t x241 = -47;
volatile int32_t t54 = -5;
static uint64_t x269 = 108620476070359489LLU;
uint32_t x280 = UINT32_MAX;
uint8_t x294 = 1U;
int32_t t60 = 0;
volatile int32_t x297 = INT32_MIN;
volatile uint64_t t63 = 19729LLU;
uint16_t x314 = UINT16_MAX;
int32_t t65 = 14;
int64_t x320 = 253304288373652032LL;
uint16_t x328 = UINT16_MAX;
static volatile uint8_t x342 = UINT8_MAX;
int8_t x344 = INT8_MIN;
volatile int32_t t70 = 1;
uint64_t x346 = UINT64_MAX;
int16_t x349 = -7;
static uint32_t t72 = 515U;
uint16_t x353 = UINT16_MAX;
int64_t x371 = 82736824403463LL;
volatile int8_t x373 = INT8_MIN;
volatile int32_t x374 = INT32_MIN;
int8_t x391 = -1;
int8_t x395 = INT8_MIN;
static uint8_t x397 = 125U;
uint16_t x407 = UINT16_MAX;
uint64_t x414 = 7353LLU;
volatile uint16_t x417 = UINT16_MAX;
static volatile int32_t x420 = -1;
static uint64_t x432 = 328054549924LLU;
volatile int8_t x435 = -1;
volatile uint32_t t92 = 12U;
volatile int32_t x453 = 4164742;
uint64_t x458 = 2960083LLU;
int64_t t95 = -607684106LL;
static uint8_t x477 = 117U;
int32_t x479 = -262996399;
int64_t x483 = -9LL;


void f0(void) {
	static int8_t x1 = -1;
	static uint16_t x3 = 1U;
	volatile uint32_t t0 = 204192772U;

	t0 = (((x1==x2)-x3)-x4);

	if (t0 != 4294966701U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int32_t x6 = -1;
	int64_t x8 = -187LL;
	uint64_t t1 = 19087087562LLU;

	t1 = (((x5==x6)-x7)-x8);

	if (t1 != 18446744071285914022LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static uint8_t x10 = UINT8_MAX;
	int64_t x12 = INT64_MIN;
	int64_t t2 = -119480LL;

	t2 = (((x9==x10)-x11)-x12);

	if (t2 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int16_t x15 = INT16_MIN;
	volatile uint16_t x16 = UINT16_MAX;
	int32_t t3 = 144782435;

	t3 = (((x13==x14)-x15)-x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static volatile int32_t x18 = -1;
	int16_t x19 = INT16_MIN;
	uint8_t x20 = 22U;

	t4 = (((x17==x18)-x19)-x20);

	if (t4 != 32746) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 263119465U;
	int16_t x22 = INT16_MIN;
	static int8_t x23 = 3;
	uint64_t t5 = 753094203177LLU;

	t5 = (((x21==x22)-x23)-x24);

	if (t5 != 18440036224016025607LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = 7675622063LLU;
	int16_t x28 = 10292;

	t6 = (((x25==x26)-x27)-x28);

	if (t6 != -10292) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static volatile uint64_t x30 = 3510161589LLU;
	uint64_t x31 = 2067871532LLU;
	static uint64_t t7 = 134309098091596130LLU;

	t7 = (((x29==x30)-x31)-x32);

	if (t7 != 18446744071641674064LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	int8_t x34 = -1;
	static int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -6257;

	t8 = (((x33==x34)-x35)-x36);

	if (t8 != -126) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 49353905085745001LLU;
	int64_t x38 = INT64_MIN;
	int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 27771;

	t9 = (((x37==x38)-x39)-x40);

	if (t9 != 256) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint32_t x43 = 361687308U;
	int32_t x44 = -1;
	uint32_t t10 = 13579U;

	t10 = (((x41==x42)-x43)-x44);

	if (t10 != 3933279989U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 3491U;
	int16_t x50 = -4;
	int32_t x52 = INT32_MAX;

	t11 = (((x49==x50)-x51)-x52);

	if (t11 != -2147471110) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x54 = -7413533LL;
	static uint8_t x55 = 0U;
	uint16_t x56 = 6U;
	int32_t t12 = 1;

	t12 = (((x53==x54)-x55)-x56);

	if (t12 != -6) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 6U;
	static uint64_t x58 = 1022LLU;
	int64_t x59 = -1LL;
	int32_t x60 = INT32_MAX;
	int64_t t13 = 1LL;

	t13 = (((x57==x58)-x59)-x60);

	if (t13 != -2147483646LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 3068U;
	int16_t x62 = INT16_MIN;
	static int8_t x63 = INT8_MIN;
	int64_t x64 = -2234317209941009LL;
	int64_t t14 = -665286LL;

	t14 = (((x61==x62)-x63)-x64);

	if (t14 != 2234317209941137LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1;
	volatile uint8_t x71 = 43U;
	int32_t t15 = 209;

	t15 = (((x69==x70)-x71)-x72);

	if (t15 != 2147483605) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x74 = -1LL;
	static uint64_t x75 = 373421064LLU;
	int32_t x76 = -787;

	t16 = (((x73==x74)-x75)-x76);

	if (t16 != 18446744073336131339LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = -3703913LL;
	uint64_t x83 = 15121291LLU;
	uint64_t t17 = 683277429101201LLU;

	t17 = (((x81==x82)-x83)-x84);

	if (t17 != 18446744073694430326LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = -1;
	static volatile uint8_t x87 = 13U;
	static int8_t x88 = -1;

	t18 = (((x85==x86)-x87)-x88);

	if (t18 != -12) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x91 = 19U;
	int8_t x92 = -1;
	volatile int32_t t19 = 2608630;

	t19 = (((x89==x90)-x91)-x92);

	if (t19 != -18) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x94 = UINT32_MAX;
	uint8_t x96 = 93U;
	static volatile int32_t t20 = 1;

	t20 = (((x93==x94)-x95)-x96);

	if (t20 != -3534) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 2688054078LLU;
	static uint64_t x98 = UINT64_MAX;
	static uint32_t x99 = UINT32_MAX;
	static uint8_t x100 = 2U;

	t21 = (((x97==x98)-x99)-x100);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x106 = 11U;
	uint32_t x108 = 74972U;
	static volatile uint32_t t22 = 12471439U;

	t22 = (((x105==x106)-x107)-x108);

	if (t22 != 4294892325U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x109 = 1430U;
	int32_t x110 = INT32_MIN;
	int16_t x111 = 50;
	static volatile int16_t x112 = -1;

	t23 = (((x109==x110)-x111)-x112);

	if (t23 != -49) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -94007LL;
	uint32_t x115 = UINT32_MAX;

	t24 = (((x113==x114)-x115)-x116);

	if (t24 != 4294901762U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x117 = INT32_MIN;
	uint32_t x119 = 19158U;
	static uint64_t x120 = UINT64_MAX;

	t25 = (((x117==x118)-x119)-x120);

	if (t25 != 4294948139LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x125 = UINT64_MAX;
	uint64_t x126 = 30384324LLU;
	int32_t x127 = -1;
	int64_t x128 = -1LL;
	volatile int64_t t26 = -10562LL;

	t26 = (((x125==x126)-x127)-x128);

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -291277443LL;
	uint64_t x130 = 256480LLU;
	uint32_t x131 = UINT32_MAX;
	volatile uint32_t t27 = 6U;

	t27 = (((x129==x130)-x131)-x132);

	if (t27 != 4294967170U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -1;
	int8_t x134 = 1;
	volatile uint32_t x135 = 983004U;
	uint16_t x136 = UINT16_MAX;
	volatile uint32_t t28 = 1301543617U;

	t28 = (((x133==x134)-x135)-x136);

	if (t28 != 4293918757U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = 4980U;
	int32_t x142 = 56271;
	int32_t x143 = -1;
	int8_t x144 = 0;
	int32_t t29 = -874683113;

	t29 = (((x141==x142)-x143)-x144);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x146 = INT16_MAX;
	uint32_t x147 = 61105108U;
	uint32_t t30 = 24906535U;

	t30 = (((x145==x146)-x147)-x148);

	if (t30 != 4233862316U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x151 = 3231;
	static uint64_t x152 = 2302905494403940635LLU;
	static volatile uint64_t t31 = 439LLU;

	t31 = (((x149==x150)-x151)-x152);

	if (t31 != 16143838579305607750LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MIN;
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = -63995;
	int8_t x156 = INT8_MIN;
	int32_t t32 = 570212920;

	t32 = (((x153==x154)-x155)-x156);

	if (t32 != 64123) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = INT8_MIN;
	static int8_t x160 = 8;

	t33 = (((x157==x158)-x159)-x160);

	if (t33 != 211292944054152798LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MAX;
	volatile int64_t x162 = 2136701784LL;

	t34 = (((x161==x162)-x163)-x164);

	if (t34 != 18446744073681685652LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MIN;
	static volatile uint32_t x166 = UINT32_MAX;
	int8_t x168 = -6;
	volatile int32_t t35 = 660;

	t35 = (((x165==x166)-x167)-x168);

	if (t35 != 134) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = INT16_MIN;
	uint8_t x170 = 61U;
	int8_t x171 = 7;
	uint16_t x172 = 151U;
	volatile int32_t t36 = -5635394;

	t36 = (((x169==x170)-x171)-x172);

	if (t36 != -158) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = 210U;
	volatile int64_t x174 = 2LL;
	int8_t x175 = -1;
	int16_t x176 = INT16_MIN;
	int32_t t37 = 762413;

	t37 = (((x173==x174)-x175)-x176);

	if (t37 != 32769) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = INT8_MIN;
	volatile uint8_t x178 = UINT8_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t38 = 1352515LLU;

	t38 = (((x177==x178)-x179)-x180);

	if (t38 != 17LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x181 = UINT64_MAX;
	int64_t x182 = -1LL;
	uint32_t x183 = 122U;
	int16_t x184 = INT16_MIN;
	uint32_t t39 = 12723U;

	t39 = (((x181==x182)-x183)-x184);

	if (t39 != 32647U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = 23LL;
	static int32_t x187 = -1;
	uint32_t x188 = 2U;
	uint32_t t40 = UINT32_MAX;

	t40 = (((x185==x186)-x187)-x188);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = -1;
	static int8_t x191 = 0;
	int8_t x192 = INT8_MAX;
	volatile int32_t t41 = -65920395;

	t41 = (((x189==x190)-x191)-x192);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x198 = INT32_MAX;
	static int32_t x199 = INT32_MAX;
	volatile int32_t x200 = INT32_MIN;
	int32_t t42 = 23827701;

	t42 = (((x197==x198)-x199)-x200);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = 0;
	int8_t x202 = INT8_MIN;
	int32_t x203 = 256771;
	uint8_t x204 = 13U;
	volatile int32_t t43 = -1838;

	t43 = (((x201==x202)-x203)-x204);

	if (t43 != -256784) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x205 = INT16_MIN;
	static int8_t x206 = INT8_MIN;
	int8_t x208 = -1;
	volatile int64_t t44 = -2733244521333LL;

	t44 = (((x205==x206)-x207)-x208);

	if (t44 != 47079LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MAX;
	int16_t x220 = -1;
	volatile int32_t t45 = 6603;

	t45 = (((x217==x218)-x219)-x220);

	if (t45 != -126) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x221 = 10043870087LL;
	static int8_t x222 = -1;
	int16_t x224 = -23;

	t46 = (((x221==x222)-x223)-x224);

	if (t46 != -2147483624) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = 742U;
	uint16_t x227 = 7U;
	volatile int16_t x228 = -1;

	t47 = (((x225==x226)-x227)-x228);

	if (t47 != -6) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = INT32_MIN;
	int64_t x232 = 617563906171306LL;

	t48 = (((x229==x230)-x231)-x232);

	if (t48 != -617563906171300LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x235 = 1;
	int8_t x236 = INT8_MIN;
	volatile int32_t t49 = -4242;

	t49 = (((x233==x234)-x235)-x236);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = 363172;
	uint64_t x238 = UINT64_MAX;
	static int16_t x240 = -1;

	t50 = (((x237==x238)-x239)-x240);

	if (t50 != -13) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x242 = INT16_MIN;
	static int64_t x243 = -50140967LL;
	int32_t x244 = 389;
	static volatile int64_t t51 = 1589141317465533054LL;

	t51 = (((x241==x242)-x243)-x244);

	if (t51 != 50140578LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = INT8_MAX;
	uint32_t x250 = 105U;
	int16_t x251 = -1;
	int16_t x252 = 1;
	static volatile int32_t t52 = 31;

	t52 = (((x249==x250)-x251)-x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x257 = INT16_MIN;
	int64_t x258 = -1879420173012007LL;
	static int32_t x259 = -1;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t53 = 787;

	t53 = (((x257==x258)-x259)-x260);

	if (t53 != -254) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -403563204LL;
	static int8_t x262 = INT8_MIN;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t x264 = INT32_MIN;

	t54 = (((x261==x262)-x263)-x264);

	if (t54 != 2147418113) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x270 = -1;
	static int8_t x271 = INT8_MIN;
	int64_t x272 = 1023655161834LL;
	int64_t t55 = -123LL;

	t55 = (((x269==x270)-x271)-x272);

	if (t55 != -1023655161706LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = INT8_MIN;
	uint32_t x274 = UINT32_MAX;
	static uint16_t x275 = 21U;
	int16_t x276 = -1;
	static volatile int32_t t56 = 22460859;

	t56 = (((x273==x274)-x275)-x276);

	if (t56 != -20) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x277 = INT16_MIN;
	volatile int8_t x278 = 1;
	static uint64_t x279 = UINT64_MAX;
	static volatile uint64_t t57 = 8743096786LLU;

	t57 = (((x277==x278)-x279)-x280);

	if (t57 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x281 = INT16_MAX;
	int8_t x282 = 7;
	volatile uint8_t x283 = UINT8_MAX;
	static uint16_t x284 = 0U;
	static int32_t t58 = 170;

	t58 = (((x281==x282)-x283)-x284);

	if (t58 != -255) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x285 = -1;
	int32_t x286 = -212;
	uint64_t x287 = 0LLU;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t59 = 6242770582978820LLU;

	t59 = (((x285==x286)-x287)-x288);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x293 = INT16_MIN;
	volatile int16_t x295 = -35;
	int16_t x296 = 900;

	t60 = (((x293==x294)-x295)-x296);

	if (t60 != -865) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x298 = 62U;
	uint16_t x299 = 62U;
	volatile uint8_t x300 = 5U;
	int32_t t61 = 966537230;

	t61 = (((x297==x298)-x299)-x300);

	if (t61 != -67) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x301 = 88839430LLU;
	volatile int32_t x302 = -1;
	static volatile uint64_t x303 = 228150639LLU;
	int32_t x304 = INT32_MIN;
	static uint64_t t62 = 72325168241327LLU;

	t62 = (((x301==x302)-x303)-x304);

	if (t62 != 1919333009LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = -1;
	int64_t x306 = INT64_MIN;
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = 10638;

	t63 = (((x305==x306)-x307)-x308);

	if (t63 != 18446744073709540979LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = -8;
	volatile int16_t x310 = 103;
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = -1LL;
	static uint64_t t64 = 30575229LLU;

	t64 = (((x309==x310)-x311)-x312);

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x313 = INT64_MIN;
	uint16_t x315 = UINT16_MAX;
	int16_t x316 = -1;

	t65 = (((x313==x314)-x315)-x316);

	if (t65 != -65534) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x317 = -621760323194165LL;
	int32_t x318 = INT32_MIN;
	uint16_t x319 = UINT16_MAX;
	static int64_t t66 = 480921047075LL;

	t66 = (((x317==x318)-x319)-x320);

	if (t66 != -253304288373717567LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x321 = 4090U;
	volatile int8_t x322 = INT8_MIN;
	volatile int8_t x323 = -4;
	int8_t x324 = INT8_MAX;
	volatile int32_t t67 = -19;

	t67 = (((x321==x322)-x323)-x324);

	if (t67 != -123) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x325 = UINT64_MAX;
	uint16_t x326 = 5710U;
	int64_t x327 = 420709390LL;
	volatile int64_t t68 = 3928981LL;

	t68 = (((x325==x326)-x327)-x328);

	if (t68 != -420774925LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x337 = 32619243296074LL;
	int32_t x338 = 29;
	uint32_t x339 = 78552949U;
	static uint64_t x340 = UINT64_MAX;
	uint64_t t69 = 11313LLU;

	t69 = (((x337==x338)-x339)-x340);

	if (t69 != 4216414348LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x341 = INT32_MIN;
	uint8_t x343 = 0U;

	t70 = (((x341==x342)-x343)-x344);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x345 = 9U;
	int8_t x347 = INT8_MAX;
	volatile uint8_t x348 = UINT8_MAX;
	int32_t t71 = 11;

	t71 = (((x345==x346)-x347)-x348);

	if (t71 != -382) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x350 = 1;
	static uint32_t x351 = 4722U;
	static volatile int8_t x352 = 7;

	t72 = (((x349==x350)-x351)-x352);

	if (t72 != 4294962567U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x354 = -4122;
	int16_t x355 = 0;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t73 = -39742;

	t73 = (((x353==x354)-x355)-x356);

	if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = -21;
	uint16_t x358 = 7744U;
	volatile uint32_t x359 = 39282U;
	uint32_t x360 = 255872030U;
	volatile uint32_t t74 = 173U;

	t74 = (((x357==x358)-x359)-x360);

	if (t74 != 4039055984U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = -8038;
	static int16_t x362 = INT16_MIN;
	int8_t x363 = INT8_MIN;
	static volatile uint8_t x364 = 1U;
	int32_t t75 = 6;

	t75 = (((x361==x362)-x363)-x364);

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int16_t x370 = 148;
	uint8_t x372 = UINT8_MAX;
	volatile int64_t t76 = -1613773LL;

	t76 = (((x369==x370)-x371)-x372);

	if (t76 != -82736824403718LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x375 = 1426LLU;
	volatile int16_t x376 = -3;
	uint64_t t77 = 240816LLU;

	t77 = (((x373==x374)-x375)-x376);

	if (t77 != 18446744073709550193LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x377 = 0;
	int32_t x378 = -1;
	uint8_t x379 = 2U;
	uint16_t x380 = UINT16_MAX;
	int32_t t78 = 34;

	t78 = (((x377==x378)-x379)-x380);

	if (t78 != -65537) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x381 = 3;
	uint64_t x382 = 21447631362448299LLU;
	int32_t x383 = INT32_MAX;
	int8_t x384 = -1;
	static volatile int32_t t79 = -18257;

	t79 = (((x381==x382)-x383)-x384);

	if (t79 != -2147483646) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x389 = 3593U;
	volatile int16_t x390 = INT16_MIN;
	static uint8_t x392 = UINT8_MAX;
	volatile int32_t t80 = -5042538;

	t80 = (((x389==x390)-x391)-x392);

	if (t80 != -254) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x393 = INT16_MIN;
	int32_t x394 = -1;
	int64_t x396 = INT64_MAX;
	int64_t t81 = -31435LL;

	t81 = (((x393==x394)-x395)-x396);

	if (t81 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x398 = INT64_MIN;
	volatile int64_t x399 = INT64_MAX;
	int32_t x400 = INT32_MIN;
	volatile int64_t t82 = 194428876101635LL;

	t82 = (((x397==x398)-x399)-x400);

	if (t82 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x401 = INT16_MAX;
	uint32_t x402 = UINT32_MAX;
	volatile int16_t x403 = 0;
	static int32_t x404 = -6641;
	int32_t t83 = 7862853;

	t83 = (((x401==x402)-x403)-x404);

	if (t83 != 6641) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x405 = -6911;
	int8_t x406 = -1;
	int64_t x408 = -1LL;
	int64_t t84 = 1LL;

	t84 = (((x405==x406)-x407)-x408);

	if (t84 != -65534LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x409 = -1;
	int64_t x410 = INT64_MAX;
	int8_t x411 = -2;
	uint64_t x412 = 0LLU;
	uint64_t t85 = 24455760285886577LLU;

	t85 = (((x409==x410)-x411)-x412);

	if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x413 = INT32_MAX;
	static int16_t x415 = INT16_MAX;
	static uint8_t x416 = 57U;
	static int32_t t86 = 388811;

	t86 = (((x413==x414)-x415)-x416);

	if (t86 != -32824) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x418 = -3LL;
	volatile int16_t x419 = -29;
	int32_t t87 = 4;

	t87 = (((x417==x418)-x419)-x420);

	if (t87 != 30) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x421 = 7U;
	uint16_t x422 = 80U;
	volatile int8_t x423 = INT8_MAX;
	volatile int16_t x424 = -1;
	int32_t t88 = 89;

	t88 = (((x421==x422)-x423)-x424);

	if (t88 != -126) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = -1;
	static int16_t x426 = 1;
	static uint32_t x427 = 18013U;
	static int64_t x428 = -1LL;
	volatile int64_t t89 = -150790470360LL;

	t89 = (((x425==x426)-x427)-x428);

	if (t89 != 4294949284LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x429 = INT64_MAX;
	int16_t x430 = INT16_MIN;
	int8_t x431 = INT8_MIN;
	uint64_t t90 = 7167455079827LLU;

	t90 = (((x429==x430)-x431)-x432);

	if (t90 != 18446743745655001820LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x433 = UINT8_MAX;
	uint32_t x434 = UINT32_MAX;
	volatile uint8_t x436 = UINT8_MAX;
	int32_t t91 = -7;

	t91 = (((x433==x434)-x435)-x436);

	if (t91 != -254) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x445 = 6U;
	int64_t x446 = -1LL;
	uint32_t x447 = UINT32_MAX;
	static uint32_t x448 = UINT32_MAX;

	t92 = (((x445==x446)-x447)-x448);

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x449 = INT8_MAX;
	uint64_t x450 = UINT64_MAX;
	int8_t x451 = -60;
	static int32_t x452 = -973;
	volatile int32_t t93 = 35250;

	t93 = (((x449==x450)-x451)-x452);

	if (t93 != 1033) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x454 = INT16_MAX;
	volatile uint32_t x455 = 45637574U;
	static int8_t x456 = -1;
	uint32_t t94 = 1919U;

	t94 = (((x453==x454)-x455)-x456);

	if (t94 != 4249329723U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x457 = INT64_MAX;
	volatile int64_t x459 = 176824813801926LL;
	static uint32_t x460 = 203324U;

	t95 = (((x457==x458)-x459)-x460);

	if (t95 != -176824814005250LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x461 = 62LLU;
	int16_t x462 = 384;
	int8_t x463 = 0;
	uint8_t x464 = 1U;
	int32_t t96 = 174;

	t96 = (((x461==x462)-x463)-x464);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x478 = INT8_MIN;
	uint8_t x480 = 30U;
	static volatile int32_t t97 = -17576842;

	t97 = (((x477==x478)-x479)-x480);

	if (t97 != 262996369) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x481 = 9U;
	int64_t x482 = INT64_MIN;
	uint8_t x484 = UINT8_MAX;
	int64_t t98 = -16573LL;

	t98 = (((x481==x482)-x483)-x484);

	if (t98 != -246LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x493 = INT16_MIN;
	volatile uint8_t x494 = 7U;
	volatile int8_t x495 = -3;
	volatile int8_t x496 = -1;
	int32_t t99 = 6;

	t99 = (((x493==x494)-x495)-x496);

	if (t99 != 4) { NG(); } else { ; }
	
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

