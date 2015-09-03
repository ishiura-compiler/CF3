#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MIN;
uint64_t x6 = 2965286282514LLU;
volatile int8_t x10 = -1;
uint16_t x19 = UINT16_MAX;
int32_t x21 = 59213569;
uint32_t t4 = 500960U;
static uint64_t x29 = UINT64_MAX;
int16_t x36 = INT16_MIN;
int32_t x37 = INT32_MIN;
uint64_t x39 = 338LLU;
volatile uint64_t t8 = 38LLU;
static int8_t x44 = 1;
int64_t x51 = 6420685960LL;
static int64_t x52 = INT64_MIN;
static volatile uint32_t t13 = 68U;
uint16_t x71 = 102U;
uint32_t t15 = 447042314U;
int64_t x75 = -1LL;
int16_t x76 = INT16_MAX;
static uint8_t x78 = 0U;
static int32_t x79 = -1;
uint32_t x85 = UINT32_MAX;
int32_t x90 = -1;
uint64_t t22 = 5LLU;
int32_t x122 = -1;
uint8_t x126 = 37U;
int32_t x127 = INT32_MAX;
int16_t x128 = INT16_MIN;
uint64_t x130 = UINT64_MAX;
uint8_t x132 = 1U;
static uint8_t x138 = UINT8_MAX;
uint32_t t33 = 27191065U;
static uint8_t x154 = 1U;
static int32_t x156 = 407895014;
volatile int64_t t35 = 3351626192074069LL;
uint16_t x158 = 3713U;
int64_t t36 = INT64_MAX;
uint64_t x166 = UINT64_MAX;
volatile uint16_t x168 = UINT16_MAX;
volatile int64_t x173 = -1LL;
static uint32_t x178 = UINT32_MAX;
int16_t x181 = 10;
static int32_t t43 = -1;
int16_t x193 = INT16_MAX;
uint64_t x195 = UINT64_MAX;
int16_t x206 = 4;
uint16_t x216 = 1057U;
int8_t x220 = INT8_MAX;
static uint32_t x221 = UINT32_MAX;
int32_t x223 = INT32_MAX;
int64_t x239 = -1LL;
uint64_t x247 = 6454409854348115LLU;
static int8_t x250 = INT8_MIN;
int32_t x259 = 163813;
static int32_t x267 = -11880;
uint16_t x270 = 1744U;
volatile int32_t t59 = 27181032;
uint64_t x284 = 559047601753581LLU;
uint64_t x290 = 5868219333856LLU;
uint8_t x302 = UINT8_MAX;
static volatile int32_t t65 = 7;
static int32_t x308 = -1;
volatile int32_t t66 = -6;
uint32_t x309 = UINT32_MAX;
static volatile uint32_t t67 = UINT32_MAX;
int32_t x316 = 9968;
static int64_t t69 = -2LL;
static uint64_t x323 = 4393580LLU;
int8_t x324 = INT8_MIN;
int8_t x325 = INT8_MIN;
static volatile int8_t x326 = INT8_MAX;
int8_t x328 = -20;
int32_t t71 = -29723;
int32_t x329 = 152;
int8_t x331 = INT8_MIN;
uint8_t x336 = 1U;
static int32_t x337 = -1;
uint8_t x341 = 22U;
uint8_t x348 = UINT8_MAX;
volatile uint64_t t76 = 1LLU;
int64_t x351 = -879065425870708LL;
int64_t t77 = 1LL;
static uint8_t x355 = 69U;
uint32_t x359 = 48574U;
uint32_t x367 = 526255894U;
volatile int16_t x369 = 2;
int16_t x370 = -1;
uint16_t x373 = 2U;
int8_t x374 = -1;
int64_t x375 = 63774687159LL;
int8_t x382 = -33;
static int8_t x388 = -26;
uint8_t x389 = 13U;
int8_t x393 = INT8_MIN;
int8_t x395 = -6;
volatile int8_t x396 = -29;
int8_t x403 = -3;
int64_t x404 = INT64_MIN;
uint32_t x416 = 1799151354U;
uint64_t x418 = 4273639LLU;
int32_t x435 = INT32_MIN;
uint32_t x436 = 500051698U;
uint32_t x440 = UINT32_MAX;
static uint16_t x449 = UINT16_MAX;
int16_t x456 = -1;
uint64_t t98 = 3079LLU;
volatile int64_t t99 = 2050113925524LL;


void f0(void) {
	uint32_t x2 = 551U;
	static int32_t x3 = -13;
	int32_t x4 = INT32_MAX;
	static uint32_t t0 = 64398U;

	t0 = (x1|((x2-x3)-x4));

	if (t0 != 4294967221U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint16_t x7 = 125U;
	int16_t x8 = -1;
	uint64_t t1 = 15675966LLU;

	t1 = (x5|((x6-x7)-x8));

	if (t1 != 2965286289407LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 5U;
	static int16_t x11 = INT16_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -91141242;

	t2 = (x9|((x10-x11)-x12));

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MAX;
	volatile int64_t x20 = -1384737LL;
	volatile int64_t t3 = 243301LL;

	t3 = (x17|((x18-x19)-x20));

	if (t3 != -9223372036853423839LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x22 = 3;
	uint32_t x23 = 353271481U;
	uint32_t x24 = UINT32_MAX;

	t4 = (x21|((x22-x23)-x24));

	if (t4 != 3958867787U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = -1;
	uint32_t x27 = 2036U;
	int32_t x28 = INT32_MIN;
	uint32_t t5 = 366U;

	t5 = (x25|((x26-x27)-x28));

	if (t5 != 4294967179U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = -131134240310LL;
	static volatile int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	uint64_t t6 = UINT64_MAX;

	t6 = (x29|((x30-x31)-x32));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 1304498042893LLU;
	int16_t x34 = -5;
	int8_t x35 = 32;
	volatile uint64_t t7 = 10913505405LLU;

	t7 = (x33|((x34-x35)-x36));

	if (t7 != 1304498044895LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = 1;
	int16_t x40 = INT16_MIN;

	t8 = (x37|((x38-x39)-x40));

	if (t8 != 18446744071562100399LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int32_t x42 = -1;
	int8_t x43 = INT8_MAX;
	volatile int32_t t9 = 7334;

	t9 = (x41|((x42-x43)-x44));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 628U;
	int16_t x46 = 14468;
	volatile int64_t x47 = -105LL;
	int16_t x48 = -7680;
	volatile int64_t t10 = 1132914782889LL;

	t10 = (x45|((x46-x47)-x48));

	if (t10 != 22269LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = 48742LL;
	int8_t x50 = INT8_MIN;
	volatile int64_t t11 = 46006LL;

	t11 = (x49|((x50-x51)-x52));

	if (t11 != 9223372030434131710LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x53 = 70788U;
	static int16_t x54 = -1;
	int64_t x55 = -1LL;
	static int16_t x56 = 0;
	volatile int64_t t12 = -122463714386LL;

	t12 = (x53|((x54-x55)-x56));

	if (t12 != 70788LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 4064U;
	uint32_t x58 = UINT32_MAX;
	int16_t x59 = 317;
	uint16_t x60 = 0U;

	t13 = (x57|((x58-x59)-x60));

	if (t13 != 4294967266U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = UINT8_MAX;
	volatile int16_t x66 = INT16_MIN;
	uint64_t x67 = 7847728396377LLU;
	uint64_t x68 = 28613195463961LLU;
	static uint64_t t14 = 405959601LLU;

	t14 = (x65|((x66-x67)-x68));

	if (t14 != 18446707612785658623LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x69 = 241142U;
	int16_t x70 = INT16_MIN;
	int32_t x72 = -150383;

	t15 = (x69|((x70-x71)-x72));

	if (t15 != 258047U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	uint64_t x74 = 4999858LLU;
	uint64_t t16 = 4856639107329070512LLU;

	t16 = (x73|((x74-x75)-x76));

	if (t16 != 9223372036859742900LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	int8_t x80 = INT8_MIN;
	volatile int32_t t17 = -6940878;

	t17 = (x77|((x78-x79)-x80));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = UINT32_MAX;
	static int8_t x82 = -57;
	int8_t x83 = 0;
	int8_t x84 = -1;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x81|((x82-x83)-x84));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = INT32_MAX;
	static uint64_t x87 = 452970541516LLU;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t19 = 294565411LLU;

	t19 = (x85|((x86-x87)-x88));

	if (t19 != 18446743627032952831LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = INT64_MIN;
	volatile int8_t x91 = -1;
	static volatile int8_t x92 = INT8_MAX;
	int64_t t20 = -4213592610907LL;

	t20 = (x89|((x90-x91)-x92));

	if (t20 != -127LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x93 = 27U;
	static uint32_t x94 = UINT32_MAX;
	int16_t x95 = -59;
	int64_t x96 = INT64_MAX;
	int64_t t21 = 16487222LL;

	t21 = (x93|((x94-x95)-x96));

	if (t21 != -9223372036854775749LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = INT16_MIN;
	volatile int8_t x98 = INT8_MIN;
	volatile int32_t x99 = -1;
	uint64_t x100 = UINT64_MAX;

	t22 = (x97|((x98-x99)-x100));

	if (t22 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -4943;
	static int64_t x102 = INT64_MIN;
	int16_t x103 = -2;
	int32_t x104 = INT32_MIN;
	volatile int64_t t23 = -2138787755LL;

	t23 = (x101|((x102-x103)-x104));

	if (t23 != -4941LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = INT8_MIN;
	int64_t x106 = -1LL;
	int64_t x107 = 21235789LL;
	int64_t x108 = INT64_MIN;
	volatile int64_t t24 = -38LL;

	t24 = (x105|((x106-x107)-x108));

	if (t24 != -78LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = -1088794938494645LL;
	volatile uint64_t x111 = UINT64_MAX;
	volatile int64_t x112 = INT64_MIN;
	volatile uint64_t t25 = 49LLU;

	t25 = (x109|((x110-x111)-x112));

	if (t25 != 18446744072307945804LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MAX;
	int16_t x118 = INT16_MIN;
	uint32_t x119 = 1178660799U;
	uint64_t x120 = 58267119265468LLU;
	volatile uint64_t t26 = 94LLU;

	t26 = (x117|((x118-x119)-x120));

	if (t26 != 18446685810330697727LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	uint32_t x123 = UINT32_MAX;
	uint32_t x124 = 3665628U;
	uint32_t t27 = UINT32_MAX;

	t27 = (x121|((x122-x123)-x124));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = 0;
	int32_t t28 = 5073;

	t28 = (x125|((x126-x127)-x128));

	if (t28 != -2147450842) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	volatile uint32_t x131 = UINT32_MAX;
	uint64_t t29 = UINT64_MAX;

	t29 = (x129|((x130-x131)-x132));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = -1;
	int16_t x134 = INT16_MIN;
	static int16_t x135 = -1;
	int16_t x136 = 9654;
	volatile int32_t t30 = -357383;

	t30 = (x133|((x134-x135)-x136));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = UINT64_MAX;
	static int32_t x139 = INT32_MAX;
	uint64_t x140 = 15353940LLU;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x137|((x138-x139)-x140));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	uint16_t x142 = 164U;
	int32_t x143 = -1501962;
	int8_t x144 = 0;
	int64_t t32 = -1195871306LL;

	t32 = (x141|((x142-x143)-x144));

	if (t32 != -9223372036853273682LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 8U;
	uint32_t x146 = 46U;
	uint8_t x147 = 46U;
	volatile uint16_t x148 = 1898U;

	t33 = (x145|((x146-x147)-x148));

	if (t33 != 4294965406U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = -1;
	int16_t x151 = -1;
	int16_t x152 = INT16_MIN;
	volatile int64_t t34 = -3LL;

	t34 = (x149|((x150-x151)-x152));

	if (t34 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MIN;
	int8_t x155 = -7;

	t35 = (x153|((x154-x155)-x156));

	if (t35 != -407895006LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MAX;
	static int32_t x159 = -53;
	volatile int16_t x160 = INT16_MIN;

	t36 = (x157|((x158-x159)-x160));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = UINT64_MAX;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = UINT64_MAX;
	uint32_t x164 = 1U;
	uint64_t t37 = UINT64_MAX;

	t37 = (x161|((x162-x163)-x164));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MAX;
	static int64_t x167 = -1LL;
	static uint64_t t38 = UINT64_MAX;

	t38 = (x165|((x166-x167)-x168));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 868449559085977LLU;
	static uint64_t x170 = 23131886LLU;
	static int32_t x171 = INT32_MIN;
	volatile uint32_t x172 = 231U;
	uint64_t t39 = 249622855573249LLU;

	t39 = (x169|((x170-x171)-x172));

	if (t39 != 868449559115679LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = -1LL;
	int32_t x175 = -7;
	int32_t x176 = INT32_MIN;
	volatile int64_t t40 = 8031770LL;

	t40 = (x173|((x174-x175)-x176));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -2945;
	volatile int32_t x179 = -11138675;
	static volatile int8_t x180 = INT8_MAX;
	static uint32_t t41 = 12U;

	t41 = (x177|((x178-x179)-x180));

	if (t41 != 4294964735U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x182 = -1;
	uint64_t x183 = 62828983747LLU;
	volatile int32_t x184 = INT32_MIN;
	volatile uint64_t t42 = 2578805512034574LLU;

	t42 = (x181|((x182-x183)-x184));

	if (t42 != 18446744013028051518LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 25528U;
	int32_t x190 = 59787931;
	static uint16_t x191 = 4827U;
	int32_t x192 = -1;

	t43 = (x189|((x190-x191)-x192));

	if (t43 != 59799545) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x194 = 3617;
	volatile uint8_t x196 = 28U;
	uint64_t t44 = 60LLU;

	t44 = (x193|((x194-x195)-x196));

	if (t44 != 32767LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MIN;
	volatile int64_t x199 = -4435493725520909366LL;
	static uint8_t x200 = 1U;
	int64_t t45 = -505102LL;

	t45 = (x197|((x198-x199)-x200));

	if (t45 != 4435493725520887807LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = -1;
	volatile int16_t x203 = INT16_MIN;
	int16_t x204 = -1;
	volatile int64_t t46 = -54090885944LL;

	t46 = (x201|((x202-x203)-x204));

	if (t46 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MIN;
	static uint16_t x207 = 509U;
	int8_t x208 = -1;
	volatile int64_t t47 = 13789378779745LL;

	t47 = (x205|((x206-x207)-x208));

	if (t47 != -504LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x213 = -1LL;
	int8_t x214 = INT8_MIN;
	int32_t x215 = -1;
	int64_t t48 = -3677834379LL;

	t48 = (x213|((x214-x215)-x216));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = -63974296LL;
	static int64_t x218 = -17542300LL;
	int32_t x219 = INT32_MAX;
	static volatile int64_t t49 = 1LL;

	t49 = (x217|((x218-x219)-x220));

	if (t49 != -16787730LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x222 = 448U;
	volatile int64_t x224 = INT64_MIN;
	int64_t t50 = INT64_MAX;

	t50 = (x221|((x222-x223)-x224));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = -1;
	uint8_t x226 = 7U;
	int8_t x227 = INT8_MIN;
	volatile uint8_t x228 = UINT8_MAX;
	int32_t t51 = 653;

	t51 = (x225|((x226-x227)-x228));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x229 = -4090103;
	int32_t x230 = 6709211;
	uint16_t x231 = 11145U;
	int16_t x232 = INT16_MAX;
	volatile int32_t t52 = 172232849;

	t52 = (x229|((x230-x231)-x232));

	if (t52 != -1722533) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x238 = -1;
	static volatile int16_t x240 = INT16_MIN;
	uint64_t t53 = UINT64_MAX;

	t53 = (x237|((x238-x239)-x240));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = 1;
	int64_t x246 = -950091256913861LL;
	int16_t x248 = -1;
	volatile uint64_t t54 = 6965LLU;

	t54 = (x245|((x246-x247)-x248));

	if (t54 != 18439339572598289641LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = -3731;
	volatile int8_t x251 = 0;
	static uint16_t x252 = UINT16_MAX;
	int32_t t55 = -9;

	t55 = (x249|((x250-x251)-x252));

	if (t55 != -19) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int32_t x254 = -1;
	int8_t x255 = 0;
	uint16_t x256 = UINT16_MAX;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (x253|((x254-x255)-x256));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -4864;
	volatile int16_t x258 = 6;
	int32_t x260 = -420274917;
	volatile int32_t t57 = -125;

	t57 = (x257|((x258-x259)-x260));

	if (t57 != -4346) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x265 = INT16_MIN;
	int8_t x266 = -15;
	uint32_t x268 = UINT32_MAX;
	uint32_t t58 = 1961U;

	t58 = (x265|((x266-x267)-x268));

	if (t58 != 4294946394U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x269 = 11U;
	int32_t x271 = 31791656;
	static volatile int16_t x272 = -93;

	t59 = (x269|((x270-x271)-x272));

	if (t59 != -31789809) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x277 = 22;
	uint64_t x278 = 122LLU;
	uint64_t x279 = 117389LLU;
	volatile uint32_t x280 = 873U;
	uint64_t t60 = 45LLU;

	t60 = (x277|((x278-x279)-x280));

	if (t60 != 18446744073709433494LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = 51;
	static volatile int16_t x282 = -1;
	uint16_t x283 = 3840U;
	uint64_t t61 = 1202898823042LLU;

	t61 = (x281|((x282-x283)-x284));

	if (t61 != 18446185026107794227LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x285 = INT32_MAX;
	static int32_t x286 = INT32_MAX;
	uint16_t x287 = UINT16_MAX;
	int8_t x288 = 28;
	int32_t t62 = INT32_MAX;

	t62 = (x285|((x286-x287)-x288));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = INT64_MAX;
	int64_t x291 = -1LL;
	uint16_t x292 = 27U;
	static volatile uint64_t t63 = 0LLU;

	t63 = (x289|((x290-x291)-x292));

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MIN;
	int8_t x295 = -18;
	volatile uint16_t x296 = UINT16_MAX;
	volatile int64_t t64 = -45001432LL;

	t64 = (x293|((x294-x295)-x296));

	if (t64 != -65645LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = -31238;
	static int8_t x303 = -4;
	int16_t x304 = INT16_MAX;

	t65 = (x301|((x302-x303)-x304));

	if (t65 != -31234) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x305 = -390195424;
	uint16_t x306 = 5901U;
	int16_t x307 = INT16_MIN;

	t66 = (x305|((x306-x307)-x308));

	if (t66 != -390162642) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x310 = 43U;
	int16_t x311 = INT16_MIN;
	static int32_t x312 = -1;

	t67 = (x309|((x310-x311)-x312));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = INT32_MAX;
	int16_t x314 = INT16_MIN;
	volatile uint64_t x315 = 8196LLU;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x313|((x314-x315)-x316));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x317 = -51;
	uint16_t x318 = 38U;
	int8_t x319 = INT8_MIN;
	volatile int64_t x320 = INT64_MAX;

	t69 = (x317|((x318-x319)-x320));

	if (t69 != -17LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x322 = -22;
	uint64_t t70 = 17LLU;

	t70 = (x321|((x322-x323)-x324));

	if (t70 != 18446744073705160703LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x327 = 1U;

	t71 = (x325|((x326-x327)-x328));

	if (t71 != -110) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x330 = INT16_MIN;
	int8_t x332 = -1;
	int32_t t72 = 12710902;

	t72 = (x329|((x330-x331)-x332));

	if (t72 != -32615) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MAX;
	static int16_t x335 = INT16_MAX;
	static volatile int32_t t73 = 2853064;

	t73 = (x333|((x334-x335)-x336));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x338 = 4U;
	uint8_t x339 = UINT8_MAX;
	static int16_t x340 = -1;
	volatile int32_t t74 = 382328;

	t74 = (x337|((x338-x339)-x340));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = 3720U;
	uint32_t t75 = 44903U;

	t75 = (x341|((x342-x343)-x344));

	if (t75 != 4294963582U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x345 = INT32_MAX;
	int32_t x346 = -1;
	uint64_t x347 = 267377801607921730LLU;

	t76 = (x345|((x346-x347)-x348));

	if (t76 != 18179366272733544447LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = 414LL;
	static volatile int32_t x352 = -1;

	t77 = (x349|((x350-x351)-x352));

	if (t77 != -32493LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = INT32_MIN;
	static uint8_t x354 = 1U;
	static int8_t x356 = INT8_MIN;
	int32_t t78 = -5;

	t78 = (x353|((x354-x355)-x356));

	if (t78 != -2147483588) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x357 = 27U;
	int32_t x358 = 1549011;
	volatile int32_t x360 = INT32_MAX;
	uint32_t t79 = 63U;

	t79 = (x357|((x358-x359)-x360));

	if (t79 != 2148984095U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = -1;
	int32_t x362 = INT32_MAX;
	volatile int64_t x363 = -239LL;
	int8_t x364 = INT8_MIN;
	volatile int64_t t80 = -168LL;

	t80 = (x361|((x362-x363)-x364));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x365 = UINT32_MAX;
	static int32_t x366 = -1;
	int16_t x368 = -1;
	uint32_t t81 = UINT32_MAX;

	t81 = (x365|((x366-x367)-x368));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x371 = 410U;
	uint64_t x372 = 130004LLU;
	volatile uint64_t t82 = 447198731LLU;

	t82 = (x369|((x370-x371)-x372));

	if (t82 != 18446744073709421203LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x376 = INT8_MAX;
	int64_t t83 = 22651398237LL;

	t83 = (x373|((x374-x375)-x376));

	if (t83 != -63774687285LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x381 = 1U;
	uint32_t x383 = 468263330U;
	volatile int64_t x384 = -2457514422891LL;
	int64_t t84 = 2326LL;

	t84 = (x381|((x382-x383)-x384));

	if (t84 != 2461341126825LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x385 = UINT16_MAX;
	static volatile int16_t x386 = 860;
	int8_t x387 = -19;
	static volatile int32_t t85 = 1;

	t85 = (x385|((x386-x387)-x388));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x390 = -1LL;
	uint32_t x391 = 43171U;
	int32_t x392 = -6304870;
	volatile int64_t t86 = 983LL;

	t86 = (x389|((x390-x391)-x392));

	if (t86 != 6261711LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x394 = -1;
	volatile int32_t t87 = -266853311;

	t87 = (x393|((x394-x395)-x396));

	if (t87 != -94) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int8_t x402 = INT8_MIN;
	uint64_t t88 = UINT64_MAX;

	t88 = (x401|((x402-x403)-x404));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x413 = 2;
	int32_t x414 = -208735;
	int16_t x415 = -1;
	uint32_t t89 = 103242940U;

	t89 = (x413|((x414-x415)-x416));

	if (t89 != 2495607210U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x417 = -1LL;
	int32_t x419 = 7313773;
	static volatile int32_t x420 = -1;
	uint64_t t90 = UINT64_MAX;

	t90 = (x417|((x418-x419)-x420));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MIN;
	uint16_t x422 = 61U;
	int16_t x423 = -1;
	volatile int64_t x424 = INT64_MAX;
	int64_t t91 = 2933LL;

	t91 = (x421|((x422-x423)-x424));

	if (t91 != -32705LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x425 = UINT32_MAX;
	volatile uint64_t x426 = UINT64_MAX;
	int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MIN;
	volatile uint64_t t92 = 79847723916507LLU;

	t92 = (x425|((x426-x427)-x428));

	if (t92 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x429 = 2U;
	uint8_t x430 = UINT8_MAX;
	volatile int8_t x431 = -1;
	int64_t x432 = -48769062766732LL;
	int64_t t93 = 2008287684406LL;

	t93 = (x429|((x430-x431)-x432));

	if (t93 != 48769062766990LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x433 = 136U;
	int16_t x434 = INT16_MIN;
	volatile uint32_t t94 = 33U;

	t94 = (x433|((x434-x435)-x436));

	if (t94 != 1647399310U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = INT64_MIN;
	uint8_t x438 = UINT8_MAX;
	uint64_t x439 = 26721020LLU;
	static uint64_t t95 = 201633303LLU;

	t95 = (x437|((x438-x439)-x440));

	if (t95 != 18446744069387863556LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x441 = UINT8_MAX;
	static int32_t x442 = INT32_MIN;
	int64_t x443 = -57559415316LL;
	static int64_t x444 = -1LL;
	int64_t t96 = 0LL;

	t96 = (x441|((x442-x443)-x444));

	if (t96 != 55411931903LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x450 = -969;
	int16_t x451 = INT16_MAX;
	int16_t x452 = -69;
	static volatile int32_t t97 = 54782385;

	t97 = (x449|((x450-x451)-x452));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x453 = INT64_MAX;
	static uint64_t x454 = 1844LLU;
	int64_t x455 = -61LL;

	t98 = (x453|((x454-x455)-x456));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = INT32_MIN;
	int64_t x458 = INT64_MAX;
	static int64_t x459 = 1860143933114LL;
	volatile int16_t x460 = -1;

	t99 = (x457|((x458-x459)-x460));

	if (t99 != -423093946LL) { NG(); } else { ; }
	
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

