#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 0U;
static int8_t x17 = -1;
uint64_t x46 = UINT64_MAX;
int64_t x53 = INT64_MIN;
int8_t x86 = INT8_MAX;
uint8_t x97 = 62U;
uint8_t x100 = 0U;
uint64_t x109 = 969551752528LLU;
int8_t x115 = INT8_MAX;
volatile uint64_t t12 = 1244142LLU;
volatile uint8_t x127 = UINT8_MAX;
uint64_t t13 = 3413110668731LLU;
volatile int16_t x135 = -1;
int64_t t15 = -25484LL;
int64_t x152 = INT64_MAX;
uint32_t x159 = 144U;
uint64_t x164 = 16670LLU;
volatile int64_t x168 = -17429584LL;
uint64_t x193 = 3283547795451LLU;
int16_t x194 = INT16_MAX;
static volatile uint64_t t21 = 244377924423525525LLU;
uint16_t x197 = UINT16_MAX;
uint64_t x199 = 2664297329LLU;
volatile uint32_t x202 = 59107U;
int32_t x212 = 0;
uint8_t x215 = 13U;
uint16_t x224 = UINT16_MAX;
uint64_t x228 = 2891808LLU;
uint32_t t28 = 19751U;
uint16_t x235 = 0U;
uint32_t x255 = UINT32_MAX;
uint16_t x257 = UINT16_MAX;
volatile int16_t x258 = 3;
uint16_t x269 = 8U;
volatile int64_t x271 = INT64_MIN;
uint16_t x288 = 81U;
volatile uint16_t x295 = UINT16_MAX;
static uint64_t x320 = UINT64_MAX;
uint64_t t39 = 6673844771827274LLU;
uint32_t x324 = UINT32_MAX;
int32_t t40 = -33;
int32_t x325 = INT32_MAX;
static int16_t x334 = INT16_MAX;
uint32_t t43 = 12382U;
uint8_t x353 = 82U;
static int64_t x354 = 54987939482095397LL;
uint8_t x356 = UINT8_MAX;
static uint64_t t45 = 12061645203928850LLU;
volatile uint64_t x378 = UINT64_MAX;
int64_t x379 = INT64_MIN;
int8_t x392 = INT8_MAX;
volatile uint64_t x395 = 21LLU;
int32_t x403 = -1;
volatile uint16_t x409 = 2032U;
int32_t x411 = INT32_MIN;
static volatile int32_t t53 = -1518198;
uint32_t x415 = UINT32_MAX;
volatile int8_t x418 = 1;
uint8_t x425 = UINT8_MAX;
int64_t x427 = INT64_MIN;
uint32_t t57 = 1U;
int32_t x437 = 1064341;
volatile int32_t t58 = 37589776;
static volatile uint32_t t59 = 1807002105U;
uint16_t x446 = 0U;
volatile int16_t x447 = INT16_MIN;
volatile int64_t t61 = 451404LL;
int16_t x475 = -1;
uint8_t x481 = 0U;
uint32_t t67 = 228U;
volatile uint32_t x522 = 3385269U;
static int8_t x523 = INT8_MAX;
volatile uint8_t x527 = UINT8_MAX;
uint8_t x534 = UINT8_MAX;
int16_t x542 = 711;
volatile uint64_t t78 = 6188767443697177LLU;
int16_t x559 = INT16_MAX;
int8_t x560 = -6;
uint32_t x589 = 116135861U;
int32_t x591 = 0;
int8_t x592 = 0;
volatile uint32_t t82 = 184U;
int8_t x597 = -1;
volatile int16_t x599 = -141;
int8_t x604 = INT8_MAX;
int8_t x620 = INT8_MIN;
static volatile int32_t t86 = -747605714;
static volatile int32_t x635 = -1905466;
volatile uint64_t t87 = 3982734891476LLU;
volatile uint8_t x637 = UINT8_MAX;
int32_t x639 = -1;
uint64_t t88 = 14614LLU;
uint32_t x641 = 457U;
int8_t x643 = INT8_MAX;
static int8_t x655 = -1;
int64_t t91 = -10830269896LL;
volatile int64_t t92 = 10448982312LL;
int16_t x681 = INT16_MAX;
static int32_t t93 = -22150054;
int32_t x685 = 242202;
volatile int64_t x687 = 470LL;
uint32_t x690 = UINT32_MAX;
static volatile int32_t x701 = 3300;
volatile int64_t x703 = INT64_MIN;
uint8_t x711 = 121U;
int32_t x723 = INT32_MIN;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int32_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 119;

	t0 = (x1-(x2<<(x3==x4)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x9 = -53277396182662LL;
	static uint16_t x10 = UINT16_MAX;
	uint64_t x11 = UINT64_MAX;
	uint32_t x12 = 13U;
	volatile int64_t t1 = 1902620671629842622LL;

	t1 = (x9-(x10<<(x11==x12)));

	if (t1 != -53277396248197LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x18 = INT64_MAX;
	int32_t x19 = INT32_MAX;
	int32_t x20 = -1;
	int64_t t2 = INT64_MIN;

	t2 = (x17-(x18<<(x19==x20)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	int8_t x23 = 2;
	int8_t x24 = INT8_MIN;
	static int32_t t3 = 1;

	t3 = (x21-(x22<<(x23==x24)));

	if (t3 != -256) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x45 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = INT16_MIN;
	static volatile uint64_t t4 = 615392040145185LLU;

	t4 = (x45-(x46<<(x47==x48)));

	if (t4 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;
	uint64_t t5 = 149870LLU;

	t5 = (x53-(x54<<(x55==x56)));

	if (t5 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x57 = 3366;
	uint32_t x58 = 1012275247U;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = -1;
	volatile uint32_t t6 = 11734U;

	t6 = (x57-(x58<<(x59==x60)));

	if (t6 != 3282695415U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x65 = UINT64_MAX;
	int16_t x66 = 357;
	int32_t x67 = INT32_MAX;
	int16_t x68 = INT16_MIN;
	uint64_t t7 = 732LLU;

	t7 = (x65-(x66<<(x67==x68)));

	if (t7 != 18446744073709551258LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x85 = 483;
	static uint64_t x87 = UINT64_MAX;
	int8_t x88 = -1;
	volatile int32_t t8 = 2114495;

	t8 = (x85-(x86<<(x87==x88)));

	if (t8 != 229) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x98 = 889826227055LLU;
	volatile uint16_t x99 = 3581U;
	uint64_t t9 = 1899388659867934LLU;

	t9 = (x97-(x98<<(x99==x100)));

	if (t9 != 18446743183883324623LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x110 = 541628674822383730LLU;
	uint32_t x111 = 531U;
	int32_t x112 = INT32_MIN;
	volatile uint64_t t10 = 828489262382387LLU;

	t10 = (x109-(x110<<(x111==x112)));

	if (t10 != 17905116368438920414LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MAX;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t11 = 124337208281748381LLU;

	t11 = (x113-(x114<<(x115==x116)));

	if (t11 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x121 = -1;
	volatile uint64_t x122 = UINT64_MAX;
	volatile int16_t x123 = INT16_MIN;
	static uint16_t x124 = 4U;

	t12 = (x121-(x122<<(x123==x124)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x125 = 39104378U;
	uint64_t x126 = 69857LLU;
	uint8_t x128 = 5U;

	t13 = (x125-(x126<<(x127==x128)));

	if (t13 != 39034521LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x129 = UINT16_MAX;
	volatile uint64_t x130 = 2LLU;
	int32_t x131 = -7158;
	int16_t x132 = INT16_MIN;
	uint64_t t14 = 7291LLU;

	t14 = (x129-(x130<<(x131==x132)));

	if (t14 != 65533LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x133 = INT64_MAX;
	int32_t x134 = 245;
	static volatile int64_t x136 = -96LL;

	t15 = (x133-(x134<<(x135==x136)));

	if (t15 != 9223372036854775562LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 108060829134246093LLU;
	int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	volatile uint64_t t16 = 14149LLU;

	t16 = (x141-(x142<<(x143==x144)));

	if (t16 != 18230622415441026662LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x149 = -1;
	volatile uint32_t x150 = UINT32_MAX;
	int32_t x151 = INT32_MIN;
	volatile uint32_t t17 = 2569U;

	t17 = (x149-(x150<<(x151==x152)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x157 = INT64_MIN;
	int64_t x158 = 0LL;
	int16_t x160 = -1413;
	int64_t t18 = INT64_MIN;

	t18 = (x157-(x158<<(x159==x160)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x161 = UINT64_MAX;
	volatile int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MIN;
	volatile uint64_t t19 = 239986132346LLU;

	t19 = (x161-(x162<<(x163==x164)));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x165 = UINT64_MAX;
	static uint32_t x166 = UINT32_MAX;
	int64_t x167 = -1819612069990LL;
	volatile uint64_t t20 = 577738997531257511LLU;

	t20 = (x165-(x166<<(x167==x168)));

	if (t20 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MIN;

	t21 = (x193-(x194<<(x195==x196)));

	if (t21 != 3283547762684LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x198 = 130704963143145775LLU;
	int32_t x200 = -31400110;
	volatile uint64_t t22 = 175501903073200414LLU;

	t22 = (x197-(x198<<(x199==x200)));

	if (t22 != 18316039110566471376LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x201 = INT32_MIN;
	int32_t x203 = -8;
	int32_t x204 = INT32_MIN;
	static uint32_t t23 = 25U;

	t23 = (x201-(x202<<(x203==x204)));

	if (t23 != 2147424541U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x209 = INT8_MAX;
	volatile int8_t x210 = 0;
	int32_t x211 = INT32_MAX;
	volatile int32_t t24 = -4878088;

	t24 = (x209-(x210<<(x211==x212)));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x213 = UINT16_MAX;
	uint8_t x214 = 11U;
	static uint8_t x216 = 25U;
	int32_t t25 = 4080992;

	t25 = (x213-(x214<<(x215==x216)));

	if (t25 != 65524) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x217 = -1;
	uint8_t x218 = 3U;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 13683730854157052LLU;
	int32_t t26 = 140865;

	t26 = (x217-(x218<<(x219==x220)));

	if (t26 != -4) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x221 = INT16_MIN;
	static uint8_t x222 = 90U;
	int16_t x223 = -1;
	int32_t t27 = 1;

	t27 = (x221-(x222<<(x223==x224)));

	if (t27 != -32858) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x225 = -2011;
	uint32_t x226 = 5985U;
	int16_t x227 = -48;

	t28 = (x225-(x226<<(x227==x228)));

	if (t28 != 4294959300U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x233 = UINT16_MAX;
	static int32_t x234 = INT32_MAX;
	static int32_t x236 = -1;
	volatile int32_t t29 = 457465875;

	t29 = (x233-(x234<<(x235==x236)));

	if (t29 != -2147418112) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x253 = 10700166889706928LLU;
	uint16_t x254 = UINT16_MAX;
	static int16_t x256 = INT16_MIN;
	static volatile uint64_t t30 = 779988038017418LLU;

	t30 = (x253-(x254<<(x255==x256)));

	if (t30 != 10700166889641393LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x259 = INT16_MAX;
	static int8_t x260 = -1;
	static int32_t t31 = -1862417;

	t31 = (x257-(x258<<(x259==x260)));

	if (t31 != 65532) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x265 = -52;
	int8_t x266 = 8;
	static int16_t x267 = INT16_MIN;
	int64_t x268 = -8649323298171LL;
	volatile int32_t t32 = -51094462;

	t32 = (x265-(x266<<(x267==x268)));

	if (t32 != -60) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x270 = 17U;
	volatile int32_t x272 = INT32_MIN;
	uint32_t t33 = 4483459U;

	t33 = (x269-(x270<<(x271==x272)));

	if (t33 != 4294967287U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x273 = 1U;
	uint8_t x274 = 2U;
	int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MAX;
	volatile int32_t t34 = 1485;

	t34 = (x273-(x274<<(x275==x276)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x285 = 32462391952454LL;
	static volatile uint16_t x286 = 295U;
	int16_t x287 = INT16_MAX;
	volatile int64_t t35 = -35LL;

	t35 = (x285-(x286<<(x287==x288)));

	if (t35 != 32462391952159LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x293 = 716614791U;
	uint32_t x294 = 254569U;
	volatile int8_t x296 = -1;
	volatile uint32_t t36 = 5910U;

	t36 = (x293-(x294<<(x295==x296)));

	if (t36 != 716360222U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x301 = -1;
	uint64_t x302 = 60368223868LLU;
	static uint8_t x303 = UINT8_MAX;
	int32_t x304 = INT32_MIN;
	static uint64_t t37 = 40LLU;

	t37 = (x301-(x302<<(x303==x304)));

	if (t37 != 18446744013341327747LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x313 = UINT32_MAX;
	uint16_t x314 = 1U;
	int64_t x315 = 40439736075LL;
	int16_t x316 = INT16_MIN;
	volatile uint32_t t38 = 480972599U;

	t38 = (x313-(x314<<(x315==x316)));

	if (t38 != 4294967294U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x317 = 2137199790661914578LLU;
	uint16_t x318 = 2U;
	volatile int16_t x319 = -1;

	t39 = (x317-(x318<<(x319==x320)));

	if (t39 != 2137199790661914574LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x321 = INT8_MIN;
	uint8_t x322 = 16U;
	static uint64_t x323 = UINT64_MAX;

	t40 = (x321-(x322<<(x323==x324)));

	if (t40 != -144) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x326 = 1222702839808891LLU;
	uint16_t x327 = 12536U;
	uint8_t x328 = 120U;
	uint64_t t41 = 1144387LLU;

	t41 = (x325-(x326<<(x327==x328)));

	if (t41 != 18445521373017226372LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x333 = -1;
	static int64_t x335 = -1LL;
	int16_t x336 = -1;
	int32_t t42 = 46;

	t42 = (x333-(x334<<(x335==x336)));

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x337 = INT32_MAX;
	uint32_t x338 = 233784610U;
	uint16_t x339 = 4U;
	int16_t x340 = INT16_MIN;

	t43 = (x337-(x338<<(x339==x340)));

	if (t43 != 1913699037U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x355 = -18581607935LL;
	volatile int64_t t44 = -38993495300304879LL;

	t44 = (x353-(x354<<(x355==x356)));

	if (t44 != -54987939482095315LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x365 = 97295LL;
	uint64_t x366 = 1983LLU;
	volatile int32_t x367 = INT32_MIN;
	static int16_t x368 = INT16_MIN;

	t45 = (x365-(x366<<(x367==x368)));

	if (t45 != 95312LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x369 = -15977866932035074LL;
	uint64_t x370 = UINT64_MAX;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MAX;
	static uint64_t t46 = 1238LLU;

	t46 = (x369-(x370<<(x371==x372)));

	if (t46 != 18430766206777516543LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x377 = 121043070LLU;
	uint32_t x380 = 3U;
	volatile uint64_t t47 = 246LLU;

	t47 = (x377-(x378<<(x379==x380)));

	if (t47 != 121043071LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x381 = -536;
	static int64_t x382 = 42070225420LL;
	volatile int16_t x383 = -2028;
	int8_t x384 = INT8_MAX;
	int64_t t48 = -12656LL;

	t48 = (x381-(x382<<(x383==x384)));

	if (t48 != -42070225956LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = 5;
	int8_t x391 = -6;
	volatile int32_t t49 = -1;

	t49 = (x389-(x390<<(x391==x392)));

	if (t49 != -133) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x393 = -10LL;
	uint8_t x394 = UINT8_MAX;
	int32_t x396 = INT32_MIN;
	static volatile int64_t t50 = 5539LL;

	t50 = (x393-(x394<<(x395==x396)));

	if (t50 != -265LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x401 = 2U;
	static int32_t x402 = INT32_MAX;
	volatile uint64_t x404 = 96879LLU;
	static int32_t t51 = 3909;

	t51 = (x401-(x402<<(x403==x404)));

	if (t51 != -2147483645) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x405 = UINT32_MAX;
	volatile uint64_t x406 = UINT64_MAX;
	volatile int64_t x407 = 64LL;
	int8_t x408 = INT8_MAX;
	volatile uint64_t t52 = 0LLU;

	t52 = (x405-(x406<<(x407==x408)));

	if (t52 != 4294967296LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x410 = INT8_MAX;
	int32_t x412 = -1;

	t53 = (x409-(x410<<(x411==x412)));

	if (t53 != 1905) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x413 = UINT64_MAX;
	uint16_t x414 = 0U;
	volatile int8_t x416 = -1;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x413-(x414<<(x415==x416)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x417 = UINT16_MAX;
	int64_t x419 = INT64_MIN;
	volatile int8_t x420 = 42;
	volatile int32_t t55 = 10;

	t55 = (x417-(x418<<(x419==x420)));

	if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x426 = 1U;
	static int16_t x428 = INT16_MAX;
	volatile int32_t t56 = -3495168;

	t56 = (x425-(x426<<(x427==x428)));

	if (t56 != 254) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x429 = -389753;
	uint32_t x430 = UINT32_MAX;
	int16_t x431 = 0;
	volatile uint8_t x432 = UINT8_MAX;

	t57 = (x429-(x430<<(x431==x432)));

	if (t57 != 4294577544U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x438 = 0;
	volatile uint64_t x439 = UINT64_MAX;
	static int16_t x440 = -1;

	t58 = (x437-(x438<<(x439==x440)));

	if (t58 != 1064341) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x441 = 46153U;
	static uint32_t x442 = 28970408U;
	int16_t x443 = -1;
	int64_t x444 = -2249541033668137254LL;

	t59 = (x441-(x442<<(x443==x444)));

	if (t59 != 4266043041U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x445 = -247LL;
	static int8_t x448 = -12;
	volatile int64_t t60 = 70212362942564864LL;

	t60 = (x445-(x446<<(x447==x448)));

	if (t60 != -247LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x449 = 487470961;
	int64_t x450 = INT64_MAX;
	volatile uint32_t x451 = UINT32_MAX;
	int16_t x452 = INT16_MIN;

	t61 = (x449-(x450<<(x451==x452)));

	if (t61 != -9223372036367304846LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x461 = -1;
	uint64_t x462 = 18447101257717818LLU;
	static int8_t x463 = INT8_MIN;
	volatile uint64_t x464 = UINT64_MAX;
	static volatile uint64_t t62 = 35390832LLU;

	t62 = (x461-(x462<<(x463==x464)));

	if (t62 != 18428296972451833797LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x473 = 25U;
	volatile uint64_t x474 = 583792LLU;
	int64_t x476 = -1LL;
	uint64_t t63 = 193327608448161582LLU;

	t63 = (x473-(x474<<(x475==x476)));

	if (t63 != 18446744073708384057LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x477 = 38U;
	uint32_t x478 = UINT32_MAX;
	uint64_t x479 = UINT64_MAX;
	int8_t x480 = 0;
	volatile uint32_t t64 = 97930U;

	t64 = (x477-(x478<<(x479==x480)));

	if (t64 != 39U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x482 = UINT32_MAX;
	int64_t x483 = INT64_MIN;
	int32_t x484 = INT32_MAX;
	uint32_t t65 = 1140923U;

	t65 = (x481-(x482<<(x483==x484)));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x485 = -1;
	int64_t x486 = 171679955180LL;
	int32_t x487 = INT32_MIN;
	uint64_t x488 = 16LLU;
	volatile int64_t t66 = -5544266410LL;

	t66 = (x485-(x486<<(x487==x488)));

	if (t66 != -171679955181LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x493 = -1;
	uint32_t x494 = 221010U;
	static uint32_t x495 = 9U;
	uint16_t x496 = 11538U;

	t67 = (x493-(x494<<(x495==x496)));

	if (t67 != 4294746285U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x497 = UINT32_MAX;
	volatile int8_t x498 = 1;
	static int8_t x499 = 10;
	uint64_t x500 = 594306251229670LLU;
	static volatile uint32_t t68 = 416599U;

	t68 = (x497-(x498<<(x499==x500)));

	if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x505 = UINT8_MAX;
	uint32_t x506 = 56031316U;
	int32_t x507 = 3;
	int32_t x508 = -1;
	volatile uint32_t t69 = 31537U;

	t69 = (x505-(x506<<(x507==x508)));

	if (t69 != 4238936235U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x509 = 12U;
	volatile uint16_t x510 = 2U;
	int8_t x511 = 4;
	volatile uint8_t x512 = UINT8_MAX;
	volatile int32_t t70 = 19;

	t70 = (x509-(x510<<(x511==x512)));

	if (t70 != 10) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x521 = 3515U;
	static int64_t x524 = -1LL;
	volatile uint32_t t71 = 573U;

	t71 = (x521-(x522<<(x523==x524)));

	if (t71 != 4291585542U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x525 = UINT16_MAX;
	static volatile int64_t x526 = 230812724260002570LL;
	static int8_t x528 = 0;
	static int64_t t72 = 150648415801LL;

	t72 = (x525-(x526<<(x527==x528)));

	if (t72 != -230812724259937035LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x529 = 3356951LL;
	uint64_t x530 = UINT64_MAX;
	volatile int16_t x531 = -1;
	int64_t x532 = INT64_MIN;
	static volatile uint64_t t73 = 65LLU;

	t73 = (x529-(x530<<(x531==x532)));

	if (t73 != 3356952LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x533 = INT32_MAX;
	int32_t x535 = 20931543;
	static uint16_t x536 = UINT16_MAX;
	static int32_t t74 = 0;

	t74 = (x533-(x534<<(x535==x536)));

	if (t74 != 2147483392) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x537 = UINT8_MAX;
	volatile uint64_t x538 = 74394339384857LLU;
	int16_t x539 = -1;
	int8_t x540 = INT8_MIN;
	static volatile uint64_t t75 = 23535942303LLU;

	t75 = (x537-(x538<<(x539==x540)));

	if (t75 != 18446669679370167014LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x541 = -15;
	int8_t x543 = INT8_MAX;
	volatile int64_t x544 = -2574733LL;
	volatile int32_t t76 = -605280;

	t76 = (x541-(x542<<(x543==x544)));

	if (t76 != -726) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x545 = 19U;
	uint16_t x546 = UINT16_MAX;
	uint16_t x547 = UINT16_MAX;
	int32_t x548 = -1;
	volatile int32_t t77 = 1531084;

	t77 = (x545-(x546<<(x547==x548)));

	if (t77 != -65516) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x553 = UINT64_MAX;
	volatile uint32_t x554 = UINT32_MAX;
	uint32_t x555 = 25922599U;
	uint64_t x556 = UINT64_MAX;

	t78 = (x553-(x554<<(x555==x556)));

	if (t78 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x557 = 1;
	volatile uint8_t x558 = UINT8_MAX;
	volatile int32_t t79 = -144;

	t79 = (x557-(x558<<(x559==x560)));

	if (t79 != -254) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x565 = UINT32_MAX;
	static int32_t x566 = 64570;
	int32_t x567 = INT32_MIN;
	static int8_t x568 = INT8_MIN;
	static volatile uint32_t t80 = 148231U;

	t80 = (x565-(x566<<(x567==x568)));

	if (t80 != 4294902725U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x581 = -308;
	int64_t x582 = 1LL;
	int16_t x583 = INT16_MIN;
	int64_t x584 = 7685451325LL;
	int64_t t81 = 28975772419LL;

	t81 = (x581-(x582<<(x583==x584)));

	if (t81 != -309LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x590 = INT16_MAX;

	t82 = (x589-(x590<<(x591==x592)));

	if (t82 != 116070327U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x598 = 68040LLU;
	int8_t x600 = 0;
	volatile uint64_t t83 = 137921LLU;

	t83 = (x597-(x598<<(x599==x600)));

	if (t83 != 18446744073709483575LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x601 = 1;
	uint32_t x602 = 445692130U;
	uint8_t x603 = 3U;
	volatile uint32_t t84 = 22021759U;

	t84 = (x601-(x602<<(x603==x604)));

	if (t84 != 3849275167U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x617 = UINT32_MAX;
	volatile int64_t x618 = 203073840343176LL;
	static uint64_t x619 = 82368002LLU;
	static volatile int64_t t85 = 262370443LL;

	t85 = (x617-(x618<<(x619==x620)));

	if (t85 != -203069545375881LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x629 = UINT8_MAX;
	static uint16_t x630 = UINT16_MAX;
	int64_t x631 = -1063724706782LL;
	volatile uint64_t x632 = 488826473842356618LLU;

	t86 = (x629-(x630<<(x631==x632)));

	if (t86 != -65280) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x633 = -2;
	uint64_t x634 = 5018040245LLU;
	static uint32_t x636 = 559265674U;

	t87 = (x633-(x634<<(x635==x636)));

	if (t87 != 18446744068691511369LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x638 = 212368040596LLU;
	volatile uint16_t x640 = 5U;

	t88 = (x637-(x638<<(x639==x640)));

	if (t88 != 18446743861341511275LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x642 = UINT16_MAX;
	int32_t x644 = -1;
	uint32_t t89 = 1588U;

	t89 = (x641-(x642<<(x643==x644)));

	if (t89 != 4294902218U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x649 = UINT64_MAX;
	int32_t x650 = 0;
	static int8_t x651 = 16;
	volatile int16_t x652 = -1;
	uint64_t t90 = UINT64_MAX;

	t90 = (x649-(x650<<(x651==x652)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x653 = INT64_MAX;
	int64_t x654 = INT64_MAX;
	int64_t x656 = -2309357371LL;

	t91 = (x653-(x654<<(x655==x656)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x669 = -7547890383LL;
	static volatile int32_t x670 = INT32_MAX;
	int8_t x671 = INT8_MIN;
	uint64_t x672 = 327655LLU;

	t92 = (x669-(x670<<(x671==x672)));

	if (t92 != -9695374030LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x682 = INT16_MAX;
	int8_t x683 = INT8_MIN;
	int64_t x684 = INT64_MIN;

	t93 = (x681-(x682<<(x683==x684)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x686 = UINT8_MAX;
	int16_t x688 = INT16_MIN;
	volatile int32_t t94 = -2716;

	t94 = (x685-(x686<<(x687==x688)));

	if (t94 != 241947) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x689 = 14593;
	int64_t x691 = INT64_MIN;
	int32_t x692 = INT32_MIN;
	static uint32_t t95 = 1627309835U;

	t95 = (x689-(x690<<(x691==x692)));

	if (t95 != 14594U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x702 = 23;
	static uint64_t x704 = UINT64_MAX;
	int32_t t96 = 3218078;

	t96 = (x701-(x702<<(x703==x704)));

	if (t96 != 3277) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x709 = INT64_MAX;
	uint32_t x710 = UINT32_MAX;
	int16_t x712 = 0;
	static volatile int64_t t97 = 7182954LL;

	t97 = (x709-(x710<<(x711==x712)));

	if (t97 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x721 = INT16_MAX;
	int16_t x722 = 22;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t98 = -2593;

	t98 = (x721-(x722<<(x723==x724)));

	if (t98 != 32745) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x733 = 54848;
	int16_t x734 = 314;
	uint16_t x735 = 113U;
	uint32_t x736 = 541904784U;
	volatile int32_t t99 = -5239;

	t99 = (x733-(x734<<(x735==x736)));

	if (t99 != 54534) { NG(); } else { ; }
	
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

