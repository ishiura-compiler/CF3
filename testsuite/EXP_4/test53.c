#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = -1323493253LL;
static int8_t x8 = INT8_MIN;
int64_t x11 = INT64_MAX;
int8_t x17 = -23;
int32_t t4 = 722607;
volatile uint8_t x30 = UINT8_MAX;
static uint32_t x34 = UINT32_MAX;
int32_t x43 = 138;
static int64_t x44 = INT64_MIN;
static volatile int64_t t7 = -7490882690357657LL;
uint8_t x45 = 63U;
static volatile int32_t x55 = 10627;
uint32_t t10 = 135006331U;
int8_t x63 = 1;
volatile int32_t t11 = -15801;
int16_t x69 = INT16_MAX;
int16_t x75 = INT16_MAX;
static int32_t t13 = 4079;
uint8_t x77 = 23U;
int64_t t17 = -17135781LL;
uint16_t x101 = UINT16_MAX;
uint32_t x104 = 146611U;
int16_t x107 = INT16_MAX;
int16_t x115 = 339;
int8_t x121 = INT8_MAX;
int32_t x122 = -3126121;
uint32_t x123 = UINT32_MAX;
int16_t x124 = INT16_MIN;
int8_t x125 = INT8_MAX;
int16_t x128 = INT16_MAX;
int64_t t24 = -2001118436902LL;
volatile int64_t x139 = INT64_MIN;
int64_t t30 = 132046348818LL;
static int8_t x176 = INT8_MIN;
uint64_t t31 = 13975639LLU;
volatile int16_t x181 = 0;
uint64_t t33 = 41LLU;
int8_t x192 = -1;
int8_t x203 = -1;
static int8_t x205 = -1;
static volatile int16_t x210 = 2;
static uint32_t x216 = 1931U;
int8_t x220 = -1;
static uint16_t x270 = UINT16_MAX;
uint8_t x275 = 47U;
int32_t x280 = INT32_MIN;
volatile int8_t x285 = -1;
volatile int64_t x287 = -1LL;
volatile int64_t t54 = 112890802135LL;
volatile uint8_t x292 = UINT8_MAX;
int8_t x310 = -5;
volatile int8_t x319 = 9;
uint8_t x320 = 85U;
int64_t t60 = 254481329199LL;
static int32_t x321 = INT32_MIN;
volatile int8_t x329 = -5;
int16_t x332 = 1;
volatile int16_t x333 = 1460;
static int16_t x341 = INT16_MIN;
uint32_t x344 = UINT32_MAX;
int32_t x352 = INT32_MAX;
volatile uint64_t t68 = 15003072LLU;
uint32_t x353 = 7845U;
volatile int8_t x367 = 1;
volatile uint64_t t72 = 34056884910201236LLU;
uint64_t x381 = UINT64_MAX;
volatile int16_t x382 = -82;
static uint16_t x386 = UINT16_MAX;
int32_t x399 = -3;
uint32_t t76 = 1U;
int8_t x409 = INT8_MIN;
uint8_t x413 = UINT8_MAX;
static volatile uint32_t t80 = UINT32_MAX;
int32_t x424 = 1;
int8_t x429 = INT8_MAX;
static uint8_t x437 = 53U;
volatile int8_t x440 = -1;
uint64_t x447 = 14LLU;
uint16_t x454 = UINT16_MAX;
int64_t t89 = -7639LL;
int8_t x475 = INT8_MIN;
int16_t x481 = INT16_MAX;
uint32_t x482 = 161449869U;
int64_t x491 = -1LL;
volatile int16_t x492 = INT16_MIN;
volatile uint8_t x500 = 99U;
uint8_t x506 = 27U;
static volatile int32_t x512 = 23146;
volatile uint8_t x514 = 5U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x2 = UINT16_MAX;
	volatile int16_t x3 = INT16_MIN;
	uint8_t x4 = 59U;

	t0 = (x1+(x2%(x3+x4)));

	if (t0 != -9223372036854775691LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -400990856LL;
	static int32_t x6 = INT32_MIN;
	int64_t x7 = -1LL;
	int64_t t1 = 2031423977329346LL;

	t1 = (x5+(x6%(x7+x8)));

	if (t1 != -400990864LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile uint16_t x10 = 11U;
	static int64_t x12 = INT64_MIN;
	int64_t t2 = -174543LL;

	t2 = (x9+(x10%(x11+x12)));

	if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = INT64_MIN;
	uint32_t x19 = UINT32_MAX;
	static volatile uint64_t x20 = 2333522000LLU;
	volatile uint64_t t3 = 4367LLU;

	t3 = (x17+(x18%(x19+x20)));

	if (t3 != 5659897230LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = -6439372;
	uint8_t x23 = UINT8_MAX;
	int32_t x24 = -1;

	t4 = (x21+(x22%(x23+x24)));

	if (t4 != -346) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 125U;
	static int64_t x31 = INT64_MIN;
	volatile uint64_t x32 = 4286420875106565LLU;
	uint64_t t5 = 856963170363081271LLU;

	t5 = (x29+(x30%(x31+x32)));

	if (t5 != 380LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 3LLU;
	static volatile uint8_t x35 = 19U;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t6 = 15846434632662137LLU;

	t6 = (x33+(x34%(x35+x36)));

	if (t6 != 6LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x41 = -1LL;
	int32_t x42 = -1;

	t7 = (x41+(x42%(x43+x44)));

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x46 = INT64_MAX;
	int16_t x47 = INT16_MIN;
	static int64_t x48 = -172865038281LL;
	volatile int64_t t8 = 723041856128137235LL;

	t8 = (x45+(x46%(x47+x48)));

	if (t8 != 73876223623LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MIN;
	int32_t x51 = 21494588;
	uint64_t x52 = 17621LLU;
	volatile uint64_t t9 = 3705093326415962LLU;

	t9 = (x49+(x50%(x51+x52)));

	if (t9 != 6855573LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = INT8_MIN;
	static volatile int8_t x54 = 1;
	static uint32_t x56 = 3094950U;

	t10 = (x53+(x54%(x55+x56)));

	if (t10 != 4294967169U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = 6835650;
	volatile int8_t x62 = INT8_MIN;
	uint8_t x64 = UINT8_MAX;

	t11 = (x61+(x62%(x63+x64)));

	if (t11 != 6835522) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x70 = 3;
	int8_t x71 = -1;
	uint64_t x72 = UINT64_MAX;
	uint64_t t12 = 3723909LLU;

	t12 = (x69+(x70%(x71+x72)));

	if (t12 != 32770LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = UINT8_MAX;
	volatile int8_t x74 = 0;
	int16_t x76 = -1;

	t13 = (x73+(x74%(x75+x76)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x78 = UINT8_MAX;
	uint64_t x79 = 14LLU;
	volatile uint32_t x80 = 9U;
	volatile uint64_t t14 = 176906973271020878LLU;

	t14 = (x77+(x78%(x79+x80)));

	if (t14 != 25LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x82 = UINT16_MAX;
	static int64_t x83 = INT64_MAX;
	int8_t x84 = 0;
	volatile int64_t t15 = -16658622218855626LL;

	t15 = (x81+(x82%(x83+x84)));

	if (t15 != 32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x85 = 990U;
	volatile uint64_t x86 = 14129315LLU;
	static int32_t x87 = 48;
	int32_t x88 = 12;
	volatile uint64_t t16 = 3017754904549605798LLU;

	t16 = (x85+(x86%(x87+x88)));

	if (t16 != 1025LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -3143698LL;
	int16_t x94 = 7089;
	int32_t x95 = -1;
	volatile uint8_t x96 = UINT8_MAX;

	t17 = (x93+(x94%(x95+x96)));

	if (t17 != -3143467LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x102 = 30U;
	int64_t x103 = 31208215LL;
	int64_t t18 = -601991242LL;

	t18 = (x101+(x102%(x103+x104)));

	if (t18 != 65565LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x105 = 8362423U;
	int64_t x106 = INT64_MIN;
	static uint32_t x108 = 23066380U;
	volatile int64_t t19 = 1LL;

	t19 = (x105+(x106%(x107+x108)));

	if (t19 != 1639069LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x113 = -315638114452306722LL;
	int64_t x114 = INT64_MIN;
	int16_t x116 = -1;
	int64_t t20 = 2617LL;

	t20 = (x113+(x114%(x115+x116)));

	if (t20 != -315638114452306938LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = -1;
	int8_t x118 = -1;
	int64_t x119 = -1LL;
	volatile uint8_t x120 = UINT8_MAX;
	static volatile int64_t t21 = -49690488LL;

	t21 = (x117+(x118%(x119+x120)));

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t t22 = 1U;

	t22 = (x121+(x122%(x123+x124)));

	if (t22 != 4291841302U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x126 = 7717384585349988LL;
	uint64_t x127 = UINT64_MAX;
	volatile uint64_t t23 = 0LLU;

	t23 = (x125+(x126%(x127+x128)));

	if (t23 != 15535LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x133 = UINT16_MAX;
	int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MAX;
	int64_t x136 = INT64_MIN;

	t24 = (x133+(x134%(x135+x136)));

	if (t24 != 98301LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MIN;
	int8_t x140 = INT8_MAX;
	int64_t t25 = 3229127LL;

	t25 = (x137+(x138%(x139+x140)));

	if (t25 != -256LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x141 = 6042398U;
	int8_t x142 = INT8_MAX;
	int64_t x143 = INT64_MIN;
	uint16_t x144 = UINT16_MAX;
	static volatile int64_t t26 = 346854012LL;

	t26 = (x141+(x142%(x143+x144)));

	if (t26 != 6042525LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = -15;
	int32_t x146 = INT32_MAX;
	uint32_t x147 = UINT32_MAX;
	static int32_t x148 = INT32_MIN;
	volatile uint32_t t27 = 2075808876U;

	t27 = (x145+(x146%(x147+x148)));

	if (t27 != 4294967281U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = 57862LLU;
	volatile int32_t x150 = -40;
	int8_t x151 = INT8_MIN;
	int64_t x152 = 258134911LL;
	volatile uint64_t t28 = 8004206270LLU;

	t28 = (x149+(x150%(x151+x152)));

	if (t28 != 57822LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = 1;
	int8_t x158 = -43;
	static uint32_t x159 = 490U;
	static uint64_t x160 = 293062625706279LLU;
	static volatile uint64_t t29 = 74571674845043LLU;

	t29 = (x157+(x158%(x159+x160)));

	if (t29 != 210161222683638LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = 2693411;
	uint8_t x163 = UINT8_MAX;
	int64_t x164 = INT64_MIN;

	t30 = (x161+(x162%(x163+x164)));

	if (t30 != 2660643LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x173 = 2304265LLU;
	int64_t x174 = -627523030LL;
	int32_t x175 = -1;

	t31 = (x173+(x174%(x175+x176)));

	if (t31 != 2304186LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x177 = 515;
	static volatile int64_t x178 = INT64_MIN;
	static uint16_t x179 = 290U;
	int16_t x180 = INT16_MIN;
	volatile int64_t t32 = -124411783624LL;

	t32 = (x177+(x178%(x179+x180)));

	if (t32 != -22401LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x182 = INT64_MAX;
	uint64_t x183 = 56991LLU;
	uint64_t x184 = 2019354LLU;

	t33 = (x181+(x182%(x183+x184)));

	if (t33 != 1960702LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x189 = 128157;
	int64_t x190 = INT64_MIN;
	static uint32_t x191 = 5U;
	static int64_t t34 = 3835603609631LL;

	t34 = (x189+(x190%(x191+x192)));

	if (t34 != 128157LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MAX;
	uint8_t x195 = UINT8_MAX;
	uint64_t x196 = 104938519827480LLU;
	volatile uint64_t t35 = 406793350284LLU;

	t35 = (x193+(x194%(x195+x196)));

	if (t35 != 2147483519LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = INT16_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = -1;
	volatile int32_t x200 = -1;
	volatile int32_t t36 = 145623;

	t36 = (x197+(x198%(x199+x200)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = 0LLU;
	uint32_t x202 = 525993217U;
	uint16_t x204 = UINT16_MAX;
	uint64_t t37 = 4042309373002LLU;

	t37 = (x201+(x202%(x203+x204)));

	if (t37 != 17333LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x206 = -45;
	int16_t x207 = -1;
	int16_t x208 = INT16_MAX;
	volatile int32_t t38 = 162757;

	t38 = (x205+(x206%(x207+x208)));

	if (t38 != -46) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x209 = INT16_MIN;
	uint16_t x211 = UINT16_MAX;
	uint32_t x212 = 122936U;
	static volatile uint32_t t39 = 16U;

	t39 = (x209+(x210%(x211+x212)));

	if (t39 != 4294934530U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MIN;
	static volatile uint8_t x215 = UINT8_MAX;
	uint32_t t40 = 1019303043U;

	t40 = (x213+(x214%(x215+x216)));

	if (t40 != 1680U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x217 = 35U;
	uint32_t x218 = UINT32_MAX;
	static volatile int8_t x219 = INT8_MIN;
	volatile uint32_t t41 = 33627413U;

	t41 = (x217+(x218%(x219+x220)));

	if (t41 != 163U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x221 = UINT32_MAX;
	uint64_t x222 = 199LLU;
	static volatile int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MAX;
	uint64_t t42 = 13866075296800397LLU;

	t42 = (x221+(x222%(x223+x224)));

	if (t42 != 4294967494LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MIN;
	uint64_t x227 = 295412LLU;
	volatile int16_t x228 = -1;
	volatile uint64_t t43 = 980656912055348LLU;

	t43 = (x225+(x226%(x227+x228)));

	if (t43 != 196081LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x229 = 5U;
	int8_t x230 = 1;
	uint32_t x231 = 111U;
	int16_t x232 = INT16_MIN;
	uint32_t t44 = 60U;

	t44 = (x229+(x230%(x231+x232)));

	if (t44 != 6U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x241 = 4247LLU;
	int8_t x242 = -2;
	int8_t x243 = INT8_MAX;
	static uint64_t x244 = 3519916518376LLU;
	volatile uint64_t t45 = 46LLU;

	t45 = (x241+(x242%(x243+x244)));

	if (t45 != 2053187327833LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x245 = 15;
	int8_t x246 = INT8_MIN;
	uint8_t x247 = 25U;
	uint16_t x248 = UINT16_MAX;
	int32_t t46 = 1412272;

	t46 = (x245+(x246%(x247+x248)));

	if (t46 != -113) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = 701968;
	static volatile int64_t x259 = INT64_MIN;
	int64_t x260 = 469LL;
	int64_t t47 = 13609152926226537LL;

	t47 = (x257+(x258%(x259+x260)));

	if (t47 != 701840LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x261 = UINT8_MAX;
	int8_t x262 = -2;
	int16_t x263 = INT16_MIN;
	int16_t x264 = -54;
	volatile int32_t t48 = -742226;

	t48 = (x261+(x262%(x263+x264)));

	if (t48 != 253) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x266 = 31924LLU;
	static volatile int16_t x267 = INT16_MIN;
	volatile uint32_t x268 = 0U;
	static volatile uint64_t t49 = 233128264208168073LLU;

	t49 = (x265+(x266%(x267+x268)));

	if (t49 != 31796LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x269 = -3;
	int8_t x271 = -1;
	uint8_t x272 = UINT8_MAX;
	int32_t t50 = 1128;

	t50 = (x269+(x270%(x271+x272)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int32_t x274 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t51 = -6;

	t51 = (x273+(x274%(x275+x276)));

	if (t51 != 61117) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x277 = 3907018671120495LL;
	int32_t x278 = -1;
	volatile uint32_t x279 = UINT32_MAX;
	volatile int64_t t52 = 373897LL;

	t52 = (x277+(x278%(x279+x280)));

	if (t52 != 3907018671120496LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x281 = -1;
	static uint8_t x282 = 14U;
	int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MAX;
	volatile int32_t t53 = -189;

	t53 = (x281+(x282%(x283+x284)));

	if (t53 != 13) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x286 = UINT8_MAX;
	int8_t x288 = -45;

	t54 = (x285+(x286%(x287+x288)));

	if (t54 != 24LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x289 = -3740;
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	int64_t t55 = 6170901009756LL;

	t55 = (x289+(x290%(x291+x292)));

	if (t55 != -133790LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x293 = UINT8_MAX;
	int8_t x294 = INT8_MIN;
	volatile uint32_t x295 = UINT32_MAX;
	int64_t x296 = 3143359LL;
	volatile int64_t t56 = -309159747LL;

	t56 = (x293+(x294%(x295+x296)));

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x297 = 0U;
	volatile int32_t x298 = -46;
	uint32_t x299 = 78U;
	volatile int32_t x300 = -1;
	uint32_t t57 = 1219140691U;

	t57 = (x297+(x298%(x299+x300)));

	if (t57 != 35U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x309 = 46;
	int32_t x311 = -94454;
	static uint8_t x312 = UINT8_MAX;
	static int32_t t58 = -7914;

	t58 = (x309+(x310%(x311+x312)));

	if (t58 != 41) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x313 = -655;
	int64_t x314 = INT64_MIN;
	static uint64_t x315 = UINT64_MAX;
	uint8_t x316 = UINT8_MAX;
	volatile uint64_t t59 = 205077977873LLU;

	t59 = (x313+(x314%(x315+x316)));

	if (t59 != 18446744073709551089LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x317 = -1LL;
	int64_t x318 = 55LL;

	t60 = (x317+(x318%(x319+x320)));

	if (t60 != 54LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x322 = 5508;
	volatile int8_t x323 = 33;
	static volatile int8_t x324 = INT8_MAX;
	int32_t t61 = -414167;

	t61 = (x321+(x322%(x323+x324)));

	if (t61 != -2147483580) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x325 = 1;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	volatile uint32_t x328 = 8U;
	volatile uint32_t t62 = 9U;

	t62 = (x325+(x326%(x327+x328)));

	if (t62 != 32633U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x330 = 0U;
	int32_t x331 = -7;
	volatile int32_t t63 = -131054;

	t63 = (x329+(x330%(x331+x332)));

	if (t63 != -5) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x334 = UINT8_MAX;
	volatile int32_t x335 = -17834411;
	static int8_t x336 = -1;
	static volatile int32_t t64 = -352595153;

	t64 = (x333+(x334%(x335+x336)));

	if (t64 != 1715) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x337 = INT16_MAX;
	int32_t x338 = INT32_MAX;
	int8_t x339 = INT8_MIN;
	volatile int16_t x340 = 475;
	int32_t t65 = 8;

	t65 = (x337+(x338%(x339+x340)));

	if (t65 != 33003) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x342 = 32U;
	volatile int16_t x343 = INT16_MIN;
	volatile uint32_t t66 = 1422U;

	t66 = (x341+(x342%(x343+x344)));

	if (t66 != 4294934560U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x345 = -2;
	int32_t x346 = -107853;
	int16_t x347 = -97;
	static uint32_t x348 = 0U;
	static uint32_t t67 = 128997169U;

	t67 = (x345+(x346%(x347+x348)));

	if (t67 != 4294859441U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = -1;
	static uint64_t x350 = 1885354561794LLU;
	int32_t x351 = INT32_MIN;

	t68 = (x349+(x350%(x351+x352)));

	if (t68 != 1885354561793LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x354 = UINT32_MAX;
	int16_t x355 = INT16_MIN;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t69 = 869415LLU;

	t69 = (x353+(x354%(x355+x356)));

	if (t69 != 4294975140LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x357 = UINT32_MAX;
	static volatile uint32_t x358 = 1U;
	uint8_t x359 = 107U;
	int16_t x360 = 735;
	volatile uint32_t t70 = 26U;

	t70 = (x357+(x358%(x359+x360)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x365 = -11;
	volatile int32_t x366 = -1;
	int64_t x368 = -13418191122289LL;
	int64_t t71 = -24246059865277LL;

	t71 = (x365+(x366%(x367+x368)));

	if (t71 != -12LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x369 = 2591200638LLU;
	static int64_t x370 = -3714981387035103LL;
	volatile uint64_t x371 = UINT64_MAX;
	int8_t x372 = INT8_MIN;

	t72 = (x369+(x370%(x371+x372)));

	if (t72 != 18443029094913717151LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x383 = INT8_MIN;
	int16_t x384 = -29;
	static uint64_t t73 = 297505109919660831LLU;

	t73 = (x381+(x382%(x383+x384)));

	if (t73 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x385 = -13214747229760LL;
	int64_t x387 = INT64_MIN;
	uint32_t x388 = 14U;
	volatile int64_t t74 = -69152578LL;

	t74 = (x385+(x386%(x387+x388)));

	if (t74 != -13214747164225LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MAX;
	static int64_t x395 = INT64_MIN;
	uint16_t x396 = 218U;
	volatile int64_t t75 = -724083242789579521LL;

	t75 = (x393+(x394%(x395+x396)));

	if (t75 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x397 = 0;
	uint32_t x398 = UINT32_MAX;
	uint16_t x400 = 6U;

	t76 = (x397+(x398%(x399+x400)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x401 = INT16_MAX;
	int32_t x402 = INT32_MAX;
	static int16_t x403 = INT16_MAX;
	static int16_t x404 = INT16_MIN;
	int32_t t77 = -52185;

	t77 = (x401+(x402%(x403+x404)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MIN;
	uint16_t x412 = 2U;
	static volatile int32_t t78 = -2942436;

	t78 = (x409+(x410%(x411+x412)));

	if (t78 != -136) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x414 = UINT16_MAX;
	volatile uint8_t x415 = 48U;
	int32_t x416 = INT32_MIN;
	volatile int32_t t79 = 4003443;

	t79 = (x413+(x414%(x415+x416)));

	if (t79 != 65790) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MAX;
	uint32_t x419 = 404053131U;
	int8_t x420 = 38;

	t80 = (x417+(x418%(x419+x420)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x421 = 185;
	uint64_t x422 = 127593804232LLU;
	uint32_t x423 = 393U;
	volatile uint64_t t81 = 7508513LLU;

	t81 = (x421+(x422%(x423+x424)));

	if (t81 != 469LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x430 = INT8_MIN;
	uint32_t x431 = 639869U;
	int32_t x432 = 5604;
	volatile uint32_t t82 = 5667U;

	t82 = (x429+(x430%(x431+x432)));

	if (t82 != 635426U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x433 = 55021049223011200LLU;
	int8_t x434 = 3;
	static int32_t x435 = INT32_MIN;
	int8_t x436 = INT8_MAX;
	volatile uint64_t t83 = 14330546746275LLU;

	t83 = (x433+(x434%(x435+x436)));

	if (t83 != 55021049223011203LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x438 = INT8_MAX;
	int16_t x439 = -3;
	volatile int32_t t84 = 1427;

	t84 = (x437+(x438%(x439+x440)));

	if (t84 != 56) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x445 = INT32_MIN;
	int64_t x446 = INT64_MIN;
	volatile int32_t x448 = -1656;
	uint64_t t85 = 2928658186713LLU;

	t85 = (x445+(x446%(x447+x448)));

	if (t85 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x449 = 2U;
	volatile int32_t x450 = INT32_MIN;
	uint8_t x451 = 2U;
	int16_t x452 = INT16_MIN;
	int32_t t86 = -4300;

	t86 = (x449+(x450%(x451+x452)));

	if (t86 != -6) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x453 = -1272094046763412LL;
	volatile uint32_t x455 = UINT32_MAX;
	static volatile uint64_t x456 = 265LLU;
	volatile uint64_t t87 = 13LLU;

	t87 = (x453+(x454%(x455+x456)));

	if (t87 != 18445471979662853739LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x457 = INT64_MIN;
	static int8_t x458 = INT8_MAX;
	uint64_t x459 = 108LLU;
	uint64_t x460 = 2430704LLU;
	volatile uint64_t t88 = 63821LLU;

	t88 = (x457+(x458%(x459+x460)));

	if (t88 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x461 = -6;
	volatile int8_t x462 = -1;
	static int64_t x463 = -6983534870033135LL;
	static volatile uint16_t x464 = 12U;

	t89 = (x461+(x462%(x463+x464)));

	if (t89 != -7LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x465 = UINT32_MAX;
	uint8_t x466 = 0U;
	volatile uint64_t x467 = 459689087082LLU;
	int32_t x468 = INT32_MIN;
	volatile uint64_t t90 = 12435346LLU;

	t90 = (x465+(x466%(x467+x468)));

	if (t90 != 4294967295LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x473 = UINT64_MAX;
	static uint16_t x474 = UINT16_MAX;
	int16_t x476 = 270;
	static uint64_t t91 = 7465LLU;

	t91 = (x473+(x474%(x475+x476)));

	if (t91 != 72LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x477 = 0;
	int64_t x478 = 6158550705807237LL;
	int16_t x479 = -1;
	static int8_t x480 = INT8_MIN;
	int64_t t92 = -192333712802546435LL;

	t92 = (x477+(x478%(x479+x480)));

	if (t92 != 69LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x483 = INT32_MIN;
	int64_t x484 = -7632LL;
	volatile int64_t t93 = 222764638848405LL;

	t93 = (x481+(x482%(x483+x484)));

	if (t93 != 161482636LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x489 = -1170484847LL;
	uint32_t x490 = 1928U;
	int64_t t94 = -131588LL;

	t94 = (x489+(x490%(x491+x492)));

	if (t94 != -1170482919LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x497 = UINT8_MAX;
	int8_t x498 = INT8_MIN;
	int64_t x499 = INT64_MIN;
	static int64_t t95 = -13055796LL;

	t95 = (x497+(x498%(x499+x500)));

	if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x501 = 1231133483U;
	int32_t x502 = -3523337;
	int8_t x503 = INT8_MIN;
	uint8_t x504 = UINT8_MAX;
	static uint32_t t96 = 6470U;

	t96 = (x501+(x502%(x503+x504)));

	if (t96 != 1231133380U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x505 = INT16_MAX;
	int8_t x507 = INT8_MIN;
	uint8_t x508 = 22U;
	int32_t t97 = -18;

	t97 = (x505+(x506%(x507+x508)));

	if (t97 != 32794) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x509 = 1408614710509102LL;
	static uint16_t x510 = 43U;
	static int32_t x511 = -1;
	volatile int64_t t98 = -1384999346101LL;

	t98 = (x509+(x510%(x511+x512)));

	if (t98 != 1408614710509145LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x513 = 31U;
	uint32_t x515 = UINT32_MAX;
	static volatile int16_t x516 = -929;
	volatile uint32_t t99 = 119U;

	t99 = (x513+(x514%(x515+x516)));

	if (t99 != 36U) { NG(); } else { ; }
	
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

