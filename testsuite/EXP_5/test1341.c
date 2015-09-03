#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x5 = -15LL;
static int64_t t1 = 70424604597125908LL;
int32_t t2 = 1;
uint32_t x16 = 1206383U;
static int64_t t3 = -2LL;
uint16_t x19 = 8515U;
volatile int32_t t4 = 277368;
volatile uint32_t x24 = 3821954U;
int8_t x26 = INT8_MAX;
static int16_t x29 = 1;
int64_t x30 = INT64_MIN;
uint64_t x32 = 1099429770540365810LLU;
static int8_t x35 = INT8_MIN;
uint32_t t8 = 1567633163U;
volatile int32_t x38 = INT32_MIN;
static int8_t x47 = -1;
static int16_t x53 = -895;
uint8_t x55 = 3U;
uint8_t x57 = 6U;
static int16_t x59 = 6020;
int64_t x61 = -4119666263LL;
int16_t x65 = 5;
static int8_t x71 = -10;
uint64_t x73 = 1634221754976433966LLU;
int8_t x76 = -1;
int64_t x79 = 2497799804307LL;
int16_t x82 = INT16_MAX;
int64_t t20 = INT64_MIN;
static int32_t x95 = INT32_MAX;
int64_t t22 = 21330763391LL;
int64_t t26 = -1LL;
volatile int8_t x116 = -7;
static uint64_t x121 = UINT64_MAX;
int32_t x139 = 11;
int64_t x145 = -2511532049373997347LL;
int32_t x146 = INT32_MIN;
volatile int32_t x149 = 21;
uint64_t x150 = 275980LLU;
volatile int32_t x158 = INT32_MAX;
int32_t x167 = INT32_MIN;
volatile int32_t x169 = -478319;
volatile int8_t x170 = INT8_MAX;
int8_t x180 = 47;
static int32_t x188 = INT32_MAX;
uint64_t t42 = 464493LLU;
int64_t x190 = INT64_MAX;
volatile uint32_t t43 = 2590U;
int64_t x200 = -1LL;
int16_t x208 = INT16_MAX;
uint8_t x210 = 0U;
int16_t x211 = INT16_MIN;
volatile int16_t x223 = -1;
int32_t x232 = -1;
static int64_t x238 = -23598005170844705LL;
uint8_t x240 = UINT8_MAX;
int64_t x250 = INT64_MIN;
int8_t x251 = INT8_MAX;
int8_t x266 = 31;
int32_t x269 = 684;
int8_t x277 = -2;
static volatile int32_t t61 = -137;
volatile int32_t t63 = -59022;
int16_t x290 = -6061;
static int16_t x300 = -54;
static volatile uint64_t t67 = 16339296071362LLU;
uint64_t x311 = 109817089LLU;
int64_t x314 = -1LL;
uint8_t x321 = 15U;
volatile int32_t x333 = INT32_MAX;
static uint8_t x337 = 4U;
int32_t x349 = INT32_MAX;
static volatile int64_t x351 = -1LL;
volatile int32_t t77 = -622557;
uint16_t x363 = 155U;
uint64_t x371 = UINT64_MAX;
int16_t x376 = 527;
uint32_t x378 = UINT32_MAX;
static int16_t x386 = INT16_MIN;
uint8_t x396 = 7U;
volatile int32_t x406 = INT32_MIN;
int16_t x407 = INT16_MIN;
uint8_t x411 = 21U;
int16_t x416 = INT16_MIN;
int64_t x418 = INT64_MAX;
uint8_t x427 = 2U;
volatile int64_t t94 = 0LL;
int16_t x429 = -1;
volatile uint64_t x431 = 4LLU;
int16_t x434 = -622;
volatile int8_t x436 = INT8_MAX;
volatile int32_t t98 = 1;
volatile int8_t x449 = INT8_MAX;


void f0(void) {
	int16_t x1 = -1;
	int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MIN;
	uint8_t x4 = 33U;
	volatile int32_t t0 = 3519788;

	t0 = (x1-((x2==x3)^x4));

	if (t0 != -34) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = -215;
	int8_t x7 = -1;
	uint16_t x8 = 13015U;

	t1 = (x5-((x6==x7)^x8));

	if (t1 != -13030LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 5429U;
	static int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	static uint16_t x12 = 142U;

	t2 = (x9-((x10==x11)^x12));

	if (t2 != 5287) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	volatile int8_t x14 = -1;
	static int64_t x15 = INT64_MAX;

	t3 = (x13-((x14==x15)^x16));

	if (t3 != 9223372036853569424LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -2;
	int16_t x18 = INT16_MIN;
	uint8_t x20 = 55U;

	t4 = (x17-((x18==x19)^x20));

	if (t4 != -57) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -13;
	int8_t x22 = INT8_MAX;
	static uint8_t x23 = 1U;
	uint32_t t5 = 203U;

	t5 = (x21-((x22==x23)^x24));

	if (t5 != 4291145329U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 12797;
	int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 68310303;

	t6 = (x25-((x26==x27)^x28));

	if (t6 != -19970) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = 0;
	static volatile uint64_t t7 = 8060132824167LLU;

	t7 = (x29-((x30==x31)^x32));

	if (t7 != 17347314303169185807LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 11U;
	int16_t x34 = INT16_MIN;
	static volatile uint32_t x36 = 9156525U;

	t8 = (x33-((x34==x35)^x36));

	if (t8 != 4285810782U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -3;
	volatile uint64_t x39 = 810LLU;
	int64_t x40 = 268173129551LL;
	volatile int64_t t9 = 11985891849562788LL;

	t9 = (x37-((x38==x39)^x40));

	if (t9 != -268173129554LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static uint32_t x42 = 125598304U;
	volatile int16_t x43 = 0;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -119LL;

	t10 = (x41-((x42==x43)^x44));

	if (t10 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	int16_t x48 = -1;
	volatile int32_t t11 = -28;

	t11 = (x45-((x46==x47)^x48));

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -1;
	int32_t x56 = -4383;
	int32_t t12 = -29393754;

	t12 = (x53-((x54==x55)^x56));

	if (t12 != 3488) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x58 = 20473982LLU;
	static int32_t x60 = -1;
	int32_t t13 = 848407;

	t13 = (x57-((x58==x59)^x60));

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x62 = 112LLU;
	static int32_t x63 = -1;
	int8_t x64 = -1;
	static volatile int64_t t14 = -56LL;

	t14 = (x61-((x62==x63)^x64));

	if (t14 != -4119666262LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x66 = INT64_MAX;
	int16_t x67 = -6;
	int16_t x68 = INT16_MAX;
	volatile int32_t t15 = 8;

	t15 = (x65-((x66==x67)^x68));

	if (t15 != -32762) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 558249016U;
	static int64_t x70 = 678LL;
	int16_t x72 = INT16_MIN;
	uint32_t t16 = 6894U;

	t16 = (x69-((x70==x71)^x72));

	if (t16 != 558281784U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x74 = INT64_MAX;
	int32_t x75 = INT32_MAX;
	volatile uint64_t t17 = 97938214LLU;

	t17 = (x73-((x74==x75)^x76));

	if (t17 != 1634221754976433967LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x77 = 70U;
	int8_t x78 = -1;
	int32_t x80 = INT32_MAX;
	volatile int32_t t18 = 252;

	t18 = (x77-((x78==x79)^x80));

	if (t18 != -2147483577) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = -1LL;
	uint32_t x83 = 245038U;
	uint32_t x84 = 1604569U;
	static int64_t t19 = 427367LL;

	t19 = (x81-((x82==x83)^x84));

	if (t19 != -1604570LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	volatile uint16_t x86 = UINT16_MAX;
	int8_t x87 = -1;
	int8_t x88 = 0;

	t20 = (x85-((x86==x87)^x88));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -4332216;
	static int8_t x90 = -15;
	uint16_t x91 = UINT16_MAX;
	volatile int8_t x92 = -1;
	volatile int32_t t21 = 864879962;

	t21 = (x89-((x90==x91)^x92));

	if (t21 != -4332215) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = 14057913LL;
	int64_t x94 = INT64_MIN;
	static int8_t x96 = INT8_MIN;

	t22 = (x93-((x94==x95)^x96));

	if (t22 != 14058041LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = 10181;
	uint32_t x98 = 2U;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -1LL;
	int64_t t23 = -2069100LL;

	t23 = (x97-((x98==x99)^x100));

	if (t23 != 10182LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 2;
	int8_t x102 = -1;
	static uint32_t x103 = 24911U;
	uint8_t x104 = 4U;
	int32_t t24 = -689007;

	t24 = (x101-((x102==x103)^x104));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MAX;
	int64_t x107 = INT64_MAX;
	static int32_t x108 = INT32_MIN;
	static uint64_t t25 = 508034226LLU;

	t25 = (x105-((x106==x107)^x108));

	if (t25 != 2147483647LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 32U;
	uint8_t x110 = UINT8_MAX;
	int16_t x111 = -2;
	int64_t x112 = -1LL;

	t26 = (x109-((x110==x111)^x112));

	if (t26 != 33LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	static int64_t x114 = -1LL;
	int16_t x115 = -1;
	static int64_t t27 = 9098048053680957LL;

	t27 = (x113-((x114==x115)^x116));

	if (t27 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 7U;
	volatile uint32_t x118 = UINT32_MAX;
	static int8_t x119 = 0;
	int16_t x120 = INT16_MIN;
	int32_t t28 = 30423;

	t28 = (x117-((x118==x119)^x120));

	if (t28 != 32775) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x122 = -1;
	int16_t x123 = INT16_MIN;
	int32_t x124 = 68266;
	volatile uint64_t t29 = 105964276641290608LLU;

	t29 = (x121-((x122==x123)^x124));

	if (t29 != 18446744073709483349LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = 2;
	int16_t x126 = -1;
	int32_t x127 = -27848;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t30 = -15816;

	t30 = (x125-((x126==x127)^x128));

	if (t30 != 130) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	volatile uint8_t x134 = 5U;
	static int64_t x135 = INT64_MAX;
	static int8_t x136 = INT8_MAX;
	int32_t t31 = -6898;

	t31 = (x133-((x134==x135)^x136));

	if (t31 != -32895) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x137 = -1LL;
	volatile uint64_t x138 = 0LLU;
	static uint16_t x140 = 64U;
	int64_t t32 = -68347439LL;

	t32 = (x137-((x138==x139)^x140));

	if (t32 != -65LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	int8_t x142 = -1;
	uint8_t x143 = 3U;
	int64_t x144 = INT64_MAX;
	volatile int64_t t33 = INT64_MIN;

	t33 = (x141-((x142==x143)^x144));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x147 = -8112848;
	static int32_t x148 = INT32_MIN;
	static int64_t t34 = -78982576238LL;

	t34 = (x145-((x146==x147)^x148));

	if (t34 != -2511532047226513699LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x151 = 24LLU;
	int8_t x152 = INT8_MIN;
	static int32_t t35 = 50059225;

	t35 = (x149-((x150==x151)^x152));

	if (t35 != 149) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = -2;
	volatile uint8_t x154 = 1U;
	static int32_t x155 = -1;
	volatile int64_t x156 = INT64_MIN;
	static volatile int64_t t36 = 3727160866021331LL;

	t36 = (x153-((x154==x155)^x156));

	if (t36 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MIN;
	volatile int32_t x159 = -12451894;
	volatile int16_t x160 = -1;
	static int32_t t37 = -163100;

	t37 = (x157-((x158==x159)^x160));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x161 = 369719544U;
	int16_t x162 = -166;
	int64_t x163 = -1LL;
	static uint64_t x164 = 100341275LLU;
	volatile uint64_t t38 = 498145137081LLU;

	t38 = (x161-((x162==x163)^x164));

	if (t38 != 269378269LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 3590581761546745LLU;
	uint32_t x166 = 666U;
	int16_t x168 = -1;
	uint64_t t39 = 254086377LLU;

	t39 = (x165-((x166==x167)^x168));

	if (t39 != 3590581761546746LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x171 = 984242U;
	int16_t x172 = -1;
	volatile int32_t t40 = -1250;

	t40 = (x169-((x170==x171)^x172));

	if (t40 != -478318) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x177 = 7U;
	uint32_t x178 = 3U;
	int16_t x179 = -6;
	volatile int32_t t41 = -8838271;

	t41 = (x177-((x178==x179)^x180));

	if (t41 != -40) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = UINT64_MAX;
	volatile int8_t x186 = 0;
	int32_t x187 = INT32_MIN;

	t42 = (x185-((x186==x187)^x188));

	if (t42 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = -1;
	int16_t x191 = -1;
	volatile uint32_t x192 = UINT32_MAX;

	t43 = (x189-((x190==x191)^x192));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x197 = UINT8_MAX;
	volatile int64_t x198 = INT64_MAX;
	uint64_t x199 = 2009867132123LLU;
	static int64_t t44 = 7690LL;

	t44 = (x197-((x198==x199)^x200));

	if (t44 != 256LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x201 = 247U;
	int8_t x202 = 1;
	static int32_t x203 = INT32_MAX;
	static int64_t x204 = 49429523LL;
	static int64_t t45 = 7902898912000LL;

	t45 = (x201-((x202==x203)^x204));

	if (t45 != -49429276LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = -1;
	static int8_t x206 = INT8_MIN;
	int64_t x207 = -135156509LL;
	int32_t t46 = -264;

	t46 = (x205-((x206==x207)^x208));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 1LLU;
	volatile int32_t x212 = -1;
	volatile uint64_t t47 = 179718475506377859LLU;

	t47 = (x209-((x210==x211)^x212));

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x217 = INT8_MIN;
	uint8_t x218 = 3U;
	static int32_t x219 = -902855464;
	static uint64_t x220 = 261892LLU;
	volatile uint64_t t48 = 7398288919395370LLU;

	t48 = (x217-((x218==x219)^x220));

	if (t48 != 18446744073709289596LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = 106500781390330LL;
	static int32_t x222 = INT32_MIN;
	uint32_t x224 = UINT32_MAX;
	static volatile int64_t t49 = -25LL;

	t49 = (x221-((x222==x223)^x224));

	if (t49 != 106496486423035LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x225 = INT8_MIN;
	static volatile uint32_t x226 = 302680U;
	static uint32_t x227 = UINT32_MAX;
	volatile uint16_t x228 = 349U;
	int32_t t50 = 1455033;

	t50 = (x225-((x226==x227)^x228));

	if (t50 != -477) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MIN;
	static uint32_t x231 = 305316U;
	volatile int32_t t51 = 1240;

	t51 = (x229-((x230==x231)^x232));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = 13U;
	uint8_t x234 = 0U;
	uint8_t x235 = 33U;
	static volatile int32_t x236 = 0;
	volatile uint32_t t52 = 4174148U;

	t52 = (x233-((x234==x235)^x236));

	if (t52 != 13U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MIN;
	uint64_t x239 = UINT64_MAX;
	int32_t t53 = 746;

	t53 = (x237-((x238==x239)^x240));

	if (t53 != -383) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = -1774;
	int8_t x242 = -2;
	volatile int64_t x243 = INT64_MAX;
	uint16_t x244 = 355U;
	volatile int32_t t54 = 534599837;

	t54 = (x241-((x242==x243)^x244));

	if (t54 != -2129) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 101735U;
	static uint8_t x252 = 0U;
	static uint32_t t55 = 3U;

	t55 = (x249-((x250==x251)^x252));

	if (t55 != 101735U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 115946058LLU;
	int32_t x254 = 0;
	uint64_t x255 = 3397364441151041080LLU;
	uint64_t x256 = UINT64_MAX;
	uint64_t t56 = 48LLU;

	t56 = (x253-((x254==x255)^x256));

	if (t56 != 115946059LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = -1LL;
	uint8_t x258 = UINT8_MAX;
	volatile uint64_t x259 = UINT64_MAX;
	int64_t x260 = 18516457981749263LL;
	static int64_t t57 = 4897132740608031LL;

	t57 = (x257-((x258==x259)^x260));

	if (t57 != -18516457981749264LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x261 = -13745;
	int16_t x262 = 102;
	static uint32_t x263 = UINT32_MAX;
	uint16_t x264 = 216U;
	int32_t t58 = 28047068;

	t58 = (x261-((x262==x263)^x264));

	if (t58 != -13961) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x265 = INT16_MIN;
	static int64_t x267 = 16873579622517LL;
	static int16_t x268 = 0;
	int32_t t59 = -52769930;

	t59 = (x265-((x266==x267)^x268));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x270 = INT32_MIN;
	static int8_t x271 = 52;
	uint8_t x272 = 2U;
	volatile int32_t t60 = 1;

	t60 = (x269-((x270==x271)^x272));

	if (t60 != 682) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x278 = INT64_MIN;
	int32_t x279 = -883;
	int8_t x280 = 0;

	t61 = (x277-((x278==x279)^x280));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MIN;
	volatile uint32_t x283 = 901727U;
	uint64_t x284 = 4461950940202879022LLU;
	volatile uint64_t t62 = 32794686LLU;

	t62 = (x281-((x282==x283)^x284));

	if (t62 != 13984793133506639826LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MAX;
	int16_t x286 = -1;
	int16_t x287 = INT16_MAX;
	volatile int32_t x288 = -1;

	t63 = (x285-((x286==x287)^x288));

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x289 = INT64_MIN;
	int64_t x291 = -1LL;
	int8_t x292 = -1;
	int64_t t64 = 261221460399LL;

	t64 = (x289-((x290==x291)^x292));

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x297 = INT64_MIN;
	static int32_t x298 = INT32_MIN;
	static int32_t x299 = INT32_MIN;
	int64_t t65 = -851101640461564LL;

	t65 = (x297-((x298==x299)^x300));

	if (t65 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	volatile int16_t x303 = INT16_MIN;
	volatile int16_t x304 = INT16_MAX;
	volatile int32_t t66 = -556625;

	t66 = (x301-((x302==x303)^x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = 3U;
	volatile int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MAX;
	uint64_t x308 = 18179LLU;

	t67 = (x305-((x306==x307)^x308));

	if (t67 != 18446744073709533440LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x309 = 541U;
	uint8_t x310 = 2U;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t68 = 28134;

	t68 = (x309-((x310==x311)^x312));

	if (t68 != -64994) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = INT16_MAX;
	int64_t x315 = -1LL;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t69 = -86397;

	t69 = (x313-((x314==x315)^x316));

	if (t69 != 32894) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = -1;
	static volatile int16_t x318 = 1;
	static int32_t x319 = INT32_MIN;
	static uint16_t x320 = 1U;
	volatile int32_t t70 = -143306;

	t70 = (x317-((x318==x319)^x320));

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = -1;
	volatile int32_t t71 = -6400740;

	t71 = (x321-((x322==x323)^x324));

	if (t71 != 16) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = INT16_MAX;
	volatile uint16_t x326 = 27U;
	int8_t x327 = 30;
	volatile int16_t x328 = INT16_MAX;
	int32_t t72 = 37261;

	t72 = (x325-((x326==x327)^x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x329 = -1093042177661855LL;
	volatile int16_t x330 = 173;
	int64_t x331 = -1LL;
	uint32_t x332 = 23766U;
	int64_t t73 = -11LL;

	t73 = (x329-((x330==x331)^x332));

	if (t73 != -1093042177685621LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x334 = -643785471003LL;
	uint16_t x335 = UINT16_MAX;
	static int64_t x336 = -1LL;
	volatile int64_t t74 = 38LL;

	t74 = (x333-((x334==x335)^x336));

	if (t74 != 2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x338 = 37;
	int32_t x339 = -1;
	int16_t x340 = INT16_MIN;
	volatile int32_t t75 = 110;

	t75 = (x337-((x338==x339)^x340));

	if (t75 != 32772) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x350 = -1LL;
	int64_t x352 = -1LL;
	volatile int64_t t76 = -841855379298277003LL;

	t76 = (x349-((x350==x351)^x352));

	if (t76 != 2147483649LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x353 = 46;
	uint64_t x354 = 442LLU;
	static int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MAX;

	t77 = (x353-((x354==x355)^x356));

	if (t77 != -2147483601) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x361 = INT16_MIN;
	volatile uint32_t x362 = 3931357U;
	static volatile int32_t x364 = INT32_MIN;
	volatile int32_t t78 = 1;

	t78 = (x361-((x362==x363)^x364));

	if (t78 != 2147450880) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = 103LLU;
	static volatile int16_t x366 = INT16_MAX;
	uint8_t x367 = 78U;
	static uint16_t x368 = UINT16_MAX;
	uint64_t t79 = 23925133562708673LLU;

	t79 = (x365-((x366==x367)^x368));

	if (t79 != 18446744073709486184LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = UINT32_MAX;
	uint64_t x370 = 273673666344852LLU;
	int16_t x372 = -1;
	uint32_t t80 = 32217969U;

	t80 = (x369-((x370==x371)^x372));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int16_t x374 = INT16_MIN;
	int8_t x375 = -1;
	int32_t t81 = 1227242;

	t81 = (x373-((x374==x375)^x376));

	if (t81 != -272) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = -1;
	int8_t x379 = 0;
	volatile int64_t x380 = INT64_MIN;
	int64_t t82 = INT64_MAX;

	t82 = (x377-((x378==x379)^x380));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x381 = 295740366959LLU;
	volatile int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = UINT8_MAX;
	static volatile uint64_t t83 = 28638266285634LLU;

	t83 = (x381-((x382==x383)^x384));

	if (t83 != 295740366704LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x385 = -1;
	static int32_t x387 = 7524392;
	int64_t x388 = INT64_MIN;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x385-((x386==x387)^x388));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x389 = UINT64_MAX;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 4U;
	int16_t x392 = INT16_MIN;
	volatile uint64_t t85 = 1557911613354LLU;

	t85 = (x389-((x390==x391)^x392));

	if (t85 != 32767LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = 6855361883488914LLU;
	int32_t x394 = INT32_MIN;
	volatile int64_t x395 = 375600175855786539LL;
	static volatile uint64_t t86 = 845340LLU;

	t86 = (x393-((x394==x395)^x396));

	if (t86 != 6855361883488907LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x397 = INT8_MIN;
	volatile int64_t x398 = INT64_MIN;
	uint8_t x399 = 51U;
	static uint32_t x400 = UINT32_MAX;
	uint32_t t87 = 3401U;

	t87 = (x397-((x398==x399)^x400));

	if (t87 != 4294967169U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x401 = INT64_MAX;
	int8_t x402 = -1;
	static int64_t x403 = INT64_MAX;
	volatile uint64_t x404 = 11560658LLU;
	volatile uint64_t t88 = 2139436LLU;

	t88 = (x401-((x402==x403)^x404));

	if (t88 != 9223372036843215149LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = -2038LL;
	uint64_t x408 = 17970350LLU;
	static volatile uint64_t t89 = 27134068LLU;

	t89 = (x405-((x406==x407)^x408));

	if (t89 != 18446744073691579228LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x409 = INT64_MAX;
	uint16_t x410 = UINT16_MAX;
	uint64_t x412 = 364LLU;
	uint64_t t90 = 1461665857359LLU;

	t90 = (x409-((x410==x411)^x412));

	if (t90 != 9223372036854775443LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = -60;
	uint32_t x414 = 30512U;
	volatile uint64_t x415 = UINT64_MAX;
	static int32_t t91 = -28204667;

	t91 = (x413-((x414==x415)^x416));

	if (t91 != 32708) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x417 = UINT64_MAX;
	int8_t x419 = INT8_MAX;
	uint8_t x420 = UINT8_MAX;
	uint64_t t92 = 0LLU;

	t92 = (x417-((x418==x419)^x420));

	if (t92 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x421 = 1327328195LLU;
	static int64_t x422 = INT64_MIN;
	volatile uint16_t x423 = UINT16_MAX;
	int64_t x424 = -19712394005258814LL;
	uint64_t t93 = 333438338893036LLU;

	t93 = (x421-((x422==x423)^x424));

	if (t93 != 19712395332587009LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x425 = -1;
	static uint32_t x426 = UINT32_MAX;
	int64_t x428 = 51556466568LL;

	t94 = (x425-((x426==x427)^x428));

	if (t94 != -51556466569LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x430 = INT16_MAX;
	int64_t x432 = INT64_MIN;
	volatile int64_t t95 = INT64_MAX;

	t95 = (x429-((x430==x431)^x432));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x433 = 52U;
	uint32_t x435 = 41137U;
	int32_t t96 = 52;

	t96 = (x433-((x434==x435)^x436));

	if (t96 != -75) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x437 = 22U;
	int32_t x438 = INT32_MIN;
	int64_t x439 = 0LL;
	uint64_t x440 = 0LLU;
	uint64_t t97 = 20390374034LLU;

	t97 = (x437-((x438==x439)^x440));

	if (t97 != 22LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = INT32_MIN;
	uint16_t x446 = UINT16_MAX;
	uint32_t x447 = 45U;
	int8_t x448 = INT8_MIN;

	t98 = (x445-((x446==x447)^x448));

	if (t98 != -2147483520) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x450 = INT16_MIN;
	uint8_t x451 = 3U;
	uint32_t x452 = 1526271307U;
	volatile uint32_t t99 = 510195671U;

	t99 = (x449-((x450==x451)^x452));

	if (t99 != 2768696116U) { NG(); } else { ; }
	
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

