#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = INT64_MIN;
int8_t x7 = -1;
static int16_t x9 = -1;
int8_t x11 = -1;
int16_t x18 = -1;
volatile int16_t x21 = 60;
static int8_t x41 = 59;
volatile int8_t x42 = INT8_MIN;
uint32_t t6 = 9U;
volatile int16_t x50 = INT16_MIN;
int64_t x59 = INT64_MAX;
uint16_t x61 = 2U;
volatile int8_t x63 = INT8_MAX;
static uint64_t x65 = 12LLU;
volatile uint64_t x66 = 2783710679576750LLU;
uint32_t x82 = 5938315U;
volatile uint32_t t12 = 10348099U;
int8_t x85 = INT8_MIN;
int8_t x90 = 52;
volatile int64_t x91 = -1LL;
static int8_t x96 = -46;
uint64_t x102 = 490330668500134593LLU;
int64_t x125 = 1656545258514LL;
uint32_t x127 = 61231U;
uint32_t x128 = 1919U;
uint64_t x132 = 3345LLU;
static int32_t x143 = INT32_MAX;
uint32_t x144 = 191U;
uint32_t t20 = 8125U;
uint8_t x147 = UINT8_MAX;
int32_t x149 = -1;
int16_t x151 = INT16_MIN;
static uint16_t x153 = 110U;
uint64_t t23 = 409708010029597LLU;
volatile int16_t x162 = INT16_MIN;
int16_t x163 = INT16_MAX;
int16_t x168 = INT16_MIN;
volatile int32_t x171 = -527;
int16_t x172 = -252;
volatile int64_t t27 = -19113548752795993LL;
int16_t x179 = INT16_MIN;
volatile uint8_t x185 = UINT8_MAX;
volatile int8_t x187 = INT8_MAX;
uint64_t t31 = 213523294718508227LLU;
int8_t x199 = -1;
int32_t x200 = -523037;
int64_t t33 = -21356630545621LL;
uint8_t x214 = UINT8_MAX;
int32_t x217 = 7530457;
static uint32_t x219 = 362178937U;
uint64_t t36 = 176LLU;
static int8_t x231 = -1;
uint64_t x235 = 1663779173534852LLU;
volatile int16_t x236 = 6190;
int8_t x237 = -1;
static uint32_t x254 = UINT32_MAX;
int64_t x255 = -1LL;
int8_t x259 = -1;
static volatile uint64_t x268 = UINT64_MAX;
volatile uint8_t x274 = UINT8_MAX;
static uint16_t x284 = UINT16_MAX;
volatile uint64_t t45 = 12779833741206900LLU;
static int32_t x286 = 10021406;
static uint64_t x290 = 2535903LLU;
volatile int8_t x292 = -62;
static volatile int32_t x293 = INT32_MIN;
uint32_t x300 = UINT32_MAX;
volatile uint64_t t50 = 4601983LLU;
int64_t t52 = 115947329737066925LL;
uint16_t x318 = 2464U;
volatile int16_t x324 = INT16_MIN;
volatile uint64_t t54 = 783828457LLU;
uint64_t x335 = 34922331616845724LLU;
volatile uint64_t x344 = 147799083LLU;
static int8_t x356 = INT8_MIN;
uint32_t x363 = UINT32_MAX;
int16_t x365 = INT16_MAX;
static int8_t x367 = INT8_MIN;
int32_t x399 = -1;
int16_t x403 = INT16_MIN;
int8_t x411 = INT8_MIN;
int64_t x414 = INT64_MAX;
static int16_t x415 = INT16_MIN;
int64_t t68 = -277101795477379917LL;
uint16_t x430 = UINT16_MAX;
int32_t x450 = INT32_MIN;
volatile uint64_t t71 = 2076LLU;
volatile uint32_t x458 = UINT32_MAX;
uint32_t t72 = 20U;
uint8_t x461 = 18U;
static int32_t x462 = INT32_MIN;
static int32_t x466 = 246700;
uint32_t x473 = UINT32_MAX;
static volatile uint32_t t75 = 419U;
int64_t x485 = INT64_MAX;
int8_t x487 = -1;
int16_t x499 = INT16_MAX;
volatile int64_t x500 = -1LL;
int16_t x501 = -1;
volatile int32_t x505 = INT32_MIN;
static uint32_t x514 = 237U;
int8_t x535 = INT8_MIN;
int8_t x548 = 6;
int8_t x552 = 10;
uint64_t x559 = 350LLU;
int32_t x560 = INT32_MIN;
uint64_t x583 = 65438LLU;
uint64_t x592 = 665006LLU;
volatile int32_t t94 = 0;
uint32_t x609 = 221U;
volatile int8_t x611 = INT8_MIN;
volatile int16_t x621 = INT16_MIN;


void f0(void) {
	int16_t x5 = INT16_MIN;
	int8_t x8 = -3;
	int64_t t0 = 67090LL;

	t0 = ((x5^x6)%(x7*x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x10 = 64202;
	int32_t x12 = INT32_MAX;
	static volatile int32_t t1 = 53;

	t1 = ((x9^x10)%(x11*x12));

	if (t1 != -64203) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MIN;
	int16_t x16 = 38;
	volatile int32_t t2 = -24521;

	t2 = ((x13^x14)%(x15*x16));

	if (t2 != 3456) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x17 = INT16_MAX;
	uint32_t x19 = UINT32_MAX;
	volatile uint64_t x20 = 260071535569293LLU;
	static volatile uint64_t t3 = 89895037LLU;

	t3 = ((x17^x18)%(x19*x20));

	if (t3 != 6954264791837698445LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x22 = INT8_MAX;
	static volatile uint16_t x23 = 660U;
	int8_t x24 = INT8_MIN;
	int32_t t4 = -14281522;

	t4 = ((x21^x22)%(x23*x24));

	if (t4 != 67) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -1;
	static int64_t x34 = -1LL;
	int16_t x35 = INT16_MIN;
	static uint32_t x36 = UINT32_MAX;
	static int64_t t5 = -488748045091LL;

	t5 = ((x33^x34)%(x35*x36));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x43 = 683285U;
	volatile int32_t x44 = INT32_MAX;

	t6 = ((x41^x42)%(x43*x44));

	if (t6 != 1366501U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = -1;
	static int8_t x51 = 6;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t7 = -488176;

	t7 = ((x49^x50)%(x51*x52));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x57 = -1LL;
	uint8_t x58 = UINT8_MAX;
	int32_t x60 = -1;
	volatile int64_t t8 = 2257842LL;

	t8 = ((x57^x58)%(x59*x60));

	if (t8 != -256LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x62 = UINT8_MAX;
	int8_t x64 = -1;
	int32_t t9 = 117;

	t9 = ((x61^x62)%(x63*x64));

	if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x67 = 1LL;
	static uint64_t x68 = 104071007778780829LLU;
	static uint64_t t10 = 7390183633962LLU;

	t10 = ((x65^x66)%(x67*x68));

	if (t10 != 2783710679576738LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x69 = -1;
	static volatile uint64_t x70 = 2729025503584478LLU;
	static int16_t x71 = -57;
	uint64_t x72 = 23488385764LLU;
	volatile uint64_t t11 = 49071229322263LLU;

	t11 = ((x69^x70)%(x71*x72));

	if (t11 != 18444015048205967137LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = INT8_MIN;
	int16_t x83 = -1;
	volatile int16_t x84 = -1;

	t12 = ((x81^x82)%(x83*x84));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x86 = -229;
	int32_t x87 = -24644007;
	uint64_t x88 = UINT64_MAX;
	uint64_t t13 = 1971505737501773LLU;

	t13 = ((x85^x86)%(x87*x88));

	if (t13 != 155LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int32_t x92 = -1;
	volatile uint64_t t14 = 19007740223LLU;

	t14 = ((x89^x90)%(x91*x92));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x93 = -3;
	int8_t x94 = INT8_MAX;
	uint32_t x95 = 42U;
	static volatile uint32_t t15 = 7491U;

	t15 = ((x93^x94)%(x95*x96));

	if (t15 != 1806U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x101 = -237056028LL;
	int8_t x103 = INT8_MAX;
	int16_t x104 = INT16_MIN;
	static volatile uint64_t t16 = 1016998647933480LLU;

	t16 = ((x101^x102)%(x103*x104));

	if (t16 != 17956413405177898277LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x105 = 12U;
	volatile uint8_t x106 = 7U;
	static int32_t x107 = -1;
	static uint8_t x108 = 13U;
	uint32_t t17 = 140383U;

	t17 = ((x105^x106)%(x107*x108));

	if (t17 != 11U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x126 = UINT64_MAX;
	static uint64_t t18 = 124911850912633676LLU;

	t18 = ((x125^x126)%(x127*x128));

	if (t18 != 8119659LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x129 = 67U;
	static int16_t x130 = INT16_MIN;
	uint64_t x131 = UINT64_MAX;
	uint64_t t19 = 468761289LLU;

	t19 = ((x129^x130)%(x131*x132));

	if (t19 != 18446744073709518915LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x141 = INT32_MIN;
	static int32_t x142 = 4972;

	t20 = ((x141^x142)%(x143*x144));

	if (t20 != 5163U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MAX;
	static int16_t x148 = -11;
	int32_t t21 = 535820393;

	t21 = ((x145^x146)%(x147*x148));

	if (t21 != 765) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x150 = -4LL;
	static uint64_t x152 = 39LLU;
	volatile uint64_t t22 = 1028436LLU;

	t22 = ((x149^x150)%(x151*x152));

	if (t22 != 3LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x154 = 1878;
	static int8_t x155 = INT8_MAX;
	volatile uint64_t x156 = 1233874144405442640LLU;

	t23 = ((x153^x154)%(x155*x156));

	if (t23 != 1848LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x161 = 1005432119326096LL;
	int16_t x164 = 9;
	volatile int64_t t24 = -1402557711133LL;

	t24 = ((x161^x162)%(x163*x164));

	if (t24 != -238821LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x165 = 23;
	int8_t x166 = INT8_MIN;
	volatile int8_t x167 = -1;
	int32_t t25 = -81797054;

	t25 = ((x165^x166)%(x167*x168));

	if (t25 != -105) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x169 = 130917949585398LL;
	static uint64_t x170 = 17825127700489278LLU;
	uint64_t t26 = 524120498018838769LLU;

	t26 = ((x169^x170)%(x171*x172));

	if (t26 != 111060LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x173 = 0U;
	int16_t x174 = 8015;
	int8_t x175 = 32;
	int64_t x176 = -1LL;

	t27 = ((x173^x174)%(x175*x176));

	if (t27 != 15LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x177 = -8387LL;
	int8_t x178 = INT8_MAX;
	volatile int16_t x180 = -281;
	int64_t t28 = -110LL;

	t28 = ((x177^x178)%(x179*x180));

	if (t28 != -8382LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x186 = 1;
	volatile uint16_t x188 = 2U;
	volatile int32_t t29 = -26788;

	t29 = ((x185^x186)%(x187*x188));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = 120894;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = 232;
	int32_t t30 = -3391;

	t30 = ((x189^x190)%(x191*x192));

	if (t30 != -32234) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x193 = 1540211;
	volatile uint16_t x194 = UINT16_MAX;
	static uint8_t x195 = 46U;
	uint64_t x196 = 169976068427112LLU;

	t31 = ((x193^x194)%(x195*x196));

	if (t31 != 1539980LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x197 = 1U;
	int64_t x198 = -7861192502005LL;
	static volatile int64_t t32 = 21625509LL;

	t32 = ((x197^x198)%(x199*x200));

	if (t32 != -264817LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x205 = -1LL;
	static int32_t x206 = -2533631;
	int8_t x207 = INT8_MAX;
	static volatile uint8_t x208 = 54U;

	t33 = ((x205^x206)%(x207*x208));

	if (t33 != 3028LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x209 = UINT64_MAX;
	uint16_t x210 = 24U;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = -1;
	static volatile uint64_t t34 = 1081134730726012LLU;

	t34 = ((x209^x210)%(x211*x212));

	if (t34 != 230LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x213 = INT32_MIN;
	int64_t x215 = -1LL;
	int16_t x216 = -17;
	volatile int64_t t35 = 1094394LL;

	t35 = ((x213^x214)%(x215*x216));

	if (t35 != -9LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x218 = UINT64_MAX;
	uint32_t x220 = UINT32_MAX;

	t36 = ((x217^x218)%(x219*x220));

	if (t36 != 517336028LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x229 = INT64_MIN;
	int8_t x230 = INT8_MIN;
	volatile int16_t x232 = INT16_MIN;
	volatile int64_t t37 = 2267024281238404066LL;

	t37 = ((x229^x230)%(x231*x232));

	if (t37 != 32640LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x233 = 14U;
	int16_t x234 = INT16_MIN;
	volatile uint64_t t38 = 194799017LLU;

	t38 = ((x233^x234)%(x235*x236));

	if (t38 != 8147950989528784982LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x238 = 115;
	int8_t x239 = -3;
	static volatile uint8_t x240 = UINT8_MAX;
	static volatile int32_t t39 = -1364150;

	t39 = ((x237^x238)%(x239*x240));

	if (t39 != -116) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x241 = 3974419310454490784LLU;
	volatile int32_t x242 = 1;
	uint32_t x243 = 1911514U;
	volatile int16_t x244 = -12;
	volatile uint64_t t40 = 2336LLU;

	t40 = ((x241^x242)%(x243*x244));

	if (t40 != 2289183145LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x253 = 119U;
	uint32_t x256 = 1399908U;
	volatile int64_t t41 = 114594998661595543LL;

	t41 = ((x253^x254)%(x255*x256));

	if (t41 != 49432LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x257 = INT32_MAX;
	static uint64_t x258 = 45295000058146882LLU;
	volatile int32_t x260 = 15;
	static uint64_t t42 = 859205155025371761LLU;

	t42 = ((x257^x258)%(x259*x260));

	if (t42 != 45295002052382653LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x265 = -1LL;
	uint16_t x266 = 20894U;
	int64_t x267 = -1LL;
	volatile uint64_t t43 = 23618704064901028LLU;

	t43 = ((x265^x266)%(x267*x268));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x275 = UINT32_MAX;
	int32_t x276 = -34;
	volatile int64_t t44 = 81050LL;

	t44 = ((x273^x274)%(x275*x276));

	if (t44 != -9LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x281 = UINT64_MAX;
	volatile uint64_t x282 = 8343810LLU;
	volatile uint64_t x283 = 4LLU;

	t45 = ((x281^x282)%(x283*x284));

	if (t45 != 110205LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x285 = 6201970620858384LL;
	int16_t x287 = INT16_MIN;
	uint64_t x288 = 462330LLU;
	static volatile uint64_t t46 = 237213677538LLU;

	t46 = ((x285^x286)%(x287*x288));

	if (t46 != 6201970614037006LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x289 = 446521516971LLU;
	uint16_t x291 = 117U;
	uint64_t t47 = 138592812612094LLU;

	t47 = ((x289^x290)%(x291*x292));

	if (t47 != 446523970164LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x294 = UINT8_MAX;
	static int16_t x295 = -1;
	uint8_t x296 = 1U;
	volatile int32_t t48 = -1656;

	t48 = ((x293^x294)%(x295*x296));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x297 = -1;
	uint64_t x298 = 3283547328LLU;
	int16_t x299 = -23;
	volatile uint64_t t49 = 114177LLU;

	t49 = ((x297^x298)%(x299*x300));

	if (t49 != 21LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x301 = INT8_MAX;
	static volatile int32_t x302 = -1;
	volatile uint64_t x303 = 13316322929656233LLU;
	static int16_t x304 = -1272;

	t50 = ((x301^x302)%(x303*x304));

	if (t50 != 346168387467672608LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x305 = INT32_MIN;
	uint8_t x306 = 28U;
	int16_t x307 = -1;
	int16_t x308 = -1;
	volatile int32_t t51 = -96561075;

	t51 = ((x305^x306)%(x307*x308));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x309 = -1;
	static int64_t x310 = 109893467225624606LL;
	static uint16_t x311 = 1U;
	int32_t x312 = -38;

	t52 = ((x309^x310)%(x311*x312));

	if (t52 != -31LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x317 = 29923U;
	static int16_t x319 = -1;
	uint16_t x320 = 6882U;
	volatile uint32_t t53 = 545919U;

	t53 = ((x317^x318)%(x319*x320));

	if (t53 != 32067U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x321 = 45U;
	volatile uint16_t x322 = 267U;
	uint64_t x323 = UINT64_MAX;

	t54 = ((x321^x322)%(x323*x324));

	if (t54 != 294LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x333 = UINT16_MAX;
	int8_t x334 = INT8_MAX;
	int8_t x336 = -57;
	volatile uint64_t t55 = 0LLU;

	t55 = ((x333^x334)%(x335*x336));

	if (t55 != 65408LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x337 = 19LLU;
	int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int8_t x340 = 62;
	volatile uint64_t t56 = 403776981015106555LLU;

	t56 = ((x337^x338)%(x339*x340));

	if (t56 != 7916LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x341 = INT16_MAX;
	volatile uint64_t x342 = 2615746553LLU;
	static int16_t x343 = -1;
	static volatile uint64_t t57 = 1971868495636458652LLU;

	t57 = ((x341^x342)%(x343*x344));

	if (t57 != 2615762950LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x354 = 49;
	int16_t x355 = -1043;
	static volatile int32_t t58 = 6;

	t58 = ((x353^x354)%(x355*x356));

	if (t58 != 206) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x361 = 978U;
	static int64_t x362 = INT64_MAX;
	static volatile uint16_t x364 = UINT16_MAX;
	int64_t t59 = -228264828139237063LL;

	t59 = ((x361^x362)%(x363*x364));

	if (t59 != 4294868014LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x366 = INT8_MIN;
	volatile uint8_t x368 = 4U;
	static int32_t t60 = 3832;

	t60 = ((x365^x366)%(x367*x368));

	if (t60 != -385) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x373 = UINT32_MAX;
	static int16_t x374 = 173;
	int8_t x375 = -49;
	int16_t x376 = -45;
	uint32_t t61 = 117989530U;

	t61 = ((x373^x374)%(x375*x376));

	if (t61 != 1972U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x377 = INT64_MIN;
	int32_t x378 = 102;
	static int32_t x379 = 61926;
	int8_t x380 = INT8_MAX;
	volatile int64_t t62 = 34183703795LL;

	t62 = ((x377^x378)%(x379*x380));

	if (t62 != -7208546LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x389 = -1;
	volatile int8_t x390 = INT8_MIN;
	uint32_t x391 = 523U;
	int16_t x392 = -1;
	uint32_t t63 = 13277U;

	t63 = ((x389^x390)%(x391*x392));

	if (t63 != 127U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MAX;
	static uint16_t x400 = 4U;
	static int64_t t64 = 8659399904LL;

	t64 = ((x397^x398)%(x399*x400));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x401 = INT8_MIN;
	int32_t x402 = -1;
	uint8_t x404 = 3U;
	volatile int32_t t65 = -169053;

	t65 = ((x401^x402)%(x403*x404));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MIN;
	int16_t x412 = -740;
	volatile int32_t t66 = -288;

	t66 = ((x409^x410)%(x411*x412));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x413 = UINT64_MAX;
	static uint16_t x416 = UINT16_MAX;
	volatile uint64_t t67 = 8521013209476978LLU;

	t67 = ((x413^x414)%(x415*x416));

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x421 = 5;
	volatile int64_t x422 = INT64_MIN;
	int32_t x423 = -48692;
	static int8_t x424 = INT8_MIN;

	t68 = ((x421^x422)%(x423*x424));

	if (t68 != -2272763LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x425 = INT8_MIN;
	int64_t x426 = INT64_MAX;
	uint32_t x427 = UINT32_MAX;
	volatile int16_t x428 = INT16_MIN;
	volatile int64_t t69 = -7LL;

	t69 = ((x425^x426)%(x427*x428));

	if (t69 != -32641LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x429 = INT16_MIN;
	uint16_t x431 = 156U;
	int32_t x432 = 88672;
	volatile int32_t t70 = -1;

	t70 = ((x429^x430)%(x431*x432));

	if (t70 != -32769) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x449 = 3064U;
	uint64_t x451 = 38505812299LLU;
	static int64_t x452 = INT64_MIN;

	t71 = ((x449^x450)%(x451*x452));

	if (t71 != 9223372034707295224LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x457 = -1;
	uint32_t x459 = 1U;
	int8_t x460 = 4;

	t72 = ((x457^x458)%(x459*x460));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x463 = INT16_MIN;
	int16_t x464 = INT16_MIN;
	volatile int32_t t73 = 5911;

	t73 = ((x461^x462)%(x463*x464));

	if (t73 != -1073741806) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x465 = INT32_MIN;
	uint8_t x467 = 104U;
	volatile uint32_t x468 = 47719085U;
	uint32_t t74 = 1336077869U;

	t74 = ((x465^x466)%(x467*x468));

	if (t74 != 144277716U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x474 = -1;
	volatile int16_t x475 = -5821;
	volatile uint16_t x476 = 231U;

	t75 = ((x473^x474)%(x475*x476));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x486 = INT64_MIN;
	int64_t x488 = 25LL;
	volatile int64_t t76 = -267026346922336736LL;

	t76 = ((x485^x486)%(x487*x488));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x489 = 8611U;
	int8_t x490 = INT8_MAX;
	uint16_t x491 = 24814U;
	int16_t x492 = -1;
	volatile int32_t t77 = 433;

	t77 = ((x489^x490)%(x491*x492));

	if (t77 != 8668) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x497 = -474;
	uint32_t x498 = 3U;
	int64_t t78 = 55426132459LL;

	t78 = ((x497^x498)%(x499*x500));

	if (t78 != 32296LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x502 = 4725;
	int8_t x503 = INT8_MIN;
	static volatile int8_t x504 = -1;
	volatile int32_t t79 = -44167;

	t79 = ((x501^x502)%(x503*x504));

	if (t79 != -118) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x506 = 5107;
	uint64_t x507 = 3360072546603472786LLU;
	int8_t x508 = -1;
	uint64_t t80 = 39913062311LLU;

	t80 = ((x505^x506)%(x507*x508));

	if (t80 != 3360072544455994245LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x513 = 100087;
	volatile uint16_t x515 = 3U;
	uint32_t x516 = UINT32_MAX;
	static uint32_t t81 = 972008556U;

	t81 = ((x513^x514)%(x515*x516));

	if (t81 != 99866U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x521 = INT16_MIN;
	uint32_t x522 = UINT32_MAX;
	uint32_t x523 = UINT32_MAX;
	uint64_t x524 = 146035001681LLU;
	volatile uint64_t t82 = 38208609510066LLU;

	t82 = ((x521^x522)%(x523*x524));

	if (t82 != 32767LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x529 = INT64_MAX;
	int8_t x530 = INT8_MIN;
	uint64_t x531 = UINT64_MAX;
	int16_t x532 = -1;
	volatile uint64_t t83 = 14747747663910961LLU;

	t83 = ((x529^x530)%(x531*x532));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x533 = UINT32_MAX;
	uint64_t x534 = UINT64_MAX;
	int16_t x536 = INT16_MAX;
	static uint64_t t84 = 11313545470352009LLU;

	t84 = ((x533^x534)%(x535*x536));

	if (t84 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x541 = -1LL;
	int16_t x542 = INT16_MAX;
	uint16_t x543 = 23255U;
	int8_t x544 = -1;
	volatile int64_t t85 = 569LL;

	t85 = ((x541^x542)%(x543*x544));

	if (t85 != -9513LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x545 = INT64_MIN;
	int16_t x546 = INT16_MIN;
	volatile int32_t x547 = -1;
	volatile int64_t t86 = 41556LL;

	t86 = ((x545^x546)%(x547*x548));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x549 = INT16_MIN;
	uint32_t x550 = UINT32_MAX;
	uint16_t x551 = 186U;
	volatile uint32_t t87 = 1661613515U;

	t87 = ((x549^x550)%(x551*x552));

	if (t87 != 1147U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x557 = 447U;
	int8_t x558 = -1;
	volatile uint64_t t88 = 1LLU;

	t88 = ((x557^x558)%(x559*x560));

	if (t88 != 751619276352LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x569 = 5U;
	int32_t x570 = INT32_MIN;
	uint16_t x571 = 1927U;
	static volatile uint8_t x572 = 3U;
	int32_t t89 = -150;

	t89 = ((x569^x570)%(x571*x572));

	if (t89 != -4011) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x573 = 44892705;
	static int8_t x574 = INT8_MAX;
	uint8_t x575 = UINT8_MAX;
	static uint64_t x576 = 49590LLU;
	volatile uint64_t t90 = 62LLU;

	t90 = ((x573^x574)%(x575*x576));

	if (t90 != 6956416LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x581 = INT64_MIN;
	int16_t x582 = INT16_MAX;
	uint64_t x584 = 14739458328672859LLU;
	uint64_t t91 = 244645633181LLU;

	t91 = ((x581^x582)%(x583*x584));

	if (t91 != 3933389758056945365LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x589 = INT8_MIN;
	int64_t x590 = -1LL;
	uint8_t x591 = 20U;
	volatile uint64_t t92 = 266031854616329LLU;

	t92 = ((x589^x590)%(x591*x592));

	if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x601 = INT64_MAX;
	static int16_t x602 = INT16_MIN;
	static int64_t x603 = -1057139500284LL;
	int32_t x604 = -2020871;
	static int64_t t93 = -3352919854LL;

	t93 = ((x601^x602)%(x603*x604));

	if (t93 != -678001800541033585LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x605 = INT8_MAX;
	int8_t x606 = 0;
	int8_t x607 = -1;
	int16_t x608 = INT16_MIN;

	t94 = ((x605^x606)%(x607*x608));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x610 = -1LL;
	static uint16_t x612 = 209U;
	volatile int64_t t95 = 1LL;

	t95 = ((x609^x610)%(x611*x612));

	if (t95 != -222LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x622 = -1;
	uint32_t x623 = 53U;
	int8_t x624 = -16;
	uint32_t t96 = 244507U;

	t96 = ((x621^x622)%(x623*x624));

	if (t96 != 32767U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x625 = 15968226U;
	static int8_t x626 = -3;
	int16_t x627 = -1;
	static int16_t x628 = INT16_MIN;
	uint32_t t97 = 266U;

	t97 = ((x625^x626)%(x627*x628));

	if (t97 != 22559U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x629 = 39219517585LLU;
	static int32_t x630 = INT32_MIN;
	uint16_t x631 = UINT16_MAX;
	uint8_t x632 = 12U;
	volatile uint64_t t98 = 69901174906LLU;

	t98 = ((x629^x630)%(x631*x632));

	if (t98 != 653865LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x637 = INT16_MIN;
	volatile int8_t x638 = INT8_MAX;
	uint16_t x639 = UINT16_MAX;
	static int8_t x640 = 40;
	volatile int32_t t99 = -24683;

	t99 = ((x637^x638)%(x639*x640));

	if (t99 != -32641) { NG(); } else { ; }
	
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

