#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
uint64_t x9 = 2891LLU;
int64_t x12 = 731LL;
volatile int64_t t2 = -112353LL;
volatile int16_t x18 = INT16_MAX;
volatile int64_t x31 = 8469277067209898LL;
static int16_t x48 = INT16_MIN;
int32_t x51 = -12828;
volatile uint64_t x54 = UINT64_MAX;
volatile uint64_t t11 = 104LLU;
uint64_t x62 = UINT64_MAX;
uint32_t x63 = 18U;
static volatile uint64_t t12 = 4171451416668819LLU;
int64_t x67 = INT64_MAX;
int16_t x69 = INT16_MIN;
volatile int16_t x73 = -1;
volatile int16_t x80 = INT16_MIN;
static volatile uint64_t t16 = 676582174405LLU;
static int16_t x81 = INT16_MAX;
int32_t x87 = -1;
int64_t t18 = 1049838LL;
static volatile uint32_t x91 = 331U;
static uint16_t x92 = UINT16_MAX;
int64_t x105 = -3936073425149704LL;
volatile int64_t x121 = INT64_MIN;
int16_t x125 = -1;
int64_t t26 = 17651561205815693LL;
int16_t x141 = INT16_MIN;
uint16_t x149 = UINT16_MAX;
int8_t x152 = INT8_MIN;
int64_t x154 = -1LL;
uint8_t x158 = UINT8_MAX;
static int64_t x174 = -579807LL;
volatile int64_t t36 = -30080970522807LL;
int64_t x178 = INT64_MAX;
uint64_t x183 = 254LLU;
uint8_t x188 = 3U;
volatile int32_t t39 = 9020;
volatile uint8_t x190 = UINT8_MAX;
uint32_t x191 = 136377U;
int32_t t42 = 2;
uint32_t x207 = UINT32_MAX;
int64_t x217 = -1111LL;
uint64_t x219 = 4250587013051030276LLU;
int32_t x226 = INT32_MIN;
static volatile int32_t x227 = INT32_MAX;
int64_t t47 = -16782306LL;
uint32_t x235 = UINT32_MAX;
int16_t x240 = INT16_MIN;
static int16_t x241 = INT16_MIN;
int32_t x242 = -247;
uint16_t x243 = 72U;
int8_t x248 = INT8_MIN;
volatile int32_t t53 = -195128;
int8_t x257 = INT8_MIN;
static uint64_t x261 = UINT64_MAX;
int32_t x266 = INT32_MAX;
int8_t x269 = INT8_MAX;
volatile int16_t x287 = INT16_MAX;
uint32_t x296 = 5U;
static uint16_t x297 = 259U;
int16_t x306 = INT16_MAX;
int32_t x308 = 444870;
volatile uint8_t x309 = UINT8_MAX;
volatile int64_t x310 = -1LL;
uint16_t x311 = 4U;
uint8_t x317 = UINT8_MAX;
int64_t x319 = INT64_MIN;
int8_t x323 = INT8_MAX;
uint16_t x324 = UINT16_MAX;
static uint8_t x342 = 12U;
int32_t x347 = 30;
volatile int8_t x348 = -1;
static int32_t x356 = INT32_MAX;
int32_t t72 = -6;
uint16_t x365 = 28U;
int64_t x371 = -1LL;
uint16_t x372 = 0U;
int64_t x374 = 1323505728917145LL;
int8_t x375 = -30;
static int16_t x378 = INT16_MIN;
uint64_t x379 = 11201675097928186LLU;
uint64_t t76 = 13951404137728LLU;
static int16_t x381 = INT16_MIN;
uint32_t t79 = 0U;
int16_t x402 = 1346;
uint8_t x403 = UINT8_MAX;
uint32_t x404 = 332142U;
uint16_t x410 = 1U;
static uint8_t x414 = UINT8_MAX;
volatile uint64_t t86 = 239691483482016275LLU;
uint32_t t87 = 967165U;
uint64_t x431 = 8935185281120LLU;
uint16_t x432 = UINT16_MAX;
uint16_t x453 = 3U;
uint16_t x481 = UINT16_MAX;


void f0(void) {
	int64_t x2 = -8LL;
	uint16_t x3 = 9U;
	int64_t x4 = -1LL;
	volatile int64_t t0 = -4097166970264432LL;

	t0 = ((x1/x2)%(x3-x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = INT32_MAX;
	volatile uint16_t x11 = UINT16_MAX;
	uint64_t t1 = 2951LLU;

	t1 = ((x9/x10)%(x11-x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	static uint32_t x14 = 249716384U;
	volatile int64_t x15 = INT64_MIN;
	static volatile int8_t x16 = -1;

	t2 = ((x13/x14)%(x15-x16));

	if (t2 != 8LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	uint16_t x19 = 120U;
	int32_t x20 = INT32_MAX;
	volatile int32_t t3 = 1157919;

	t3 = ((x17/x18)%(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 103973771U;
	volatile int64_t x22 = INT64_MIN;
	uint16_t x23 = 9U;
	static int32_t x24 = -1;
	static volatile int64_t t4 = 69214550686656LL;

	t4 = ((x21/x22)%(x23-x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	static int64_t x26 = -6509855907865387LL;
	static int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	static volatile int64_t t5 = 1985932LL;

	t5 = ((x25/x26)%(x27-x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -1;
	int32_t x30 = INT32_MIN;
	int64_t x32 = INT64_MAX;
	int64_t t6 = -399992471LL;

	t6 = ((x29/x30)%(x31-x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 6;
	int16_t x38 = INT16_MIN;
	int8_t x39 = -1;
	volatile int16_t x40 = -809;
	int32_t t7 = -936039;

	t7 = ((x37/x38)%(x39-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	int64_t x42 = -2358LL;
	static int8_t x43 = INT8_MAX;
	int16_t x44 = -1315;
	int64_t t8 = 3594225746469746019LL;

	t8 = ((x41/x42)%(x43-x44));

	if (t8 != 13LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1LL;
	static volatile uint64_t x46 = UINT64_MAX;
	volatile int64_t x47 = INT64_MIN;
	uint64_t t9 = 5352325444198LLU;

	t9 = ((x45/x46)%(x47-x48));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MAX;
	int32_t x50 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	static int32_t t10 = -51232;

	t10 = ((x49/x50)%(x51-x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	static uint64_t x55 = 9086186424125955214LLU;
	uint16_t x56 = UINT16_MAX;

	t11 = ((x53/x54)%(x55-x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x61 = INT64_MIN;
	int16_t x64 = -1;

	t12 = ((x61/x62)%(x63-x64));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = -1LL;
	static int16_t x66 = -20;
	static int64_t x68 = 3721758360298LL;
	int64_t t13 = -1482081LL;

	t13 = ((x65/x66)%(x67-x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	static uint64_t t14 = 30812284426906213LLU;

	t14 = ((x69/x70)%(x71-x72));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = 6784381841644LL;
	int8_t x75 = -1;
	static uint16_t x76 = 170U;
	volatile int64_t t15 = 116467197603978134LL;

	t15 = ((x73/x74)%(x75-x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 452U;
	uint64_t x78 = 3607LLU;
	static int32_t x79 = 1335;

	t16 = ((x77/x78)%(x79-x80));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x82 = 3589547325653892LLU;
	int8_t x83 = INT8_MAX;
	uint64_t x84 = UINT64_MAX;
	static volatile uint64_t t17 = 1238726177402768LLU;

	t17 = ((x81/x82)%(x83-x84));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 1;
	static int64_t x86 = INT64_MAX;
	int8_t x88 = INT8_MIN;

	t18 = ((x85/x86)%(x87-x88));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	int16_t x90 = INT16_MAX;
	volatile uint32_t t19 = 76009316U;

	t19 = ((x89/x90)%(x91-x92));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	int64_t x94 = -1LL;
	int32_t x95 = 4166658;
	uint8_t x96 = 12U;
	volatile int64_t t20 = -9839LL;

	t20 = ((x93/x94)%(x95-x96));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 4U;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = 109U;
	int64_t x100 = 7895731LL;
	static volatile int64_t t21 = 2060496LL;

	t21 = ((x97/x98)%(x99-x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x106 = UINT16_MAX;
	int32_t x107 = INT32_MIN;
	int32_t x108 = -411;
	static volatile int64_t t22 = -451273217LL;

	t22 = ((x105/x106)%(x107-x108));

	if (t22 != -2078583182LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = UINT16_MAX;
	static volatile uint16_t x114 = UINT16_MAX;
	uint64_t x115 = 4144814257393LLU;
	int32_t x116 = INT32_MAX;
	uint64_t t23 = 122LLU;

	t23 = ((x113/x114)%(x115-x116));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MAX;
	static uint64_t x118 = 297455LLU;
	static uint64_t x119 = UINT64_MAX;
	uint8_t x120 = 6U;
	uint64_t t24 = 289996883660LLU;

	t24 = ((x117/x118)%(x119-x120));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x122 = 1280;
	int32_t x123 = 2844883;
	uint32_t x124 = 2U;
	volatile int64_t t25 = -34721433385288046LL;

	t25 = ((x121/x122)%(x123-x124));

	if (t25 != -2137862LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x126 = INT32_MAX;
	volatile uint32_t x127 = 526U;
	int64_t x128 = -7144987LL;

	t26 = ((x125/x126)%(x127-x128));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x133 = 3U;
	static uint64_t x134 = 72003LLU;
	uint8_t x135 = UINT8_MAX;
	uint64_t x136 = UINT64_MAX;
	uint64_t t27 = 12655896423946LLU;

	t27 = ((x133/x134)%(x135-x136));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = 37334509822LL;
	uint32_t x138 = 1810009U;
	uint64_t x139 = UINT64_MAX;
	volatile int32_t x140 = 34824;
	static volatile uint64_t t28 = 0LLU;

	t28 = ((x137/x138)%(x139-x140));

	if (t28 != 20626LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x142 = INT16_MIN;
	int32_t x143 = 1127;
	int16_t x144 = 2;
	volatile int32_t t29 = 582650652;

	t29 = ((x141/x142)%(x143-x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = -1;
	int64_t x146 = 242LL;
	uint8_t x147 = 0U;
	int32_t x148 = 5;
	volatile int64_t t30 = -51445473692306LL;

	t30 = ((x145/x146)%(x147-x148));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x150 = INT64_MAX;
	volatile uint64_t x151 = 53LLU;
	volatile uint64_t t31 = 197LLU;

	t31 = ((x149/x150)%(x151-x152));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = -1;
	uint32_t x155 = 240901U;
	volatile int16_t x156 = INT16_MAX;
	int64_t t32 = 605002808LL;

	t32 = ((x153/x154)%(x155-x156));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x157 = INT64_MIN;
	static int16_t x159 = INT16_MAX;
	int16_t x160 = INT16_MIN;
	volatile int64_t t33 = 223595255374863698LL;

	t33 = ((x157/x158)%(x159-x160));

	if (t33 != -33281LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = INT8_MAX;
	int32_t x162 = INT32_MIN;
	volatile uint16_t x163 = 10636U;
	int32_t x164 = -1;
	volatile int32_t t34 = -1;

	t34 = ((x161/x162)%(x163-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = 1057647206902LL;
	uint64_t x170 = 10789477LLU;
	int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MIN;
	uint64_t t35 = 3627365325LLU;

	t35 = ((x169/x170)%(x171-x172));

	if (t35 != 98025LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x173 = -4112090643403971LL;
	int64_t x175 = -8773627111616LL;
	volatile int16_t x176 = INT16_MIN;

	t36 = ((x173/x174)%(x175-x176));

	if (t36 != 7092171435LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MIN;
	volatile uint16_t x179 = UINT16_MAX;
	volatile int32_t x180 = INT32_MAX;
	static volatile int64_t t37 = -2LL;

	t37 = ((x177/x178)%(x179-x180));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x181 = -1;
	static uint64_t x182 = 4325227730808235LLU;
	int8_t x184 = 0;
	volatile uint64_t t38 = 21768LLU;

	t38 = ((x181/x182)%(x183-x184));

	if (t38 != 200LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x186 = -1;
	static volatile int16_t x187 = INT16_MIN;

	t39 = ((x185/x186)%(x187-x188));

	if (t39 != -32764) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = INT16_MIN;
	static uint16_t x192 = UINT16_MAX;
	uint32_t t40 = 11U;

	t40 = ((x189/x190)%(x191-x192));

	if (t40 != 29234U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MAX;
	volatile uint32_t x194 = UINT32_MAX;
	int8_t x195 = INT8_MIN;
	volatile int16_t x196 = -1;
	volatile uint32_t t41 = 5U;

	t41 = ((x193/x194)%(x195-x196));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x197 = -407;
	uint8_t x198 = UINT8_MAX;
	volatile int32_t x199 = INT32_MAX;
	volatile int8_t x200 = INT8_MAX;

	t42 = ((x197/x198)%(x199-x200));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = -1LL;
	volatile int64_t x202 = INT64_MIN;
	volatile int8_t x203 = INT8_MIN;
	static uint8_t x204 = 6U;
	volatile int64_t t43 = -6LL;

	t43 = ((x201/x202)%(x203-x204));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = 833U;
	uint32_t x206 = UINT32_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t44 = 239472172174501LLU;

	t44 = ((x205/x206)%(x207-x208));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x218 = 918737;
	int32_t x220 = -46;
	volatile uint64_t t45 = 1232940371LLU;

	t45 = ((x217/x218)%(x219-x220));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = INT8_MAX;
	int32_t x222 = -1;
	int8_t x223 = INT8_MIN;
	static uint64_t x224 = 3336682977137LLU;
	uint64_t t46 = 39509230383LLU;

	t46 = ((x221/x222)%(x223-x224));

	if (t46 != 3336682977138LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x225 = INT8_MAX;
	int64_t x228 = -1LL;

	t47 = ((x225/x226)%(x227-x228));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MAX;
	uint8_t x231 = 29U;
	static int8_t x232 = INT8_MAX;
	int32_t t48 = -8;

	t48 = ((x229/x230)%(x231-x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = -1;
	int32_t x234 = INT32_MIN;
	int64_t x236 = -2194617212378049792LL;
	static volatile int64_t t49 = 1529108698LL;

	t49 = ((x233/x234)%(x235-x236));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x237 = 2U;
	volatile int64_t x238 = -952280LL;
	int32_t x239 = INT32_MIN;
	int64_t t50 = 33450428420599002LL;

	t50 = ((x237/x238)%(x239-x240));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x244 = 0;
	volatile int32_t t51 = 1;

	t51 = ((x241/x242)%(x243-x244));

	if (t51 != 60) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = -3025005087LL;
	int8_t x246 = -32;
	volatile int64_t x247 = -1LL;
	volatile int64_t t52 = 307517451826722145LL;

	t52 = ((x245/x246)%(x247-x248));

	if (t52 != 101LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = 59;
	int32_t x250 = -1;
	int32_t x251 = INT32_MIN;
	static int16_t x252 = INT16_MIN;

	t53 = ((x249/x250)%(x251-x252));

	if (t53 != -59) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x258 = -6;
	static int32_t x259 = 22;
	int64_t x260 = -1LL;
	int64_t t54 = 114987LL;

	t54 = ((x257/x258)%(x259-x260));

	if (t54 != 21LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x262 = 63U;
	int32_t x263 = -4;
	uint64_t x264 = UINT64_MAX;
	uint64_t t55 = 8188490LLU;

	t55 = ((x261/x262)%(x263-x264));

	if (t55 != 292805461487453200LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x265 = 635162LLU;
	static int16_t x267 = INT16_MIN;
	uint64_t x268 = 149142903757LLU;
	uint64_t t56 = 4439235065890404592LLU;

	t56 = ((x265/x266)%(x267-x268));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x270 = INT32_MIN;
	int16_t x271 = 0;
	int32_t x272 = INT32_MAX;
	volatile int32_t t57 = 1;

	t57 = ((x269/x270)%(x271-x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x285 = -38236743873LL;
	volatile uint64_t x286 = 110328212727241459LLU;
	int8_t x288 = -36;
	uint64_t t58 = 824215LLU;

	t58 = ((x285/x286)%(x287-x288));

	if (t58 != 167LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = INT32_MAX;
	int8_t x294 = -1;
	volatile uint32_t x295 = 987695U;
	volatile uint32_t t59 = 1056091741U;

	t59 = ((x293/x294)%(x295-x296));

	if (t59 != 245589U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x298 = -1;
	uint8_t x299 = 36U;
	volatile int16_t x300 = INT16_MIN;
	int32_t t60 = 453;

	t60 = ((x297/x298)%(x299-x300));

	if (t60 != -259) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x301 = INT8_MAX;
	static int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MIN;
	static int16_t x304 = -6;
	int64_t t61 = 150621656LL;

	t61 = ((x301/x302)%(x303-x304));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x307 = 13504U;
	static volatile int32_t t62 = 473;

	t62 = ((x305/x306)%(x307-x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x312 = UINT16_MAX;
	volatile int64_t t63 = -4230226242229559LL;

	t63 = ((x309/x310)%(x311-x312));

	if (t63 != -255LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x318 = -1;
	int32_t x320 = -1;
	volatile int64_t t64 = -1870304462161LL;

	t64 = ((x317/x318)%(x319-x320));

	if (t64 != -255LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x321 = INT32_MAX;
	static int64_t x322 = INT64_MAX;
	volatile int64_t t65 = -6705LL;

	t65 = ((x321/x322)%(x323-x324));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x333 = -1;
	static int8_t x334 = INT8_MAX;
	uint32_t x335 = 8280190U;
	static uint8_t x336 = 34U;
	uint32_t t66 = 1315104008U;

	t66 = ((x333/x334)%(x335-x336));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x341 = INT64_MIN;
	uint16_t x343 = UINT16_MAX;
	int64_t x344 = INT64_MAX;
	int64_t t67 = 756539LL;

	t67 = ((x341/x342)%(x343-x344));

	if (t67 != -768614336404564650LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = -1LL;
	volatile int16_t x346 = -1;
	volatile int64_t t68 = 1920134052827LL;

	t68 = ((x345/x346)%(x347-x348));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x349 = INT32_MAX;
	int32_t x350 = INT32_MAX;
	int8_t x351 = INT8_MAX;
	int64_t x352 = INT64_MAX;
	int64_t t69 = 30983647960082452LL;

	t69 = ((x349/x350)%(x351-x352));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x353 = 3U;
	int16_t x354 = INT16_MAX;
	int32_t x355 = -1;
	volatile int32_t t70 = 182469;

	t70 = ((x353/x354)%(x355-x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x357 = INT32_MIN;
	int64_t x358 = 2616637140LL;
	static uint16_t x359 = 1U;
	uint8_t x360 = 80U;
	volatile int64_t t71 = 16032456LL;

	t71 = ((x357/x358)%(x359-x360));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MIN;
	uint8_t x363 = UINT8_MAX;
	volatile int8_t x364 = -1;

	t72 = ((x361/x362)%(x363-x364));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x366 = 2U;
	volatile uint16_t x367 = 37U;
	int32_t x368 = -241764;
	volatile int32_t t73 = -123924;

	t73 = ((x365/x366)%(x367-x368));

	if (t73 != 14) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x370 = INT8_MAX;
	uint64_t t74 = 458486049593141388LLU;

	t74 = ((x369/x370)%(x371-x372));

	if (t74 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x373 = INT32_MIN;
	int8_t x376 = -38;
	int64_t t75 = 1692706895LL;

	t75 = ((x373/x374)%(x375-x376));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x377 = 11U;
	uint64_t x380 = 87598086447145LLU;

	t76 = ((x377/x378)%(x379-x380));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x382 = INT16_MIN;
	volatile uint8_t x383 = UINT8_MAX;
	static int64_t x384 = 35564473668LL;
	int64_t t77 = 225LL;

	t77 = ((x381/x382)%(x383-x384));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x385 = -1LL;
	int32_t x386 = -1;
	int32_t x387 = -284;
	volatile uint8_t x388 = 55U;
	int64_t t78 = 43LL;

	t78 = ((x385/x386)%(x387-x388));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x389 = -1;
	uint32_t x390 = 221U;
	static volatile int16_t x391 = -11023;
	static int8_t x392 = INT8_MIN;

	t79 = ((x389/x390)%(x391-x392));

	if (t79 != 19434241U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x393 = INT32_MIN;
	int64_t x394 = 2157LL;
	int64_t x395 = 2635933705516LL;
	static uint16_t x396 = 14515U;
	int64_t t80 = 68216022432531LL;

	t80 = ((x393/x394)%(x395-x396));

	if (t80 != -995588LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = UINT8_MAX;
	volatile int64_t t81 = 4267278LL;

	t81 = ((x397/x398)%(x399-x400));

	if (t81 != 17682LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x401 = INT64_MAX;
	int64_t t82 = -1605LL;

	t82 = ((x401/x402)%(x403-x404));

	if (t82 != 862513453LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x405 = 1934463002374443300LLU;
	volatile uint32_t x406 = UINT32_MAX;
	int16_t x407 = 0;
	int32_t x408 = 35454988;
	static uint64_t t83 = 45901207784205LLU;

	t83 = ((x405/x406)%(x407-x408));

	if (t83 != 450402266LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = -1;
	volatile int64_t x411 = INT64_MAX;
	int8_t x412 = INT8_MAX;
	int64_t t84 = 48516356350LL;

	t84 = ((x409/x410)%(x411-x412));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = -1;
	int16_t x415 = INT16_MIN;
	static int32_t x416 = INT32_MIN;
	int32_t t85 = -580;

	t85 = ((x413/x414)%(x415-x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = -26;
	static int16_t x422 = INT16_MAX;
	int16_t x423 = -46;
	volatile uint64_t x424 = 271963LLU;

	t86 = ((x421/x422)%(x423-x424));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x425 = 12144U;
	int16_t x426 = -2;
	uint8_t x427 = 5U;
	int32_t x428 = -19;

	t87 = ((x425/x426)%(x427-x428));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x429 = -1LL;
	int32_t x430 = INT32_MIN;
	volatile uint64_t t88 = 27194989118LLU;

	t88 = ((x429/x430)%(x431-x432));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x433 = 28556411LL;
	uint32_t x434 = 179U;
	volatile int16_t x435 = INT16_MIN;
	static int64_t x436 = INT64_MIN;
	volatile int64_t t89 = 458104822541326685LL;

	t89 = ((x433/x434)%(x435-x436));

	if (t89 != 159533LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = -1LL;
	int16_t x438 = INT16_MIN;
	volatile int32_t x439 = -17;
	int64_t x440 = -10955617360LL;
	volatile int64_t t90 = 1LL;

	t90 = ((x437/x438)%(x439-x440));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x441 = 15LL;
	int64_t x442 = -303402729740811LL;
	static int8_t x443 = INT8_MAX;
	int8_t x444 = 27;
	static volatile int64_t t91 = -32441163688555461LL;

	t91 = ((x441/x442)%(x443-x444));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x445 = 3;
	int32_t x446 = -838567746;
	static volatile int16_t x447 = -1;
	int8_t x448 = INT8_MAX;
	volatile int32_t t92 = -28;

	t92 = ((x445/x446)%(x447-x448));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x454 = INT8_MIN;
	static int32_t x455 = INT32_MIN;
	int8_t x456 = INT8_MIN;
	volatile int32_t t93 = 42;

	t93 = ((x453/x454)%(x455-x456));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x461 = 2082122LL;
	static int32_t x462 = INT32_MAX;
	uint16_t x463 = UINT16_MAX;
	int16_t x464 = -13;
	static int64_t t94 = 16572705417120LL;

	t94 = ((x461/x462)%(x463-x464));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MAX;
	int64_t x467 = 430448479562761LL;
	uint16_t x468 = UINT16_MAX;
	volatile int64_t t95 = 6962607786525LL;

	t95 = ((x465/x466)%(x467-x468));

	if (t95 != -258LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = INT16_MAX;
	int16_t x474 = 84;
	static uint64_t x475 = 39LLU;
	uint16_t x476 = UINT16_MAX;
	static uint64_t t96 = 3LLU;

	t96 = ((x473/x474)%(x475-x476));

	if (t96 != 390LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x477 = INT8_MIN;
	static int32_t x478 = -1;
	int32_t x479 = 187952;
	uint16_t x480 = 1U;
	int32_t t97 = 36323;

	t97 = ((x477/x478)%(x479-x480));

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x482 = 1834322138482LLU;
	static uint8_t x483 = 4U;
	int8_t x484 = -8;
	volatile uint64_t t98 = 11395LLU;

	t98 = ((x481/x482)%(x483-x484));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x485 = INT32_MAX;
	uint8_t x486 = 13U;
	static int16_t x487 = INT16_MAX;
	int8_t x488 = -1;
	volatile int32_t t99 = 48349222;

	t99 = ((x485/x486)%(x487-x488));

	if (t99 != 7561) { NG(); } else { ; }
	
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

