#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x5 = 13843LLU;
static volatile int16_t x8 = INT16_MIN;
volatile uint64_t t0 = 57584687357627657LLU;
int16_t x13 = -1;
int8_t x16 = INT8_MIN;
static volatile int64_t t1 = -275925766721767750LL;
uint32_t x22 = 27734U;
static int16_t x23 = INT16_MAX;
static uint32_t x30 = UINT32_MAX;
uint16_t x35 = UINT16_MAX;
static volatile int16_t x39 = INT16_MIN;
int64_t x40 = -51749217LL;
volatile int64_t t7 = -6LL;
uint16_t x46 = 690U;
int8_t x59 = INT8_MIN;
volatile int32_t x65 = -19;
int16_t x67 = INT16_MIN;
uint32_t t11 = 81728593U;
uint32_t x79 = 5U;
static uint16_t x81 = 110U;
uint16_t x90 = 13U;
int64_t t18 = -1852444795304LL;
int32_t x112 = 1;
volatile int32_t x115 = -65397;
int16_t x122 = -1;
uint32_t x123 = UINT32_MAX;
int32_t x124 = 13214;
volatile uint8_t x133 = 6U;
int64_t x152 = 15418LL;
int8_t x154 = INT8_MIN;
static int64_t x155 = -1LL;
int64_t x162 = 101944LL;
int64_t x169 = -216629LL;
int64_t t28 = -230857487917324781LL;
uint32_t t30 = 1U;
int32_t x182 = INT32_MIN;
int16_t x183 = INT16_MAX;
int8_t x184 = INT8_MAX;
static uint8_t x207 = 3U;
uint64_t t37 = 49491LLU;
uint32_t x213 = 13977U;
int16_t x218 = INT16_MAX;
uint8_t x225 = 4U;
int32_t t42 = 705246892;
int64_t x241 = -1LL;
int8_t x242 = -1;
uint16_t x243 = 9U;
volatile int8_t x244 = -5;
volatile uint32_t x245 = UINT32_MAX;
volatile int8_t x249 = -1;
volatile uint64_t t45 = 972LLU;
int16_t x254 = 556;
int32_t x258 = INT32_MIN;
int8_t x265 = -1;
volatile int8_t x267 = -1;
uint64_t t48 = 57658176120206LLU;
int8_t x269 = -1;
int64_t x290 = -1LL;
int64_t x291 = INT64_MIN;
volatile int64_t t53 = 24134755925436908LL;
volatile int64_t t54 = -4666LL;
uint64_t x304 = UINT64_MAX;
uint8_t x308 = UINT8_MAX;
volatile uint32_t t57 = 867U;
uint64_t x314 = 1663857556727644001LLU;
volatile uint64_t t58 = 74594008729LLU;
volatile uint32_t t60 = 179U;
uint64_t x337 = 6239798820218LLU;
volatile uint64_t t62 = 3545LLU;
uint64_t t64 = 1403625109LLU;
uint16_t x349 = 19U;
int32_t x371 = INT32_MAX;
uint64_t x378 = UINT64_MAX;
static int32_t x379 = INT32_MAX;
static int8_t x392 = INT8_MIN;
uint64_t t71 = 34512669484661078LLU;
volatile int16_t x394 = -3548;
static int8_t x400 = INT8_MIN;
int32_t x401 = INT32_MIN;
volatile int64_t x403 = -2905LL;
static uint64_t x406 = 1515794515LLU;
int8_t x423 = INT8_MIN;
int16_t x425 = INT16_MIN;
static uint32_t x432 = 31364611U;
volatile uint64_t t79 = 20597LLU;
static uint8_t x438 = 73U;
int16_t x447 = -1;
int32_t x448 = 1;
static uint32_t t83 = 175802836U;
uint64_t x457 = 44679LLU;
int16_t x458 = -1;
volatile int16_t x477 = INT16_MIN;
uint32_t x481 = UINT32_MAX;
static int8_t x482 = INT8_MIN;
int8_t x483 = INT8_MIN;
volatile uint64_t x487 = 32642332LLU;
volatile uint64_t x492 = 232257LLU;
uint64_t t89 = 8LLU;
volatile uint32_t x493 = UINT32_MAX;
int16_t x505 = -1;
uint64_t x513 = UINT64_MAX;
int64_t x514 = 5658324995259LL;
int32_t x515 = 28;
static int64_t x517 = -1LL;
int16_t x518 = INT16_MAX;
uint64_t x520 = UINT64_MAX;
volatile int32_t x524 = INT32_MIN;
uint64_t x539 = 10765048715563LLU;
volatile uint64_t t98 = 1111469LLU;


void f0(void) {
	volatile int32_t x6 = INT32_MIN;
	int8_t x7 = -1;

	t0 = (x5*(x6+(x7^x8)));

	if (t0 != 18446714346547005933LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x14 = INT64_MAX;
	int32_t x15 = 54234;

	t1 = (x13*(x14+(x15^x16)));

	if (t1 != -9223372036854721625LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = UINT32_MAX;
	volatile int16_t x18 = INT16_MIN;
	int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MIN;
	volatile uint32_t t2 = 2U;

	t2 = (x17*(x18+(x19^x20)));

	if (t2 != 2147549184U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 1623U;
	int8_t x24 = INT8_MAX;
	static uint32_t t3 = 157617768U;

	t3 = (x21*(x22+(x23^x24)));

	if (t3 != 97987002U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = 3;
	uint32_t x26 = 119759U;
	uint32_t x27 = 712521U;
	static volatile int16_t x28 = INT16_MAX;
	uint32_t t4 = 130835U;

	t4 = (x25*(x26+(x27^x28)));

	if (t4 != 2448783U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	static uint16_t x31 = 32140U;
	int64_t x32 = -215170553376404838LL;
	volatile int64_t t5 = 111152270LL;

	t5 = (x29*(x30+(x31^x32)));

	if (t5 != 215170549081409771LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -1LL;
	static volatile int32_t x34 = INT32_MIN;
	uint16_t x36 = 3U;
	int64_t t6 = 24LL;

	t6 = (x33*(x34+(x35^x36)));

	if (t6 != 2147418116LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;

	t7 = (x37*(x38+(x39^x40)));

	if (t7 != -6625890176LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = 5434224509LL;
	int8_t x47 = 1;
	static int64_t x48 = -1LL;
	volatile int64_t t8 = 42109LL;

	t8 = (x45*(x46+(x47^x48)));

	if (t8 != 3738746462192LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	int32_t x60 = -17;
	volatile int32_t t9 = 63324;

	t9 = (x57*(x58+(x59^x60)));

	if (t9 != -65646) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = -1;
	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	static uint64_t x64 = 102268LLU;
	volatile uint64_t t10 = 1090107979662LLU;

	t10 = (x61*(x62+(x63^x64)));

	if (t10 != 2147585796LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x66 = 7922680U;
	int8_t x68 = -3;

	t11 = (x65*(x66+(x67^x68)));

	if (t11 != 4143813841U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MIN;
	static int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MIN;
	uint8_t x76 = UINT8_MAX;
	static volatile int32_t t12 = 31045170;

	t12 = (x73*(x74+(x75^x76)));

	if (t12 != -1069481984) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	uint64_t x78 = 15633549059LLU;
	static int16_t x80 = -13975;
	uint64_t t13 = 1830328LLU;

	t13 = (x77*(x78+(x79^x80)));

	if (t13 != 18446091056543465472LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x82 = INT8_MIN;
	volatile int64_t x83 = INT64_MIN;
	static volatile uint64_t x84 = 44574278LLU;
	uint64_t t14 = 192593007169LLU;

	t14 = (x81*(x82+(x83^x84)));

	if (t14 != 4903156500LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x85 = -1;
	int8_t x86 = 0;
	uint8_t x87 = 81U;
	static volatile uint64_t x88 = 14212958379526LLU;
	uint64_t t15 = 1LLU;

	t15 = (x85*(x86+(x87^x88)));

	if (t15 != 18446729860751172009LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x89 = 3761;
	int16_t x91 = 42;
	static int64_t x92 = -10523412861927LL;
	volatile int64_t t16 = -258LL;

	t16 = (x89*(x90+(x91^x92)));

	if (t16 != -39578555773560768LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = INT64_MAX;
	uint64_t x98 = UINT64_MAX;
	int64_t x99 = INT64_MAX;
	volatile uint16_t x100 = UINT16_MAX;
	static uint64_t t17 = 3411916LLU;

	t17 = (x97*(x98+(x99^x100)));

	if (t17 != 65537LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = 13U;
	static volatile int64_t x102 = 1348314033201LL;
	volatile int32_t x103 = -1;
	uint16_t x104 = 71U;

	t18 = (x101*(x102+(x103^x104)));

	if (t18 != 17528082430677LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = -243622LL;
	uint8_t x106 = 4U;
	int8_t x107 = -1;
	volatile int32_t x108 = -14153;
	int64_t t19 = -37298LL;

	t19 = (x105*(x106+(x107^x108)));

	if (t19 != -3448713032LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = INT16_MAX;
	static uint8_t x110 = UINT8_MAX;
	static uint16_t x111 = 1958U;
	int32_t t20 = 11;

	t20 = (x109*(x110+(x111^x112)));

	if (t20 != 72546138) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x114 = 0U;
	int16_t x116 = 1;
	static volatile int32_t t21 = 1;

	t21 = (x113*(x114+(x115^x116)));

	if (t21 != 8370944) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x121 = INT32_MIN;
	static uint32_t t22 = 3U;

	t22 = (x121*(x122+(x123^x124)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x134 = INT8_MIN;
	static int16_t x135 = INT16_MIN;
	int64_t x136 = 197621059564160757LL;
	static volatile int64_t t23 = -47293095LL;

	t23 = (x133*(x134+(x135^x136)));

	if (t23 != -1185726357384943938LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 3543036609051731581LLU;
	volatile int16_t x143 = -1;
	static int32_t x144 = INT32_MAX;
	uint64_t t24 = 24824238452771LLU;

	t24 = (x141*(x142+(x143^x144)));

	if (t24 != 5583664889521602560LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x149 = 0U;
	uint64_t x150 = 300504567859614LLU;
	int64_t x151 = INT64_MAX;
	uint64_t t25 = 2892439830525LLU;

	t25 = (x149*(x150+(x151^x152)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x153 = 19492947;
	static int16_t x156 = -1;
	int64_t t26 = 134091255321LL;

	t26 = (x153*(x154+(x155^x156)));

	if (t26 != -2495097216LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x161 = 0;
	int16_t x163 = INT16_MAX;
	uint8_t x164 = 10U;
	volatile int64_t t27 = -64244804524LL;

	t27 = (x161*(x162+(x163^x164)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x170 = 18769;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = INT16_MAX;

	t28 = (x169*(x170+(x171^x172)));

	if (t28 != -930411437775813LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x173 = 0U;
	static int8_t x174 = INT8_MAX;
	int32_t x175 = -147532;
	static int8_t x176 = INT8_MIN;
	static int32_t t29 = -143469319;

	t29 = (x173*(x174+(x175^x176)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x177 = -1464;
	static volatile uint32_t x178 = 2834351U;
	uint32_t x179 = UINT32_MAX;
	int32_t x180 = INT32_MAX;

	t30 = (x177*(x178+(x179^x180)));

	if (t30 != 145477432U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x181 = 13750U;
	uint32_t t31 = 65U;

	t31 = (x181*(x182+(x183^x184)));

	if (t31 != 448800000U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x189 = -288256LL;
	int64_t x190 = -1LL;
	int8_t x191 = -1;
	uint8_t x192 = UINT8_MAX;
	static int64_t t32 = 1LL;

	t32 = (x189*(x190+(x191^x192)));

	if (t32 != 74081792LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x193 = UINT16_MAX;
	static int8_t x194 = INT8_MIN;
	volatile uint8_t x195 = UINT8_MAX;
	int64_t x196 = -18743131965350LL;
	volatile int64_t t33 = -3055LL;

	t33 = (x193*(x194+(x195^x196)));

	if (t33 != -1228331153352685605LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x197 = UINT32_MAX;
	int64_t x198 = -1LL;
	volatile uint32_t x199 = UINT32_MAX;
	int16_t x200 = -1;
	static volatile int64_t t34 = 12818570036971LL;

	t34 = (x197*(x198+(x199^x200)));

	if (t34 != -4294967295LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x201 = -2285;
	uint16_t x202 = UINT16_MAX;
	static volatile uint32_t x203 = 255247U;
	volatile uint32_t x204 = 13488U;
	uint32_t t35 = 1430724U;

	t35 = (x201*(x202+(x203^x204)));

	if (t35 != 3573277466U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x205 = UINT64_MAX;
	uint16_t x206 = 48U;
	uint64_t x208 = 15764392LLU;
	volatile uint64_t t36 = 2861858311LLU;

	t36 = (x205*(x206+(x207^x208)));

	if (t36 != 18446744073693787173LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x209 = 1LLU;
	int8_t x210 = INT8_MIN;
	uint32_t x211 = 3U;
	static volatile int32_t x212 = INT32_MIN;

	t37 = (x209*(x210+(x211^x212)));

	if (t37 != 2147483523LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x214 = 3U;
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = 10;
	uint32_t t38 = 275U;

	t38 = (x213*(x214+(x215^x216)));

	if (t38 != 3466296U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x217 = 14U;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = 1;
	uint64_t t39 = 48508305557340855LLU;

	t39 = (x217*(x218+(x219^x220)));

	if (t39 != 458710LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x226 = UINT16_MAX;
	uint8_t x227 = UINT8_MAX;
	uint16_t x228 = 85U;
	static int32_t t40 = 51;

	t40 = (x225*(x226+(x227^x228)));

	if (t40 != 262820) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x229 = 0;
	int8_t x230 = 1;
	int16_t x231 = INT16_MIN;
	int8_t x232 = -1;
	static int32_t t41 = 7;

	t41 = (x229*(x230+(x231^x232)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = INT8_MIN;
	static int8_t x234 = INT8_MAX;
	int16_t x235 = 0;
	volatile uint8_t x236 = 19U;

	t42 = (x233*(x234+(x235^x236)));

	if (t42 != -18688) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t t43 = 33428621532982920LL;

	t43 = (x241*(x242+(x243^x244)));

	if (t43 != 15LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x246 = -1;
	int16_t x247 = -1;
	static uint64_t x248 = 6810271758283057132LLU;
	static uint64_t t44 = 273513133469580LLU;

	t44 = (x245*(x246+(x247^x248)));

	if (t44 != 7938942511737087982LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x250 = -1;
	static uint64_t x251 = 6LLU;
	volatile int64_t x252 = 460315266859779336LL;

	t45 = (x249*(x250+(x251^x252)));

	if (t45 != 17986428806849772275LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x253 = INT16_MIN;
	uint8_t x255 = 35U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t46 = 4;

	t46 = (x253*(x254+(x255^x256)));

	if (t46 != -15171584) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = INT16_MAX;
	uint8_t x259 = UINT8_MAX;
	volatile int32_t x260 = INT32_MAX;
	int32_t t47 = -31678;

	t47 = (x257*(x258+(x259^x260)));

	if (t47 != -8388352) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x266 = 19009LLU;
	uint8_t x268 = UINT8_MAX;

	t48 = (x265*(x266+(x267^x268)));

	if (t48 != 18446744073709532863LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x270 = INT32_MIN;
	static int8_t x271 = 2;
	uint8_t x272 = 31U;
	static volatile int32_t t49 = -135210;

	t49 = (x269*(x270+(x271^x272)));

	if (t49 != 2147483619) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x273 = UINT64_MAX;
	int32_t x274 = INT32_MAX;
	int8_t x275 = -3;
	int32_t x276 = INT32_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = (x273*(x274+(x275^x276)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x277 = 15788U;
	uint64_t x278 = 850256LLU;
	int8_t x279 = 24;
	int16_t x280 = 12548;
	uint64_t t51 = 465019LLU;

	t51 = (x277*(x278+(x279^x280)));

	if (t51 != 13622328464LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x281 = -1;
	int32_t x282 = -1;
	static int32_t x283 = INT32_MIN;
	volatile int16_t x284 = INT16_MIN;
	int32_t t52 = -2793;

	t52 = (x281*(x282+(x283^x284)));

	if (t52 != -2147450879) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x289 = INT8_MIN;
	volatile int64_t x292 = INT64_MIN;

	t53 = (x289*(x290+(x291^x292)));

	if (t53 != 128LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x293 = -1LL;
	volatile int16_t x294 = 313;
	static uint16_t x295 = UINT16_MAX;
	int8_t x296 = -1;

	t54 = (x293*(x294+(x295^x296)));

	if (t54 != 65223LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = INT8_MIN;
	uint32_t t55 = 1U;

	t55 = (x297*(x298+(x299^x300)));

	if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x301 = UINT8_MAX;
	volatile uint64_t x302 = 485708LLU;
	int32_t x303 = -1028511459;
	uint64_t t56 = 7718LLU;

	t56 = (x301*(x302+(x303^x304)));

	if (t56 != 262394277330LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x305 = INT16_MIN;
	static uint32_t x306 = 2458663U;
	int8_t x307 = INT8_MIN;

	t57 = (x305*(x306+(x307^x308)));

	if (t57 != 1043136512U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x313 = 6260009902370400LLU;
	int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MAX;

	t58 = (x313*(x314+(x315^x316)));

	if (t58 != 11197105221744657408LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x325 = 0;
	int64_t x326 = INT64_MIN;
	uint64_t x327 = 784313199LLU;
	int8_t x328 = INT8_MIN;
	volatile uint64_t t59 = 135778322885248LLU;

	t59 = (x325*(x326+(x327^x328)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x329 = 8U;
	static int8_t x330 = 0;
	uint16_t x331 = 23U;
	volatile uint32_t x332 = 34185318U;

	t60 = (x329*(x330+(x331^x332)));

	if (t60 != 273482632U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int32_t x334 = -21850582;
	volatile uint16_t x335 = 29564U;
	uint16_t x336 = UINT16_MAX;
	uint64_t t61 = 1063156LLU;

	t61 = (x333*(x334+(x335^x336)));

	if (t61 != 21814611LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x338 = INT16_MAX;
	static volatile int32_t x339 = INT32_MIN;
	volatile uint32_t x340 = 216244413U;

	t62 = (x337*(x338+(x339^x340)));

	if (t62 != 10443510937991079320LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x341 = 3748LLU;
	volatile uint16_t x342 = 7032U;
	int16_t x343 = 498;
	int64_t x344 = 11177413740687375LL;
	uint64_t t63 = 1686LLU;

	t63 = (x341*(x342+(x343^x344)));

	if (t63 != 4999458552705385716LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x345 = 1091U;
	static uint64_t x346 = UINT64_MAX;
	static int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;

	t64 = (x345*(x346+(x347^x348)));

	if (t64 != 18446744073709550525LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MAX;
	uint64_t x352 = UINT64_MAX;
	uint64_t t65 = 296899731222LLU;

	t65 = (x349*(x350+(x351^x352)));

	if (t65 != 18446744073709546752LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	int64_t x355 = -1LL;
	int16_t x356 = INT16_MIN;
	int64_t t66 = 1LL;

	t66 = (x353*(x354+(x355^x356)));

	if (t66 != -33022LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x361 = -3329924199796788050LL;
	uint32_t x362 = UINT32_MAX;
	volatile int16_t x363 = 1313;
	uint64_t x364 = 7226836015983694610LLU;
	volatile uint64_t t67 = 62332709798507292LLU;

	t67 = (x361*(x362+(x363^x364)));

	if (t67 != 15185649460242038268LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x369 = INT8_MIN;
	uint16_t x370 = UINT16_MAX;
	uint64_t x372 = 725656956143LLU;
	uint64_t t68 = 252LLU;

	t68 = (x369*(x370+(x371^x372)));

	if (t68 != 18446651415204362368LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x377 = INT8_MIN;
	static volatile uint32_t x380 = 2015882U;
	static volatile uint64_t t69 = 409761183080274714LLU;

	t69 = (x377*(x378+(x379^x380)));

	if (t69 != 18446743799089677824LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x385 = 0;
	uint16_t x386 = 64U;
	volatile uint32_t x387 = 63590U;
	int32_t x388 = INT32_MIN;
	volatile uint32_t t70 = 1U;

	t70 = (x385*(x386+(x387^x388)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x389 = UINT8_MAX;
	uint64_t x390 = 6LLU;
	int32_t x391 = INT32_MIN;

	t71 = (x389*(x390+(x391^x392)));

	if (t71 != 547608299130LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = -1;
	static volatile int16_t x395 = INT16_MIN;
	int8_t x396 = -1;
	volatile int32_t t72 = 1;

	t72 = (x393*(x394+(x395^x396)));

	if (t72 != -29219) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x397 = UINT32_MAX;
	static int16_t x398 = INT16_MAX;
	int32_t x399 = 2818826;
	volatile uint32_t t73 = 2900308U;

	t73 = (x397*(x398+(x399^x400)));

	if (t73 != 2786167U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x402 = 24U;
	int8_t x404 = -4;
	volatile int64_t t74 = -34887169554207307LL;

	t74 = (x401*(x402+(x403^x404)));

	if (t74 != -6294274572288LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x405 = INT8_MAX;
	static uint8_t x407 = 61U;
	int64_t x408 = INT64_MAX;
	uint64_t t75 = 2123946568916425964LLU;

	t75 = (x405*(x406+(x407^x408)));

	if (t75 != 9223372229360671339LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x421 = 3939395LLU;
	volatile int64_t x422 = INT64_MIN;
	uint32_t x424 = UINT32_MAX;
	volatile uint64_t t76 = 15528077846279947LLU;

	t76 = (x421*(x422+(x423^x424)));

	if (t76 != 9223372037355078973LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x426 = INT8_MIN;
	uint8_t x427 = UINT8_MAX;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t77 = 61901390;

	t77 = (x425*(x426+(x427^x428)));

	if (t77 != -2134900736) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x429 = -32791988;
	int8_t x430 = -1;
	volatile int8_t x431 = INT8_MIN;
	uint32_t t78 = 175221U;

	t78 = (x429*(x430+(x431^x432)));

	if (t78 != 457545368U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x433 = 92U;
	static uint64_t x434 = UINT64_MAX;
	volatile int32_t x435 = -338420;
	static int64_t x436 = -1LL;

	t79 = (x433*(x434+(x435^x436)));

	if (t79 != 31134456LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = -1;
	uint16_t x439 = 9383U;
	static int32_t x440 = INT32_MAX;
	int32_t t80 = 240;

	t80 = (x437*(x438+(x439^x440)));

	if (t80 != -2147474337) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x441 = INT32_MIN;
	uint64_t x442 = 33232285506LLU;
	volatile uint16_t x443 = UINT16_MAX;
	volatile uint64_t x444 = UINT64_MAX;
	volatile uint64_t t81 = 1889059073LLU;

	t81 = (x441*(x442+(x443^x444)));

	if (t81 != 2421327322524155904LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x445 = INT8_MIN;
	static int16_t x446 = -15;
	volatile int32_t t82 = -2562609;

	t82 = (x445*(x446+(x447^x448)));

	if (t82 != 2176) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = INT8_MAX;
	int16_t x450 = 3760;
	uint32_t x451 = UINT32_MAX;
	int8_t x452 = INT8_MAX;

	t83 = (x449*(x450+(x451^x452)));

	if (t83 != 461264U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x459 = INT16_MIN;
	int8_t x460 = 2;
	static uint64_t t84 = 213158543986334223LLU;

	t84 = (x457*(x458+(x459^x460)));

	if (t84 != 18446744072245554823LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x465 = -1LL;
	int32_t x466 = INT32_MIN;
	uint8_t x467 = UINT8_MAX;
	int16_t x468 = 23;
	volatile int64_t t85 = 44LL;

	t85 = (x465*(x466+(x467^x468)));

	if (t85 != 2147483416LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x478 = 24572U;
	volatile uint64_t x479 = 1LLU;
	volatile int16_t x480 = INT16_MIN;
	uint64_t t86 = 261LLU;

	t86 = (x477*(x478+(x479^x480)));

	if (t86 != 268533760LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x484 = INT16_MIN;
	volatile uint32_t t87 = 97475615U;

	t87 = (x481*(x482+(x483^x484)));

	if (t87 != 4294934784U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x485 = 2;
	int8_t x486 = INT8_MIN;
	static uint16_t x488 = UINT16_MAX;
	uint64_t t88 = 54087914LLU;

	t88 = (x485*(x486+(x487^x488)));

	if (t88 != 65393862LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x489 = 25U;
	uint64_t x490 = 69751042LLU;
	int8_t x491 = 0;

	t89 = (x489*(x490+(x491^x492)));

	if (t89 != 1749582475LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x494 = INT16_MIN;
	static int32_t x495 = INT32_MAX;
	int16_t x496 = 231;
	static volatile uint32_t t90 = 49858U;

	t90 = (x493*(x494+(x495^x496)));

	if (t90 != 2147516648U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x506 = 2052447;
	int16_t x507 = -1;
	int64_t x508 = -1LL;
	int64_t t91 = -4773719076LL;

	t91 = (x505*(x506+(x507^x508)));

	if (t91 != -2052447LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x516 = 7U;
	volatile uint64_t t92 = 26826976319LLU;

	t92 = (x513*(x514+(x515^x516)));

	if (t92 != 18446738415384556330LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x519 = 49U;
	volatile uint64_t t93 = 2338416959LLU;

	t93 = (x517*(x518+(x519^x520)));

	if (t93 != 18446744073709518899LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x521 = 31LL;
	volatile int32_t x522 = 299;
	uint64_t x523 = UINT64_MAX;
	static uint64_t t94 = 20LLU;

	t94 = (x521*(x522+(x523^x524)));

	if (t94 != 66572002326LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x525 = -1LL;
	uint64_t x526 = 1627561045LLU;
	volatile int8_t x527 = INT8_MAX;
	int16_t x528 = INT16_MAX;
	static volatile uint64_t t95 = 41LLU;

	t95 = (x525*(x526+(x527^x528)));

	if (t95 != 18446744072081957931LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x529 = -1LL;
	uint32_t x530 = UINT32_MAX;
	int16_t x531 = -1;
	int16_t x532 = INT16_MIN;
	volatile int64_t t96 = -129638LL;

	t96 = (x529*(x530+(x531^x532)));

	if (t96 != -32766LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x533 = 6U;
	volatile int8_t x534 = 9;
	int16_t x535 = INT16_MIN;
	volatile int16_t x536 = INT16_MIN;
	int32_t t97 = 12;

	t97 = (x533*(x534+(x535^x536)));

	if (t97 != 54) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x537 = INT16_MIN;
	int8_t x538 = 9;
	uint16_t x540 = UINT16_MAX;

	t98 = (x537*(x538+(x539^x540)));

	if (t98 != 18093994957819969536LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x541 = 1852U;
	int16_t x542 = INT16_MIN;
	static int32_t x543 = -24;
	uint8_t x544 = 55U;
	volatile int32_t t99 = 125504;

	t99 = (x541*(x542+(x543^x544)));

	if (t99 != -60747452) { NG(); } else { ; }
	
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

