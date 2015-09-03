#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = -8LL;
uint16_t x13 = 3639U;
int64_t x19 = INT64_MIN;
uint8_t x21 = 13U;
int8_t x22 = INT8_MIN;
volatile int32_t t4 = -3107;
int32_t x28 = -101347;
int16_t x36 = -9653;
int32_t x41 = -1;
uint32_t x49 = 26U;
int64_t t10 = 33697101LL;
int16_t x55 = -442;
uint16_t x59 = 63U;
int64_t x60 = INT64_MIN;
volatile uint64_t t12 = 53567462358314LLU;
uint64_t x61 = UINT64_MAX;
int16_t x67 = INT16_MAX;
uint16_t x74 = UINT16_MAX;
static uint16_t x79 = 2585U;
int32_t x82 = INT32_MIN;
int64_t t18 = -469LL;
int16_t x89 = INT16_MIN;
int8_t x93 = INT8_MIN;
int32_t x96 = INT32_MIN;
volatile int64_t x101 = INT64_MIN;
static volatile int64_t t22 = -31290923686729817LL;
volatile int64_t x118 = -299822048LL;
int32_t x119 = -1;
int32_t x122 = 0;
uint64_t x126 = UINT64_MAX;
int8_t x127 = INT8_MAX;
static volatile uint16_t x140 = 14962U;
static int32_t t30 = -2327212;
int32_t x153 = 62136;
uint8_t x154 = 1U;
uint64_t x158 = 11LLU;
uint32_t x159 = 3534847U;
int64_t x170 = 16032LL;
volatile int64_t x172 = -1LL;
uint64_t x173 = 19325545LLU;
uint32_t x174 = UINT32_MAX;
volatile uint64_t x177 = 1083221373612LLU;
static int32_t x185 = INT32_MIN;
int16_t x190 = -1;
int32_t x191 = 169393;
static int16_t x192 = INT16_MAX;
volatile int64_t x197 = -5LL;
uint16_t x210 = 14U;
uint32_t x211 = 34U;
static int32_t x212 = INT32_MIN;
int64_t t45 = 9970LL;
volatile int32_t t46 = 222869;
volatile int32_t x221 = INT32_MAX;
static uint32_t x224 = 14728U;
volatile uint16_t x231 = 4U;
volatile int64_t t49 = -3018LL;
int64_t x240 = INT64_MIN;
volatile uint32_t x247 = 15692U;
int16_t x257 = 353;
int64_t x258 = -762668LL;
volatile int64_t t55 = 3558LL;
int16_t x263 = -1;
int64_t x264 = -1LL;
uint32_t x273 = 1754U;
uint8_t x276 = 108U;
uint16_t x281 = 29901U;
uint8_t x282 = 1U;
uint16_t x283 = 5U;
volatile int16_t x284 = INT16_MIN;
int32_t x289 = -1;
int8_t x290 = -1;
int8_t x291 = INT8_MIN;
int8_t x298 = -1;
static int32_t t63 = 743550;
uint64_t x310 = 73LLU;
volatile uint32_t x317 = 0U;
int64_t t70 = 11803066LL;
int8_t x329 = INT8_MIN;
int16_t x333 = 13;
int16_t x334 = INT16_MAX;
static int16_t x337 = INT16_MAX;
int32_t x344 = INT32_MAX;
int32_t t74 = 1541445;
int32_t x347 = 28464092;
volatile int32_t t75 = 129489433;
int16_t x352 = INT16_MAX;
int16_t x362 = INT16_MIN;
volatile int32_t t79 = 174382;
int32_t x371 = INT32_MIN;
static int32_t x372 = INT32_MAX;
static int8_t x373 = -1;
int64_t x376 = INT64_MIN;
int64_t x382 = -1LL;
volatile uint64_t t87 = 18198911064790667LLU;
static uint32_t x400 = UINT32_MAX;
volatile int32_t x401 = -15955;
volatile int32_t t89 = 123970;
volatile uint32_t x406 = 67817U;
static int64_t x413 = 22952074LL;
int16_t x415 = INT16_MAX;
static int32_t x421 = INT32_MIN;
volatile int32_t t96 = 3;
int8_t x438 = INT8_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = 4U;
	int8_t x4 = INT8_MIN;
	uint32_t t0 = 10256U;

	t0 = ((x1-(x2^x3))%x4);

	if (t0 != 32763U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = 0;
	static int64_t x10 = INT64_MAX;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = INT32_MIN;

	t1 = ((x9-(x10^x11))%x12);

	if (t1 != -2147418112LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x14 = -140221580344LL;
	static int16_t x15 = INT16_MAX;
	int8_t x16 = 3;
	static int64_t t2 = -630478676871522LL;

	t2 = ((x13-(x14^x15))%x16);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	int8_t x18 = INT8_MIN;
	int8_t x20 = INT8_MAX;
	volatile int64_t t3 = -182643842521LL;

	t3 = ((x17-(x18^x19))%x20);

	if (t3 != -124LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x23 = -1;
	int8_t x24 = 2;

	t4 = ((x21-(x22^x23))%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	volatile uint8_t x26 = 1U;
	static int16_t x27 = INT16_MIN;
	static volatile uint64_t t5 = 212730LLU;

	t5 = ((x25-(x26^x27))%x28);

	if (t5 != 32766LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x33 = 2075804368254626949LLU;
	uint8_t x34 = 1U;
	int16_t x35 = -103;
	uint64_t t6 = 11636323LLU;

	t6 = ((x33-(x34^x35))%x36);

	if (t6 != 2075804368254627053LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 1378U;
	uint16_t x38 = 0U;
	int32_t x39 = 159876;
	int32_t x40 = 9321;
	static uint32_t t7 = 130741U;

	t7 = ((x37-(x38^x39))%x40);

	if (t7 != 8912U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;
	volatile int64_t t8 = 515022LL;

	t8 = ((x41-(x42^x43))%x44);

	if (t8 != -2147483521LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 16;
	static volatile int16_t x46 = -25;
	int8_t x47 = INT8_MIN;
	volatile int32_t x48 = INT32_MIN;
	volatile int32_t t9 = 1780;

	t9 = ((x45-(x46^x47))%x48);

	if (t9 != -87) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x50 = INT16_MAX;
	static volatile int64_t x51 = -5192420618LL;
	uint8_t x52 = UINT8_MAX;

	t10 = ((x49-(x50^x51))%x52);

	if (t10 != 57LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	volatile int16_t x54 = 1;
	uint32_t x56 = 903U;
	uint32_t t11 = 365U;

	t11 = ((x53-(x54^x55))%x56);

	if (t11 != 313U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 14970LLU;
	int32_t x58 = INT32_MIN;

	t12 = ((x57-(x58^x59))%x60);

	if (t12 != 2147498555LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MIN;
	uint8_t x63 = UINT8_MAX;
	uint16_t x64 = 5560U;
	volatile uint64_t t13 = 58786103414LLU;

	t13 = ((x61-(x62^x63))%x64);

	if (t13 != 4712LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = -2279;
	static int64_t x66 = INT64_MAX;
	volatile int32_t x68 = INT32_MAX;
	static volatile int64_t t14 = -856948005LL;

	t14 = ((x65-(x66^x67))%x68);

	if (t14 != -2147453160LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = INT32_MAX;
	volatile int64_t t15 = -7LL;

	t15 = ((x69-(x70^x71))%x72);

	if (t15 != 128LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	volatile int64_t x75 = INT64_MIN;
	uint16_t x76 = UINT16_MAX;
	volatile int64_t t16 = 10LL;

	t16 = ((x73-(x74^x75))%x76);

	if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	static uint32_t x78 = UINT32_MAX;
	int32_t x80 = INT32_MIN;
	static uint32_t t17 = 97234771U;

	t17 = ((x77-(x78^x79))%x80);

	if (t17 != 2458U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 4U;
	int64_t x83 = INT64_MIN;
	volatile int32_t x84 = INT32_MIN;

	t18 = ((x81-(x82^x83))%x84);

	if (t18 != -2147483644LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = -50645909LL;
	int64_t x87 = -18246LL;
	volatile int8_t x88 = 1;
	int64_t t19 = -854662LL;

	t19 = ((x85-(x86^x87))%x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = INT64_MIN;
	uint32_t x91 = 11260U;
	int16_t x92 = INT16_MAX;
	int64_t t20 = 121117937843830LL;

	t20 = ((x89-(x90^x91))%x92);

	if (t20 != 21514LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = INT64_MIN;
	int64_t x95 = INT64_MIN;
	int64_t t21 = -888608551532LL;

	t21 = ((x93-(x94^x95))%x96);

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x102 = 1013262176;
	static int32_t x103 = INT32_MIN;
	int8_t x104 = INT8_MIN;

	t22 = ((x101-(x102^x103))%x104);

	if (t22 != -96LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -1;
	uint64_t x110 = 9464LLU;
	int64_t x111 = INT64_MIN;
	int64_t x112 = -1LL;
	static uint64_t t23 = 394996391458LLU;

	t23 = ((x109-(x110^x111))%x112);

	if (t23 != 9223372036854766343LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -1;
	uint16_t x114 = 3U;
	int8_t x115 = INT8_MAX;
	uint8_t x116 = UINT8_MAX;
	int32_t t24 = 26240587;

	t24 = ((x113-(x114^x115))%x116);

	if (t24 != -125) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1;
	static volatile int64_t x120 = INT64_MIN;
	volatile int64_t t25 = -1623146LL;

	t25 = ((x117-(x118^x119))%x120);

	if (t25 != -299822048LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = 3803294;
	static uint16_t x123 = 182U;
	int64_t x124 = INT64_MIN;
	volatile int64_t t26 = -3270068177179762LL;

	t26 = ((x121-(x122^x123))%x124);

	if (t26 != 3803112LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x125 = INT32_MIN;
	int16_t x128 = INT16_MIN;
	uint64_t t27 = 26694487216LLU;

	t27 = ((x125-(x126^x127))%x128);

	if (t27 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 639122582U;
	int32_t x134 = INT32_MIN;
	int16_t x135 = INT16_MIN;
	static uint32_t x136 = 1030919657U;
	static uint32_t t28 = 9581U;

	t28 = ((x133-(x134^x135))%x136);

	if (t28 != 724799684U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x137 = 31U;
	int16_t x138 = -1;
	int32_t x139 = -7510;
	int32_t t29 = -51;

	t29 = ((x137-(x138^x139))%x140);

	if (t29 != -7478) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = UINT16_MAX;
	volatile int16_t x150 = -1;
	static uint8_t x151 = 0U;
	static int16_t x152 = INT16_MIN;

	t30 = ((x149-(x150^x151))%x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x155 = UINT64_MAX;
	static int16_t x156 = 1618;
	static volatile uint64_t t31 = 7LLU;

	t31 = ((x153-(x154^x155))%x156);

	if (t31 != 654LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = -1LL;
	uint32_t x160 = 150464377U;
	static volatile uint64_t t32 = 220532677LLU;

	t32 = ((x157-(x158^x159))%x160);

	if (t32 != 115906725LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = INT16_MIN;
	int8_t x162 = -1;
	static volatile uint16_t x163 = 1U;
	int32_t x164 = -1;
	int32_t t33 = 6;

	t33 = ((x161-(x162^x163))%x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x165 = -1;
	static int32_t x166 = INT32_MIN;
	uint16_t x167 = 79U;
	static int16_t x168 = INT16_MAX;
	int32_t t34 = 397288;

	t34 = ((x165-(x166^x167))%x168);

	if (t34 != 32689) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x169 = 44U;
	static int8_t x171 = INT8_MAX;
	volatile int64_t t35 = -922413LL;

	t35 = ((x169-(x170^x171))%x172);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x175 = INT16_MIN;
	uint16_t x176 = 5U;
	volatile uint64_t t36 = 188972426191215340LLU;

	t36 = ((x173-(x174^x175))%x176);

	if (t36 != 3LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x178 = INT32_MIN;
	uint16_t x179 = 3156U;
	int8_t x180 = 36;
	uint64_t t37 = 8093443292393479668LLU;

	t37 = ((x177-(x178^x179))%x180);

	if (t37 != 8LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = -11;
	static uint32_t x182 = UINT32_MAX;
	int16_t x183 = -319;
	int64_t x184 = -1LL;
	int64_t t38 = -1057228450LL;

	t38 = ((x181-(x182^x183))%x184);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	static volatile int64_t t39 = 4LL;

	t39 = ((x185-(x186^x187))%x188);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = UINT32_MAX;
	volatile uint32_t t40 = 121256U;

	t40 = ((x189-(x190^x191))%x192);

	if (t40 != 5558U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x198 = INT16_MIN;
	static volatile int32_t x199 = INT32_MIN;
	uint8_t x200 = 53U;
	int64_t t41 = -15408LL;

	t41 = ((x197-(x198^x199))%x200);

	if (t41 != -12LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x201 = 25U;
	uint8_t x202 = 24U;
	static int32_t x203 = 302;
	uint8_t x204 = 31U;
	volatile int32_t t42 = 47101493;

	t42 = ((x201-(x202^x203))%x204);

	if (t42 != -6) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = -1;
	int32_t x206 = INT32_MAX;
	static int8_t x207 = INT8_MIN;
	int8_t x208 = 11;
	volatile int32_t t43 = 1;

	t43 = ((x205-(x206^x207))%x208);

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = -4;
	volatile uint32_t t44 = 29U;

	t44 = ((x209-(x210^x211))%x212);

	if (t44 != 2147483600U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x213 = UINT8_MAX;
	static uint32_t x214 = 451347807U;
	int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;

	t45 = ((x213-(x214^x215))%x216);

	if (t45 != 3843619807LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = 1150824;
	int8_t x218 = -37;
	int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MIN;

	t46 = ((x217-(x218^x219))%x220);

	if (t46 != -115) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x222 = INT16_MAX;
	uint8_t x223 = 0U;
	uint32_t t47 = 237791117U;

	t47 = ((x221-(x222^x223))%x224);

	if (t47 != 5384U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = 205;
	static volatile int32_t x227 = INT32_MIN;
	uint16_t x228 = 20U;
	volatile int32_t t48 = -6103846;

	t48 = ((x225-(x226^x227))%x228);

	if (t48 != 15) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = -8;
	int8_t x230 = INT8_MIN;
	volatile int64_t x232 = 138769952021651LL;

	t49 = ((x229-(x230^x231))%x232);

	if (t49 != 116LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x233 = 86U;
	uint8_t x234 = UINT8_MAX;
	int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MIN;
	static volatile int64_t t50 = -3936297323480042570LL;

	t50 = ((x233-(x234^x235))%x236);

	if (t50 != 9223372036854775639LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = 8;
	static volatile int8_t x238 = INT8_MIN;
	volatile uint32_t x239 = 53U;
	int64_t t51 = -35514741401299358LL;

	t51 = ((x237-(x238^x239))%x240);

	if (t51 != 83LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x245 = -1LL;
	int64_t x246 = INT64_MAX;
	int8_t x248 = 10;
	static int64_t t52 = 143879LL;

	t52 = ((x245-(x246^x247))%x248);

	if (t52 != -6LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x249 = -1;
	uint16_t x250 = UINT16_MAX;
	static int8_t x251 = INT8_MIN;
	volatile uint8_t x252 = UINT8_MAX;
	volatile int32_t t53 = -1068502195;

	t53 = ((x249-(x250^x251))%x252);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x253 = UINT8_MAX;
	volatile int16_t x254 = -7;
	uint8_t x255 = 37U;
	volatile uint16_t x256 = 3U;
	int32_t t54 = 863355;

	t54 = ((x253-(x254^x255))%x256);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x259 = INT32_MIN;
	int16_t x260 = 13596;

	t55 = ((x257-(x258^x259))%x260);

	if (t55 != -7399LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = 604240U;
	int32_t x262 = -35;
	int64_t t56 = 3786003162534182LL;

	t56 = ((x261-(x262^x263))%x264);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = 30LL;
	int8_t x267 = INT8_MAX;
	uint64_t x268 = 1LLU;
	uint64_t t57 = 1099LLU;

	t57 = ((x265-(x266^x267))%x268);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x274 = INT32_MAX;
	static uint8_t x275 = 8U;
	uint32_t t58 = 64U;

	t58 = ((x273-(x274^x275))%x276);

	if (t58 != 19U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = 138592712585166LL;
	int16_t x278 = -1;
	int8_t x279 = -14;
	int32_t x280 = INT32_MIN;
	int64_t t59 = 1656038924LL;

	t59 = ((x277-(x278^x279))%x280);

	if (t59 != 560394177LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t t60 = 73;

	t60 = ((x281-(x282^x283))%x284);

	if (t60 != 29897) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x292 = INT32_MIN;
	int32_t t61 = 920196;

	t61 = ((x289-(x290^x291))%x292);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x293 = UINT64_MAX;
	volatile int8_t x294 = INT8_MAX;
	uint16_t x295 = 1U;
	static uint8_t x296 = UINT8_MAX;
	uint64_t t62 = 6LLU;

	t62 = ((x293-(x294^x295))%x296);

	if (t62 != 129LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x297 = INT16_MAX;
	int32_t x299 = 147;
	int16_t x300 = INT16_MAX;

	t63 = ((x297-(x298^x299))%x300);

	if (t63 != 148) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = -919032596439474LL;
	volatile int16_t x302 = INT16_MIN;
	static int32_t x303 = INT32_MIN;
	int16_t x304 = 1;
	static volatile int64_t t64 = -12110800283330435LL;

	t64 = ((x301-(x302^x303))%x304);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x305 = 1592565;
	int8_t x306 = -6;
	static int16_t x307 = -1;
	volatile uint8_t x308 = 9U;
	int32_t t65 = 467;

	t65 = ((x305-(x306^x307))%x308);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = -11;
	int64_t x311 = 3614877555802624789LL;
	int32_t x312 = -9633497;
	uint64_t t66 = 66737LLU;

	t66 = ((x309-(x310^x311))%x312);

	if (t66 != 14831866517906926745LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x313 = -20588LL;
	static int32_t x314 = INT32_MIN;
	uint16_t x315 = 27674U;
	int32_t x316 = INT32_MIN;
	volatile int64_t t67 = 218794LL;

	t67 = ((x313-(x314^x315))%x316);

	if (t67 != 2147435386LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x318 = 58U;
	uint32_t x319 = 0U;
	static int64_t x320 = INT64_MIN;
	int64_t t68 = 54075497LL;

	t68 = ((x317-(x318^x319))%x320);

	if (t68 != 4294967238LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	int16_t x323 = 60;
	int16_t x324 = INT16_MAX;
	int64_t t69 = 296627LL;

	t69 = ((x321-(x322^x323))%x324);

	if (t69 != -32707LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x325 = -42180538;
	int64_t x326 = -110425LL;
	volatile int64_t x327 = -1LL;
	volatile uint16_t x328 = UINT16_MAX;

	t70 = ((x325-(x326^x327))%x328);

	if (t70 != -20887LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x330 = INT8_MIN;
	volatile int8_t x331 = -7;
	uint64_t x332 = UINT64_MAX;
	uint64_t t71 = 4393923589LLU;

	t71 = ((x329-(x330^x331))%x332);

	if (t71 != 18446744073709551367LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x335 = UINT16_MAX;
	int8_t x336 = INT8_MAX;
	int32_t t72 = 0;

	t72 = ((x333-(x334^x335))%x336);

	if (t72 != -116) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x338 = 4U;
	uint32_t x339 = 1417U;
	uint32_t x340 = 979522U;
	volatile uint32_t t73 = 1U;

	t73 = ((x337-(x338^x339))%x340);

	if (t73 != 31346U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MAX;
	uint16_t x342 = 4459U;
	int32_t x343 = INT32_MAX;

	t74 = ((x341-(x342^x343))%x344);

	if (t74 != 4459) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = 0;
	int16_t x346 = INT16_MAX;
	int16_t x348 = INT16_MIN;

	t75 = ((x345-(x346^x347))%x348);

	if (t75 != -11299) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x349 = -1;
	int64_t x350 = -1LL;
	uint32_t x351 = UINT32_MAX;
	int64_t t76 = -29767136LL;

	t76 = ((x349-(x350^x351))%x352);

	if (t76 != 3LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x353 = 14U;
	volatile uint32_t x354 = 3888U;
	uint64_t x355 = UINT64_MAX;
	int64_t x356 = INT64_MIN;
	volatile uint64_t t77 = 800830493684LLU;

	t77 = ((x353-(x354^x355))%x356);

	if (t77 != 3903LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x357 = 249021117LLU;
	static int32_t x358 = -1;
	uint32_t x359 = 976395U;
	uint16_t x360 = 61U;
	static uint64_t t78 = 822516911629774597LLU;

	t78 = ((x357-(x358^x359))%x360);

	if (t78 != 13LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = -3;
	int32_t x363 = -1;
	int8_t x364 = -3;

	t79 = ((x361-(x362^x363))%x364);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = -42;
	int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	int8_t x368 = INT8_MAX;
	volatile int64_t t80 = 487494384264806695LL;

	t80 = ((x365-(x366^x367))%x368);

	if (t80 != -41LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x369 = 161LLU;
	int16_t x370 = 1;
	volatile uint64_t t81 = 524LLU;

	t81 = ((x369-(x370^x371))%x372);

	if (t81 != 161LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x374 = 167412551LL;
	int64_t x375 = -1LL;
	int64_t t82 = 21849170LL;

	t82 = ((x373-(x374^x375))%x376);

	if (t82 != 167412551LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x377 = 10342U;
	int32_t x378 = INT32_MAX;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = INT8_MIN;
	static int32_t t83 = -1;

	t83 = ((x377-(x378^x379))%x380);

	if (t83 != -26) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x381 = INT8_MAX;
	int32_t x383 = -1;
	static volatile uint8_t x384 = UINT8_MAX;
	volatile int64_t t84 = 711481939766LL;

	t84 = ((x381-(x382^x383))%x384);

	if (t84 != 127LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x385 = -1LL;
	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MIN;
	int32_t x388 = 415037542;
	volatile int64_t t85 = 8LL;

	t85 = ((x385-(x386^x387))%x388);

	if (t85 != -410390163LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x389 = INT64_MAX;
	int64_t x390 = INT64_MIN;
	volatile int16_t x391 = -1;
	uint8_t x392 = 13U;
	int64_t t86 = -17175LL;

	t86 = ((x389-(x390^x391))%x392);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = INT32_MAX;
	uint64_t x394 = 37371399LLU;
	int8_t x395 = -2;
	uint16_t x396 = 63U;

	t87 = ((x393-(x394^x395))%x396);

	if (t87 != 52LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = -817LL;
	static int16_t x399 = INT16_MIN;
	int64_t t88 = -335LL;

	t88 = ((x397-(x398^x399))%x400);

	if (t88 != 33584LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x402 = 11117U;
	int32_t x403 = INT32_MIN;
	uint8_t x404 = UINT8_MAX;

	t89 = ((x401-(x402^x403))%x404);

	if (t89 != 86) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = INT32_MAX;
	volatile int32_t x407 = -3;
	int32_t x408 = -2103;
	uint32_t t90 = 371673U;

	t90 = ((x405-(x406^x407))%x408);

	if (t90 != 2147551467U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	static uint64_t x412 = 79185483LLU;
	static volatile uint64_t t91 = 2152147968692LLU;

	t91 = ((x409-(x410^x411))%x412);

	if (t91 != 61620746LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x414 = INT32_MIN;
	int16_t x416 = -1;
	static int64_t t92 = -254381LL;

	t92 = ((x413-(x414^x415))%x416);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x417 = 219LLU;
	uint64_t x418 = 605335LLU;
	static int64_t x419 = -16842976694330LL;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t93 = 393076145330303229LLU;

	t93 = ((x417-(x418^x419))%x420);

	if (t93 != 16842977291658LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x422 = 107U;
	uint32_t x423 = UINT32_MAX;
	static uint32_t x424 = UINT32_MAX;
	uint32_t t94 = 57156U;

	t94 = ((x421-(x422^x423))%x424);

	if (t94 != 2147483756U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = INT8_MIN;
	int8_t x430 = 6;
	int16_t x431 = -1;
	int8_t x432 = -1;
	int32_t t95 = -14;

	t95 = ((x429-(x430^x431))%x432);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x433 = -1;
	int32_t x434 = INT32_MIN;
	int16_t x435 = -1;
	int8_t x436 = INT8_MAX;

	t96 = ((x433-(x434^x435))%x436);

	if (t96 != -8) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = INT16_MIN;
	int32_t x439 = INT32_MIN;
	volatile int32_t x440 = 310;
	static int32_t t97 = -78;

	t97 = ((x437-(x438^x439))%x440);

	if (t97 != 153) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = 0LL;
	static volatile int8_t x442 = -1;
	volatile uint32_t x443 = 3164312U;
	volatile int32_t x444 = INT32_MIN;
	int64_t t98 = 839648498079010LL;

	t98 = ((x441-(x442^x443))%x444);

	if (t98 != -2144319335LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x445 = 1751U;
	uint8_t x446 = UINT8_MAX;
	uint8_t x447 = 9U;
	uint64_t x448 = 14LLU;
	static volatile uint64_t t99 = 243412552LLU;

	t99 = ((x445-(x446^x447))%x448);

	if (t99 != 7LLU) { NG(); } else { ; }
	
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

