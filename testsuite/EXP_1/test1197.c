#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -1;
int32_t x6 = INT32_MIN;
int32_t x7 = 2013;
volatile uint64_t t1 = 3430522664145427LLU;
int32_t t2 = -16754;
int64_t t3 = 4329995LL;
int64_t x22 = -7402804566LL;
static volatile uint64_t t4 = 25333756601LLU;
int16_t x36 = -230;
uint16_t x37 = 3U;
int32_t x43 = -1;
int8_t x46 = INT8_MAX;
int64_t x51 = 710187127199LL;
int8_t x55 = -10;
int8_t x56 = 11;
int64_t x58 = 1437284LL;
volatile int8_t x59 = -1;
int64_t x60 = -1LL;
uint16_t x64 = 1U;
static volatile uint32_t x72 = UINT32_MAX;
volatile uint64_t x76 = 480714474448020824LLU;
static int32_t x78 = INT32_MIN;
volatile int16_t x79 = -1;
int32_t t15 = -49196527;
uint64_t x94 = UINT64_MAX;
uint16_t x101 = 62U;
volatile int8_t x105 = INT8_MIN;
static int8_t x110 = INT8_MIN;
volatile int32_t t20 = -131606199;
int64_t x124 = -86688LL;
static uint64_t x127 = 8LLU;
int64_t x129 = -19LL;
uint8_t x130 = UINT8_MAX;
volatile int16_t x137 = INT16_MIN;
uint8_t x139 = 14U;
int64_t x140 = -4150589075068LL;
int16_t x144 = INT16_MIN;
volatile int16_t x161 = -200;
static volatile uint8_t x163 = 1U;
uint32_t x165 = 26U;
int32_t x171 = -970430054;
static uint32_t x173 = 106U;
uint8_t x175 = UINT8_MAX;
int32_t t35 = 25803945;
int16_t x178 = INT16_MIN;
int8_t x179 = INT8_MIN;
int16_t x180 = -54;
volatile int8_t x185 = INT8_MIN;
uint16_t x186 = 171U;
uint32_t x230 = UINT32_MAX;
int8_t x232 = -5;
volatile int64_t t44 = 44591135LL;
int32_t t45 = 16;
volatile int32_t t47 = 418090;
int8_t x253 = INT8_MIN;
int8_t x256 = 30;
volatile int32_t t48 = 1;
uint32_t x264 = 471650U;
int64_t x269 = -104873061469101LL;
volatile int64_t x272 = -1LL;
int16_t x275 = 29;
uint8_t x277 = UINT8_MAX;
uint64_t t53 = 434004067316LLU;
int8_t x283 = -11;
volatile uint64_t x302 = 812768458207120LLU;
static int64_t x304 = -1LL;
volatile int64_t x307 = INT64_MAX;
int8_t x309 = 1;
volatile int16_t x311 = INT16_MAX;
uint64_t x325 = 1435LLU;
int64_t x327 = -21LL;
static int32_t t65 = 1;
int8_t x333 = INT8_MAX;
static int64_t x336 = -3101827515883178LL;
uint8_t x352 = UINT8_MAX;
int32_t x356 = -1;
static uint64_t t72 = 11687451238LLU;
uint16_t x365 = UINT16_MAX;
uint8_t x370 = 15U;
volatile int32_t t75 = 26;
static uint16_t x380 = UINT16_MAX;
int16_t x385 = INT16_MIN;
uint8_t x391 = 1U;
volatile int64_t t78 = 0LL;
static int64_t x393 = INT64_MIN;
volatile int32_t t79 = -4863;
int8_t x403 = 1;
static uint8_t x406 = UINT8_MAX;
int16_t x408 = INT16_MIN;
int32_t x410 = INT32_MIN;
uint8_t x413 = 5U;
int32_t t84 = -656;
int32_t x417 = INT32_MIN;
static volatile uint64_t x420 = 2890880864LLU;
int64_t t86 = INT64_MIN;
int64_t x425 = INT64_MIN;
uint32_t x430 = 823419170U;
uint64_t t89 = 8565792000LLU;
int8_t x440 = INT8_MIN;
static volatile int32_t t92 = 16466;
static uint64_t x451 = 385956LLU;
int32_t x458 = INT32_MIN;
int16_t x467 = INT16_MAX;
static int16_t x468 = INT16_MIN;
int32_t x481 = -1;
int16_t x482 = INT16_MIN;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	static uint64_t x2 = 311827364858573LLU;
	volatile int8_t x3 = -6;
	int32_t t0 = 7478;

	t0 = (((x1==x2)-x3)+x4);

	if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	uint64_t x8 = 105733826730150LLU;

	t1 = (((x5==x6)-x7)+x8);

	if (t1 != 105733826728137LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -243;
	int64_t x10 = -143750623LL;
	volatile int16_t x11 = -92;
	int32_t x12 = -1;

	t2 = (((x9==x10)-x11)+x12);

	if (t2 != 91) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	uint8_t x18 = 1U;
	static int16_t x19 = -18;
	int64_t x20 = -1LL;

	t3 = (((x17==x18)-x19)+x20);

	if (t3 != 17LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = 14;
	static uint64_t x23 = 8518768381100762542LLU;
	int64_t x24 = INT64_MIN;

	t4 = (((x21==x22)-x23)+x24);

	if (t4 != 704603655754013266LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	uint32_t x34 = 6021556U;
	int16_t x35 = INT16_MIN;
	volatile int32_t t5 = -3;

	t5 = (((x33==x34)-x35)+x36);

	if (t5 != 32538) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x38 = -1;
	static int32_t x39 = 6767;
	volatile uint64_t x40 = 59252188646LLU;
	uint64_t t6 = 153423611158668039LLU;

	t6 = (((x37==x38)-x39)+x40);

	if (t6 != 59252181879LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = 75;
	uint64_t x42 = 1656456612203LLU;
	static volatile int64_t x44 = -2282LL;
	int64_t t7 = 225596LL;

	t7 = (((x41==x42)-x43)+x44);

	if (t7 != -2281LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = INT32_MAX;
	int16_t x47 = INT16_MIN;
	static volatile int64_t x48 = -1LL;
	int64_t t8 = -91352LL;

	t8 = (((x45==x46)-x47)+x48);

	if (t8 != 32767LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = UINT32_MAX;
	static volatile uint64_t x50 = 50LLU;
	static volatile uint16_t x52 = 5020U;
	static volatile int64_t t9 = -9400289982927LL;

	t9 = (((x49==x50)-x51)+x52);

	if (t9 != -710187122179LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = INT64_MAX;
	static volatile uint8_t x54 = 30U;
	int32_t t10 = -10;

	t10 = (((x53==x54)-x55)+x56);

	if (t10 != 21) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x57 = 1956889LL;
	volatile int64_t t11 = -2430LL;

	t11 = (((x57==x58)-x59)+x60);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MIN;
	uint64_t x63 = UINT64_MAX;
	uint64_t t12 = 1LLU;

	t12 = (((x61==x62)-x63)+x64);

	if (t12 != 3LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x69 = 123U;
	uint16_t x70 = UINT16_MAX;
	uint16_t x71 = 3348U;
	uint32_t t13 = 5237U;

	t13 = (((x69==x70)-x71)+x72);

	if (t13 != 4294963947U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = 343095194044558LL;
	static int16_t x74 = -1;
	volatile uint32_t x75 = 60U;
	uint64_t t14 = 1LLU;

	t14 = (((x73==x74)-x75)+x76);

	if (t14 != 480714478742988060LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MAX;
	static uint16_t x80 = 7298U;

	t15 = (((x77==x78)-x79)+x80);

	if (t15 != 7299) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = -1;
	uint16_t x95 = UINT16_MAX;
	int16_t x96 = INT16_MAX;
	static int32_t t16 = -222452453;

	t16 = (((x93==x94)-x95)+x96);

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x97 = UINT8_MAX;
	int32_t x98 = INT32_MIN;
	int16_t x99 = 1;
	int8_t x100 = -1;
	volatile int32_t t17 = -376441551;

	t17 = (((x97==x98)-x99)+x100);

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x102 = 7333U;
	uint16_t x103 = UINT16_MAX;
	volatile int64_t x104 = -1LL;
	int64_t t18 = -314391592155LL;

	t18 = (((x101==x102)-x103)+x104);

	if (t18 != -65536LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x106 = -1;
	int8_t x107 = -1;
	uint16_t x108 = 452U;
	static int32_t t19 = -678;

	t19 = (((x105==x106)-x107)+x108);

	if (t19 != 453) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = 4442434879087220661LLU;
	int8_t x111 = 36;
	int8_t x112 = 37;

	t20 = (((x109==x110)-x111)+x112);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x113 = UINT8_MAX;
	static int32_t x114 = INT32_MAX;
	int32_t x115 = INT32_MAX;
	int32_t x116 = -1;
	static volatile int32_t t21 = INT32_MIN;

	t21 = (((x113==x114)-x115)+x116);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = 2;
	int64_t x118 = INT64_MIN;
	int64_t x119 = -221012156668LL;
	int8_t x120 = INT8_MIN;
	volatile int64_t t22 = -14552001549110689LL;

	t22 = (((x117==x118)-x119)+x120);

	if (t22 != 221012156540LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x121 = INT64_MAX;
	uint8_t x122 = 122U;
	static uint64_t x123 = UINT64_MAX;
	uint64_t t23 = 1631960587207LLU;

	t23 = (((x121==x122)-x123)+x124);

	if (t23 != 18446744073709464929LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x125 = -419;
	static uint16_t x126 = 6496U;
	static int8_t x128 = INT8_MAX;
	uint64_t t24 = 274284997720LLU;

	t24 = (((x125==x126)-x127)+x128);

	if (t24 != 119LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x131 = 525992093LL;
	volatile int64_t x132 = 3457LL;
	volatile int64_t t25 = 402LL;

	t25 = (((x129==x130)-x131)+x132);

	if (t25 != -525988636LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = -16112;
	uint32_t x134 = 344112186U;
	int32_t x135 = -1;
	int64_t x136 = INT64_MIN;
	volatile int64_t t26 = 490456LL;

	t26 = (((x133==x134)-x135)+x136);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x138 = INT64_MIN;
	int64_t t27 = -1441475LL;

	t27 = (((x137==x138)-x139)+x140);

	if (t27 != -4150589075082LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = -1;
	static volatile int8_t x142 = -3;
	int64_t x143 = -1LL;
	int64_t t28 = -934233386594840304LL;

	t28 = (((x141==x142)-x143)+x144);

	if (t28 != -32767LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = UINT8_MAX;
	volatile int64_t x150 = INT64_MIN;
	int64_t x151 = INT64_MAX;
	volatile int32_t x152 = -1;
	int64_t t29 = INT64_MIN;

	t29 = (((x149==x150)-x151)+x152);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x153 = 16U;
	static int16_t x154 = INT16_MIN;
	uint32_t x155 = 2104U;
	int16_t x156 = -58;
	volatile uint32_t t30 = 13U;

	t30 = (((x153==x154)-x155)+x156);

	if (t30 != 4294965134U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = UINT64_MAX;
	int64_t x158 = 228116393856106LL;
	int32_t x159 = INT32_MAX;
	uint64_t x160 = 678402281934763109LLU;
	uint64_t t31 = 1LLU;

	t31 = (((x157==x158)-x159)+x160);

	if (t31 != 678402279787279462LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x162 = -1;
	static volatile int64_t x164 = INT64_MAX;
	static volatile int64_t t32 = 79497855LL;

	t32 = (((x161==x162)-x163)+x164);

	if (t32 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x166 = 19;
	int64_t x167 = -26130514560758320LL;
	static int8_t x168 = INT8_MIN;
	volatile int64_t t33 = -7373283368978LL;

	t33 = (((x165==x166)-x167)+x168);

	if (t33 != 26130514560758192LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = -1;
	static int32_t x170 = -1;
	volatile int8_t x172 = 0;
	static volatile int32_t t34 = -4665;

	t34 = (((x169==x170)-x171)+x172);

	if (t34 != 970430055) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x174 = UINT16_MAX;
	static int16_t x176 = 61;

	t35 = (((x173==x174)-x175)+x176);

	if (t35 != -194) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x177 = UINT32_MAX;
	int32_t t36 = -289577905;

	t36 = (((x177==x178)-x179)+x180);

	if (t36 != 74) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x187 = 19U;
	volatile int8_t x188 = -30;
	int32_t t37 = 66450428;

	t37 = (((x185==x186)-x187)+x188);

	if (t37 != -49) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = INT8_MIN;
	uint64_t x198 = 6956LLU;
	static int64_t x199 = INT64_MAX;
	int8_t x200 = 2;
	int64_t t38 = 11675453505162792LL;

	t38 = (((x197==x198)-x199)+x200);

	if (t38 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x201 = 2U;
	static int32_t x202 = INT32_MAX;
	uint32_t x203 = 42U;
	int16_t x204 = INT16_MIN;
	volatile uint32_t t39 = 771338U;

	t39 = (((x201==x202)-x203)+x204);

	if (t39 != 4294934486U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	volatile int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MIN;
	int32_t t40 = -14447321;

	t40 = (((x205==x206)-x207)+x208);

	if (t40 != -2147450879) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = INT64_MIN;
	volatile int8_t x210 = INT8_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	volatile uint64_t x212 = 38009695LLU;
	volatile uint64_t t41 = 962628LLU;

	t41 = (((x209==x210)-x211)+x212);

	if (t41 != 38009696LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int8_t x214 = -4;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = INT8_MAX;
	static volatile int32_t t42 = -49;

	t42 = (((x213==x214)-x215)+x216);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x221 = -1;
	static uint64_t x222 = 152010LLU;
	int8_t x223 = -1;
	int8_t x224 = 0;
	volatile int32_t t43 = 2991;

	t43 = (((x221==x222)-x223)+x224);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x229 = -1;
	int64_t x231 = -107342110LL;

	t44 = (((x229==x230)-x231)+x232);

	if (t44 != 107342106LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x237 = INT32_MIN;
	uint16_t x238 = 7U;
	int16_t x239 = INT16_MIN;
	volatile int32_t x240 = INT32_MIN;

	t45 = (((x237==x238)-x239)+x240);

	if (t45 != -2147450880) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MAX;
	uint32_t x243 = 22750391U;
	int16_t x244 = 59;
	volatile uint32_t t46 = 218335U;

	t46 = (((x241==x242)-x243)+x244);

	if (t46 != 4272216964U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x249 = UINT16_MAX;
	static volatile int64_t x250 = -1LL;
	int16_t x251 = INT16_MAX;
	volatile uint8_t x252 = 4U;

	t47 = (((x249==x250)-x251)+x252);

	if (t47 != -32763) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x254 = UINT8_MAX;
	static int32_t x255 = INT32_MAX;

	t48 = (((x253==x254)-x255)+x256);

	if (t48 != -2147483617) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x257 = INT32_MAX;
	uint32_t x258 = 2U;
	static volatile int16_t x259 = INT16_MIN;
	volatile int64_t x260 = INT64_MIN;
	volatile int64_t t49 = -75760779999983134LL;

	t49 = (((x257==x258)-x259)+x260);

	if (t49 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x261 = INT8_MIN;
	int16_t x262 = -1;
	static int8_t x263 = INT8_MIN;
	uint32_t t50 = 1295U;

	t50 = (((x261==x262)-x263)+x264);

	if (t50 != 471778U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x270 = -1;
	static uint16_t x271 = 0U;
	int64_t t51 = -744544711705LL;

	t51 = (((x269==x270)-x271)+x272);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x273 = UINT32_MAX;
	uint16_t x274 = UINT16_MAX;
	uint32_t x276 = UINT32_MAX;
	static volatile uint32_t t52 = 2143977U;

	t52 = (((x273==x274)-x275)+x276);

	if (t52 != 4294967266U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x278 = 80;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = 57953781362LLU;

	t53 = (((x277==x278)-x279)+x280);

	if (t53 != 9223372094808557171LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x281 = INT64_MAX;
	static int16_t x282 = -1;
	int8_t x284 = -8;
	int32_t t54 = 5;

	t54 = (((x281==x282)-x283)+x284);

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x285 = INT32_MIN;
	uint16_t x286 = UINT16_MAX;
	static volatile int8_t x287 = INT8_MIN;
	uint32_t x288 = 1933U;
	static uint32_t t55 = 318359967U;

	t55 = (((x285==x286)-x287)+x288);

	if (t55 != 2061U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = -52778156;
	static int32_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	uint64_t t56 = 64797794894061536LLU;

	t56 = (((x289==x290)-x291)+x292);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x293 = UINT16_MAX;
	static int32_t x294 = -1;
	volatile int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MIN;
	static int32_t t57 = 24820658;

	t57 = (((x293==x294)-x295)+x296);

	if (t57 != -2147483520) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x297 = UINT16_MAX;
	int16_t x298 = -1;
	uint16_t x299 = 181U;
	static volatile uint32_t x300 = UINT32_MAX;
	uint32_t t58 = 3930702U;

	t58 = (((x297==x298)-x299)+x300);

	if (t58 != 4294967114U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x301 = 0U;
	volatile uint8_t x303 = 1U;
	volatile int64_t t59 = 6305631LL;

	t59 = (((x301==x302)-x303)+x304);

	if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = -27675675;
	static int32_t x306 = INT32_MAX;
	volatile uint32_t x308 = UINT32_MAX;
	int64_t t60 = -2757624387754556LL;

	t60 = (((x305==x306)-x307)+x308);

	if (t60 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x310 = 5U;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t61 = 11246;

	t61 = (((x309==x310)-x311)+x312);

	if (t61 != -32895) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x313 = UINT32_MAX;
	static volatile int64_t x314 = -1877199472LL;
	volatile int16_t x315 = INT16_MIN;
	volatile int8_t x316 = INT8_MAX;
	static volatile int32_t t62 = -27009860;

	t62 = (((x313==x314)-x315)+x316);

	if (t62 != 32895) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x321 = 20U;
	int16_t x322 = INT16_MIN;
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t63 = -67431325;

	t63 = (((x321==x322)-x323)+x324);

	if (t63 != -33023) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x326 = 2LLU;
	volatile int8_t x328 = 1;
	int64_t t64 = 5187035453LL;

	t64 = (((x325==x326)-x327)+x328);

	if (t64 != 22LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = 8;
	volatile uint16_t x330 = UINT16_MAX;
	static int16_t x331 = INT16_MAX;
	uint16_t x332 = UINT16_MAX;

	t65 = (((x329==x330)-x331)+x332);

	if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x334 = INT16_MIN;
	int16_t x335 = 18;
	volatile int64_t t66 = -9222225776739279LL;

	t66 = (((x333==x334)-x335)+x336);

	if (t66 != -3101827515883196LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x337 = 329;
	int64_t x338 = INT64_MIN;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;
	volatile uint64_t t67 = 70348581826LLU;

	t67 = (((x337==x338)-x339)+x340);

	if (t67 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = -1;
	uint16_t x343 = 1644U;
	int64_t x344 = INT64_MAX;
	volatile int64_t t68 = -5870832LL;

	t68 = (((x341==x342)-x343)+x344);

	if (t68 != 9223372036854774163LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x345 = 6050U;
	uint32_t x346 = 56761793U;
	int16_t x347 = INT16_MIN;
	uint8_t x348 = 1U;
	int32_t t69 = 348008445;

	t69 = (((x345==x346)-x347)+x348);

	if (t69 != 32769) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	uint64_t x350 = 177046759199LLU;
	static volatile int8_t x351 = -30;
	volatile int32_t t70 = -4031;

	t70 = (((x349==x350)-x351)+x352);

	if (t70 != 285) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x353 = -1;
	uint64_t x354 = 8852LLU;
	int32_t x355 = INT32_MAX;
	volatile int32_t t71 = INT32_MIN;

	t71 = (((x353==x354)-x355)+x356);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x361 = 1LL;
	int8_t x362 = -2;
	uint64_t x363 = 1527LLU;
	volatile int8_t x364 = INT8_MIN;

	t72 = (((x361==x362)-x363)+x364);

	if (t72 != 18446744073709549961LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x366 = -1;
	int16_t x367 = -6;
	int64_t x368 = INT64_MIN;
	static volatile int64_t t73 = -287218994052353947LL;

	t73 = (((x365==x366)-x367)+x368);

	if (t73 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x369 = 1U;
	int16_t x371 = -12;
	static uint32_t x372 = UINT32_MAX;
	uint32_t t74 = 116113274U;

	t74 = (((x369==x370)-x371)+x372);

	if (t74 != 11U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x373 = -1450099;
	int16_t x374 = INT16_MAX;
	volatile int8_t x375 = -1;
	static int8_t x376 = -1;

	t75 = (((x373==x374)-x375)+x376);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x377 = 1628848796LLU;
	int64_t x378 = -118067978594949663LL;
	static int16_t x379 = 2;
	volatile int32_t t76 = -2941;

	t76 = (((x377==x378)-x379)+x380);

	if (t76 != 65533) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x386 = INT64_MIN;
	static int8_t x387 = 1;
	static int32_t x388 = INT32_MAX;
	volatile int32_t t77 = 1;

	t77 = (((x385==x386)-x387)+x388);

	if (t77 != 2147483646) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x389 = INT32_MIN;
	static int64_t x390 = 907040LL;
	volatile int64_t x392 = -1LL;

	t78 = (((x389==x390)-x391)+x392);

	if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x394 = UINT32_MAX;
	volatile int8_t x395 = INT8_MAX;
	uint8_t x396 = 2U;

	t79 = (((x393==x394)-x395)+x396);

	if (t79 != -125) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x397 = 7;
	int8_t x398 = INT8_MAX;
	static int16_t x399 = -1;
	int16_t x400 = 1;
	volatile int32_t t80 = -11577813;

	t80 = (((x397==x398)-x399)+x400);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x401 = INT64_MIN;
	uint32_t x402 = UINT32_MAX;
	int8_t x404 = INT8_MAX;
	volatile int32_t t81 = -916210252;

	t81 = (((x401==x402)-x403)+x404);

	if (t81 != 126) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x405 = 256442047U;
	int16_t x407 = INT16_MAX;
	int32_t t82 = 0;

	t82 = (((x405==x406)-x407)+x408);

	if (t82 != -65535) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x409 = 1;
	static uint64_t x411 = 3711609883301100LLU;
	uint64_t x412 = 6722LLU;
	static uint64_t t83 = 3062479839284473259LLU;

	t83 = (((x409==x410)-x411)+x412);

	if (t83 != 18443032463826257238LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x414 = -8;
	uint16_t x415 = UINT16_MAX;
	static volatile uint16_t x416 = UINT16_MAX;

	t84 = (((x413==x414)-x415)+x416);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x418 = -1;
	static int16_t x419 = -6845;
	uint64_t t85 = 412832LLU;

	t85 = (((x417==x418)-x419)+x420);

	if (t85 != 2890887709LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x421 = UINT8_MAX;
	volatile uint64_t x422 = 61833LLU;
	volatile int64_t x423 = INT64_MAX;
	static int8_t x424 = -1;

	t86 = (((x421==x422)-x423)+x424);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x426 = 410U;
	volatile int8_t x427 = INT8_MIN;
	volatile uint32_t x428 = 203659155U;
	static volatile uint32_t t87 = 3U;

	t87 = (((x425==x426)-x427)+x428);

	if (t87 != 203659283U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x429 = -1LL;
	uint32_t x431 = 1547U;
	static uint32_t x432 = UINT32_MAX;
	static uint32_t t88 = 124360743U;

	t88 = (((x429==x430)-x431)+x432);

	if (t88 != 4294965748U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x433 = 1;
	volatile int8_t x434 = INT8_MIN;
	uint64_t x435 = 0LLU;
	int32_t x436 = 55;

	t89 = (((x433==x434)-x435)+x436);

	if (t89 != 55LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x437 = UINT16_MAX;
	uint8_t x438 = UINT8_MAX;
	volatile int64_t x439 = -1LL;
	int64_t t90 = -2034720061574163LL;

	t90 = (((x437==x438)-x439)+x440);

	if (t90 != -127LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x441 = INT16_MAX;
	volatile int64_t x442 = -1LL;
	int8_t x443 = INT8_MIN;
	uint8_t x444 = 3U;
	int32_t t91 = 0;

	t91 = (((x441==x442)-x443)+x444);

	if (t91 != 131) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x445 = INT16_MIN;
	int16_t x446 = -5682;
	int16_t x447 = 26;
	volatile int16_t x448 = -12;

	t92 = (((x445==x446)-x447)+x448);

	if (t92 != -38) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x449 = -65418166130550LL;
	uint32_t x450 = 210689927U;
	static volatile int16_t x452 = 1;
	uint64_t t93 = 29001895283LLU;

	t93 = (((x449==x450)-x451)+x452);

	if (t93 != 18446744073709165661LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x453 = 4U;
	int16_t x454 = INT16_MIN;
	volatile uint16_t x455 = 51U;
	static int8_t x456 = 0;
	static volatile int32_t t94 = 19680943;

	t94 = (((x453==x454)-x455)+x456);

	if (t94 != -51) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x457 = 1755U;
	int32_t x459 = -909;
	int8_t x460 = -1;
	int32_t t95 = 1871;

	t95 = (((x457==x458)-x459)+x460);

	if (t95 != 908) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x461 = 426161U;
	int16_t x462 = 35;
	int16_t x463 = INT16_MAX;
	int32_t x464 = 98371;
	int32_t t96 = -569;

	t96 = (((x461==x462)-x463)+x464);

	if (t96 != 65604) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x465 = 32;
	int8_t x466 = INT8_MIN;
	volatile int32_t t97 = -165;

	t97 = (((x465==x466)-x467)+x468);

	if (t97 != -65535) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x483 = -10385976633157101LL;
	static int8_t x484 = 25;
	volatile int64_t t98 = -3887136449616331599LL;

	t98 = (((x481==x482)-x483)+x484);

	if (t98 != 10385976633157126LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x485 = INT8_MIN;
	int16_t x486 = INT16_MIN;
	int64_t x487 = INT64_MAX;
	uint32_t x488 = 6U;
	int64_t t99 = -63076734390500132LL;

	t99 = (((x485==x486)-x487)+x488);

	if (t99 != -9223372036854775801LL) { NG(); } else { ; }
	
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

