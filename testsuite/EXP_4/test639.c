#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = -14;
static int64_t x6 = -1LL;
volatile int32_t x7 = 162902636;
static int64_t x8 = INT64_MAX;
int16_t x14 = -604;
uint32_t x17 = UINT32_MAX;
uint16_t x34 = 3U;
uint32_t x37 = UINT32_MAX;
static volatile uint16_t x38 = UINT16_MAX;
int16_t x42 = 118;
int32_t t10 = 448062511;
volatile int32_t t12 = -6;
volatile int8_t x57 = INT8_MIN;
volatile uint64_t t13 = 842663419LLU;
int8_t x62 = INT8_MIN;
int8_t x67 = -12;
volatile int32_t x77 = INT32_MIN;
int64_t x78 = INT64_MAX;
uint64_t t17 = 65242LLU;
int8_t x84 = -10;
uint32_t x85 = 1181U;
volatile uint32_t t19 = 1826U;
static int32_t x96 = INT32_MIN;
int64_t t22 = 25108538354350532LL;
uint16_t x104 = 358U;
volatile uint16_t x111 = 37U;
volatile int64_t t25 = INT64_MIN;
uint32_t x113 = UINT32_MAX;
int16_t x119 = 25;
static int64_t x123 = -12502613632LL;
int32_t x125 = INT32_MAX;
volatile int8_t x127 = INT8_MIN;
int16_t x129 = INT16_MAX;
static int64_t x139 = -613LL;
int64_t x151 = -6141LL;
uint64_t x155 = UINT64_MAX;
uint16_t x161 = 2282U;
static int8_t x165 = INT8_MIN;
uint64_t x169 = 11LLU;
volatile int64_t x172 = -1LL;
uint16_t x176 = 19024U;
int64_t x187 = -563LL;
volatile uint32_t x188 = 2507717U;
int8_t x194 = -6;
static volatile int64_t x196 = 3554898800243LL;
uint32_t t48 = 1U;
int64_t x210 = INT64_MIN;
int8_t x221 = 10;
int16_t x226 = 14957;
int8_t x236 = INT8_MIN;
volatile int8_t x240 = -1;
volatile uint32_t x248 = 29U;
static int64_t x249 = -1LL;
int32_t x253 = INT32_MIN;
uint16_t x260 = UINT16_MAX;
int32_t x265 = 628834;
volatile uint16_t x267 = 523U;
volatile int64_t t65 = 135817LL;
static uint32_t x287 = 2515U;
volatile uint64_t x291 = UINT64_MAX;
static int16_t x296 = -1;
uint64_t x303 = 500885LLU;
volatile int32_t x308 = INT32_MIN;
int64_t t71 = 83LL;
int32_t x317 = INT32_MIN;
uint64_t x323 = 172541383508201433LLU;
volatile int8_t x328 = -1;
int64_t t76 = 9LL;
int32_t x337 = INT32_MAX;
int64_t x343 = -54886354553717LL;
int64_t t81 = 8424932LL;
uint64_t x352 = UINT64_MAX;
uint64_t x353 = UINT64_MAX;
volatile int8_t x358 = INT8_MIN;
int16_t x360 = INT16_MAX;
uint16_t x366 = 4U;
uint32_t x367 = 22U;
volatile int16_t x372 = -1;
volatile int64_t t88 = 0LL;
volatile int8_t x385 = INT8_MAX;
volatile uint8_t x398 = UINT8_MAX;
volatile uint64_t t94 = 931518731LLU;
int8_t x406 = INT8_MIN;
static int32_t t95 = -6;
int32_t x413 = INT32_MAX;
static int64_t x415 = INT64_MIN;
volatile int64_t t97 = 246LL;
int64_t t98 = 0LL;
volatile int32_t x421 = 1092048;


void f0(void) {
	int16_t x1 = 499;
	uint64_t x3 = UINT64_MAX;
	static volatile uint8_t x4 = UINT8_MAX;
	static volatile uint64_t t0 = 1436LLU;

	t0 = (x1-(x2&(x3/x4)));

	if (t0 != 18374403900871475443LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	volatile int64_t t1 = -1744553856855630346LL;

	t1 = (x5-(x6&(x7/x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 5718590221019LLU;
	int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MAX;
	int16_t x12 = -24;
	volatile uint64_t t2 = 46476156724511LLU;

	t2 = (x9-(x10&(x11/x12)));

	if (t2 != 5720737704667LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 3177174058287239543LL;
	volatile int16_t x15 = INT16_MIN;
	int32_t x16 = -1;
	volatile int64_t t3 = -2007440686LL;

	t3 = (x13-(x14&(x15/x16)));

	if (t3 != 3177174058287206775LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	int8_t x19 = 3;
	volatile int64_t x20 = -21492739036LL;
	int64_t t4 = -1LL;

	t4 = (x17-(x18&(x19/x20)));

	if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 646;
	int16_t x22 = -946;
	uint8_t x23 = 11U;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -1;

	t5 = (x21-(x22&(x23/x24)));

	if (t5 != 646) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = -1;
	int64_t x27 = 14LL;
	uint16_t x28 = UINT16_MAX;
	int64_t t6 = INT64_MIN;

	t6 = (x25-(x26&(x27/x28)));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int32_t x30 = -1;
	int16_t x31 = INT16_MIN;
	int64_t x32 = 3205391663880310LL;
	int64_t t7 = -462198006LL;

	t7 = (x29-(x30&(x31/x32)));

	if (t7 != 65535LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 94U;
	volatile int32_t x35 = -1;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -20191171;

	t8 = (x33-(x34&(x35/x36)));

	if (t8 != 94) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x39 = INT32_MIN;
	volatile uint8_t x40 = 2U;
	static volatile uint32_t t9 = UINT32_MAX;

	t9 = (x37-(x38&(x39/x40)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	volatile int8_t x43 = -1;
	static uint16_t x44 = UINT16_MAX;

	t10 = (x41-(x42&(x43/x44)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -467436112492LL;
	uint16_t x50 = 1U;
	static int64_t x51 = INT64_MIN;
	int64_t x52 = 7857347LL;
	volatile int64_t t11 = -460236804843340LL;

	t11 = (x49-(x50&(x51/x52)));

	if (t11 != -467436112492LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	int32_t x54 = -575711;
	static uint8_t x55 = UINT8_MAX;
	volatile uint8_t x56 = 101U;

	t12 = (x53-(x54&(x55/x56)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x58 = 13376699545050LLU;
	volatile int32_t x59 = 13046;
	int32_t x60 = INT32_MIN;

	t13 = (x57-(x58&(x59/x60)));

	if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MIN;
	static int32_t x63 = 3906670;
	int64_t x64 = 408690474917432LL;
	static int64_t t14 = 720304LL;

	t14 = (x61-(x62&(x63/x64)));

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	int32_t x66 = -38022;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t15 = 15;

	t15 = (x65-(x66&(x67/x68)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	uint64_t x70 = 844594LLU;
	volatile int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MIN;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x69-(x70&(x71/x72)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x79 = 280698497289625466LLU;
	static uint8_t x80 = 3U;

	t17 = (x77-(x78&(x79/x80)));

	if (t17 != 18353177905798859480LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x81 = UINT16_MAX;
	volatile int32_t x82 = 101545;
	int32_t x83 = INT32_MIN;
	static volatile int32_t t18 = 212692;

	t18 = (x81-(x82&(x83/x84)));

	if (t18 != 29559) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = -1;
	uint8_t x87 = 96U;
	static int32_t x88 = -1;

	t19 = (x85-(x86&(x87/x88)));

	if (t19 != 1277U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x89 = 1U;
	int32_t x90 = -1;
	int16_t x91 = INT16_MAX;
	volatile int32_t x92 = 101213881;
	int32_t t20 = 1574;

	t20 = (x89-(x90&(x91/x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = -7936;
	int8_t x95 = INT8_MIN;
	volatile int32_t t21 = 2692;

	t21 = (x93-(x94&(x95/x96)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	static int8_t x98 = 1;
	volatile int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MAX;

	t22 = (x97-(x98&(x99/x100)));

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = 9146482173011118706LLU;
	uint32_t x102 = 650448602U;
	uint8_t x103 = 11U;
	volatile uint64_t t23 = 7750292512009991LLU;

	t23 = (x101-(x102&(x103/x104)));

	if (t23 != 9146482173011118706LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x105 = 24U;
	volatile int16_t x106 = INT16_MAX;
	volatile int8_t x107 = 1;
	int16_t x108 = INT16_MIN;
	int32_t t24 = 4;

	t24 = (x105-(x106&(x107/x108)));

	if (t24 != 24) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = INT64_MIN;
	int8_t x110 = INT8_MIN;
	int32_t x112 = INT32_MIN;

	t25 = (x109-(x110&(x111/x112)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x114 = 60U;
	int16_t x115 = INT16_MAX;
	int8_t x116 = -1;
	static uint32_t t26 = UINT32_MAX;

	t26 = (x113-(x114&(x115/x116)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -1634901554833LL;
	int8_t x118 = -1;
	uint16_t x120 = UINT16_MAX;
	volatile int64_t t27 = -2015904602LL;

	t27 = (x117-(x118&(x119/x120)));

	if (t27 != -1634901554833LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -1;
	volatile int16_t x122 = INT16_MIN;
	static volatile int32_t x124 = -1;
	int64_t t28 = 58317166160LL;

	t28 = (x121-(x122&(x123/x124)));

	if (t28 != -12502597633LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x126 = INT16_MIN;
	uint64_t x128 = 113533810513257491LLU;
	volatile uint64_t t29 = 5001LLU;

	t29 = (x125-(x126&(x127/x128)));

	if (t29 != 2147483647LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x130 = 13;
	int8_t x131 = 1;
	uint32_t x132 = UINT32_MAX;
	uint32_t t30 = 0U;

	t30 = (x129-(x130&(x131/x132)));

	if (t30 != 32767U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x133 = 488571U;
	int8_t x134 = -1;
	int64_t x135 = -1LL;
	uint16_t x136 = 122U;
	volatile int64_t t31 = 1LL;

	t31 = (x133-(x134&(x135/x136)));

	if (t31 != 488571LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x137 = 726613032U;
	static volatile int64_t x138 = 155LL;
	uint32_t x140 = 18211U;
	volatile int64_t t32 = 2733LL;

	t32 = (x137-(x138&(x139/x140)));

	if (t32 != 726613032LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	static uint64_t x142 = UINT64_MAX;
	static int8_t x143 = 7;
	int32_t x144 = 4672;
	volatile uint64_t t33 = 18LLU;

	t33 = (x141-(x142&(x143/x144)));

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	int32_t x146 = -1;
	static int64_t x147 = -1LL;
	static volatile int64_t x148 = 4213598005154221982LL;
	volatile int64_t t34 = -3543364LL;

	t34 = (x145-(x146&(x147/x148)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 248U;
	static int32_t x150 = INT32_MIN;
	static volatile uint32_t x152 = UINT32_MAX;
	int64_t t35 = 15261LL;

	t35 = (x149-(x150&(x151/x152)));

	if (t35 != 248LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 9077499243895LLU;
	static int32_t x154 = 173694;
	int8_t x156 = INT8_MIN;
	uint64_t t36 = 2508416LLU;

	t36 = (x153-(x154&(x155/x156)));

	if (t36 != 9077499243895LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 1;
	uint8_t x158 = 5U;
	int64_t x159 = 270994657265811919LL;
	static int8_t x160 = -2;
	volatile int64_t t37 = 251929998097607LL;

	t37 = (x157-(x158&(x159/x160)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x162 = 58U;
	int8_t x163 = INT8_MAX;
	int64_t x164 = INT64_MIN;
	volatile int64_t t38 = 16315389220209LL;

	t38 = (x161-(x162&(x163/x164)));

	if (t38 != 2282LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x166 = -1;
	int16_t x167 = 0;
	static uint8_t x168 = 1U;
	volatile int32_t t39 = 13822;

	t39 = (x165-(x166&(x167/x168)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x170 = 0U;
	volatile uint16_t x171 = 1U;
	static volatile uint64_t t40 = 47LLU;

	t40 = (x169-(x170&(x171/x172)));

	if (t40 != 11LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MAX;
	int32_t x175 = -1;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x173-(x174&(x175/x176)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	static int8_t x178 = INT8_MIN;
	volatile uint16_t x179 = 6U;
	uint32_t x180 = 399764U;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x177-(x178&(x179/x180)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MIN;
	int16_t x183 = -1;
	uint8_t x184 = UINT8_MAX;
	volatile int64_t t43 = -46422913LL;

	t43 = (x181-(x182&(x183/x184)));

	if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	static uint32_t x186 = 44548563U;
	int64_t t44 = 203LL;

	t44 = (x185-(x186&(x187/x188)));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = 0;
	int8_t x190 = -14;
	static volatile uint32_t x191 = UINT32_MAX;
	volatile int16_t x192 = 14306;
	uint32_t t45 = 5135157U;

	t45 = (x189-(x190&(x191/x192)));

	if (t45 != 4294667088U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = -6235;
	int32_t x195 = INT32_MIN;
	volatile int64_t t46 = 42302392313125145LL;

	t46 = (x193-(x194&(x195/x196)));

	if (t46 != -6235LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x197 = INT64_MIN;
	static volatile uint64_t x198 = 8200088668LLU;
	volatile uint16_t x199 = 7600U;
	volatile uint8_t x200 = 27U;
	volatile uint64_t t47 = 61380060712LLU;

	t47 = (x197-(x198&(x199/x200)));

	if (t47 != 9223372036854775784LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x201 = -20;
	static int16_t x202 = -6;
	volatile uint32_t x203 = 121863755U;
	uint32_t x204 = 1U;

	t48 = (x201-(x202&(x203/x204)));

	if (t48 != 4173103522U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = 691065853;
	int64_t x206 = 359676LL;
	volatile int32_t x207 = INT32_MIN;
	volatile int8_t x208 = INT8_MIN;
	static int64_t t49 = -189575886398306LL;

	t49 = (x205-(x206&(x207/x208)));

	if (t49 != 691065853LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = UINT8_MAX;
	int64_t x211 = INT64_MIN;
	static volatile int8_t x212 = INT8_MIN;
	int64_t t50 = 3063083148LL;

	t50 = (x209-(x210&(x211/x212)));

	if (t50 != 255LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = -1344512LL;
	int8_t x214 = INT8_MAX;
	static uint32_t x215 = UINT32_MAX;
	static int64_t x216 = INT64_MAX;
	int64_t t51 = 62791030LL;

	t51 = (x213-(x214&(x215/x216)));

	if (t51 != -1344512LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	volatile uint8_t x218 = 7U;
	uint32_t x219 = 40U;
	uint32_t x220 = UINT32_MAX;
	static uint32_t t52 = UINT32_MAX;

	t52 = (x217-(x218&(x219/x220)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x222 = -1LL;
	uint32_t x223 = UINT32_MAX;
	int32_t x224 = -1;
	int64_t t53 = 368113415854416LL;

	t53 = (x221-(x222&(x223/x224)));

	if (t53 != 9LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 1U;
	uint16_t x227 = UINT16_MAX;
	volatile int16_t x228 = -1;
	int32_t t54 = -213793;

	t54 = (x225-(x226&(x227/x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -1;
	static uint32_t x230 = 1U;
	volatile int16_t x231 = 456;
	static int8_t x232 = 1;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x229-(x230&(x231/x232)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 3725180443LLU;
	int16_t x234 = -1;
	static int16_t x235 = INT16_MIN;
	volatile uint64_t t56 = 26934236897117536LLU;

	t56 = (x233-(x234&(x235/x236)));

	if (t56 != 3725180187LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -1;
	int64_t x238 = INT64_MAX;
	int16_t x239 = -1;
	volatile int64_t t57 = 1163473939837690918LL;

	t57 = (x237-(x238&(x239/x240)));

	if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = 1302LL;
	int16_t x242 = INT16_MIN;
	volatile uint16_t x243 = UINT16_MAX;
	int16_t x244 = 10;
	volatile int64_t t58 = 23909LL;

	t58 = (x241-(x242&(x243/x244)));

	if (t58 != 1302LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x245 = -1;
	volatile int64_t x246 = 2610LL;
	static int8_t x247 = -1;
	int64_t t59 = 42297036247LL;

	t59 = (x245-(x246&(x247/x248)));

	if (t59 != -2097LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x250 = -24;
	uint64_t x251 = 2765534376LLU;
	int64_t x252 = INT64_MAX;
	uint64_t t60 = UINT64_MAX;

	t60 = (x249-(x250&(x251/x252)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x254 = 64623;
	static uint16_t x255 = 9U;
	int16_t x256 = 440;
	int32_t t61 = INT32_MIN;

	t61 = (x253-(x254&(x255/x256)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 1U;
	int64_t x258 = INT64_MIN;
	uint8_t x259 = 23U;
	volatile int64_t t62 = -3291756LL;

	t62 = (x257-(x258&(x259/x260)));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x266 = UINT32_MAX;
	uint8_t x268 = 12U;
	volatile uint32_t t63 = 19598U;

	t63 = (x265-(x266&(x267/x268)));

	if (t63 != 628791U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = UINT64_MAX;
	volatile uint16_t x274 = UINT16_MAX;
	int16_t x275 = INT16_MIN;
	static int16_t x276 = -100;
	volatile uint64_t t64 = 2849081LLU;

	t64 = (x273-(x274&(x275/x276)));

	if (t64 != 18446744073709551288LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = 1;
	static volatile uint8_t x278 = UINT8_MAX;
	int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MIN;

	t65 = (x277-(x278&(x279/x280)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = 1;
	int16_t x286 = -1;
	static volatile uint16_t x288 = 1U;
	uint32_t t66 = 2095962U;

	t66 = (x285-(x286&(x287/x288)));

	if (t66 != 4294964782U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x290 = 773621;
	volatile int32_t x292 = -325953;
	uint64_t t67 = 123004LLU;

	t67 = (x289-(x290&(x291/x292)));

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = -12;
	uint8_t x294 = 9U;
	static uint32_t x295 = UINT32_MAX;
	uint32_t t68 = 2608U;

	t68 = (x293-(x294&(x295/x296)));

	if (t68 != 4294967283U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = -1;
	static uint64_t x298 = UINT64_MAX;
	static volatile int32_t x299 = -1;
	int32_t x300 = 1;
	uint64_t t69 = 15LLU;

	t69 = (x297-(x298&(x299/x300)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MAX;
	int64_t x302 = INT64_MIN;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t70 = 236LLU;

	t70 = (x301-(x302&(x303/x304)));

	if (t70 != 2147483647LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = 20;
	static int64_t x306 = INT64_MAX;
	static int16_t x307 = INT16_MAX;

	t71 = (x305-(x306&(x307/x308)));

	if (t71 != 20LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x309 = INT16_MIN;
	int64_t x310 = -3502006354531969LL;
	int32_t x311 = -10335;
	int8_t x312 = INT8_MIN;
	volatile int64_t t72 = 0LL;

	t72 = (x309-(x310&(x311/x312)));

	if (t72 != -32848LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = -1;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MAX;
	int64_t x316 = INT64_MAX;
	volatile int64_t t73 = 326222LL;

	t73 = (x313-(x314&(x315/x316)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = -1;
	int32_t x320 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

	t74 = (x317-(x318&(x319/x320)));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x321 = UINT8_MAX;
	int16_t x322 = INT16_MIN;
	static int64_t x324 = INT64_MAX;
	volatile uint64_t t75 = 321LLU;

	t75 = (x321-(x322&(x323/x324)));

	if (t75 != 255LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = 156249;
	static volatile int64_t x326 = -1LL;
	static int16_t x327 = -46;

	t76 = (x325-(x326&(x327/x328)));

	if (t76 != 156203LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	uint32_t x331 = 464U;
	int32_t x332 = -51729769;
	uint32_t t77 = UINT32_MAX;

	t77 = (x329-(x330&(x331/x332)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x333 = 78LLU;
	volatile uint16_t x334 = 58U;
	volatile int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MIN;
	uint64_t t78 = 2LLU;

	t78 = (x333-(x334&(x335/x336)));

	if (t78 != 78LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x338 = INT32_MIN;
	static int16_t x339 = -2966;
	int32_t x340 = INT32_MAX;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x337-(x338&(x339/x340)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = INT64_MIN;
	uint8_t x344 = 7U;
	int64_t t80 = 417855042842373LL;

	t80 = (x341-(x342&(x343/x344)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = UINT8_MAX;

	t81 = (x345-(x346&(x347/x348)));

	if (t81 != 36170090714038271LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x349 = 9560LLU;
	uint8_t x350 = UINT8_MAX;
	uint64_t x351 = 18796899603945929LLU;
	volatile uint64_t t82 = 1475978724984LLU;

	t82 = (x349-(x350&(x351/x352)));

	if (t82 != 9560LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x354 = UINT32_MAX;
	int16_t x355 = INT16_MAX;
	int32_t x356 = INT32_MIN;
	uint64_t t83 = UINT64_MAX;

	t83 = (x353-(x354&(x355/x356)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x357 = -1;
	static int64_t x359 = INT64_MIN;
	int64_t t84 = 8252423244LL;

	t84 = (x357-(x358&(x359/x360)));

	if (t84 != 281483566907519LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = 28768356657LL;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MAX;
	int8_t x364 = INT8_MAX;
	volatile int64_t t85 = 8365908055100742LL;

	t85 = (x361-(x362&(x363/x364)));

	if (t85 != 28768356657LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x365 = 3936757234807043LLU;
	uint32_t x368 = UINT32_MAX;
	volatile uint64_t t86 = 1022LLU;

	t86 = (x365-(x366&(x367/x368)));

	if (t86 != 3936757234807043LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = -1;
	int32_t x370 = INT32_MIN;
	int16_t x371 = -1;
	volatile int32_t t87 = -21336;

	t87 = (x369-(x370&(x371/x372)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 1542703U;
	static int64_t x375 = 116592LL;
	int32_t x376 = INT32_MIN;

	t88 = (x373-(x374&(x375/x376)));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = 1;
	int16_t x382 = -1;
	int32_t x383 = -18;
	uint32_t x384 = 4391621U;
	volatile uint32_t t89 = 15U;

	t89 = (x381-(x382&(x383/x384)));

	if (t89 != 4294966320U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x386 = 128255U;
	uint8_t x387 = 76U;
	static uint16_t x388 = 16180U;
	uint32_t t90 = 872713291U;

	t90 = (x385-(x386&(x387/x388)));

	if (t90 != 127U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = -1;
	static uint16_t x390 = UINT16_MAX;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t91 = -592640;

	t91 = (x389-(x390&(x391/x392)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x393 = UINT16_MAX;
	int16_t x394 = INT16_MIN;
	volatile uint16_t x395 = 1U;
	static uint32_t x396 = 330589U;
	static uint32_t t92 = 30557U;

	t92 = (x393-(x394&(x395/x396)));

	if (t92 != 65535U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x397 = 202085462720LL;
	int16_t x399 = INT16_MAX;
	int16_t x400 = -1;
	static int64_t t93 = -2121543893LL;

	t93 = (x397-(x398&(x399/x400)));

	if (t93 != 202085462719LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x401 = INT64_MAX;
	static uint64_t x402 = 412246973LLU;
	int64_t x403 = 47389157966LL;
	int32_t x404 = 64277447;

	t94 = (x401-(x402&(x403/x404)));

	if (t94 != 9223372036854775134LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = -1;
	int32_t x407 = -1;
	volatile uint8_t x408 = 39U;

	t95 = (x405-(x406&(x407/x408)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = INT8_MIN;
	uint64_t x410 = 61LLU;
	static int16_t x411 = 16342;
	int8_t x412 = -55;
	volatile uint64_t t96 = 7358246993LLU;

	t96 = (x409-(x410&(x411/x412)));

	if (t96 != 18446744073709551467LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x414 = INT8_MIN;
	volatile int64_t x416 = -3513889867481041LL;

	t97 = (x413-(x414&(x415/x416)));

	if (t97 != 2147481087LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = -10LL;
	volatile int16_t x418 = INT16_MIN;
	volatile uint8_t x419 = 11U;
	int64_t x420 = INT64_MIN;

	t98 = (x417-(x418&(x419/x420)));

	if (t98 != -10LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x422 = 111639173246256LL;
	uint64_t x423 = 37432181514147276LLU;
	static int16_t x424 = INT16_MIN;
	uint64_t t99 = 1168909609849LLU;

	t99 = (x421-(x422&(x423/x424)));

	if (t99 != 1092048LLU) { NG(); } else { ; }
	
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

