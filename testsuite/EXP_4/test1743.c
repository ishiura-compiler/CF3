#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
int32_t x8 = -505311768;
static int64_t x14 = -29963LL;
int64_t t1 = -109391962550609LL;
int32_t x18 = -56586;
static int64_t x20 = -1LL;
int16_t x26 = -9;
uint64_t x31 = 48LLU;
uint64_t x34 = UINT64_MAX;
volatile int8_t x42 = INT8_MAX;
uint8_t x44 = 24U;
volatile int32_t x50 = INT32_MIN;
uint64_t t10 = 3553730LLU;
int64_t x54 = -1LL;
uint16_t x58 = 465U;
static int8_t x66 = INT8_MIN;
int32_t x82 = -15;
int32_t x93 = INT32_MAX;
uint32_t x99 = 23478U;
uint8_t x100 = 5U;
int8_t x104 = INT8_MIN;
static volatile int64_t t22 = -1175457848658710LL;
static uint64_t x127 = 2044718813LLU;
int8_t x140 = INT8_MIN;
uint32_t x146 = 2800050U;
int16_t x162 = INT16_MIN;
uint64_t x163 = 1435003LLU;
volatile int8_t x165 = 49;
volatile int64_t t31 = 28204LL;
uint64_t x169 = 1952359774LLU;
int32_t x171 = -2814866;
int16_t x181 = INT16_MIN;
volatile int64_t t33 = -7330802661160LL;
int16_t x193 = INT16_MIN;
volatile uint64_t t36 = 18720LLU;
int16_t x199 = INT16_MIN;
volatile int64_t x201 = 87LL;
int32_t x203 = 9834;
uint8_t x205 = 23U;
int8_t x206 = INT8_MIN;
uint8_t x217 = UINT8_MAX;
volatile uint64_t x246 = UINT64_MAX;
static volatile uint32_t t45 = 3U;
static int8_t x261 = INT8_MIN;
static int32_t x269 = INT32_MIN;
volatile uint64_t x278 = UINT64_MAX;
int8_t x279 = INT8_MAX;
int32_t x286 = INT32_MIN;
uint16_t x288 = 5190U;
int64_t x290 = 8126233LL;
uint8_t x307 = UINT8_MAX;
int16_t x317 = -3269;
volatile uint32_t x324 = 92U;
uint64_t x326 = 381921749756213294LLU;
uint16_t x328 = 570U;
int32_t x341 = 20;
volatile uint64_t x347 = 176568LLU;
int64_t x349 = INT64_MIN;
int8_t x352 = 20;
uint64_t t62 = 1600232248839LLU;
int64_t x376 = INT64_MAX;
volatile int64_t t65 = 28651543980LL;
uint16_t x377 = 7539U;
static int8_t x388 = -1;
static int16_t x399 = -853;
volatile int16_t x402 = -2285;
static int64_t x409 = -2870783LL;
static int16_t x410 = INT16_MIN;
volatile int32_t x418 = INT32_MIN;
uint8_t x419 = 78U;
static int64_t t73 = -96362LL;
static uint64_t x421 = 412LLU;
int64_t x432 = -1LL;
int32_t x442 = INT32_MIN;
volatile int64_t x443 = INT64_MAX;
int8_t x446 = INT8_MIN;
static volatile int32_t t80 = -2;
uint64_t x463 = UINT64_MAX;
volatile uint64_t t81 = 196LLU;
static int64_t x470 = INT64_MAX;
static int32_t x473 = INT32_MIN;
volatile int32_t x477 = 6;
static int64_t x479 = 1132790268858698LL;
static int8_t x481 = INT8_MIN;
int64_t x497 = -1LL;
uint32_t x498 = UINT32_MAX;
volatile int32_t x509 = -1;
int64_t x515 = -34343965231383653LL;
static uint64_t x521 = 3020178967LLU;
int32_t x525 = INT32_MAX;
volatile int8_t x532 = -1;
volatile uint64_t t95 = 31LLU;
volatile uint16_t x545 = 468U;
uint64_t t96 = 10259787298LLU;
int64_t x554 = -1LL;


void f0(void) {
	uint32_t x6 = 14959U;
	static uint64_t x7 = UINT64_MAX;
	volatile uint64_t t0 = 206LLU;

	t0 = (x5+(x6%(x7&x8)));

	if (t0 != 9223372036854790767LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x13 = UINT16_MAX;
	int32_t x15 = 26165021;
	int8_t x16 = 58;

	t1 = (x13+(x14%(x15&x16)));

	if (t1 != 65524LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -109482991895LL;
	static int64_t x19 = INT64_MIN;
	volatile int64_t t2 = -1602029386871LL;

	t2 = (x17+(x18%(x19&x20)));

	if (t2 != -109483048481LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -5;
	int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MIN;
	int8_t x24 = -1;
	volatile int32_t t3 = 1610842;

	t3 = (x21+(x22%(x23&x24)));

	if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 1430797584U;
	int8_t x27 = -1;
	int64_t x28 = INT64_MAX;
	volatile int64_t t4 = 2056005246292LL;

	t4 = (x25+(x26%(x27&x28)));

	if (t4 != 1430797575LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 1175091096841095685LLU;
	volatile int64_t x30 = INT64_MAX;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t5 = 1135121801LLU;

	t5 = (x29+(x30%(x31&x32)));

	if (t5 != 1175091096841095716LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = INT16_MIN;
	int8_t x35 = -34;
	uint16_t x36 = UINT16_MAX;
	uint64_t t6 = 1944LLU;

	t6 = (x33+(x34%(x35&x36)));

	if (t6 != 18446744073709545143LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = INT16_MIN;
	int64_t x38 = -1052182202935LL;
	static int8_t x39 = -1;
	int8_t x40 = -3;
	volatile int64_t t7 = -120239596464331426LL;

	t7 = (x37+(x38%(x39&x40)));

	if (t7 != -32769LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = 226;
	uint32_t x43 = 7358U;
	volatile uint32_t t8 = 1014112379U;

	t8 = (x41+(x42%(x43&x44)));

	if (t8 != 233U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x45 = UINT16_MAX;
	volatile uint32_t x46 = 413824708U;
	int32_t x47 = -1;
	static int64_t x48 = -6191LL;
	int64_t t9 = 20LL;

	t9 = (x45+(x46%(x47&x48)));

	if (t9 != 71421LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = -1;

	t10 = (x49+(x50%(x51&x52)));

	if (t10 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1;
	uint16_t x55 = 44U;
	volatile int64_t x56 = -1LL;
	static int64_t t11 = 5240200LL;

	t11 = (x53+(x54%(x55&x56)));

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 103;
	uint8_t x59 = UINT8_MAX;
	uint16_t x60 = 4U;
	volatile int32_t t12 = 20;

	t12 = (x57+(x58%(x59&x60)));

	if (t12 != 104) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x65 = 22233U;
	uint64_t x67 = 4200532353LLU;
	uint64_t x68 = UINT64_MAX;
	static volatile uint64_t t13 = 11460967611LLU;

	t13 = (x65+(x66%(x67&x68)));

	if (t13 != 1445269292LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 14852811LLU;
	int16_t x70 = INT16_MAX;
	volatile uint8_t x71 = UINT8_MAX;
	int16_t x72 = 74;
	volatile uint64_t t14 = 94871094280212641LLU;

	t14 = (x69+(x70%(x71&x72)));

	if (t14 != 14852870LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 27565U;
	int32_t x74 = INT32_MIN;
	int32_t x75 = 12419798;
	int32_t x76 = -300683;
	static uint32_t t15 = 2982384U;

	t15 = (x73+(x74%(x75&x76)));

	if (t15 != 4293502401U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = INT32_MAX;
	int16_t x83 = -376;
	static int64_t x84 = INT64_MIN;
	volatile int64_t t16 = 66164371434968LL;

	t16 = (x81+(x82%(x83&x84)));

	if (t16 != 2147483632LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MIN;
	int64_t x86 = -1LL;
	static int32_t x87 = 1794;
	static volatile uint64_t x88 = 7208LLU;
	volatile uint64_t t17 = 1399426972701766LLU;

	t17 = (x85+(x86%(x87&x88)));

	if (t17 != 18446744073709519871LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -1;
	int32_t x90 = -1;
	int64_t x91 = INT64_MAX;
	int64_t x92 = -1LL;
	volatile int64_t t18 = 101LL;

	t18 = (x89+(x90%(x91&x92)));

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = 5;
	uint32_t x95 = UINT32_MAX;
	uint8_t x96 = UINT8_MAX;
	uint32_t t19 = 1U;

	t19 = (x93+(x94%(x95&x96)));

	if (t19 != 2147483652U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 81984312795317LL;
	static int64_t x98 = INT64_MIN;
	volatile int64_t t20 = 715592917LL;

	t20 = (x97+(x98%(x99&x100)));

	if (t20 != 81984312795317LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x101 = 63U;
	int16_t x102 = INT16_MIN;
	uint16_t x103 = 4055U;
	volatile uint32_t t21 = 218U;

	t21 = (x101+(x102%(x103&x104)));

	if (t21 != 4294966335U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = INT64_MIN;
	volatile uint8_t x118 = 3U;
	int16_t x119 = INT16_MAX;
	uint8_t x120 = 5U;

	t22 = (x117+(x118%(x119&x120)));

	if (t22 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x121 = 44U;
	int8_t x122 = INT8_MAX;
	static int16_t x123 = INT16_MIN;
	uint64_t x124 = 287636555497552LLU;
	volatile uint64_t t23 = 7317400738LLU;

	t23 = (x121+(x122%(x123&x124)));

	if (t23 != 171LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = UINT16_MAX;
	uint8_t x126 = 22U;
	volatile int64_t x128 = -1LL;
	volatile uint64_t t24 = 23432762221875LLU;

	t24 = (x125+(x126%(x127&x128)));

	if (t24 != 65557LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x133 = UINT64_MAX;
	uint16_t x134 = 12316U;
	uint32_t x135 = UINT32_MAX;
	uint8_t x136 = 4U;
	static volatile uint64_t t25 = UINT64_MAX;

	t25 = (x133+(x134%(x135&x136)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MAX;
	static int32_t x138 = 4774294;
	int64_t x139 = INT64_MIN;
	static volatile int64_t t26 = 1004678LL;

	t26 = (x137+(x138%(x139&x140)));

	if (t26 != 2152257941LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x141 = 1U;
	volatile uint16_t x142 = 155U;
	int16_t x143 = 1989;
	int16_t x144 = INT16_MAX;
	int32_t t27 = 499956272;

	t27 = (x141+(x142%(x143&x144)));

	if (t27 != 156) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MIN;
	int32_t x147 = -1;
	static uint32_t x148 = UINT32_MAX;
	uint32_t t28 = 2079811U;

	t28 = (x145+(x146%(x147&x148)));

	if (t28 != 2799922U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x153 = UINT32_MAX;
	int64_t x154 = -508437322057710179LL;
	int16_t x155 = -1;
	uint16_t x156 = UINT16_MAX;
	volatile int64_t t29 = 7892541LL;

	t29 = (x153+(x154%(x155&x156)));

	if (t29 != 4294948276LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x161 = INT64_MAX;
	uint64_t x164 = 217LLU;
	static uint64_t t30 = 42LLU;

	t30 = (x161+(x162%(x163&x164)));

	if (t30 != 9223372036854775858LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x166 = -2;
	volatile int16_t x167 = 6;
	int64_t x168 = INT64_MAX;

	t31 = (x165+(x166%(x167&x168)));

	if (t31 != 47LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x170 = INT16_MIN;
	static volatile int64_t x172 = INT64_MIN;
	static volatile uint64_t t32 = 24196359823467LLU;

	t32 = (x169+(x170%(x171&x172)));

	if (t32 != 1952327006LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x182 = INT16_MIN;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = INT64_MAX;

	t33 = (x181+(x182%(x183&x184)));

	if (t33 != -32896LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x185 = 3U;
	int16_t x186 = INT16_MIN;
	volatile int8_t x187 = INT8_MIN;
	volatile int64_t x188 = -1LL;
	int64_t t34 = 1513734553550579587LL;

	t34 = (x185+(x186%(x187&x188)));

	if (t34 != 3LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x189 = -2;
	static int8_t x190 = INT8_MIN;
	volatile int32_t x191 = INT32_MIN;
	int16_t x192 = -1;
	volatile int32_t t35 = -390584763;

	t35 = (x189+(x190%(x191&x192)));

	if (t35 != -130) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x194 = 179116646243LLU;
	uint32_t x195 = 7741675U;
	volatile uint16_t x196 = UINT16_MAX;

	t36 = (x193+(x194%(x195&x196)));

	if (t36 != 18446744073709521661LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x197 = UINT64_MAX;
	int16_t x198 = INT16_MIN;
	static int16_t x200 = -1;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x197+(x198%(x199&x200)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x202 = UINT32_MAX;
	static uint16_t x204 = 325U;
	static volatile int64_t t38 = 5221249LL;

	t38 = (x201+(x202%(x203&x204)));

	if (t38 != 150LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x207 = -1;
	int16_t x208 = 13017;
	volatile int32_t t39 = -1034200214;

	t39 = (x205+(x206%(x207&x208)));

	if (t39 != -105) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = 1;
	int32_t x210 = -1;
	int8_t x211 = -21;
	uint64_t x212 = 716556LLU;
	static volatile uint64_t t40 = 42660413515LLU;

	t40 = (x209+(x210%(x211&x212)));

	if (t40 != 346664LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x218 = UINT16_MAX;
	int64_t x219 = INT64_MIN;
	static int32_t x220 = INT32_MIN;
	int64_t t41 = 3285119470505LL;

	t41 = (x217+(x218%(x219&x220)));

	if (t41 != 65790LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = INT16_MIN;
	volatile int64_t x226 = -1LL;
	int16_t x227 = INT16_MIN;
	volatile int8_t x228 = INT8_MIN;
	static int64_t t42 = -60410641LL;

	t42 = (x225+(x226%(x227&x228)));

	if (t42 != -32769LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x241 = -1LL;
	int16_t x242 = INT16_MIN;
	volatile uint64_t x243 = 277583398943729LLU;
	uint32_t x244 = UINT32_MAX;
	uint64_t t43 = 18LLU;

	t43 = (x241+(x242%(x243&x244)));

	if (t43 != 3206024802LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x245 = UINT8_MAX;
	int8_t x247 = 15;
	static uint32_t x248 = UINT32_MAX;
	volatile uint64_t t44 = 124522216239704643LLU;

	t44 = (x245+(x246%(x247&x248)));

	if (t44 != 255LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x257 = 7456U;
	int8_t x258 = INT8_MAX;
	int32_t x259 = 164;
	uint8_t x260 = 7U;

	t45 = (x257+(x258%(x259&x260)));

	if (t45 != 7459U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x262 = UINT64_MAX;
	int64_t x263 = -1LL;
	uint8_t x264 = 2U;
	uint64_t t46 = 46042269330781LLU;

	t46 = (x261+(x262%(x263&x264)));

	if (t46 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x270 = UINT32_MAX;
	volatile int8_t x271 = -1;
	int8_t x272 = -1;
	volatile uint32_t t47 = 25910174U;

	t47 = (x269+(x270%(x271&x272)));

	if (t47 != 2147483648U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x273 = 17;
	uint8_t x274 = UINT8_MAX;
	static uint64_t x275 = UINT64_MAX;
	uint16_t x276 = 21403U;
	static volatile uint64_t t48 = 2458381872435LLU;

	t48 = (x273+(x274%(x275&x276)));

	if (t48 != 272LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x277 = 670467920450703565LLU;
	uint64_t x280 = 50971424LLU;
	volatile uint64_t t49 = 530181567LLU;

	t49 = (x277+(x278%(x279&x280)));

	if (t49 != 670467920450703596LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x281 = 2U;
	int32_t x282 = INT32_MIN;
	int16_t x283 = 29;
	static uint64_t x284 = 249449379159310614LLU;
	volatile uint64_t t50 = 8485343392439075LLU;

	t50 = (x281+(x282%(x283&x284)));

	if (t50 != 10LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x285 = 33LLU;
	volatile int16_t x287 = -1;
	uint64_t t51 = 18896LLU;

	t51 = (x285+(x286%(x287&x288)));

	if (t51 != 18446744073709549871LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x289 = INT32_MIN;
	volatile int64_t x291 = 58751498112LL;
	static uint64_t x292 = 1072723578363000LLU;
	volatile uint64_t t52 = 242354090737LLU;

	t52 = (x289+(x290%(x291&x292)));

	if (t52 != 18446744071570194201LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x301 = INT8_MIN;
	static uint64_t x302 = UINT64_MAX;
	static uint32_t x303 = UINT32_MAX;
	int32_t x304 = 90116499;
	volatile uint64_t t53 = 731577259199LLU;

	t53 = (x301+(x302%(x303&x304)));

	if (t53 != 24959008LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x305 = 38;
	static int8_t x306 = 2;
	static int32_t x308 = 485558;
	volatile int32_t t54 = -1;

	t54 = (x305+(x306%(x307&x308)));

	if (t54 != 40) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x318 = INT64_MIN;
	int16_t x319 = INT16_MAX;
	uint16_t x320 = UINT16_MAX;
	int64_t t55 = 5967967130547507LL;

	t55 = (x317+(x318%(x319&x320)));

	if (t55 != -3277LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x321 = UINT32_MAX;
	static uint8_t x322 = UINT8_MAX;
	static uint32_t x323 = 1047U;
	volatile uint32_t t56 = 106847429U;

	t56 = (x321+(x322%(x323&x324)));

	if (t56 != 14U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x325 = -37;
	uint16_t x327 = 7U;
	volatile uint64_t t57 = 194218716120LLU;

	t57 = (x325+(x326%(x327&x328)));

	if (t57 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x342 = INT32_MIN;
	volatile int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MIN;
	int64_t t58 = 211381892317039LL;

	t58 = (x341+(x342%(x343&x344)));

	if (t58 != -2147483628LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x345 = INT8_MAX;
	static volatile int8_t x346 = INT8_MIN;
	int8_t x348 = -58;
	volatile uint64_t t59 = 4586410937120LLU;

	t59 = (x345+(x346%(x347&x348)));

	if (t59 != 95999LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MAX;
	volatile int64_t t60 = -217725358647126LL;

	t60 = (x349+(x350%(x351&x352)));

	if (t60 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x353 = -1;
	uint64_t x354 = 964LLU;
	volatile int32_t x355 = INT32_MAX;
	static volatile int32_t x356 = INT32_MAX;
	volatile uint64_t t61 = 1808415712LLU;

	t61 = (x353+(x354%(x355&x356)));

	if (t61 != 963LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x357 = INT16_MIN;
	volatile int32_t x358 = INT32_MIN;
	uint64_t x359 = UINT64_MAX;
	static int8_t x360 = -1;

	t62 = (x357+(x358%(x359&x360)));

	if (t62 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x365 = INT8_MAX;
	int64_t x366 = INT64_MAX;
	int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MIN;
	int64_t t63 = 118984117238LL;

	t63 = (x365+(x366%(x367&x368)));

	if (t63 != 32894LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x369 = INT16_MIN;
	static int8_t x370 = INT8_MIN;
	static uint64_t x371 = UINT64_MAX;
	static uint16_t x372 = 1968U;
	volatile uint64_t t64 = 9LLU;

	t64 = (x369+(x370%(x371&x372)));

	if (t64 != 18446744073709520704LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x373 = INT32_MAX;
	int16_t x374 = 640;
	volatile int16_t x375 = 3800;

	t65 = (x373+(x374%(x375&x376)));

	if (t65 != 2147484287LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x378 = 1U;
	uint16_t x379 = 1U;
	volatile int8_t x380 = INT8_MAX;
	volatile int32_t t66 = 87719529;

	t66 = (x377+(x378%(x379&x380)));

	if (t66 != 7539) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x381 = 1;
	uint8_t x382 = 3U;
	volatile int8_t x383 = INT8_MIN;
	static int64_t x384 = INT64_MIN;
	int64_t t67 = -1000830LL;

	t67 = (x381+(x382%(x383&x384)));

	if (t67 != 4LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x385 = -1;
	int8_t x386 = INT8_MAX;
	int8_t x387 = INT8_MAX;
	int32_t t68 = -969817546;

	t68 = (x385+(x386%(x387&x388)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x397 = 37U;
	uint16_t x398 = 104U;
	volatile uint8_t x400 = 14U;
	int32_t t69 = -4425;

	t69 = (x397+(x398%(x399&x400)));

	if (t69 != 41) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x401 = UINT8_MAX;
	int32_t x403 = INT32_MIN;
	uint64_t x404 = 28003098266286198LLU;
	uint64_t t70 = 22LLU;

	t70 = (x401+(x402%(x403&x404)));

	if (t70 != 20706526960285714LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x405 = -330886884LL;
	int64_t x406 = INT64_MIN;
	int16_t x407 = 3221;
	static uint64_t x408 = 252372589866LLU;
	volatile uint64_t t71 = 8469987882264LLU;

	t71 = (x405+(x406%(x407&x408)));

	if (t71 != 18446744073378666780LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x411 = UINT16_MAX;
	int32_t x412 = INT32_MAX;
	int64_t t72 = 133856037266016LL;

	t72 = (x409+(x410%(x411&x412)));

	if (t72 != -2903551LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x417 = 3471U;
	int64_t x420 = -64730365577235LL;

	t73 = (x417+(x418%(x419&x420)));

	if (t73 != 3411LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x422 = UINT32_MAX;
	uint64_t x423 = 162558054LLU;
	volatile uint64_t x424 = 15663574187LLU;
	uint64_t t74 = 26LLU;

	t74 = (x421+(x422%(x423&x424)));

	if (t74 != 20679669LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x429 = UINT64_MAX;
	uint8_t x430 = 0U;
	static volatile int16_t x431 = -6;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x429+(x430%(x431&x432)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x433 = 77U;
	static int32_t x434 = INT32_MAX;
	int8_t x435 = -1;
	int8_t x436 = INT8_MIN;
	static int32_t t76 = 1;

	t76 = (x433+(x434%(x435&x436)));

	if (t76 != 204) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MAX;
	int8_t x439 = -1;
	static int64_t x440 = INT64_MIN;
	static volatile int64_t t77 = -36120LL;

	t77 = (x437+(x438%(x439&x440)));

	if (t77 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x441 = 9;
	uint16_t x444 = UINT16_MAX;
	volatile int64_t t78 = -15414043705042LL;

	t78 = (x441+(x442%(x443&x444)));

	if (t78 != -32759LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x445 = INT64_MAX;
	int64_t x447 = 143LL;
	static uint32_t x448 = 47U;
	volatile int64_t t79 = 5598970375LL;

	t79 = (x445+(x446%(x447&x448)));

	if (t79 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x457 = INT16_MAX;
	static volatile int32_t x458 = INT32_MIN;
	volatile uint8_t x459 = UINT8_MAX;
	volatile int8_t x460 = -9;

	t80 = (x457+(x458%(x459&x460)));

	if (t80 != 32574) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x461 = 14U;
	static int32_t x462 = INT32_MIN;
	int16_t x464 = -421;

	t81 = (x461+(x462%(x463&x464)));

	if (t81 != 18446744071562067982LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x465 = 8438043U;
	int16_t x466 = 9193;
	int64_t x467 = INT64_MIN;
	int64_t x468 = INT64_MIN;
	int64_t t82 = -2273LL;

	t82 = (x465+(x466%(x467&x468)));

	if (t82 != 8447236LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x469 = UINT8_MAX;
	int16_t x471 = -1;
	int32_t x472 = 1;
	volatile int64_t t83 = -386769666298LL;

	t83 = (x469+(x470%(x471&x472)));

	if (t83 != 255LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x474 = 0U;
	static uint8_t x475 = UINT8_MAX;
	uint64_t x476 = 550080363099292LLU;
	uint64_t t84 = 380932527770523845LLU;

	t84 = (x473+(x474%(x475&x476)));

	if (t84 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x478 = INT16_MAX;
	int8_t x480 = -48;
	int64_t t85 = -90434405886LL;

	t85 = (x477+(x478%(x479&x480)));

	if (t85 != 32773LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x482 = 20258225U;
	int16_t x483 = INT16_MIN;
	int16_t x484 = INT16_MIN;
	volatile uint32_t t86 = 24U;

	t86 = (x481+(x482%(x483&x484)));

	if (t86 != 20258097U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x493 = 7U;
	static volatile uint64_t x494 = 0LLU;
	volatile int8_t x495 = 8;
	uint16_t x496 = UINT16_MAX;
	uint64_t t87 = 159749460LLU;

	t87 = (x493+(x494%(x495&x496)));

	if (t87 != 7LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x499 = 47U;
	int16_t x500 = -1;
	volatile int64_t t88 = 58381068LL;

	t88 = (x497+(x498%(x499&x500)));

	if (t88 != 40LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x510 = -31985LL;
	int64_t x511 = INT64_MIN;
	int64_t x512 = -1LL;
	int64_t t89 = 83636276815750750LL;

	t89 = (x509+(x510%(x511&x512)));

	if (t89 != -31986LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x513 = INT32_MIN;
	int32_t x514 = INT32_MIN;
	volatile int16_t x516 = -1977;
	int64_t t90 = -171LL;

	t90 = (x513+(x514%(x515&x516)));

	if (t90 != -4294967296LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x517 = INT8_MIN;
	static volatile int16_t x518 = INT16_MIN;
	uint16_t x519 = 1882U;
	volatile int32_t x520 = -1;
	int32_t t91 = -1;

	t91 = (x517+(x518%(x519&x520)));

	if (t91 != -902) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x522 = -3938;
	int8_t x523 = -1;
	uint8_t x524 = UINT8_MAX;
	uint64_t t92 = 16808489279571LLU;

	t92 = (x521+(x522%(x523&x524)));

	if (t92 != 3020178854LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x526 = -1LL;
	static volatile uint32_t x527 = UINT32_MAX;
	volatile int8_t x528 = INT8_MIN;
	volatile int64_t t93 = -25LL;

	t93 = (x525+(x526%(x527&x528)));

	if (t93 != 2147483646LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x529 = 3239175155624LL;
	volatile uint16_t x530 = 63U;
	int32_t x531 = -338486;
	volatile int64_t t94 = 85350446959LL;

	t94 = (x529+(x530%(x531&x532)));

	if (t94 != 3239175155687LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x537 = 959U;
	static int32_t x538 = -1;
	uint64_t x539 = 7520415450074779LLU;
	static int64_t x540 = -1748592612422065LL;

	t95 = (x537+(x538%(x539&x540)));

	if (t95 != 2040345230136536LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x546 = INT8_MIN;
	static int64_t x547 = INT64_MAX;
	volatile uint64_t x548 = 17344740LLU;

	t96 = (x545+(x546%(x547&x548)));

	if (t96 != 17319476LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x549 = UINT16_MAX;
	static int64_t x550 = INT64_MAX;
	int8_t x551 = -1;
	uint32_t x552 = 971884U;
	static int64_t t97 = 2753292162LL;

	t97 = (x549+(x550%(x551&x552)));

	if (t97 != 350134LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x553 = 1117614;
	int16_t x555 = INT16_MIN;
	int16_t x556 = -1;
	volatile int64_t t98 = -71266248301LL;

	t98 = (x553+(x554%(x555&x556)));

	if (t98 != 1117613LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x557 = 2221U;
	volatile uint32_t x558 = 6390U;
	int16_t x559 = INT16_MAX;
	static int8_t x560 = INT8_MAX;
	static volatile uint32_t t99 = 1925303567U;

	t99 = (x557+(x558%(x559&x560)));

	if (t99 != 2261U) { NG(); } else { ; }
	
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

