#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = UINT8_MAX;
uint64_t t1 = 801772539395330LLU;
volatile uint64_t t3 = 4777692803427434631LLU;
volatile uint32_t x19 = 848370528U;
int64_t x20 = INT64_MIN;
uint64_t x28 = UINT64_MAX;
int8_t x37 = 1;
int32_t x38 = INT32_MIN;
static uint64_t x39 = 449LLU;
static uint64_t x43 = UINT64_MAX;
int16_t x47 = INT16_MIN;
volatile uint32_t t11 = 12133362U;
int8_t x54 = 0;
int8_t x55 = -1;
uint8_t x60 = 12U;
volatile int32_t t14 = -106404970;
static int16_t x61 = INT16_MIN;
static volatile int16_t x62 = -418;
uint32_t x67 = 123852466U;
volatile int16_t x69 = -1;
static uint8_t x71 = 15U;
static int64_t x74 = -956400505506355422LL;
static volatile int8_t x76 = -1;
int8_t x81 = 0;
volatile int64_t t20 = -1183403325LL;
volatile int32_t x87 = INT32_MIN;
uint64_t t23 = 7690705548701LLU;
int64_t x102 = 5205LL;
volatile int32_t x110 = INT32_MAX;
int32_t x114 = INT32_MIN;
uint64_t t28 = 15LLU;
volatile int64_t x124 = INT64_MIN;
int8_t x125 = -1;
volatile int32_t t31 = -913163764;
uint64_t x137 = 17782184641236929LLU;
volatile uint8_t x142 = 26U;
volatile int64_t x143 = INT64_MIN;
int16_t x144 = INT16_MAX;
int16_t x154 = -1;
int32_t x155 = -685777;
static int64_t x156 = INT64_MIN;
static volatile int64_t t37 = 10318546LL;
static uint16_t x157 = 0U;
int32_t t38 = 1041;
int16_t x167 = -6;
int64_t x168 = INT64_MIN;
volatile int64_t t41 = 1LL;
int64_t x175 = 17LL;
static int64_t t42 = -125498LL;
uint64_t x187 = UINT64_MAX;
uint64_t x189 = 10032LLU;
uint32_t x190 = 3819038U;
int8_t x194 = -21;
int8_t x198 = -1;
int8_t x203 = INT8_MIN;
volatile uint8_t x204 = 10U;
uint8_t x211 = UINT8_MAX;
int32_t x216 = -10;
static uint64_t t53 = 1858583282LLU;
static int64_t x221 = -279LL;
volatile int32_t t55 = -1352814;
int16_t x232 = -112;
static int64_t x235 = 1LL;
volatile uint32_t x241 = 1657U;
int16_t x243 = INT16_MAX;
int8_t x246 = INT8_MAX;
volatile int16_t x252 = INT16_MIN;
int32_t x257 = -1;
int32_t x260 = INT32_MAX;
volatile int64_t t63 = 1611393359014LL;
static int32_t x266 = -1;
int8_t x267 = INT8_MIN;
static volatile int8_t x276 = INT8_MIN;
int32_t x297 = -203;
int8_t x302 = -1;
volatile int8_t x303 = INT8_MIN;
int64_t t74 = -29727LL;
int8_t x306 = INT8_MIN;
uint16_t x307 = 91U;
static int8_t x310 = 1;
volatile uint64_t t79 = 138LLU;
uint64_t x328 = 10LLU;
volatile int64_t x336 = INT64_MAX;
int32_t t83 = 4468495;
uint64_t x347 = 127081645261251LLU;
uint16_t x350 = 2U;
uint32_t x351 = UINT32_MAX;
static volatile int64_t t88 = 2480032LL;
int8_t x364 = 1;
volatile int8_t x366 = INT8_MAX;
int16_t x367 = -1;
volatile int32_t t90 = 130804053;
int16_t x370 = INT16_MIN;
volatile int32_t x372 = -1;
int64_t x375 = -8158678480971288LL;
uint8_t x382 = 21U;
int16_t x383 = INT16_MIN;
int8_t x384 = INT8_MIN;
int64_t x392 = INT64_MIN;
static uint8_t x396 = 1U;
volatile int64_t t99 = -131713552617845LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile int8_t x2 = 0;
	volatile uint64_t x3 = UINT64_MAX;
	static int32_t x4 = INT32_MIN;
	uint64_t t0 = 4122980129255946451LLU;

	t0 = ((x1|(x2^x3))%x4);

	if (t0 != 2147483647LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = 520;
	static uint64_t x8 = 1LLU;

	t1 = ((x5|(x6^x7))%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 6645LLU;
	int8_t x10 = 1;
	static uint64_t x11 = 198697309LLU;
	uint16_t x12 = 563U;
	volatile uint64_t t2 = 117549761LLU;

	t2 = ((x9|(x10^x11))%x12);

	if (t2 != 82LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint8_t x14 = 29U;
	uint32_t x15 = UINT32_MAX;
	volatile uint64_t x16 = 389854311LLU;

	t3 = ((x13|(x14^x15))%x16);

	if (t3 != 147618948LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MAX;
	int16_t x18 = 2155;
	int64_t t4 = 43LL;

	t4 = ((x17|(x18^x19))%x20);

	if (t4 != 848396287LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 14519U;
	uint64_t x22 = 7LLU;
	uint32_t x23 = 256364588U;
	int8_t x24 = -4;
	static volatile uint64_t t5 = 0LLU;

	t5 = ((x21|(x22^x23))%x24);

	if (t5 != 256374975LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile int64_t x26 = INT64_MAX;
	volatile int64_t x27 = -22976266231303844LL;
	static uint64_t t6 = 40618942LLU;

	t6 = ((x25|(x26^x27))%x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile uint16_t x30 = UINT16_MAX;
	static volatile int32_t x31 = INT32_MIN;
	volatile uint8_t x32 = UINT8_MAX;
	int32_t t7 = -1;

	t7 = ((x29|(x30^x31))%x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile uint8_t x34 = 12U;
	static int16_t x35 = -7;
	int32_t x36 = -28389354;
	volatile int32_t t8 = 68675872;

	t8 = ((x33|(x34^x35))%x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x40 = -1LL;
	uint64_t t9 = 5LLU;

	t9 = ((x37|(x38^x39))%x40);

	if (t9 != 18446744071562068417LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MAX;
	int16_t x42 = -1;
	uint16_t x44 = 2U;
	uint64_t t10 = 126LLU;

	t10 = ((x41|(x42^x43))%x44);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 3227U;
	static int32_t x46 = -236863;
	int16_t x48 = INT16_MIN;

	t11 = ((x45|(x46^x47))%x48);

	if (t11 != 257755U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	static int16_t x50 = -356;
	int64_t x51 = -1LL;
	int64_t x52 = 3622497737759LL;
	static volatile int64_t t12 = 96274594409729865LL;

	t12 = ((x49|(x50^x51))%x52);

	if (t12 != 383LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	static volatile uint8_t x56 = UINT8_MAX;
	int32_t t13 = 186792315;

	t13 = ((x53|(x54^x55))%x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 72U;
	uint16_t x58 = 10U;
	static int32_t x59 = INT32_MAX;

	t14 = ((x57|(x58^x59))%x60);

	if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = -39869914LL;
	int16_t x64 = INT16_MAX;
	volatile int64_t t15 = -64386776882786278LL;

	t15 = ((x61|(x62^x63))%x64);

	if (t15 != -9096LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = INT16_MAX;
	volatile int64_t x66 = -1LL;
	uint8_t x68 = 2U;
	volatile int64_t t16 = 53LL;

	t16 = ((x65|(x66^x67))%x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 1U;
	int16_t x72 = 310;
	volatile int32_t t17 = -12930;

	t17 = ((x69|(x70^x71))%x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 91U;
	volatile int64_t x75 = 1179LL;
	static int64_t t18 = 9816270182LL;

	t18 = ((x73|(x74^x75))%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 8U;
	int16_t x78 = -14194;
	int16_t x79 = INT16_MIN;
	static volatile int8_t x80 = INT8_MAX;
	volatile int32_t t19 = 7;

	t19 = ((x77|(x78^x79))%x80);

	if (t19 != 32) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -59;
	static int64_t x83 = 425590777254LL;
	int8_t x84 = -1;

	t20 = ((x81|(x82^x83))%x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MAX;
	uint32_t x86 = 84957642U;
	volatile uint8_t x88 = 63U;
	volatile uint32_t t21 = 909758568U;

	t21 = ((x85|(x86^x87))%x88);

	if (t21 != 18U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = 10909000519772435LL;
	static int32_t x91 = 6;
	volatile int64_t x92 = -1896838315LL;
	int64_t t22 = 441414135278LL;

	t22 = ((x89|(x90^x91))%x92);

	if (t22 != -5867LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	uint64_t x94 = 10028390LLU;
	volatile int16_t x95 = 0;
	volatile int32_t x96 = -754;

	t23 = ((x93|(x94^x95))%x96);

	if (t23 != 10092543LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 154U;
	int32_t x98 = INT32_MIN;
	volatile uint16_t x99 = 201U;
	int32_t x100 = 1748734;
	uint32_t t24 = 251767966U;

	t24 = ((x97|(x98^x99))%x100);

	if (t24 != 38515U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	volatile uint8_t x103 = UINT8_MAX;
	int32_t x104 = INT32_MIN;
	volatile int64_t t25 = 35229534174083782LL;

	t25 = ((x101|(x102^x103))%x104);

	if (t25 != -2147478358LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 13U;
	static int16_t x106 = INT16_MAX;
	static volatile int8_t x107 = INT8_MAX;
	int16_t x108 = -3743;
	volatile int32_t t26 = -129558964;

	t26 = ((x105|(x106^x107))%x108);

	if (t26 != 2709) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	static volatile int16_t x111 = INT16_MIN;
	uint8_t x112 = 29U;
	int64_t t27 = 984717525841786281LL;

	t27 = ((x109|(x110^x111))%x112);

	if (t27 != -11LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 14;
	static int8_t x115 = -1;
	uint64_t x116 = 60LLU;

	t28 = ((x113|(x114^x115))%x116);

	if (t28 != 7LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = 3946435801LLU;
	uint32_t x118 = UINT32_MAX;
	uint32_t x119 = UINT32_MAX;
	uint64_t x120 = 3LLU;
	volatile uint64_t t29 = 124262880487LLU;

	t29 = ((x117|(x118^x119))%x120);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	int16_t x122 = -1;
	uint8_t x123 = UINT8_MAX;
	volatile int64_t t30 = -797513410922662477LL;

	t30 = ((x121|(x122^x123))%x124);

	if (t30 != -256LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x126 = -1;
	int8_t x127 = INT8_MAX;
	uint8_t x128 = 42U;

	t31 = ((x125|(x126^x127))%x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	uint8_t x130 = UINT8_MAX;
	uint32_t x131 = UINT32_MAX;
	uint64_t x132 = 208053776455067468LLU;
	uint64_t t32 = 432303LLU;

	t32 = ((x129|(x130^x131))%x132);

	if (t32 != 4294967040LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x138 = 0;
	uint16_t x139 = 14U;
	int8_t x140 = INT8_MAX;
	uint64_t t33 = 0LLU;

	t33 = ((x137|(x138^x139))%x140);

	if (t33 != 62LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 6U;
	volatile int64_t t34 = 489676931724LL;

	t34 = ((x141|(x142^x143))%x144);

	if (t34 != -32745LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = -1;
	static volatile int32_t x146 = INT32_MIN;
	static int8_t x147 = -1;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t35 = -65327;

	t35 = ((x145|(x146^x147))%x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x149 = -21;
	uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MIN;
	static int64_t x152 = INT64_MIN;
	volatile int64_t t36 = -7100399405877109LL;

	t36 = ((x149|(x150^x151))%x152);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x153 = UINT32_MAX;

	t37 = ((x153|(x154^x155))%x156);

	if (t37 != 4294967295LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x158 = UINT16_MAX;
	uint8_t x159 = 2U;
	int32_t x160 = INT32_MIN;

	t38 = ((x157|(x158^x159))%x160);

	if (t38 != 65533) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = 32316470312261LL;
	int16_t x162 = 7;
	volatile uint32_t x163 = 55U;
	uint64_t x164 = 1698238467LLU;
	volatile uint64_t t39 = 205338707117645581LLU;

	t39 = ((x161|(x162^x163))%x164);

	if (t39 != 690523766LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x165 = 101U;
	int8_t x166 = INT8_MIN;
	volatile int64_t t40 = 1910981LL;

	t40 = ((x165|(x166^x167))%x168);

	if (t40 != 127LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MAX;
	int8_t x170 = -6;
	int32_t x171 = 13256;
	int64_t x172 = INT64_MAX;

	t41 = ((x169|(x170^x171))%x172);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = 0U;
	int64_t x174 = INT64_MAX;
	int64_t x176 = 388668365476LL;

	t42 = ((x173|(x174^x175))%x176);

	if (t42 != 44921828066LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	static volatile uint16_t x179 = 5249U;
	volatile int64_t x180 = INT64_MIN;
	int64_t t43 = 5771123255634LL;

	t43 = ((x177|(x178^x179))%x180);

	if (t43 != -5375LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = INT16_MIN;
	int64_t x182 = -1LL;
	int16_t x183 = 5209;
	int64_t x184 = INT64_MIN;
	int64_t t44 = -204LL;

	t44 = ((x181|(x182^x183))%x184);

	if (t44 != -5210LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MAX;
	int16_t x186 = INT16_MAX;
	uint16_t x188 = UINT16_MAX;
	uint64_t t45 = 897589148487LLU;

	t45 = ((x185|(x186^x187))%x188);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x191 = 25U;
	static int8_t x192 = INT8_MIN;
	volatile uint64_t t46 = 50946494696973954LLU;

	t46 = ((x189|(x190^x191))%x192);

	if (t46 != 3827511LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = 161;
	int8_t x195 = -1;
	uint32_t x196 = 3U;
	uint32_t t47 = 81074729U;

	t47 = ((x193|(x194^x195))%x196);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	static int16_t x199 = -1;
	static int16_t x200 = INT16_MAX;
	int32_t t48 = -3;

	t48 = ((x197|(x198^x199))%x200);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -1;
	uint8_t x202 = 0U;
	volatile int32_t t49 = -21;

	t49 = ((x201|(x202^x203))%x204);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = INT8_MIN;
	static int64_t x206 = 1397103390423LL;
	uint8_t x207 = 32U;
	static int64_t x208 = 225LL;
	volatile int64_t t50 = -10001946777620LL;

	t50 = ((x205|(x206^x207))%x208);

	if (t50 != -9LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -1LL;
	int8_t x210 = INT8_MIN;
	int8_t x212 = INT8_MIN;
	int64_t t51 = 100LL;

	t51 = ((x209|(x210^x211))%x212);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x213 = 0LLU;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = UINT64_MAX;
	static volatile uint64_t t52 = 30506LLU;

	t52 = ((x213|(x214^x215))%x216);

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 554635197325720507LLU;
	int64_t x218 = -365765375053015LL;
	uint32_t x219 = 1500273597U;
	int32_t x220 = INT32_MIN;

	t53 = ((x217|(x218^x219))%x220);

	if (t53 != 18446453630804949951LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x222 = 145;
	int32_t x223 = INT32_MIN;
	int16_t x224 = 6148;
	int64_t t54 = 201LL;

	t54 = ((x221|(x222^x223))%x224);

	if (t54 != -263LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = 87;
	uint16_t x226 = 3534U;
	int16_t x227 = 9;
	static volatile int8_t x228 = INT8_MIN;

	t55 = ((x225|(x226^x227))%x228);

	if (t55 != 87) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = 95911015U;
	int64_t x230 = 987293417LL;
	int8_t x231 = INT8_MIN;
	int64_t t56 = -15817LL;

	t56 = ((x229|(x230^x231))%x232);

	if (t56 != -97LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = 23172LL;
	int8_t x234 = -6;
	uint32_t x236 = 134266401U;
	int64_t t57 = -3605003765135LL;

	t57 = ((x233|(x234^x235))%x236);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -1;
	static int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MIN;
	volatile int64_t x240 = INT64_MIN;
	volatile int64_t t58 = -913500154270329LL;

	t58 = ((x237|(x238^x239))%x240);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x242 = 3LLU;
	static int64_t x244 = -1LL;
	volatile uint64_t t59 = 33861894LLU;

	t59 = ((x241|(x242^x243))%x244);

	if (t59 != 32765LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	static uint16_t x248 = 103U;
	volatile int64_t t60 = -5643071393526LL;

	t60 = ((x245|(x246^x247))%x248);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = 14U;
	uint16_t x250 = 1588U;
	int16_t x251 = -8848;
	volatile int32_t t61 = 4;

	t61 = ((x249|(x250^x251))%x252);

	if (t61 != -9394) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = 8507854555LL;
	int8_t x255 = INT8_MAX;
	static volatile uint64_t x256 = UINT64_MAX;
	volatile uint64_t t62 = 980386868640580LLU;

	t62 = ((x253|(x254^x255))%x256);

	if (t62 != 8589934591LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x258 = 27;
	int64_t x259 = 96LL;

	t63 = ((x257|(x258^x259))%x260);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x261 = INT64_MIN;
	uint32_t x262 = 730906U;
	uint8_t x263 = 0U;
	uint16_t x264 = UINT16_MAX;
	static volatile int64_t t64 = 465382142482209219LL;

	t64 = ((x261|(x262^x263))%x264);

	if (t64 != -22747LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = 1353947;
	int32_t x268 = INT32_MIN;
	volatile int32_t t65 = -29092;

	t65 = ((x265|(x266^x267))%x268);

	if (t65 != 1353983) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x269 = 1374330521747LLU;
	volatile uint64_t x270 = UINT64_MAX;
	volatile uint32_t x271 = 193235640U;
	volatile int32_t x272 = -5;
	uint64_t t66 = 508686256954479LLU;

	t66 = ((x269|(x270^x271))%x272);

	if (t66 != 18446744073650568663LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x273 = 160U;
	static int32_t x274 = INT32_MIN;
	volatile int8_t x275 = INT8_MIN;
	int32_t t67 = 162207328;

	t67 = ((x273|(x274^x275))%x276);

	if (t67 != 32) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = 2;
	int64_t x279 = -1LL;
	int16_t x280 = 6;
	int64_t t68 = -14280253860011LL;

	t68 = ((x277|(x278^x279))%x280);

	if (t68 != -3LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x281 = INT16_MIN;
	int64_t x282 = -1LL;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = UINT16_MAX;
	int64_t t69 = 9480442LL;

	t69 = ((x281|(x282^x283))%x284);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	volatile uint16_t x287 = 214U;
	int8_t x288 = INT8_MIN;
	volatile int32_t t70 = 63;

	t70 = ((x285|(x286^x287))%x288);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x289 = 6723;
	uint32_t x290 = 0U;
	int64_t x291 = -1LL;
	int8_t x292 = -56;
	int64_t t71 = 867LL;

	t71 = ((x289|(x290^x291))%x292);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = -1;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = 11704383449222LLU;
	int32_t x296 = -6;
	uint64_t t72 = 2336873998536LLU;

	t72 = ((x293|(x294^x295))%x296);

	if (t72 != 5LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x298 = -317;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = 25;
	uint32_t t73 = 900480U;

	t73 = ((x297|(x298^x299))%x300);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = 424481965LL;
	uint16_t x304 = UINT16_MAX;

	t74 = ((x301|(x302^x303))%x304);

	if (t74 != 11852LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x308 = -24366531914890LL;
	volatile int64_t t75 = -245315156998625LL;

	t75 = ((x305|(x306^x307))%x308);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x309 = -1;
	int8_t x311 = 0;
	uint64_t x312 = UINT64_MAX;
	uint64_t t76 = 32145020LLU;

	t76 = ((x309|(x310^x311))%x312);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 1U;
	int16_t x314 = -108;
	uint8_t x315 = 2U;
	static uint32_t x316 = 5155984U;
	volatile uint32_t t77 = 4048U;

	t77 = ((x313|(x314^x315))%x316);

	if (t77 != 32519U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x317 = 1011LLU;
	static int64_t x318 = -77519327LL;
	int16_t x319 = 6841;
	static uint8_t x320 = 8U;
	volatile uint64_t t78 = 1676037354LLU;

	t78 = ((x317|(x318^x319))%x320);

	if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 52003U;
	volatile int64_t x322 = 175106502804LL;
	uint64_t x323 = 46642897290356LLU;
	int16_t x324 = -1;

	t79 = ((x321|(x322^x323))%x324);

	if (t79 != 46467796107235LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = UINT32_MAX;
	int32_t x326 = 0;
	uint32_t x327 = 236292U;
	volatile uint64_t t80 = 1LLU;

	t80 = ((x325|(x326^x327))%x328);

	if (t80 != 5LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = INT8_MIN;
	uint16_t x330 = 709U;
	volatile int8_t x331 = INT8_MAX;
	volatile uint8_t x332 = 1U;
	volatile int32_t t81 = 374;

	t81 = ((x329|(x330^x331))%x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x333 = INT64_MIN;
	int16_t x334 = -2779;
	static int32_t x335 = INT32_MIN;
	static volatile int64_t t82 = -45193729LL;

	t82 = ((x333|(x334^x335))%x336);

	if (t82 != -9223372034707294939LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = 194;
	int32_t x338 = -1;
	uint8_t x339 = 11U;
	volatile int8_t x340 = INT8_MIN;

	t83 = ((x337|(x338^x339))%x340);

	if (t83 != -10) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MAX;
	int32_t x344 = 70;
	uint64_t t84 = 1LLU;

	t84 = ((x341|(x342^x343))%x344);

	if (t84 != 8LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = -37008022LL;
	int16_t x346 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	uint64_t t85 = 144725917LLU;

	t85 = ((x345|(x346^x347))%x348);

	if (t85 != 9223372036853681643LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = -1;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t86 = 10623U;

	t86 = ((x349|(x350^x351))%x352);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x353 = 893U;
	volatile int8_t x354 = INT8_MIN;
	static uint8_t x355 = 27U;
	uint32_t x356 = 61869091U;
	volatile uint32_t t87 = 15862731U;

	t87 = ((x353|(x354^x355))%x356);

	if (t87 != 26000016U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = 40U;
	int16_t x358 = INT16_MIN;
	volatile int64_t x359 = INT64_MAX;
	static uint8_t x360 = 6U;

	t88 = ((x357|(x358^x359))%x360);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	static int16_t x363 = INT16_MAX;
	int32_t t89 = 3132;

	t89 = ((x361|(x362^x363))%x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x365 = 222;
	static volatile int32_t x368 = INT32_MIN;

	t90 = ((x365|(x366^x367))%x368);

	if (t90 != -34) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x369 = 16633303603656LLU;
	static int8_t x371 = -13;
	volatile uint64_t t91 = 0LLU;

	t91 = ((x369|(x370^x371))%x372);

	if (t91 != 16633303629819LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MIN;
	int64_t x374 = -1LL;
	static volatile uint32_t x376 = 197588791U;
	int64_t t92 = -14108LL;

	t92 = ((x373|(x374^x375))%x376);

	if (t92 != -197143419LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = -1;
	int32_t x378 = INT32_MAX;
	volatile int16_t x379 = -1;
	uint8_t x380 = 1U;
	static volatile int32_t t93 = 31;

	t93 = ((x377|(x378^x379))%x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x381 = 33677253510194LLU;
	uint64_t t94 = 1LLU;

	t94 = ((x381|(x382^x383))%x384);

	if (t94 != 18446744073709519927LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x385 = 5U;
	volatile uint8_t x386 = UINT8_MAX;
	static int16_t x387 = -1;
	int32_t x388 = -40021;
	int32_t t95 = 28523144;

	t95 = ((x385|(x386^x387))%x388);

	if (t95 != -251) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x389 = INT64_MAX;
	int32_t x390 = 1;
	volatile int8_t x391 = INT8_MIN;
	volatile int64_t t96 = 106458149266LL;

	t96 = ((x389|(x390^x391))%x392);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = 0;
	static int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MIN;
	int64_t t97 = -1LL;

	t97 = ((x393|(x394^x395))%x396);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x397 = 24915U;
	uint16_t x398 = 23689U;
	int16_t x399 = INT16_MIN;
	uint64_t x400 = 686783246262LLU;
	volatile uint64_t t98 = 16690671LLU;

	t98 = ((x397|(x398^x399))%x400);

	if (t98 != 188913348007LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x401 = -10;
	uint8_t x402 = UINT8_MAX;
	int8_t x403 = -1;
	int64_t x404 = 7123073149LL;

	t99 = ((x401|(x402^x403))%x404);

	if (t99 != -10LL) { NG(); } else { ; }
	
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

