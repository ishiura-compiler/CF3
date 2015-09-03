#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = -1LL;
int32_t t0 = INT32_MIN;
int8_t x13 = 14;
int64_t x16 = -1LL;
int32_t x18 = 5;
uint16_t x22 = UINT16_MAX;
static volatile int32_t t4 = 40;
int16_t x25 = -1;
uint16_t x28 = 207U;
static int32_t x33 = INT32_MIN;
int16_t x41 = INT16_MIN;
int16_t x42 = -1;
static int32_t x48 = -1;
volatile int8_t x53 = -1;
uint64_t x55 = 33850421679552LLU;
volatile int32_t t13 = 2;
int8_t x71 = INT8_MAX;
int64_t x78 = INT64_MAX;
volatile uint32_t x88 = 811679095U;
uint64_t x89 = 14294601110145LLU;
static volatile int32_t x91 = -132886712;
volatile int64_t x93 = 382437058507942638LL;
int32_t x96 = -1;
static uint64_t x110 = UINT64_MAX;
volatile int32_t x119 = INT32_MAX;
uint64_t x120 = 1015931LLU;
int32_t x121 = -256069;
volatile int64_t x131 = INT64_MIN;
static volatile int16_t x132 = -6102;
volatile int32_t t26 = -314759;
static int64_t x144 = INT64_MIN;
int64_t x151 = INT64_MIN;
int8_t x156 = -1;
uint16_t x164 = UINT16_MAX;
int64_t x167 = 0LL;
int8_t x170 = 2;
int32_t x173 = INT32_MIN;
int32_t t37 = -86;
static int32_t x181 = -410;
uint64_t x182 = UINT64_MAX;
uint16_t x196 = 29U;
volatile int32_t t41 = -209772346;
int16_t x200 = 6302;
volatile int32_t x202 = INT32_MIN;
uint16_t x204 = 6U;
uint16_t x215 = UINT16_MAX;
uint64_t x219 = 29LLU;
uint64_t x223 = 347706LLU;
uint32_t x224 = 0U;
volatile uint8_t x227 = UINT8_MAX;
int32_t x228 = -1;
volatile int64_t t47 = 52041139938564LL;
int16_t x237 = INT16_MIN;
int32_t x245 = -1;
volatile uint16_t x258 = UINT16_MAX;
volatile int32_t t55 = 109;
volatile uint64_t x264 = 17267002798116LLU;
int64_t x272 = INT64_MIN;
volatile int64_t t57 = 4641249160LL;
static int32_t x274 = INT32_MIN;
int64_t x275 = 321586LL;
volatile int32_t t58 = -699800880;
static uint8_t x285 = 6U;
uint8_t x291 = UINT8_MAX;
int16_t x294 = -1;
int64_t x295 = -4185LL;
uint64_t x299 = 1541548107031608LLU;
static int64_t x300 = INT64_MIN;
volatile int64_t x310 = INT64_MIN;
static int32_t x312 = -1;
int32_t x316 = INT32_MAX;
int16_t x317 = -1;
uint64_t x321 = 805011317896923LLU;
int16_t x322 = -1;
int8_t x327 = -6;
uint64_t x331 = UINT64_MAX;
int32_t t72 = 228624;
int16_t x334 = INT16_MAX;
volatile int64_t t73 = INT64_MAX;
int8_t x352 = INT8_MIN;
int8_t x363 = -1;
volatile uint32_t x369 = UINT32_MAX;
static volatile uint32_t x371 = UINT32_MAX;
static int16_t x372 = INT16_MIN;
int64_t x376 = 570726306888LL;
uint64_t x377 = 103LLU;
static int8_t x384 = -12;
int16_t x392 = -16196;
int16_t x424 = INT16_MIN;
static volatile int8_t x427 = INT8_MIN;
volatile int32_t x434 = 17453;
int8_t x435 = INT8_MAX;
volatile uint64_t t94 = 6782623567682LLU;
int64_t x437 = -727557323141LL;
static uint8_t x443 = 2U;
static volatile uint64_t x447 = 2046769LLU;
int32_t t97 = 1;
volatile uint32_t t99 = UINT32_MAX;


void f0(void) {
	static int32_t x5 = INT32_MIN;
	int64_t x6 = 223868LL;
	int32_t x8 = INT32_MIN;

	t0 = (x5|((x6-x7)<x8));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MIN;
	static int32_t x10 = 1;
	int8_t x11 = -2;
	uint64_t x12 = 624309686432914LLU;
	volatile int64_t t1 = -2LL;

	t1 = (x9|((x10-x11)<x12));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = 9;
	int8_t x15 = 5;
	volatile int32_t t2 = -1297804;

	t2 = (x13|((x14-x15)<x16));

	if (t2 != 14) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int32_t x19 = 30735475;
	int8_t x20 = INT8_MIN;
	int64_t t3 = 3506154694416204055LL;

	t3 = (x17|((x18-x19)<x20));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = 19141U;
	uint32_t x23 = UINT32_MAX;
	volatile int16_t x24 = -4;

	t4 = (x21|((x22-x23)<x24));

	if (t4 != 19141) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MAX;
	uint8_t x27 = 1U;
	static volatile int32_t t5 = 229105;

	t5 = (x25|((x26-x27)<x28));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	volatile uint8_t x30 = 0U;
	volatile int16_t x31 = INT16_MAX;
	int32_t x32 = INT32_MIN;
	uint32_t t6 = UINT32_MAX;

	t6 = (x29|((x30-x31)<x32));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = 551166LLU;
	uint64_t x35 = 370890115LLU;
	int64_t x36 = -12LL;
	volatile int32_t t7 = -208;

	t7 = (x33|((x34-x35)<x36));

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	uint16_t x39 = 9358U;
	volatile uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = -6266;

	t8 = (x37|((x38-x39)<x40));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x43 = INT16_MAX;
	volatile int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -93;

	t9 = (x41|((x42-x43)<x44));

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = 1506602U;
	int64_t x46 = INT64_MIN;
	int8_t x47 = 0;
	uint32_t t10 = 29539794U;

	t10 = (x45|((x46-x47)<x48));

	if (t10 != 1506603U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x49 = 10563U;
	uint32_t x50 = 5823883U;
	int64_t x51 = 0LL;
	volatile int32_t x52 = INT32_MAX;
	int32_t t11 = -15244;

	t11 = (x49|((x50-x51)<x52));

	if (t11 != 10563) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = INT8_MAX;
	int8_t x56 = 2;
	int32_t t12 = -404;

	t12 = (x53|((x54-x55)<x56));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	int8_t x58 = 49;
	static int8_t x59 = -1;
	int16_t x60 = INT16_MIN;

	t13 = (x57|((x58-x59)<x60));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	static int16_t x62 = 1;
	uint32_t x63 = 109U;
	static int64_t x64 = 22146166982169LL;
	static int32_t t14 = 13872;

	t14 = (x61|((x62-x63)<x64));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 1U;
	int64_t x70 = 1405978863906038LL;
	int16_t x72 = INT16_MAX;
	volatile int32_t t15 = 795;

	t15 = (x69|((x70-x71)<x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 13902763;
	static int64_t x74 = INT64_MIN;
	static volatile int32_t x75 = -1;
	volatile uint32_t x76 = 31707927U;
	static volatile int32_t t16 = -493685;

	t16 = (x73|((x74-x75)<x76));

	if (t16 != 13902763) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 46169197093337LL;
	uint16_t x79 = 11555U;
	uint16_t x80 = UINT16_MAX;
	volatile int64_t t17 = 291168298997489LL;

	t17 = (x77|((x78-x79)<x80));

	if (t17 != 46169197093337LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x85|((x86-x87)<x88));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x90 = UINT64_MAX;
	int64_t x92 = INT64_MIN;
	uint64_t t19 = 16341LLU;

	t19 = (x89|((x90-x91)<x92));

	if (t19 != 14294601110145LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x94 = INT8_MIN;
	uint64_t x95 = UINT64_MAX;
	static volatile int64_t t20 = -541976062355668905LL;

	t20 = (x93|((x94-x95)<x96));

	if (t20 != 382437058507942639LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	uint8_t x98 = 9U;
	static volatile uint16_t x99 = 37U;
	uint8_t x100 = UINT8_MAX;
	int32_t t21 = 1;

	t21 = (x97|((x98-x99)<x100));

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x105 = INT16_MAX;
	int8_t x106 = -1;
	int8_t x107 = -44;
	volatile int8_t x108 = INT8_MAX;
	int32_t t22 = -779103491;

	t22 = (x105|((x106-x107)<x108));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MAX;
	uint64_t x111 = 642194216172962815LLU;
	uint16_t x112 = 1224U;
	static int32_t t23 = -2;

	t23 = (x109|((x110-x111)<x112));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x117 = UINT64_MAX;
	int64_t x118 = -1LL;
	uint64_t t24 = UINT64_MAX;

	t24 = (x117|((x118-x119)<x120));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x122 = INT16_MAX;
	volatile uint32_t x123 = 1157U;
	static int16_t x124 = INT16_MIN;
	int32_t t25 = 29753618;

	t25 = (x121|((x122-x123)<x124));

	if (t25 != -256069) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x130 = 7887186LLU;

	t26 = (x129|((x130-x131)<x132));

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = INT64_MAX;
	volatile int16_t x134 = INT16_MAX;
	uint64_t x135 = UINT64_MAX;
	static volatile int16_t x136 = INT16_MIN;
	int64_t t27 = INT64_MAX;

	t27 = (x133|((x134-x135)<x136));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = UINT8_MAX;
	int16_t x138 = 54;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = UINT16_MAX;
	int32_t t28 = -405009777;

	t28 = (x137|((x138-x139)<x140));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x141 = 443140871U;
	int16_t x142 = -2;
	uint64_t x143 = 55537491866171LLU;
	uint32_t t29 = 394U;

	t29 = (x141|((x142-x143)<x144));

	if (t29 != 443140871U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x145 = INT8_MIN;
	int16_t x146 = -1;
	int8_t x147 = INT8_MIN;
	int64_t x148 = INT64_MIN;
	static volatile int32_t t30 = -6973816;

	t30 = (x145|((x146-x147)<x148));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x149 = 1U;
	int32_t x150 = INT32_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t31 = 53613;

	t31 = (x149|((x150-x151)<x152));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MAX;
	uint32_t x154 = 36870U;
	uint16_t x155 = UINT16_MAX;
	static volatile int32_t t32 = 24070;

	t32 = (x153|((x154-x155)<x156));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x161 = 18922U;
	int16_t x162 = -7;
	volatile int16_t x163 = INT16_MIN;
	int32_t t33 = -127526;

	t33 = (x161|((x162-x163)<x164));

	if (t33 != 18923) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x165 = INT8_MAX;
	int8_t x166 = 0;
	int8_t x168 = 24;
	static int32_t t34 = 411265;

	t34 = (x165|((x166-x167)<x168));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 2U;
	int16_t x171 = 9;
	uint16_t x172 = 4052U;
	static uint32_t t35 = 3U;

	t35 = (x169|((x170-x171)<x172));

	if (t35 != 3U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x174 = UINT16_MAX;
	int8_t x175 = -1;
	uint32_t x176 = UINT32_MAX;
	static volatile int32_t t36 = 28555;

	t36 = (x173|((x174-x175)<x176));

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = 45675767;
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = INT8_MIN;
	int32_t x180 = 3040183;

	t37 = (x177|((x178-x179)<x180));

	if (t37 != 45675767) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x183 = INT8_MAX;
	static uint64_t x184 = 58291544325LLU;
	int32_t t38 = 2861;

	t38 = (x181|((x182-x183)<x184));

	if (t38 != -410) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MIN;
	static int32_t x186 = INT32_MIN;
	uint64_t x187 = 271LLU;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t39 = -26157485;

	t39 = (x185|((x186-x187)<x188));

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x189 = INT8_MIN;
	static int8_t x190 = INT8_MIN;
	int8_t x191 = -1;
	static int32_t x192 = -1;
	int32_t t40 = -97657;

	t40 = (x189|((x190-x191)<x192));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x193 = INT8_MIN;
	static uint32_t x194 = 0U;
	int8_t x195 = -1;

	t41 = (x193|((x194-x195)<x196));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x197 = INT64_MIN;
	uint64_t x198 = 183060680385773LLU;
	uint8_t x199 = UINT8_MAX;
	static volatile int64_t t42 = INT64_MIN;

	t42 = (x197|((x198-x199)<x200));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x201 = 0U;
	int8_t x203 = INT8_MIN;
	int32_t t43 = 307160;

	t43 = (x201|((x202-x203)<x204));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x213 = INT64_MIN;
	volatile uint64_t x214 = UINT64_MAX;
	uint16_t x216 = 1388U;
	int64_t t44 = INT64_MIN;

	t44 = (x213|((x214-x215)<x216));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x217 = UINT64_MAX;
	volatile int32_t x218 = 142;
	int64_t x220 = INT64_MIN;
	uint64_t t45 = UINT64_MAX;

	t45 = (x217|((x218-x219)<x220));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = 125;
	int32_t t46 = 169;

	t46 = (x221|((x222-x223)<x224));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x225 = 811403754099075869LL;
	uint8_t x226 = UINT8_MAX;

	t47 = (x225|((x226-x227)<x228));

	if (t47 != 811403754099075869LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = -1;
	int64_t x230 = -1LL;
	int16_t x231 = INT16_MAX;
	static volatile int8_t x232 = -1;
	int32_t t48 = 439365;

	t48 = (x229|((x230-x231)<x232));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x233 = -20;
	int32_t x234 = 3;
	static uint8_t x235 = UINT8_MAX;
	static int8_t x236 = INT8_MIN;
	int32_t t49 = 22;

	t49 = (x233|((x234-x235)<x236));

	if (t49 != -19) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x238 = 14;
	int16_t x239 = -727;
	uint8_t x240 = UINT8_MAX;
	int32_t t50 = 0;

	t50 = (x237|((x238-x239)<x240));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = INT8_MIN;
	volatile int32_t x242 = 11;
	static uint16_t x243 = UINT16_MAX;
	volatile int16_t x244 = 5;
	int32_t t51 = 16;

	t51 = (x241|((x242-x243)<x244));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x246 = 21;
	int64_t x247 = 772918613334293867LL;
	static uint16_t x248 = 4602U;
	volatile int32_t t52 = 21;

	t52 = (x245|((x246-x247)<x248));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = 148;
	static uint16_t x250 = UINT16_MAX;
	int32_t x251 = 8031;
	int16_t x252 = INT16_MAX;
	int32_t t53 = -1;

	t53 = (x249|((x250-x251)<x252));

	if (t53 != 148) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = -1LL;
	int64_t x254 = INT64_MIN;
	int32_t x255 = -1;
	uint32_t x256 = 935010U;
	volatile int64_t t54 = 2078998357176836LL;

	t54 = (x253|((x254-x255)<x256));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MIN;
	int8_t x259 = -1;
	static int8_t x260 = -12;

	t55 = (x257|((x258-x259)<x260));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MIN;
	volatile uint64_t x262 = 81LLU;
	int16_t x263 = INT16_MAX;
	int32_t t56 = 1972;

	t56 = (x261|((x262-x263)<x264));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x269 = 527LL;
	int32_t x270 = -1;
	uint64_t x271 = 17568543806LLU;

	t57 = (x269|((x270-x271)<x272));

	if (t57 != 527LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = INT16_MAX;
	volatile int8_t x276 = -48;

	t58 = (x273|((x274-x275)<x276));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = -31;
	volatile uint32_t x279 = 21U;
	static int64_t x280 = 355918LL;
	volatile int32_t t59 = -3157850;

	t59 = (x277|((x278-x279)<x280));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x281 = 9U;
	volatile int32_t x282 = INT32_MIN;
	static volatile int64_t x283 = 788LL;
	int16_t x284 = 412;
	int32_t t60 = 0;

	t60 = (x281|((x282-x283)<x284));

	if (t60 != 9) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x286 = 86;
	int16_t x287 = -2299;
	uint32_t x288 = 16U;
	volatile int32_t t61 = -4;

	t61 = (x285|((x286-x287)<x288));

	if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x289 = INT8_MAX;
	uint64_t x290 = 218322861893LLU;
	uint8_t x292 = 106U;
	int32_t t62 = 0;

	t62 = (x289|((x290-x291)<x292));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x293 = UINT32_MAX;
	uint16_t x296 = 11U;
	static volatile uint32_t t63 = UINT32_MAX;

	t63 = (x293|((x294-x295)<x296));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x297 = 15076U;
	static uint8_t x298 = 9U;
	volatile uint32_t t64 = 1U;

	t64 = (x297|((x298-x299)<x300));

	if (t64 != 15076U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x301 = INT8_MIN;
	volatile uint16_t x302 = 19U;
	uint8_t x303 = UINT8_MAX;
	uint64_t x304 = UINT64_MAX;
	int32_t t65 = 37047;

	t65 = (x301|((x302-x303)<x304));

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = -4404185125356181741LL;
	int16_t x306 = INT16_MIN;
	volatile int64_t x307 = INT64_MIN;
	uint8_t x308 = 0U;
	int64_t t66 = 7LL;

	t66 = (x305|((x306-x307)<x308));

	if (t66 != -4404185125356181741LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x309 = -1;
	uint64_t x311 = UINT64_MAX;
	int32_t t67 = 94;

	t67 = (x309|((x310-x311)<x312));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = -1;
	static uint8_t x314 = 3U;
	int16_t x315 = -507;
	int32_t t68 = -472963;

	t68 = (x313|((x314-x315)<x316));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = INT8_MAX;
	uint32_t x320 = 14950406U;
	volatile int32_t t69 = -9;

	t69 = (x317|((x318-x319)<x320));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x323 = INT32_MAX;
	volatile uint16_t x324 = 15596U;
	uint64_t t70 = 123901919620LLU;

	t70 = (x321|((x322-x323)<x324));

	if (t70 != 805011317896923LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x325 = 79312666;
	static volatile uint8_t x326 = 24U;
	int32_t x328 = INT32_MIN;
	int32_t t71 = 0;

	t71 = (x325|((x326-x327)<x328));

	if (t71 != 79312666) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x329 = -30;
	int16_t x330 = 5;
	static int16_t x332 = INT16_MIN;

	t72 = (x329|((x330-x331)<x332));

	if (t72 != -29) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x333 = INT64_MAX;
	uint64_t x335 = 1LLU;
	uint8_t x336 = 0U;

	t73 = (x333|((x334-x335)<x336));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MAX;
	static int32_t x339 = -5000794;
	static uint64_t x340 = UINT64_MAX;
	static volatile int64_t t74 = 213532240427870LL;

	t74 = (x337|((x338-x339)<x340));

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = -1;
	int8_t x342 = INT8_MAX;
	int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	volatile int32_t t75 = 99071;

	t75 = (x341|((x342-x343)<x344));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = -2;
	static int8_t x347 = INT8_MIN;
	int32_t x348 = -5;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x345|((x346-x347)<x348));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x349 = 24872923;
	int64_t x350 = 1030342942036922509LL;
	uint8_t x351 = 79U;
	int32_t t77 = -1;

	t77 = (x349|((x350-x351)<x352));

	if (t77 != 24872923) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = -1;
	int64_t x358 = -494826254353512LL;
	int8_t x359 = 6;
	int32_t x360 = INT32_MIN;
	int32_t t78 = 1;

	t78 = (x357|((x358-x359)<x360));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x361 = 6362;
	static uint64_t x362 = 282133819457LLU;
	int32_t x364 = INT32_MAX;
	static int32_t t79 = 4;

	t79 = (x361|((x362-x363)<x364));

	if (t79 != 6362) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MAX;
	static uint64_t x366 = 331661351549861LLU;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t80 = -337856488;

	t80 = (x365|((x366-x367)<x368));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x370 = INT32_MAX;
	static volatile uint32_t t81 = UINT32_MAX;

	t81 = (x369|((x370-x371)<x372));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x373 = UINT64_MAX;
	volatile int32_t x374 = 56735265;
	static int8_t x375 = INT8_MIN;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x373|((x374-x375)<x376));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x378 = 0U;
	int64_t x379 = -1LL;
	int8_t x380 = 9;
	static uint64_t t83 = 1903985LLU;

	t83 = (x377|((x378-x379)<x380));

	if (t83 != 103LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x382 = 2;
	static uint16_t x383 = 47U;
	int32_t t84 = 82680862;

	t84 = (x381|((x382-x383)<x384));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x385 = 20U;
	uint32_t x386 = 2204106U;
	uint32_t x387 = UINT32_MAX;
	uint64_t x388 = 8024715329152040LLU;
	int32_t t85 = 225;

	t85 = (x385|((x386-x387)<x388));

	if (t85 != 21) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x389 = UINT32_MAX;
	uint32_t x390 = UINT32_MAX;
	static int8_t x391 = 35;
	uint32_t t86 = UINT32_MAX;

	t86 = (x389|((x390-x391)<x392));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = INT32_MIN;
	volatile uint32_t x394 = 8U;
	uint8_t x395 = 20U;
	int8_t x396 = INT8_MAX;
	int32_t t87 = INT32_MIN;

	t87 = (x393|((x394-x395)<x396));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = -46;
	int64_t x403 = INT64_MIN;
	uint64_t x404 = 92186437946LLU;
	int64_t t88 = INT64_MIN;

	t88 = (x401|((x402-x403)<x404));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x405 = UINT64_MAX;
	uint16_t x406 = 1U;
	static int32_t x407 = 21;
	static uint32_t x408 = 28U;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x405|((x406-x407)<x408));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x409 = INT8_MIN;
	uint64_t x410 = 62680763714LLU;
	static volatile uint16_t x411 = UINT16_MAX;
	int16_t x412 = 20;
	int32_t t90 = 47;

	t90 = (x409|((x410-x411)<x412));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = 6677;
	volatile int64_t x422 = -2237700LL;
	volatile int16_t x423 = -1;
	static int32_t t91 = 15030881;

	t91 = (x421|((x422-x423)<x424));

	if (t91 != 6677) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x425 = -347;
	static uint64_t x426 = 4882958583925596663LLU;
	static uint16_t x428 = 15U;
	int32_t t92 = -2046;

	t92 = (x425|((x426-x427)<x428));

	if (t92 != -347) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x429 = UINT64_MAX;
	static uint64_t x430 = 323LLU;
	uint32_t x431 = UINT32_MAX;
	uint32_t x432 = 22U;
	uint64_t t93 = UINT64_MAX;

	t93 = (x429|((x430-x431)<x432));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x433 = 151LLU;
	int16_t x436 = -1;

	t94 = (x433|((x434-x435)<x436));

	if (t94 != 151LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x438 = 36U;
	static int8_t x439 = INT8_MIN;
	static uint64_t x440 = 2LLU;
	volatile int64_t t95 = 33355794LL;

	t95 = (x437|((x438-x439)<x440));

	if (t95 != -727557323141LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x441 = 3434490LLU;
	int8_t x442 = INT8_MAX;
	int16_t x444 = 5;
	uint64_t t96 = 133855672881LLU;

	t96 = (x441|((x442-x443)<x444));

	if (t96 != 3434490LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x445 = -1;
	volatile int16_t x446 = INT16_MIN;
	uint16_t x448 = UINT16_MAX;

	t97 = (x445|((x446-x447)<x448));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x449 = INT32_MAX;
	int16_t x450 = -1;
	volatile uint32_t x451 = 2725494U;
	static uint64_t x452 = UINT64_MAX;
	int32_t t98 = INT32_MAX;

	t98 = (x449|((x450-x451)<x452));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x453 = UINT32_MAX;
	int16_t x454 = INT16_MIN;
	int16_t x455 = INT16_MAX;
	int64_t x456 = INT64_MIN;

	t99 = (x453|((x454-x455)<x456));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

