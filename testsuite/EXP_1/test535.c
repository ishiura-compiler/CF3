#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
static int64_t x4 = INT64_MIN;
volatile int16_t x6 = -1;
int16_t x8 = INT16_MIN;
volatile int64_t x18 = -31651252591715847LL;
volatile int8_t x19 = 1;
uint32_t x35 = 11355U;
static volatile uint32_t x40 = UINT32_MAX;
volatile uint64_t x41 = 10616432641873LLU;
int32_t x43 = 1;
uint64_t x45 = 1671924836399371LLU;
static int32_t x46 = 101297816;
volatile uint64_t x55 = 3602LLU;
uint64_t t11 = 23LLU;
volatile int64_t x66 = -54LL;
int16_t x75 = 1;
int32_t x84 = -366533828;
volatile int32_t t16 = 14209;
int64_t x86 = INT64_MIN;
static int8_t x89 = 58;
volatile uint64_t t21 = 590489LLU;
int8_t x105 = -1;
static int32_t x111 = -23470;
int16_t x117 = INT16_MAX;
int64_t x123 = -1LL;
volatile uint16_t x131 = UINT16_MAX;
int8_t x135 = INT8_MIN;
int16_t x147 = INT16_MAX;
volatile int32_t t31 = 18440841;
int64_t x158 = INT64_MAX;
int16_t x159 = INT16_MAX;
int16_t x161 = INT16_MIN;
int32_t x167 = 156088219;
static volatile uint32_t x190 = UINT32_MAX;
volatile uint32_t t39 = 43029U;
int32_t x193 = -101647;
int16_t x195 = 356;
int16_t x197 = 16;
int32_t x199 = INT32_MAX;
uint8_t x204 = 4U;
volatile int32_t t42 = -68;
volatile uint16_t x226 = 1097U;
int16_t x227 = -93;
uint64_t x230 = 1LLU;
uint32_t x233 = UINT32_MAX;
int32_t x238 = INT32_MIN;
volatile int8_t x240 = INT8_MAX;
int16_t x244 = -1;
int32_t x254 = -209;
volatile uint64_t x267 = UINT64_MAX;
uint64_t x268 = UINT64_MAX;
int32_t x275 = INT32_MIN;
static uint32_t t58 = 111265386U;
uint64_t x278 = UINT64_MAX;
uint64_t t59 = 28858LLU;
int16_t x292 = -1;
int32_t x299 = INT32_MIN;
uint64_t t62 = 2103523108LLU;
int32_t x304 = 1696;
static int32_t x305 = -384;
volatile int8_t x306 = 61;
int16_t x318 = INT16_MIN;
volatile int8_t x319 = INT8_MIN;
volatile uint16_t x321 = 144U;
uint32_t x323 = 18888U;
static int8_t x332 = INT8_MIN;
volatile int16_t x333 = -1;
volatile uint64_t t70 = 962591186LLU;
static int8_t x339 = INT8_MIN;
int32_t t71 = 13;
volatile int16_t x344 = INT16_MAX;
volatile int16_t x347 = -25;
int32_t x353 = INT32_MIN;
int32_t x354 = INT32_MIN;
int64_t x355 = 187335LL;
uint8_t x357 = 66U;
static int16_t x358 = INT16_MAX;
volatile uint32_t t75 = 14U;
static int16_t x362 = INT16_MIN;
static volatile uint32_t x363 = 1786102U;
volatile uint32_t t76 = 6U;
int16_t x369 = INT16_MIN;
uint8_t x373 = UINT8_MAX;
static uint16_t x374 = 14815U;
int8_t x377 = 1;
volatile int64_t t80 = -72862658LL;
int16_t x390 = -400;
volatile int64_t x398 = -1LL;
int64_t x402 = 121046969943LL;
int32_t x404 = 61;
int64_t x405 = -1LL;
volatile int64_t t87 = 4274225554892820850LL;
int32_t x410 = -1;
int32_t x412 = -8;
uint16_t x414 = UINT16_MAX;
uint32_t x415 = 30315870U;
static uint16_t x417 = 23593U;
int8_t x418 = INT8_MIN;
int32_t x420 = -1427439;
volatile int32_t t90 = -10022416;
uint32_t x422 = 3617449U;
static int8_t x423 = -1;
volatile int32_t x424 = INT32_MAX;
volatile int32_t x427 = 267;
uint64_t t92 = 10783LLU;
int8_t x437 = -1;
int8_t x456 = 0;
static volatile int64_t t99 = -1953762006286526LL;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	uint64_t x3 = 80281LLU;
	uint64_t t0 = 326923998693583LLU;

	t0 = (((x1/x2)*x3)-x4);

	if (t0 != 9223372036896200804LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int64_t x7 = 675072246195LL;
	static int64_t t1 = 7147LL;

	t1 = (((x5/x6)*x7)-x8);

	if (t1 != 675072278963LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MIN;
	int8_t x10 = -53;
	uint16_t x11 = 5U;
	int8_t x12 = -1;
	static volatile int32_t t2 = -1;

	t2 = (((x9/x10)*x11)-x12);

	if (t2 != 202592796) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = -1LL;
	uint16_t x20 = 1152U;
	static volatile int64_t t3 = -1110309677769LL;

	t3 = (((x17/x18)*x19)-x20);

	if (t3 != -1152LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -15370;
	int64_t x22 = 5602358LL;
	int32_t x23 = INT32_MAX;
	int16_t x24 = -10660;
	volatile int64_t t4 = 5LL;

	t4 = (((x21/x22)*x23)-x24);

	if (t4 != 10660LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = INT32_MIN;
	static volatile int16_t x26 = -3;
	int32_t x27 = -1;
	uint16_t x28 = 6U;
	int32_t t5 = -173;

	t5 = (((x25/x26)*x27)-x28);

	if (t5 != -715827888) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = INT64_MAX;
	static int64_t x31 = -1LL;
	volatile int16_t x32 = -1;
	int64_t t6 = -422LL;

	t6 = (((x29/x30)*x31)-x32);

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	static uint64_t x34 = 192458890767LLU;
	int32_t x36 = -1444;
	volatile uint64_t t7 = 2LLU;

	t7 = (((x33/x34)*x35)-x36);

	if (t7 != 1444LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = -1;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = 3988;
	uint32_t t8 = 118298U;

	t8 = (((x37/x38)*x39)-x40);

	if (t8 != 3989U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x42 = INT32_MIN;
	int16_t x44 = -3557;
	uint64_t t9 = 57193660451840849LLU;

	t9 = (((x41/x42)*x43)-x44);

	if (t9 != 3557LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x47 = 32;
	volatile uint32_t x48 = 0U;
	uint64_t t10 = 52439LLU;

	t10 = (((x45/x46)*x47)-x48);

	if (t10 != 528161376LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = UINT8_MAX;
	static volatile int16_t x54 = INT16_MIN;
	int64_t x56 = INT64_MAX;

	t11 = (((x53/x54)*x55)-x56);

	if (t11 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = -6526911205844276LL;
	static uint16_t x67 = UINT16_MAX;
	static volatile int32_t x68 = -1;
	volatile int64_t t12 = -16334199454830LL;

	t12 = (((x65/x66)*x67)-x68);

	if (t12 != 7921131960648216856LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x69 = UINT16_MAX;
	static int8_t x70 = INT8_MAX;
	static uint32_t x71 = 31U;
	static volatile int32_t x72 = INT32_MIN;
	volatile uint32_t t13 = 2955926U;

	t13 = (((x69/x70)*x71)-x72);

	if (t13 != 2147499644U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int8_t x74 = INT8_MIN;
	uint16_t x76 = 8U;
	uint64_t t14 = 873140070LLU;

	t14 = (((x73/x74)*x75)-x76);

	if (t14 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 10975420LLU;
	uint32_t x78 = 4220U;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -1LL;
	volatile uint64_t t15 = 540349532LLU;

	t15 = (((x77/x78)*x79)-x80);

	if (t15 != 18446744073709218817LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = 732U;
	volatile int32_t x82 = INT32_MIN;
	int16_t x83 = 11;

	t16 = (((x81/x82)*x83)-x84);

	if (t16 != 366533828) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 134915834277931LLU;
	int64_t x87 = -182LL;
	static int64_t x88 = -1LL;
	volatile uint64_t t17 = 0LLU;

	t17 = (((x85/x86)*x87)-x88);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x90 = 309034289846676454LLU;
	int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MIN;
	uint64_t t18 = 6774118LLU;

	t18 = (((x89/x90)*x91)-x92);

	if (t18 != 128LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = -1;
	uint32_t x94 = 31570181U;
	uint64_t x95 = 53LLU;
	static int16_t x96 = -25;
	volatile uint64_t t19 = 98LLU;

	t19 = (((x93/x94)*x95)-x96);

	if (t19 != 7233LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -1;
	int32_t x98 = -296;
	static int64_t x99 = -1LL;
	int32_t x100 = INT32_MAX;
	int64_t t20 = 3368811LL;

	t20 = (((x97/x98)*x99)-x100);

	if (t20 != -2147483647LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	static int8_t x102 = INT8_MAX;
	int32_t x103 = -47;
	volatile uint64_t x104 = UINT64_MAX;

	t21 = (((x101/x102)*x103)-x104);

	if (t21 != 794738041LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = -3;
	volatile int16_t x108 = INT16_MIN;
	volatile uint64_t t22 = 2032LLU;

	t22 = (((x105/x106)*x107)-x108);

	if (t22 != 32765LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = UINT32_MAX;
	int8_t x110 = -2;
	int64_t x112 = 13LL;
	volatile int64_t t23 = -6245123LL;

	t23 = (((x109/x110)*x111)-x112);

	if (t23 != 4294943813LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x118 = -107;
	static volatile int16_t x119 = INT16_MIN;
	int8_t x120 = -2;
	int32_t t24 = 0;

	t24 = (((x117/x118)*x119)-x120);

	if (t24 != 10027010) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x121 = 1;
	int8_t x122 = INT8_MIN;
	uint64_t x124 = 2223619232994445LLU;
	volatile uint64_t t25 = 36330178106LLU;

	t25 = (((x121/x122)*x123)-x124);

	if (t25 != 18444520454476557171LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x129 = -1LL;
	volatile int8_t x130 = INT8_MIN;
	uint32_t x132 = 1020667938U;
	int64_t t26 = -107LL;

	t26 = (((x129/x130)*x131)-x132);

	if (t26 != -1020667938LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	static volatile int64_t x134 = INT64_MIN;
	int8_t x136 = INT8_MIN;
	int64_t t27 = -43829398090LL;

	t27 = (((x133/x134)*x135)-x136);

	if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = INT16_MIN;
	static int64_t x138 = INT64_MIN;
	uint8_t x139 = 7U;
	uint16_t x140 = 10063U;
	int64_t t28 = -14396884LL;

	t28 = (((x137/x138)*x139)-x140);

	if (t28 != -10063LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x141 = 394526526372499266LLU;
	int64_t x142 = -12LL;
	volatile int64_t x143 = 125990148LL;
	int32_t x144 = INT32_MIN;
	volatile uint64_t t29 = 13684111LLU;

	t29 = (((x141/x142)*x143)-x144);

	if (t29 != 2147483648LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x145 = 6U;
	uint64_t x146 = 111LLU;
	int32_t x148 = -2705329;
	uint64_t t30 = 520223LLU;

	t30 = (((x145/x146)*x147)-x148);

	if (t30 != 2705329LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = 1U;
	static volatile int8_t x150 = -1;
	volatile int8_t x151 = -1;
	static volatile int16_t x152 = -1;

	t31 = (((x149/x150)*x151)-x152);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x157 = 28665052346633LL;
	int8_t x160 = INT8_MIN;
	volatile int64_t t32 = 1LL;

	t32 = (((x157/x158)*x159)-x160);

	if (t32 != 128LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x162 = INT8_MIN;
	int8_t x163 = 18;
	int64_t x164 = INT64_MAX;
	volatile int64_t t33 = 263453159323401LL;

	t33 = (((x161/x162)*x163)-x164);

	if (t33 != -9223372036854771199LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x165 = -14255683;
	uint64_t x166 = UINT64_MAX;
	int64_t x168 = 10066631995LL;
	static uint64_t t34 = 4588200163898374LLU;

	t34 = (((x165/x166)*x167)-x168);

	if (t34 != 18446744063642919621LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x169 = 128U;
	volatile int16_t x170 = INT16_MIN;
	int32_t x171 = -58;
	static volatile int8_t x172 = INT8_MIN;
	int32_t t35 = -126;

	t35 = (((x169/x170)*x171)-x172);

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x177 = 3059U;
	int32_t x178 = -1;
	volatile int32_t x179 = -1;
	uint32_t x180 = 1564923U;
	volatile uint32_t t36 = 0U;

	t36 = (((x177/x178)*x179)-x180);

	if (t36 != 4293405432U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x181 = INT64_MIN;
	volatile int32_t x182 = 25376;
	int16_t x183 = 36;
	static int8_t x184 = INT8_MIN;
	volatile int64_t t37 = 90396LL;

	t37 = (((x181/x182)*x183)-x184);

	if (t37 != -13084859446988020LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x185 = 62822LLU;
	int16_t x186 = INT16_MAX;
	int8_t x187 = INT8_MAX;
	static int8_t x188 = INT8_MIN;
	static uint64_t t38 = 6261451284LLU;

	t38 = (((x185/x186)*x187)-x188);

	if (t38 != 255LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = 99U;

	t39 = (((x189/x190)*x191)-x192);

	if (t39 != 4294967197U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x194 = 37458558231106928LL;
	int64_t x196 = INT64_MAX;
	int64_t t40 = -41603147073LL;

	t40 = (((x193/x194)*x195)-x196);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x198 = INT32_MAX;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t41 = 6457539727451408496LLU;

	t41 = (((x197/x198)*x199)-x200);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = -22151;
	static int16_t x202 = -13;
	static int8_t x203 = INT8_MIN;

	t42 = (((x201/x202)*x203)-x204);

	if (t42 != -217988) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = -1LL;
	static int16_t x206 = -1;
	volatile uint32_t x207 = 62U;
	volatile int32_t x208 = INT32_MAX;
	int64_t t43 = -12LL;

	t43 = (((x205/x206)*x207)-x208);

	if (t43 != -2147483585LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x209 = UINT64_MAX;
	static uint8_t x210 = UINT8_MAX;
	static uint64_t x211 = 499752392524180LLU;
	volatile int8_t x212 = INT8_MIN;
	uint64_t t44 = 78009960257889742LLU;

	t44 = (((x209/x210)*x211)-x212);

	if (t44 != 7234015323994363412LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x213 = 0;
	uint32_t x214 = UINT32_MAX;
	int64_t x215 = INT64_MAX;
	static int16_t x216 = 0;
	int64_t t45 = -14126LL;

	t45 = (((x213/x214)*x215)-x216);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	int32_t x223 = -1;
	static uint32_t x224 = 13U;
	uint32_t t46 = 14485247U;

	t46 = (((x221/x222)*x223)-x224);

	if (t46 != 4294967283U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = INT32_MAX;
	int64_t x228 = -28451232772532177LL;
	static int64_t t47 = -100561262759414965LL;

	t47 = (((x225/x226)*x227)-x228);

	if (t47 != 28451232590475749LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = -2503;
	static uint16_t x231 = UINT16_MAX;
	static int16_t x232 = -299;
	uint64_t t48 = 1746832882LLU;

	t48 = (((x229/x230)*x231)-x232);

	if (t48 != 18446744073545517810LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x234 = INT8_MIN;
	static volatile int64_t x235 = -1LL;
	int8_t x236 = INT8_MAX;
	volatile int64_t t49 = 7LL;

	t49 = (((x233/x234)*x235)-x236);

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x237 = UINT8_MAX;
	uint64_t x239 = 54251385610669714LLU;
	volatile uint64_t t50 = 2LLU;

	t50 = (((x237/x238)*x239)-x240);

	if (t50 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x241 = 1224464026LLU;
	int8_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	uint64_t t51 = 315400113359495LLU;

	t51 = (((x241/x242)*x243)-x244);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x249 = INT32_MIN;
	static volatile uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MIN;
	volatile int32_t x252 = INT32_MAX;
	volatile uint32_t t52 = 14U;

	t52 = (((x249/x250)*x251)-x252);

	if (t52 != 2147483649U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x253 = 253LLU;
	uint64_t x255 = 108962007895LLU;
	int16_t x256 = INT16_MAX;
	static volatile uint64_t t53 = 239921740614089459LLU;

	t53 = (((x253/x254)*x255)-x256);

	if (t53 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x257 = 66942475LLU;
	int64_t x258 = -1LL;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = 18630291LLU;
	uint64_t t54 = 1018242LLU;

	t54 = (((x257/x258)*x259)-x260);

	if (t54 != 18446744073690921325LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = 495174;
	uint16_t x262 = 73U;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = INT16_MIN;
	uint64_t t55 = 34028360451LLU;

	t55 = (((x261/x262)*x263)-x264);

	if (t55 != 25985LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x265 = INT64_MAX;
	static uint64_t x266 = UINT64_MAX;
	static uint64_t t56 = 150865524868LLU;

	t56 = (((x265/x266)*x267)-x268);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x270 = -1LL;
	volatile int8_t x271 = INT8_MIN;
	uint64_t x272 = 352275155LLU;
	volatile uint64_t t57 = 5LLU;

	t57 = (((x269/x270)*x271)-x272);

	if (t57 != 18446744073365664941LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x273 = 15U;
	static int16_t x274 = INT16_MIN;
	int16_t x276 = INT16_MIN;

	t58 = (((x273/x274)*x275)-x276);

	if (t58 != 32768U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x277 = 0U;
	int16_t x279 = INT16_MAX;
	uint64_t x280 = 32090LLU;

	t59 = (((x277/x278)*x279)-x280);

	if (t59 != 18446744073709519526LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x285 = 14055234412LL;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	int8_t x288 = -2;
	int64_t t60 = -2143012631490004LL;

	t60 = (((x285/x286)*x287)-x288);

	if (t60 != 921122308620290LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x289 = UINT16_MAX;
	static int32_t x290 = INT32_MAX;
	int64_t x291 = INT64_MIN;
	static int64_t t61 = 170987777985LL;

	t61 = (((x289/x290)*x291)-x292);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	static int8_t x300 = INT8_MAX;

	t62 = (((x297/x298)*x299)-x300);

	if (t62 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = 0;
	static uint32_t x302 = 74161171U;
	int32_t x303 = 11;
	volatile uint32_t t63 = 76U;

	t63 = (((x301/x302)*x303)-x304);

	if (t63 != 4294965600U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x307 = UINT8_MAX;
	int64_t x308 = -460080490706520LL;
	int64_t t64 = 6290392255LL;

	t64 = (((x305/x306)*x307)-x308);

	if (t64 != 460080490704990LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = -1;
	static uint16_t x314 = UINT16_MAX;
	volatile uint16_t x315 = 9U;
	static uint16_t x316 = 2U;
	static volatile int32_t t65 = -207237;

	t65 = (((x313/x314)*x315)-x316);

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x317 = 12759U;
	volatile int8_t x320 = INT8_MAX;
	static volatile int32_t t66 = 384356572;

	t66 = (((x317/x318)*x319)-x320);

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x322 = INT8_MAX;
	int8_t x324 = INT8_MAX;
	volatile uint32_t t67 = 3U;

	t67 = (((x321/x322)*x323)-x324);

	if (t67 != 18761U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x325 = INT32_MIN;
	static int64_t x326 = INT64_MIN;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MAX;
	int64_t t68 = -111605806027LL;

	t68 = (((x325/x326)*x327)-x328);

	if (t68 != -127LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x329 = -1;
	int64_t x330 = -1LL;
	int64_t x331 = INT64_MIN;
	int64_t t69 = 2531850157LL;

	t69 = (((x329/x330)*x331)-x332);

	if (t69 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x334 = INT64_MIN;
	static uint64_t x335 = UINT64_MAX;
	uint16_t x336 = UINT16_MAX;

	t70 = (((x333/x334)*x335)-x336);

	if (t70 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = INT8_MAX;
	volatile int16_t x338 = -1;
	int8_t x340 = -1;

	t71 = (((x337/x338)*x339)-x340);

	if (t71 != 16257) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x341 = UINT64_MAX;
	volatile int8_t x342 = 32;
	uint32_t x343 = 30544657U;
	volatile uint64_t t72 = 3469036093686834279LLU;

	t72 = (((x341/x342)*x343)-x344);

	if (t72 != 9799832789127621872LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x345 = 97524U;
	volatile uint8_t x346 = 15U;
	volatile int64_t x348 = -8548945720137132LL;
	volatile int64_t t73 = 2013LL;

	t73 = (((x345/x346)*x347)-x348);

	if (t73 != 8548950014941903LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x356 = INT32_MIN;
	volatile int64_t t74 = 18373338018218LL;

	t74 = (((x353/x354)*x355)-x356);

	if (t74 != 2147670983LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x359 = 7U;
	int32_t x360 = -31203405;

	t75 = (((x357/x358)*x359)-x360);

	if (t75 != 31203405U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = INT32_MIN;
	int8_t x364 = INT8_MAX;

	t76 = (((x361/x362)*x363)-x364);

	if (t76 != 1089863553U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x365 = UINT8_MAX;
	static int64_t x366 = INT64_MIN;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = INT16_MIN;
	uint64_t t77 = 50LLU;

	t77 = (((x365/x366)*x367)-x368);

	if (t77 != 32768LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x370 = INT16_MAX;
	volatile int32_t x371 = INT32_MAX;
	uint16_t x372 = 0U;
	int32_t t78 = -29953;

	t78 = (((x369/x370)*x371)-x372);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x375 = INT64_MAX;
	uint8_t x376 = 96U;
	int64_t t79 = -36616534692049LL;

	t79 = (((x373/x374)*x375)-x376);

	if (t79 != -96LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x378 = -1LL;
	int64_t x379 = 121989136569422LL;
	static volatile int16_t x380 = 0;

	t80 = (((x377/x378)*x379)-x380);

	if (t80 != -121989136569422LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x381 = -1LL;
	static int64_t x382 = -5237519894191655LL;
	uint16_t x383 = 19U;
	uint8_t x384 = 1U;
	static int64_t t81 = 408LL;

	t81 = (((x381/x382)*x383)-x384);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x385 = -1LL;
	static volatile int8_t x386 = 37;
	int32_t x387 = INT32_MAX;
	volatile int64_t x388 = -1LL;
	int64_t t82 = 2656281393LL;

	t82 = (((x385/x386)*x387)-x388);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x389 = -5;
	volatile int8_t x391 = 1;
	int16_t x392 = INT16_MIN;
	int32_t t83 = -16292;

	t83 = (((x389/x390)*x391)-x392);

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x393 = INT64_MIN;
	uint64_t x394 = UINT64_MAX;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = -119847198405LL;
	volatile uint64_t t84 = 456519768363LLU;

	t84 = (((x393/x394)*x395)-x396);

	if (t84 != 119847198405LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x397 = 1071U;
	volatile uint8_t x399 = UINT8_MAX;
	static int64_t x400 = 5LL;
	static int64_t t85 = 5207LL;

	t85 = (((x397/x398)*x399)-x400);

	if (t85 != -273110LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = UINT8_MAX;
	int32_t x403 = INT32_MIN;
	volatile int64_t t86 = 3LL;

	t86 = (((x401/x402)*x403)-x404);

	if (t86 != -61LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x406 = -35;
	int16_t x407 = 1;
	int64_t x408 = 35770967LL;

	t87 = (((x405/x406)*x407)-x408);

	if (t87 != -35770967LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x409 = 14U;
	int16_t x411 = INT16_MAX;
	volatile int32_t t88 = -521033671;

	t88 = (((x409/x410)*x411)-x412);

	if (t88 != -458730) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x413 = INT32_MIN;
	int32_t x416 = -1;
	volatile uint32_t t89 = 104U;

	t89 = (((x413/x414)*x415)-x416);

	if (t89 != 3041984513U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x419 = 222;

	t90 = (((x417/x418)*x419)-x420);

	if (t90 != 1386591) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x421 = 0;
	uint32_t t91 = 21016900U;

	t91 = (((x421/x422)*x423)-x424);

	if (t91 != 2147483649U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x425 = 91665LLU;
	int64_t x426 = INT64_MIN;
	static uint8_t x428 = 107U;

	t92 = (((x425/x426)*x427)-x428);

	if (t92 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x429 = 15172U;
	int64_t x430 = INT64_MIN;
	int64_t x431 = INT64_MIN;
	int64_t x432 = -407593LL;
	int64_t t93 = -2621478786907765LL;

	t93 = (((x429/x430)*x431)-x432);

	if (t93 != 407593LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x438 = 14119LLU;
	int32_t x439 = 46713040;
	int64_t x440 = INT64_MAX;
	uint64_t t94 = 65379516875678LLU;

	t94 = (((x437/x438)*x439)-x440);

	if (t94 != 429191545264091585LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = -44;
	uint32_t x442 = 67U;
	volatile int16_t x443 = 253;
	int8_t x444 = -60;
	volatile uint32_t t95 = 245672U;

	t95 = (((x441/x442)*x443)-x444);

	if (t95 != 3333407136U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x445 = 1U;
	static uint16_t x446 = 2U;
	static uint16_t x447 = 29U;
	int32_t x448 = -1;
	int32_t t96 = 124485;

	t96 = (((x445/x446)*x447)-x448);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = INT64_MAX;
	static volatile uint32_t x450 = UINT32_MAX;
	int16_t x451 = 17;
	static int32_t x452 = -98999;
	volatile int64_t t97 = -12276226406884LL;

	t97 = (((x449/x450)*x451)-x452);

	if (t97 != 36507321015LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = INT8_MIN;
	volatile int32_t x454 = INT32_MAX;
	int16_t x455 = INT16_MAX;
	volatile int32_t t98 = 0;

	t98 = (((x453/x454)*x455)-x456);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x457 = UINT32_MAX;
	static int16_t x458 = -1;
	int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MIN;

	t99 = (((x457/x458)*x459)-x460);

	if (t99 != -9223372036854743040LL) { NG(); } else { ; }
	
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

