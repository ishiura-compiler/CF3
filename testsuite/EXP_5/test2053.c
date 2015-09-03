#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x4 = UINT64_MAX;
static int64_t x6 = INT64_MAX;
int64_t x9 = INT64_MAX;
int32_t x12 = 3741068;
uint16_t x18 = 12U;
static int64_t x19 = INT64_MIN;
volatile uint64_t t5 = 0LLU;
volatile int64_t x27 = INT64_MAX;
int64_t t6 = -2439989LL;
uint8_t x34 = 31U;
int16_t x36 = INT16_MIN;
static uint16_t x37 = 28U;
volatile uint32_t x38 = UINT32_MAX;
volatile uint32_t x48 = 224856921U;
int64_t x50 = -34861LL;
uint64_t t12 = 100168417881LLU;
int32_t t13 = -1965;
uint64_t x57 = 21456959190457LLU;
uint64_t t14 = 5LLU;
static int8_t x65 = -1;
int32_t x68 = -7706717;
int8_t x73 = -1;
int8_t x74 = 47;
volatile uint32_t t17 = UINT32_MAX;
static int8_t x82 = INT8_MAX;
int16_t x85 = INT16_MIN;
int32_t t20 = 8928;
int32_t x98 = -15;
volatile int32_t x105 = INT32_MIN;
int64_t x107 = -3457562598710412LL;
int8_t x110 = 28;
uint16_t x111 = UINT16_MAX;
volatile int32_t t25 = -14;
volatile int32_t t26 = 62864;
static volatile int16_t x120 = -1;
uint16_t x123 = 5492U;
uint8_t x124 = 79U;
uint8_t x125 = UINT8_MAX;
volatile int64_t x127 = INT64_MIN;
int64_t x128 = -1LL;
int32_t t30 = 16;
static int64_t t31 = 126820LL;
int16_t x146 = INT16_MIN;
volatile int32_t t32 = 9562788;
int64_t x149 = INT64_MIN;
uint8_t x153 = UINT8_MAX;
uint8_t x155 = 12U;
uint64_t x158 = 207LLU;
uint64_t t35 = UINT64_MAX;
uint32_t x166 = 53930710U;
int64_t x180 = -233LL;
uint64_t t40 = 4279067869300LLU;
uint64_t t42 = UINT64_MAX;
int32_t x189 = INT32_MIN;
int64_t x195 = INT64_MAX;
int32_t x197 = INT32_MAX;
int8_t x199 = INT8_MIN;
int16_t x200 = -1;
int16_t x202 = INT16_MIN;
volatile int64_t t46 = -1501452018967583801LL;
volatile uint64_t x230 = 477192518473761924LLU;
int8_t x234 = INT8_MIN;
int64_t x238 = -121LL;
int64_t x240 = 1678163222LL;
int64_t t54 = -117115410553LL;
int16_t x253 = -14164;
uint64_t x255 = UINT64_MAX;
uint16_t x264 = UINT16_MAX;
int32_t x269 = INT32_MIN;
volatile int64_t x276 = -1LL;
int64_t t61 = -26679989280946262LL;
int16_t x283 = 7105;
uint32_t x288 = UINT32_MAX;
int8_t x296 = INT8_MAX;
static int64_t t65 = -10848332107803LL;
static volatile int64_t t66 = 31265212453LL;
uint16_t x303 = 983U;
int16_t x305 = INT16_MAX;
int64_t x309 = -1LL;
volatile int64_t x316 = INT64_MIN;
volatile uint64_t t71 = 11486LLU;
uint32_t x322 = 10U;
int32_t x328 = INT32_MIN;
volatile uint64_t t73 = 64924387738394131LLU;
static uint64_t t74 = UINT64_MAX;
int32_t x334 = -1;
int8_t x341 = -1;
int64_t x351 = 1102959450054657LL;
volatile uint32_t t80 = UINT32_MAX;
int16_t x361 = -2953;
volatile int8_t x370 = INT8_MAX;
volatile int16_t x383 = INT16_MAX;
uint64_t x395 = 408923032364LLU;
uint32_t x403 = 10674267U;
volatile uint32_t t91 = 2642U;
int16_t x405 = INT16_MAX;
int32_t x411 = INT32_MIN;
volatile uint64_t x416 = 1LLU;
static int32_t x417 = INT32_MIN;
uint64_t t95 = 6745111797LLU;
static int16_t x425 = INT16_MIN;
int16_t x430 = INT16_MIN;
int8_t x433 = INT8_MIN;
volatile int8_t x436 = INT8_MIN;


void f0(void) {
	int16_t x1 = -1;
	uint16_t x2 = 6U;
	uint8_t x3 = 2U;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1|((x2^x3)-x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile uint16_t x7 = 85U;
	uint64_t x8 = 661064669163643LLU;
	static uint64_t t1 = UINT64_MAX;

	t1 = (x5|((x6^x7)-x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int16_t x11 = 1;
	int64_t t2 = 120676287516803LL;

	t2 = (x9|((x10^x11)-x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int64_t x14 = -683967337LL;
	int16_t x15 = INT16_MAX;
	uint16_t x16 = UINT16_MAX;
	volatile int64_t t3 = 50824LL;

	t3 = (x13|((x14^x15)-x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 13;
	int8_t x20 = -1;
	int64_t t4 = 98721155482936LL;

	t4 = (x17|((x18^x19)-x20));

	if (t4 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	static int16_t x22 = 1278;
	uint64_t x23 = UINT64_MAX;
	uint64_t x24 = 52176LLU;

	t5 = (x21|((x22^x23)-x24));

	if (t5 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = -5;
	static int8_t x28 = -28;

	t6 = (x25|((x26^x27)-x28));

	if (t6 != -96LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	int32_t x30 = INT32_MIN;
	static int32_t x31 = -3836;
	static volatile uint8_t x32 = 19U;
	int32_t t7 = -9;

	t7 = (x29|((x30^x31)-x32));

	if (t7 != -3855) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	int32_t t8 = 6795;

	t8 = (x33|((x34^x35)-x36));

	if (t8 != -97) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x39 = -1;
	int16_t x40 = -1;
	uint32_t t9 = 7U;

	t9 = (x37|((x38^x39)-x40));

	if (t9 != 29U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 1017U;
	int32_t x42 = INT32_MIN;
	volatile int8_t x43 = -13;
	int16_t x44 = 3453;
	static int32_t t10 = -8101;

	t10 = (x41|((x42^x43)-x44));

	if (t10 != 2147480575) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int16_t x46 = -2126;
	int32_t x47 = -2506;
	uint32_t t11 = UINT32_MAX;

	t11 = (x45|((x46^x47)-x48));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 12165547603643854LLU;
	int64_t x51 = -1017702161LL;
	volatile int16_t x52 = 12;

	t12 = (x49|((x50^x51)-x52));

	if (t12 != 12165548551565310LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -1;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = INT8_MIN;
	static volatile uint16_t x56 = 1U;

	t13 = (x53|((x54^x55)-x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = 27077LLU;
	volatile uint64_t x59 = 448309965878237243LLU;
	uint16_t x60 = 1U;

	t14 = (x57|((x58^x59)-x60));

	if (t14 != 448309974838212093LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static int8_t x62 = INT8_MIN;
	uint64_t x63 = 5604LLU;
	volatile int32_t x64 = INT32_MIN;
	uint64_t t15 = 396588112LLU;

	t15 = (x61|((x62^x63)-x64));

	if (t15 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x66 = UINT32_MAX;
	int8_t x67 = -1;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (x65|((x66^x67)-x68));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x75 = -1;
	volatile uint32_t x76 = 33664U;

	t17 = (x73|((x74^x75)-x76));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	volatile int16_t x78 = INT16_MAX;
	volatile uint8_t x79 = 31U;
	static int8_t x80 = -1;
	static int32_t t18 = INT32_MAX;

	t18 = (x77|((x78^x79)-x80));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = 10;
	int32_t x83 = -1;
	int8_t x84 = 54;
	volatile int32_t t19 = 1;

	t19 = (x81|((x82^x83)-x84));

	if (t19 != -182) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = INT8_MAX;
	int8_t x87 = INT8_MAX;
	volatile uint16_t x88 = 323U;

	t20 = (x85|((x86^x87)-x88));

	if (t20 != -323) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	volatile int8_t x90 = INT8_MAX;
	uint8_t x91 = 23U;
	int64_t x92 = 693983884LL;
	volatile int64_t t21 = 172277LL;

	t21 = (x89|((x90^x91)-x92));

	if (t21 != -36LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	volatile int32_t x99 = INT32_MIN;
	int8_t x100 = -1;
	int32_t t22 = INT32_MAX;

	t22 = (x97|((x98^x99)-x100));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 60U;
	uint64_t x102 = 73156272890218561LLU;
	int64_t x103 = INT64_MAX;
	uint32_t x104 = UINT32_MAX;
	uint64_t t23 = 49755930978LLU;

	t23 = (x101|((x102^x103)-x104));

	if (t23 != 9150215759669589951LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x106 = 3;
	int64_t x108 = 943776612077LL;
	int64_t t24 = -261276065LL;

	t24 = (x105|((x106^x107)-x108));

	if (t24 != -1140087670LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 1U;
	int16_t x112 = -12140;

	t25 = (x109|((x110^x111)-x112));

	if (t25 != 77647) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x113 = 69U;
	static int16_t x114 = 2;
	volatile int32_t x115 = INT32_MIN;
	int8_t x116 = 2;

	t26 = (x113|((x114^x115)-x116));

	if (t26 != -2147483579) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 0;
	static uint32_t x118 = 492033557U;
	int16_t x119 = INT16_MIN;
	uint32_t t27 = 36226763U;

	t27 = (x117|((x118^x119)-x120));

	if (t27 != 3802945046U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -41391280;
	volatile int64_t x122 = INT64_MIN;
	static int64_t t28 = 9099578LL;

	t28 = (x121|((x122^x123)-x124));

	if (t28 != -41386123LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x126 = INT8_MIN;
	int64_t t29 = INT64_MAX;

	t29 = (x125|((x126^x127)-x128));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = -1;
	int8_t x130 = 1;
	uint16_t x131 = 0U;
	uint8_t x132 = 23U;

	t30 = (x129|((x130^x131)-x132));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	static uint32_t x138 = UINT32_MAX;
	static int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;

	t31 = (x137|((x138^x139)-x140));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = -62;
	static volatile uint8_t x147 = 12U;
	int8_t x148 = 56;

	t32 = (x145|((x146^x147)-x148));

	if (t32 != -42) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x150 = 8003965U;
	static volatile uint64_t x151 = UINT64_MAX;
	volatile int16_t x152 = INT16_MAX;
	uint64_t t33 = 1646757LLU;

	t33 = (x149|((x150^x151)-x152));

	if (t33 != 18446744073701514883LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x154 = 32U;
	static volatile int16_t x156 = 0;
	int32_t t34 = -216431835;

	t34 = (x153|((x154^x155)-x156));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = -1;
	int64_t x159 = -1LL;
	volatile int64_t x160 = -1LL;

	t35 = (x157|((x158^x159)-x160));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;
	uint16_t x163 = UINT16_MAX;
	static uint8_t x164 = 3U;
	volatile int64_t t36 = 22494660502202130LL;

	t36 = (x161|((x162^x163)-x164));

	if (t36 != -2147418116LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x167 = 1059U;
	uint64_t x168 = 389494LLU;
	volatile uint64_t t37 = 946LLU;

	t37 = (x165|((x166^x167)-x168));

	if (t37 != 18446744071615610239LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x169 = 71418741U;
	static uint16_t x170 = UINT16_MAX;
	uint8_t x171 = UINT8_MAX;
	int64_t x172 = -58764LL;
	volatile int64_t t38 = -17LL;

	t38 = (x169|((x170^x171)-x172));

	if (t38 != 71428093LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MAX;
	uint64_t x174 = 1331691194275LLU;
	int16_t x175 = INT16_MIN;
	uint64_t x176 = 2971423695459886LLU;
	static uint64_t t39 = 171783LLU;

	t39 = (x173|((x174^x175)-x176));

	if (t39 != 18443771318538076159LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MIN;
	volatile uint64_t x178 = UINT64_MAX;
	volatile int8_t x179 = INT8_MAX;

	t40 = (x177|((x178^x179)-x180));

	if (t40 != 9223372036854775913LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 10U;
	volatile uint64_t x182 = UINT64_MAX;
	static uint16_t x183 = UINT16_MAX;
	volatile uint32_t x184 = 490303607U;
	volatile uint64_t t41 = 123812LLU;

	t41 = (x181|((x182^x183)-x184));

	if (t41 != 18446744073219182475LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x186 = -25;
	int32_t x187 = INT32_MAX;
	int64_t x188 = 3829557LL;

	t42 = (x185|((x186^x187)-x188));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x190 = UINT32_MAX;
	int16_t x191 = -1;
	static volatile int32_t x192 = INT32_MIN;
	uint32_t t43 = 61U;

	t43 = (x189|((x190^x191)-x192));

	if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MIN;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int64_t t44 = 39401903043LL;

	t44 = (x193|((x194^x195)-x196));

	if (t44 != -65536LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x198 = UINT16_MAX;
	int32_t t45 = 1044450438;

	t45 = (x197|((x198^x199)-x200));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 120U;
	int32_t x203 = -1;
	int64_t x204 = -29LL;

	t46 = (x201|((x202^x203)-x204));

	if (t46 != 32892LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = INT16_MAX;
	uint16_t x206 = 2808U;
	int64_t x207 = -2LL;
	int16_t x208 = INT16_MIN;
	int64_t t47 = -8611175187LL;

	t47 = (x205|((x206^x207)-x208));

	if (t47 != 32767LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = 67LL;
	int64_t x214 = -1LL;
	volatile uint32_t x215 = 10U;
	int8_t x216 = -1;
	static int64_t t48 = 80759627LL;

	t48 = (x213|((x214^x215)-x216));

	if (t48 != -9LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -1;
	uint32_t x218 = 2U;
	uint64_t x219 = 13511708147903586LLU;
	int32_t x220 = INT32_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x217|((x218^x219)-x220));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x221 = 360564;
	int64_t x222 = -1LL;
	static int32_t x223 = INT32_MIN;
	int16_t x224 = 12325;
	volatile int64_t t50 = -1077LL;

	t50 = (x221|((x222^x223)-x224));

	if (t50 != 2147471358LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = 69892439;
	int16_t x226 = -1;
	uint64_t x227 = 1016443LLU;
	static uint16_t x228 = 1936U;
	volatile uint64_t t51 = 681358042442835LLU;

	t51 = (x225|((x226^x227)-x228));

	if (t51 != 18446744073709190647LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MIN;
	int64_t x231 = -1LL;
	volatile int8_t x232 = INT8_MIN;
	uint64_t t52 = 33373706LLU;

	t52 = (x229|((x230^x231)-x232));

	if (t52 != 18446744072751528955LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = -1;
	volatile uint64_t x235 = 61347799376LLU;
	int16_t x236 = INT16_MIN;
	uint64_t t53 = UINT64_MAX;

	t53 = (x233|((x234^x235)-x236));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = INT64_MIN;
	static uint16_t x239 = UINT16_MAX;

	t54 = (x237|((x238^x239)-x240));

	if (t54 != -1678228638LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = UINT64_MAX;
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = -32392LL;
	uint16_t x244 = 3U;
	uint64_t t55 = UINT64_MAX;

	t55 = (x241|((x242^x243)-x244));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x245 = -1;
	uint32_t x246 = 3832U;
	int16_t x247 = -1;
	static volatile int32_t x248 = INT32_MIN;
	uint32_t t56 = UINT32_MAX;

	t56 = (x245|((x246^x247)-x248));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = -21100848;
	uint8_t x250 = 44U;
	static uint32_t x251 = 347737U;
	int32_t x252 = -1;
	volatile uint32_t t57 = 10U;

	t57 = (x249|((x250^x251)-x252));

	if (t57 != 4273950454U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x254 = INT8_MIN;
	volatile int32_t x256 = INT32_MIN;
	volatile uint64_t t58 = 27LLU;

	t58 = (x253|((x254^x255)-x256));

	if (t58 != 18446744073709537535LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x261 = INT64_MIN;
	static int16_t x262 = -51;
	int16_t x263 = INT16_MIN;
	volatile int64_t t59 = 1LL;

	t59 = (x261|((x262^x263)-x264));

	if (t59 != -32818LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x270 = INT32_MIN;
	volatile int32_t x271 = INT32_MAX;
	static uint32_t x272 = 27544088U;
	volatile uint32_t t60 = 391740682U;

	t60 = (x269|((x270^x271)-x272));

	if (t60 != 4267423207U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	static uint32_t x275 = 8U;

	t61 = (x273|((x274^x275)-x276));

	if (t61 != -2147483639LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x281 = 3685601LLU;
	int8_t x282 = INT8_MIN;
	int16_t x284 = -1;
	uint64_t t62 = 1043181673120184LLU;

	t62 = (x281|((x282^x283)-x284));

	if (t62 != 18446744073709550819LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x285 = 1U;
	static int32_t x286 = INT32_MIN;
	static int16_t x287 = INT16_MIN;
	uint32_t t63 = 15773377U;

	t63 = (x285|((x286^x287)-x288));

	if (t63 != 2147450881U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = 13U;
	uint32_t x290 = UINT32_MAX;
	int16_t x291 = INT16_MIN;
	uint32_t x292 = 64046U;
	uint32_t t64 = 2846153U;

	t64 = (x289|((x290^x291)-x292));

	if (t64 != 4294936029U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x293 = INT32_MAX;
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = INT64_MAX;

	t65 = (x293|((x294^x295)-x296));

	if (t65 != 9223372032559808511LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x297 = -1;
	int64_t x298 = INT64_MIN;
	static int64_t x299 = INT64_MIN;
	volatile int8_t x300 = -60;

	t66 = (x297|((x298^x299)-x300));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MAX;
	volatile uint64_t x302 = 475826804422LLU;
	int32_t x304 = INT32_MAX;
	volatile uint64_t t67 = 467919438648078LLU;

	t67 = (x301|((x302^x303)-x304));

	if (t67 != 473679320447LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x306 = 652U;
	volatile uint64_t x307 = 13108LLU;
	static int16_t x308 = 0;
	uint64_t t68 = 301291LLU;

	t68 = (x305|((x306^x307)-x308));

	if (t68 != 32767LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x310 = UINT16_MAX;
	static uint64_t x311 = 478LLU;
	volatile int16_t x312 = INT16_MIN;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x309|((x310^x311)-x312));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x313 = INT64_MIN;
	int32_t x314 = INT32_MIN;
	volatile uint16_t x315 = 7496U;
	int64_t t70 = -2LL;

	t70 = (x313|((x314^x315)-x316));

	if (t70 != -2147476152LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MAX;
	uint64_t x318 = 416586470887LLU;
	static int16_t x319 = 15827;
	int8_t x320 = -1;

	t71 = (x317|((x318^x319)-x320));

	if (t71 != 416586498047LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = 0LL;
	static int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;
	volatile int64_t t72 = -14837LL;

	t72 = (x321|((x322^x323)-x324));

	if (t72 != 2147516405LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x325 = 86960LL;
	uint64_t x326 = UINT64_MAX;
	static int64_t x327 = 1LL;

	t73 = (x325|((x326^x327)-x328));

	if (t73 != 2147483646LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x329 = -1;
	volatile uint64_t x330 = 3677366LLU;
	volatile int8_t x331 = INT8_MAX;
	volatile uint32_t x332 = 495898U;

	t74 = (x329|((x330^x331)-x332));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x333 = INT16_MIN;
	static int32_t x335 = INT32_MAX;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t75 = 133448505959LLU;

	t75 = (x333|((x334^x335)-x336));

	if (t75 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = INT16_MIN;
	static int32_t x338 = 527500465;
	int16_t x339 = INT16_MIN;
	static volatile int32_t x340 = INT32_MIN;
	volatile int32_t t76 = 235;

	t76 = (x337|((x338^x339)-x340));

	if (t76 != -31567) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x342 = UINT32_MAX;
	int16_t x343 = -5236;
	volatile int8_t x344 = -3;
	static volatile uint32_t t77 = UINT32_MAX;

	t77 = (x341|((x342^x343)-x344));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x345 = 270909077U;
	uint8_t x346 = UINT8_MAX;
	uint32_t x347 = 276U;
	volatile uint16_t x348 = 4U;
	volatile uint32_t t78 = 544746U;

	t78 = (x345|((x346^x347)-x348));

	if (t78 != 270909431U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x349 = UINT8_MAX;
	uint32_t x350 = 966554U;
	volatile int8_t x352 = 1;
	int64_t t79 = 3485650478424LL;

	t79 = (x349|((x350^x351)-x352));

	if (t79 != 1102959449890815LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x353 = INT32_MAX;
	int32_t x354 = 904043;
	volatile int32_t x355 = INT32_MIN;
	uint32_t x356 = 736U;

	t80 = (x353|((x354^x355)-x356));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x357 = INT16_MAX;
	int16_t x358 = -1;
	int64_t x359 = INT64_MIN;
	uint16_t x360 = UINT16_MAX;
	volatile int64_t t81 = 237021847373833752LL;

	t81 = (x357|((x358^x359)-x360));

	if (t81 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x362 = INT64_MAX;
	int16_t x363 = 1;
	int32_t x364 = INT32_MAX;
	int64_t t82 = -60204201847181LL;

	t82 = (x361|((x362^x363)-x364));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = INT32_MIN;
	uint8_t x366 = 6U;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MIN;
	static int64_t t83 = 65459863159266LL;

	t83 = (x365|((x366^x367)-x368));

	if (t83 != -122LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x369 = 259875LLU;
	static int16_t x371 = INT16_MIN;
	static int32_t x372 = -1;
	uint64_t t84 = 29088127LLU;

	t84 = (x369|((x370^x371)-x372));

	if (t84 != 18446744073709549475LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = -20;
	static volatile int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MIN;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t85 = 2276501U;

	t85 = (x377|((x378^x379)-x380));

	if (t85 != 4294967277U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x381 = -1LL;
	int16_t x382 = INT16_MIN;
	int8_t x384 = -1;
	volatile int64_t t86 = 10692LL;

	t86 = (x381|((x382^x383)-x384));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = -259712LL;
	int64_t x386 = INT64_MIN;
	volatile int8_t x387 = 2;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t87 = 35652671LLU;

	t87 = (x385|((x386^x387)-x388));

	if (t87 != 18446744073709291907LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = -1LL;
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	static int64_t x392 = 12LL;
	static volatile int64_t t88 = 357LL;

	t88 = (x389|((x390^x391)-x392));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = -1;
	int32_t x394 = INT32_MIN;
	volatile int16_t x396 = -1;
	static uint64_t t89 = UINT64_MAX;

	t89 = (x393|((x394^x395)-x396));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = INT8_MIN;
	static int8_t x398 = 0;
	static uint16_t x399 = 965U;
	int8_t x400 = INT8_MIN;
	int32_t t90 = -191697110;

	t90 = (x397|((x398^x399)-x400));

	if (t90 != -59) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = INT16_MIN;
	int8_t x402 = INT8_MAX;
	static uint32_t x404 = 346020U;

	t91 = (x401|((x402^x403)-x404));

	if (t91 != 4294940800U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x406 = 41U;
	int32_t x407 = INT32_MAX;
	uint16_t x408 = UINT16_MAX;
	volatile uint32_t t92 = 8067561U;

	t92 = (x405|((x406^x407)-x408));

	if (t92 != 2147418111U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x409 = INT8_MAX;
	uint32_t x410 = UINT32_MAX;
	int8_t x412 = -1;
	static volatile uint32_t t93 = 35093U;

	t93 = (x409|((x410^x411)-x412));

	if (t93 != 2147483775U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x413 = 8;
	volatile int16_t x414 = 2783;
	int16_t x415 = -1;
	static volatile uint64_t t94 = 4090331808LLU;

	t94 = (x413|((x414^x415)-x416));

	if (t94 != 18446744073709548831LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x418 = UINT8_MAX;
	uint64_t x419 = UINT64_MAX;
	uint32_t x420 = UINT32_MAX;

	t95 = (x417|((x418^x419)-x420));

	if (t95 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x421 = UINT64_MAX;
	volatile int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MAX;
	volatile uint64_t x424 = 2084436018871829144LLU;
	static uint64_t t96 = UINT64_MAX;

	t96 = (x421|((x422^x423)-x424));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x426 = -6;
	int8_t x427 = INT8_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t97 = 66377331U;

	t97 = (x425|((x426^x427)-x428));

	if (t97 != 4294967174U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x429 = 1062175238048079LLU;
	uint8_t x431 = 112U;
	volatile uint8_t x432 = 74U;
	uint64_t t98 = 11420817125185LLU;

	t98 = (x429|((x430^x431)-x432));

	if (t98 != 18446744073709537647LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x434 = 1062385756LL;
	int16_t x435 = INT16_MIN;
	volatile int64_t t99 = -49000486080534LL;

	t99 = (x433|((x434^x435)-x436));

	if (t99 != -36LL) { NG(); } else { ; }
	
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

