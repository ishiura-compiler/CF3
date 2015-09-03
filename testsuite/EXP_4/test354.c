#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 3747;
static uint64_t x19 = 58LLU;
uint64_t x36 = 14310471150645411LLU;
volatile uint32_t x38 = 4703U;
uint32_t t6 = 7568U;
volatile uint64_t t8 = 7005307027LLU;
int32_t x69 = 2009;
static int32_t t9 = -1;
volatile int32_t x77 = INT32_MIN;
int8_t x78 = INT8_MAX;
uint8_t x91 = UINT8_MAX;
static int16_t x108 = -940;
int64_t t17 = -1532319005017911LL;
int16_t x122 = INT16_MIN;
volatile int64_t t20 = 1435479449639965713LL;
int64_t x126 = -1LL;
uint8_t x128 = 5U;
volatile int8_t x135 = INT8_MAX;
static uint64_t x136 = UINT64_MAX;
int32_t t23 = -80219;
volatile int16_t x141 = -1;
static int32_t x142 = -1;
uint16_t x143 = 68U;
int16_t x158 = -1;
static int64_t t25 = 358720149LL;
static uint8_t x163 = UINT8_MAX;
static int8_t x164 = -45;
uint32_t x172 = UINT32_MAX;
volatile int32_t x179 = 1690;
static volatile uint64_t t32 = 3367LLU;
uint64_t x210 = 11468870LLU;
uint64_t x215 = 91891729041379LLU;
volatile int32_t x221 = -1;
static volatile int64_t t35 = -109716076850046LL;
int8_t x226 = INT8_MAX;
uint32_t x237 = 23U;
int8_t x245 = 24;
uint32_t t39 = 7047925U;
static volatile int16_t x258 = INT16_MIN;
int32_t x259 = 0;
uint32_t x268 = UINT32_MAX;
int64_t x272 = 1LL;
volatile uint64_t t43 = 991LLU;
volatile uint64_t t44 = 3LLU;
int32_t x277 = INT32_MAX;
int64_t x281 = -1LL;
uint32_t x286 = 1U;
uint32_t x289 = 114U;
volatile uint64_t x290 = 448LLU;
static int32_t x292 = INT32_MAX;
static volatile uint16_t x298 = UINT16_MAX;
int8_t x300 = INT8_MIN;
int32_t x302 = -1;
static volatile int16_t x313 = -6377;
uint64_t x316 = 2647304LLU;
volatile uint64_t t51 = 10LLU;
int32_t x322 = 550;
static volatile uint16_t x323 = UINT16_MAX;
uint8_t x325 = 0U;
volatile uint64_t x329 = 3312608610960LLU;
uint32_t x332 = 1U;
uint16_t x376 = 30U;
uint8_t x377 = UINT8_MAX;
static uint32_t x399 = 13502157U;
uint16_t x408 = 928U;
uint64_t t62 = 252519LLU;
volatile int8_t x428 = -10;
int8_t x430 = INT8_MIN;
int32_t x431 = INT32_MIN;
static int16_t x455 = 4;
uint64_t x482 = 358752LLU;
int32_t t75 = -184809183;
uint8_t x492 = UINT8_MAX;
uint16_t x507 = 28U;
int64_t x522 = -462109635433153LL;
uint64_t x524 = 14LLU;
int32_t x531 = INT32_MAX;
volatile uint32_t t80 = 22U;
int64_t x557 = INT64_MAX;
int64_t x569 = -1508LL;
uint8_t x570 = 14U;
int64_t x587 = 1011043463275LL;
int32_t x593 = -1;
static int32_t x596 = INT32_MIN;
static int32_t t91 = 4095122;
static volatile int64_t x604 = 80591589689LL;
volatile int16_t x616 = -1;
volatile int64_t t99 = 30428192408LL;


void f0(void) {
	uint8_t x9 = 0U;
	static int16_t x10 = 105;
	int16_t x11 = -1;
	uint8_t x12 = 83U;

	t0 = (x9*(x10-(x11*x12)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = -1LL;
	int8_t x18 = 1;
	int16_t x20 = -1;
	volatile uint64_t t1 = 1910564328605393773LLU;

	t1 = (x17*(x18-(x19*x20)));

	if (t1 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x25 = INT8_MIN;
	int64_t x26 = -1LL;
	uint64_t x27 = 10103257052707LLU;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t2 = 127105244252LLU;

	t2 = (x25*(x26-(x27*x28)));

	if (t2 != 18281212310158000256LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x33 = INT32_MIN;
	static uint32_t x34 = 12908U;
	volatile int16_t x35 = -1;
	volatile uint64_t t3 = 232368294358LLU;

	t3 = (x33*(x34-(x35*x36)));

	if (t3 != 16519078606412972032LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = -1LL;
	uint32_t x39 = UINT32_MAX;
	static int16_t x40 = 177;
	volatile int64_t t4 = 54071669725789LL;

	t4 = (x37*(x38-(x39*x40)));

	if (t4 != -4880LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = 4710U;
	uint16_t x42 = 22604U;
	volatile int64_t x43 = -1LL;
	static uint16_t x44 = 572U;
	static volatile int64_t t5 = -6LL;

	t5 = (x41*(x42-(x43*x44)));

	if (t5 != 109158960LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 911U;
	static volatile uint32_t x46 = UINT32_MAX;
	volatile uint8_t x47 = 11U;
	uint8_t x48 = 0U;

	t6 = (x45*(x46-(x47*x48)));

	if (t6 != 4294966385U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x53 = -1;
	uint32_t x54 = UINT32_MAX;
	uint8_t x55 = 11U;
	static uint64_t x56 = UINT64_MAX;
	volatile uint64_t t7 = 3LLU;

	t7 = (x53*(x54-(x55*x56)));

	if (t7 != 18446744069414584310LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x65 = 506LLU;
	int64_t x66 = -1LL;
	int64_t x67 = -1LL;
	static int32_t x68 = 245521;

	t8 = (x65*(x66-(x67*x68)));

	if (t8 != 124233120LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x70 = 16014;
	int32_t x71 = INT32_MAX;
	int8_t x72 = 0;

	t9 = (x69*(x70-(x71*x72)));

	if (t9 != 32172126) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x73 = -5;
	static uint32_t x74 = 1U;
	uint32_t x75 = UINT32_MAX;
	volatile int16_t x76 = 4;
	volatile uint32_t t10 = 557930U;

	t10 = (x73*(x74-(x75*x76)));

	if (t10 != 4294967271U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x79 = 200U;
	uint64_t x80 = UINT64_MAX;
	uint64_t t11 = 2254640154091614932LLU;

	t11 = (x77*(x78-(x79*x80)));

	if (t11 != 18446743371482398720LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = 13643673253LLU;
	uint8_t x82 = 22U;
	int8_t x83 = INT8_MAX;
	uint16_t x84 = 98U;
	volatile uint64_t t12 = 16014996613452LLU;

	t12 = (x81*(x82-(x83*x84)));

	if (t12 != 18446574564713056344LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = INT16_MIN;
	static uint64_t x86 = 5796LLU;
	static int32_t x87 = -1;
	int64_t x88 = 3LL;
	volatile uint64_t t13 = 164105991LLU;

	t13 = (x85*(x86-(x87*x88)));

	if (t13 != 18446744073519529984LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x89 = UINT32_MAX;
	static uint32_t x90 = UINT32_MAX;
	int8_t x92 = -1;
	volatile uint32_t t14 = 1888163887U;

	t14 = (x89*(x90-(x91*x92)));

	if (t14 != 4294967042U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x93 = 8176168459860243492LLU;
	static int64_t x94 = -1LL;
	int16_t x95 = -1;
	static int16_t x96 = -1;
	volatile uint64_t t15 = 4284153LLU;

	t15 = (x93*(x94-(x95*x96)));

	if (t15 != 2094407153989064632LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = 490LL;
	uint32_t x103 = UINT32_MAX;
	static int32_t x104 = -16635;
	int64_t t16 = 50961101439974LL;

	t16 = (x101*(x102-(x103*x104)));

	if (t16 != 2066560LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x105 = 9U;
	uint8_t x106 = 5U;
	volatile int64_t x107 = 0LL;

	t17 = (x105*(x106-(x107*x108)));

	if (t17 != 45LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x113 = UINT16_MAX;
	uint64_t x114 = 3667705347153181LLU;
	uint32_t x115 = 65512U;
	uint16_t x116 = 575U;
	uint64_t t18 = 151215487LLU;

	t18 = (x113*(x114-(x115*x116)));

	if (t18 != 555394498795416827LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x117 = -1;
	volatile uint16_t x118 = UINT16_MAX;
	uint32_t x119 = 7726U;
	volatile int32_t x120 = -1401;
	static volatile uint32_t t19 = 155U;

	t19 = (x117*(x118-(x119*x120)));

	if (t19 != 4284077635U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = -25LL;
	uint32_t x123 = 30U;
	volatile int32_t x124 = -1;

	t20 = (x121*(x122-(x123*x124)));

	if (t20 != -107373363950LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x125 = INT16_MAX;
	int64_t x127 = 4176278686537LL;
	volatile int64_t t21 = -1375918LL;

	t21 = (x125*(x126-(x127*x128)));

	if (t21 != -684220618608822162LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x133 = -1LL;
	int32_t x134 = 71;
	static volatile uint64_t t22 = 15LLU;

	t22 = (x133*(x134-(x135*x136)));

	if (t22 != 18446744073709551418LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = -123;
	int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MAX;
	int8_t x140 = INT8_MIN;

	t23 = (x137*(x138-(x139*x140)));

	if (t23 != -519913989) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x144 = UINT32_MAX;
	uint32_t t24 = 6161U;

	t24 = (x141*(x142-(x143*x144)));

	if (t24 != 4294967229U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x157 = UINT32_MAX;
	int32_t x159 = INT32_MAX;
	int64_t x160 = -1LL;

	t25 = (x157*(x158-(x159*x160)));

	if (t25 != 9223372026117357570LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x161 = INT8_MIN;
	uint64_t x162 = UINT64_MAX;
	uint64_t t26 = 623595LLU;

	t26 = (x161*(x162-(x163*x164)));

	if (t26 != 18446744073708082944LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x165 = 31;
	int8_t x166 = -35;
	int16_t x167 = -1;
	int8_t x168 = -1;
	volatile int32_t t27 = -2;

	t27 = (x165*(x166-(x167*x168)));

	if (t27 != -1116) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x169 = -1;
	static uint16_t x170 = 1U;
	uint8_t x171 = UINT8_MAX;
	uint32_t t28 = 965U;

	t28 = (x169*(x170-(x171*x172)));

	if (t28 != 4294967040U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x177 = 24455U;
	static volatile int64_t x178 = -1LL;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t29 = 24901LLU;

	t29 = (x177*(x178-(x179*x180)));

	if (t29 != 41304495LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x181 = INT8_MAX;
	uint64_t x182 = 58505291004364229LLU;
	static uint16_t x183 = UINT16_MAX;
	volatile uint8_t x184 = UINT8_MAX;
	volatile uint64_t t30 = 6286104317411LLU;

	t30 = (x181*(x182-(x183*x184)));

	if (t30 != 7430171955431906108LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x189 = 13328;
	int16_t x190 = INT16_MAX;
	uint64_t x191 = 213477544731263LLU;
	static int16_t x192 = INT16_MIN;
	volatile uint64_t t31 = 1628454LLU;

	t31 = (x189*(x190-(x191*x192)));

	if (t31 != 2610023202021166064LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x205 = -1;
	int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MAX;
	uint64_t x208 = 837174100LLU;

	t32 = (x205*(x206-(x207*x208)));

	if (t32 != 9223372036017601708LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x209 = INT32_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	uint32_t x212 = UINT32_MAX;
	volatile uint64_t t33 = 13250006525LLU;

	t33 = (x209*(x210-(x211*x212)));

	if (t33 != 9198742828216221696LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x213 = -67875LL;
	static int8_t x214 = INT8_MAX;
	static int64_t x216 = -1LL;
	uint64_t t34 = 14103343391848LLU;

	t34 = (x213*(x214-(x215*x216)));

	if (t34 != 12209592965017331866LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x222 = -1;
	volatile int16_t x223 = 1759;
	int64_t x224 = 3055715985706LL;

	t35 = (x221*(x222-(x223*x224)));

	if (t35 != 5375004418856855LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x225 = 433;
	uint32_t x227 = 273372740U;
	int16_t x228 = INT16_MIN;
	static volatile uint32_t t36 = 550183U;

	t36 = (x225*(x226-(x227*x228)));

	if (t36 != 1954731727U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x233 = 711U;
	static int32_t x234 = -1;
	int64_t x235 = -8423882955LL;
	volatile int8_t x236 = INT8_MIN;
	static int64_t t37 = -3257081371LL;

	t37 = (x233*(x234-(x235*x236)));

	if (t37 != -766640739969351LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x238 = 2775U;
	uint16_t x239 = 7272U;
	int16_t x240 = -1;
	uint32_t t38 = 7791U;

	t38 = (x237*(x238-(x239*x240)));

	if (t38 != 231081U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x246 = UINT32_MAX;
	volatile int16_t x247 = 1013;
	uint32_t x248 = 47250U;

	t39 = (x245*(x246-(x247*x248)));

	if (t39 != 3146225272U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x257 = INT16_MIN;
	int8_t x260 = INT8_MIN;
	static int32_t t40 = -45;

	t40 = (x257*(x258-(x259*x260)));

	if (t40 != 1073741824) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MIN;
	volatile int16_t x263 = -1;
	static int64_t x264 = -192408LL;
	int64_t t41 = -152637LL;

	t41 = (x261*(x262-(x263*x264)));

	if (t41 != 4612099211461132288LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x265 = -1LL;
	int32_t x266 = INT32_MAX;
	static int16_t x267 = -108;
	volatile int64_t t42 = 53388982510LL;

	t42 = (x265*(x266-(x267*x268)));

	if (t42 != -2147483539LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = 4LLU;
	uint16_t x271 = UINT16_MAX;

	t43 = (x269*(x270-(x271*x272)));

	if (t43 != 140726750937088LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x273 = INT32_MAX;
	uint64_t x274 = 847149021584052LLU;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = 1;

	t44 = (x273*(x274-(x275*x276)));

	if (t44 != 2323130766893982924LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x278 = 67068U;
	volatile int8_t x279 = INT8_MIN;
	uint8_t x280 = UINT8_MAX;
	uint32_t t45 = 23U;

	t45 = (x277*(x278-(x279*x280)));

	if (t45 != 4294867588U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x282 = 523;
	int16_t x283 = INT16_MIN;
	int8_t x284 = -1;
	volatile int64_t t46 = -30427449LL;

	t46 = (x281*(x282-(x283*x284)));

	if (t46 != 32245LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x285 = -1;
	uint8_t x287 = 2U;
	uint8_t x288 = UINT8_MAX;
	static volatile uint32_t t47 = 107311U;

	t47 = (x285*(x286-(x287*x288)));

	if (t47 != 509U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x291 = 49885591LL;
	uint64_t t48 = 986760330LLU;

	t48 = (x289*(x290-(x291*x292)));

	if (t48 != 6234096111858539710LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x297 = 0U;
	uint8_t x299 = 44U;
	volatile int32_t t49 = 0;

	t49 = (x297*(x298-(x299*x300)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x301 = 0U;
	volatile int8_t x303 = INT8_MAX;
	int16_t x304 = -1;
	static volatile int32_t t50 = -203342490;

	t50 = (x301*(x302-(x303*x304)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x314 = 1;
	uint32_t x315 = UINT32_MAX;

	t51 = (x313*(x314-(x315*x316)));

	if (t51 != 17166794084078269135LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x321 = UINT32_MAX;
	volatile int64_t x324 = -1LL;
	static volatile int64_t t52 = -21LL;

	t52 = (x321*(x322-(x323*x324)));

	if (t52 != 283832913690075LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x326 = -3;
	uint8_t x327 = UINT8_MAX;
	uint16_t x328 = 1646U;
	volatile int32_t t53 = -528992;

	t53 = (x325*(x326-(x327*x328)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x330 = -1;
	int64_t x331 = INT64_MIN;
	volatile uint64_t t54 = 7715762LLU;

	t54 = (x329*(x330-(x331*x332)));

	if (t54 != 18446740761100940656LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x341 = -1LL;
	static int64_t x342 = INT64_MAX;
	static volatile int8_t x343 = -1;
	int8_t x344 = -1;
	volatile int64_t t55 = 379623849051996LL;

	t55 = (x341*(x342-(x343*x344)));

	if (t55 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x357 = UINT8_MAX;
	uint64_t x358 = 393651178123LLU;
	int32_t x359 = 1;
	int16_t x360 = INT16_MIN;
	uint64_t t56 = 750334402LLU;

	t56 = (x357*(x358-(x359*x360)));

	if (t56 != 100381058777205LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x369 = INT16_MAX;
	int16_t x370 = INT16_MAX;
	int16_t x371 = INT16_MIN;
	int8_t x372 = -2;
	volatile int32_t t57 = -839095;

	t57 = (x369*(x370-(x371*x372)));

	if (t57 != -1073741823) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x373 = INT16_MAX;
	int8_t x374 = -1;
	uint64_t x375 = 2LLU;
	volatile uint64_t t58 = 2527469890638057LLU;

	t58 = (x373*(x374-(x375*x376)));

	if (t58 != 18446744073707552829LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	static int64_t x380 = 52367LL;
	volatile uint64_t t59 = 9488693LLU;

	t59 = (x377*(x378-(x379*x380)));

	if (t59 != 28676605429677825LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x381 = 3554;
	volatile int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MAX;
	uint32_t x384 = UINT32_MAX;
	static volatile uint32_t t60 = 493813U;

	t60 = (x381*(x382-(x383*x384)));

	if (t60 != 116453918U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x397 = INT16_MAX;
	uint32_t x398 = UINT32_MAX;
	uint16_t x400 = UINT16_MAX;
	volatile uint32_t t61 = 1309965819U;

	t61 = (x397*(x398-(x399*x400)));

	if (t61 != 2305095988U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x405 = 1U;
	int8_t x406 = INT8_MAX;
	uint64_t x407 = 68693903017227LLU;

	t62 = (x405*(x406-(x407*x408)));

	if (t62 != 18382996131709565087LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x413 = 13U;
	uint32_t x414 = 0U;
	int8_t x415 = INT8_MAX;
	uint64_t x416 = 372983LLU;
	uint64_t t63 = 923972LLU;

	t63 = (x413*(x414-(x415*x416)));

	if (t63 != 18446744073093756683LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x425 = -1;
	uint32_t x426 = 6312861U;
	volatile uint64_t x427 = UINT64_MAX;
	volatile uint64_t t64 = 231604672889435840LLU;

	t64 = (x425*(x426-(x427*x428)));

	if (t64 != 18446744073703238765LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x429 = INT32_MAX;
	uint32_t x432 = UINT32_MAX;
	uint32_t t65 = 46876696U;

	t65 = (x429*(x430-(x431*x432)));

	if (t65 != 2147483776U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x441 = 3151816893823163193LLU;
	uint32_t x442 = 41U;
	static int32_t x443 = 398490151;
	uint64_t x444 = 1613292578537839LLU;
	uint64_t t66 = 24085544655532LLU;

	t66 = (x441*(x442-(x443*x444)));

	if (t66 != 7445804363736358976LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x449 = 365564312;
	uint16_t x450 = 9187U;
	volatile uint16_t x451 = 670U;
	uint64_t x452 = 237035836LLU;
	uint64_t t67 = 18LLU;

	t67 = (x449*(x450-(x451*x452)));

	if (t67 != 15730245307798703368LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x453 = -1LL;
	int16_t x454 = INT16_MIN;
	int64_t x456 = -1LL;
	int64_t t68 = -145092347641LL;

	t68 = (x453*(x454-(x455*x456)));

	if (t68 != 32764LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x457 = 111639LL;
	volatile int8_t x458 = INT8_MIN;
	int32_t x459 = -1;
	static uint32_t x460 = UINT32_MAX;
	volatile int64_t t69 = -708949204LL;

	t69 = (x457*(x458-(x459*x460)));

	if (t69 != 479485839556713LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x461 = INT16_MIN;
	uint8_t x462 = 5U;
	int32_t x463 = -1;
	uint64_t x464 = 1320LLU;
	volatile uint64_t t70 = 5984542201LLU;

	t70 = (x461*(x462-(x463*x464)));

	if (t70 != 18446744073666134016LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x465 = UINT16_MAX;
	uint32_t x466 = 33U;
	uint32_t x467 = 2402U;
	uint16_t x468 = 420U;
	volatile uint32_t t71 = 973U;

	t71 = (x465*(x466-(x467*x468)));

	if (t71 != 2607309991U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x473 = UINT8_MAX;
	uint8_t x474 = 21U;
	int8_t x475 = INT8_MIN;
	int64_t x476 = -786LL;
	volatile int64_t t72 = 223421217005088LL;

	t72 = (x473*(x474-(x475*x476)));

	if (t72 != -25649685LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x477 = 0;
	uint8_t x478 = 6U;
	uint16_t x479 = 8211U;
	int64_t x480 = 7118837LL;
	volatile int64_t t73 = -63701LL;

	t73 = (x477*(x478-(x479*x480)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x481 = 3;
	static uint64_t x483 = 96539LLU;
	uint16_t x484 = UINT16_MAX;
	volatile uint64_t t74 = 37523373025LLU;

	t74 = (x481*(x482-(x483*x484)));

	if (t74 != 18446744054730577777LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x485 = 548U;
	static volatile uint8_t x486 = 15U;
	static int8_t x487 = -12;
	uint16_t x488 = UINT16_MAX;

	t75 = (x485*(x486-(x487*x488)));

	if (t75 != 430966380) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x489 = INT8_MIN;
	static volatile int8_t x490 = 26;
	int8_t x491 = INT8_MAX;
	int32_t t76 = -6378955;

	t76 = (x489*(x490-(x491*x492)));

	if (t76 != 4141952) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x505 = 697;
	int64_t x506 = -8830055545506LL;
	uint16_t x508 = 1U;
	volatile int64_t t77 = -1034455362LL;

	t77 = (x505*(x506-(x507*x508)));

	if (t77 != -6154548715237198LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x513 = INT16_MAX;
	volatile int32_t x514 = INT32_MIN;
	int8_t x515 = INT8_MIN;
	static uint32_t x516 = 125910115U;
	uint32_t t78 = 8350U;

	t78 = (x513*(x514-(x515*x516)));

	if (t78 != 3626094208U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x521 = -4815388555LL;
	static uint8_t x523 = 14U;
	volatile uint64_t t79 = 217845476980912LLU;

	t79 = (x521*(x522-(x523*x524)));

	if (t79 != 6712009388028482615LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x529 = 94286U;
	uint32_t x530 = 13473U;
	uint32_t x532 = UINT32_MAX;

	t80 = (x529*(x530-(x531*x532)));

	if (t80 != 1270220992U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x533 = -1;
	int32_t x534 = INT32_MIN;
	int8_t x535 = 1;
	int32_t x536 = -1;
	static int32_t t81 = INT32_MAX;

	t81 = (x533*(x534-(x535*x536)));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x537 = 0;
	uint8_t x538 = 0U;
	int16_t x539 = -183;
	uint32_t x540 = UINT32_MAX;
	static uint32_t t82 = 5U;

	t82 = (x537*(x538-(x539*x540)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x541 = INT16_MIN;
	int32_t x542 = -536647190;
	int64_t x543 = 18066813359431LL;
	volatile uint64_t x544 = 56735193LLU;
	static uint64_t t83 = 55812606044LLU;

	t83 = (x541*(x542-(x543*x544)));

	if (t83 != 11929311004009332736LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x549 = INT64_MAX;
	int64_t x550 = INT64_MAX;
	uint64_t x551 = 53248419598LLU;
	volatile int64_t x552 = 1116LL;
	static uint64_t t84 = 0LLU;

	t84 = (x549*(x550-(x551*x552)));

	if (t84 != 59425236271369LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x553 = INT16_MIN;
	static int16_t x554 = -1;
	int16_t x555 = INT16_MAX;
	volatile uint8_t x556 = 0U;
	static volatile int32_t t85 = -1021068;

	t85 = (x553*(x554-(x555*x556)));

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x558 = -9110042048372394LL;
	uint64_t x559 = UINT64_MAX;
	int32_t x560 = INT32_MAX;
	volatile uint64_t t86 = 198LLU;

	t86 = (x557*(x558-(x559*x560)));

	if (t86 != 9232482076755664555LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x571 = 189U;
	uint16_t x572 = UINT16_MAX;
	int64_t t87 = -21LL;

	t87 = (x569*(x570-(x571*x572)));

	if (t87 != -6458132442060LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x581 = 1526U;
	int32_t x582 = INT32_MAX;
	int64_t x583 = -1LL;
	int32_t x584 = INT32_MIN;
	int64_t t88 = -510625020LL;

	t88 = (x581*(x582-(x583*x584)));

	if (t88 != -1526LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x585 = 0U;
	static volatile uint64_t x586 = 700409LLU;
	volatile int32_t x588 = 174246;
	uint64_t t89 = 38231262819426LLU;

	t89 = (x585*(x586-(x587*x588)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x589 = 2;
	uint64_t x590 = UINT64_MAX;
	static int16_t x591 = -1;
	volatile int16_t x592 = INT16_MIN;
	volatile uint64_t t90 = 31072LLU;

	t90 = (x589*(x590-(x591*x592)));

	if (t90 != 18446744073709486078LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x594 = 19;
	int8_t x595 = 0;

	t91 = (x593*(x594-(x595*x596)));

	if (t91 != -19) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x597 = -84986LL;
	int8_t x598 = 25;
	int32_t x599 = -1;
	int32_t x600 = 1647296;
	int64_t t92 = 67934268527LL;

	t92 = (x597*(x598-(x599*x600)));

	if (t92 != -139999222506LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x601 = 15110024U;
	uint32_t x602 = 220709346U;
	int32_t x603 = -1;
	volatile int64_t t93 = -469LL;

	t93 = (x601*(x602-(x603*x604)));

	if (t93 != 1221075777914026840LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x613 = 78LLU;
	static volatile int8_t x614 = INT8_MIN;
	static int64_t x615 = 27593135LL;
	uint64_t t94 = 962LLU;

	t94 = (x613*(x614-(x615*x616)));

	if (t94 != 2152254546LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x617 = INT16_MIN;
	int16_t x618 = -1;
	int32_t x619 = -1;
	volatile int32_t x620 = 212;
	volatile int32_t t95 = 20;

	t95 = (x617*(x618-(x619*x620)));

	if (t95 != -6914048) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x625 = -1;
	uint32_t x626 = 495U;
	static int8_t x627 = 1;
	int32_t x628 = -15102728;
	volatile uint32_t t96 = 285U;

	t96 = (x625*(x626-(x627*x628)));

	if (t96 != 4279864073U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x629 = INT32_MAX;
	uint8_t x630 = 1U;
	static uint64_t x631 = 10390142300619LLU;
	volatile int32_t x632 = -1;
	volatile uint64_t t97 = 29895526068787LLU;

	t97 = (x629*(x630-(x631*x632)));

	if (t97 != 10547095469560057396LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x633 = INT8_MIN;
	volatile int16_t x634 = -12;
	int16_t x635 = INT16_MIN;
	uint32_t x636 = 63U;
	volatile uint32_t t98 = 1911811U;

	t98 = (x633*(x634-(x635*x636)));

	if (t98 != 4030727680U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x641 = 121U;
	volatile int8_t x642 = INT8_MAX;
	static volatile int64_t x643 = -1LL;
	int32_t x644 = INT32_MAX;

	t99 = (x641*(x642-(x643*x644)));

	if (t99 != 259845536654LL) { NG(); } else { ; }
	
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

