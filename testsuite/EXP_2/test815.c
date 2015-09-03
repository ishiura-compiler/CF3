#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
uint64_t x6 = 3LLU;
volatile int32_t t1 = 239142306;
int32_t t2 = 1;
static uint8_t x15 = UINT8_MAX;
uint8_t x17 = UINT8_MAX;
static int8_t x18 = INT8_MAX;
volatile uint8_t x20 = UINT8_MAX;
static int8_t x32 = -5;
static volatile int32_t t8 = 50;
uint64_t x40 = 104088058509810500LLU;
int8_t x43 = INT8_MIN;
int32_t x44 = -46026;
int32_t t10 = 323433;
static int8_t x47 = INT8_MAX;
volatile int8_t x51 = -36;
int64_t x53 = -648LL;
int32_t x54 = INT32_MIN;
int64_t x58 = INT64_MAX;
volatile int64_t x60 = -1LL;
int16_t x70 = 1;
volatile uint8_t x77 = UINT8_MAX;
int32_t t19 = 1;
uint32_t x85 = UINT32_MAX;
volatile int32_t x88 = INT32_MIN;
volatile int32_t t21 = 3733004;
int16_t x90 = -1;
uint32_t x93 = 1265364332U;
static int8_t x95 = INT8_MIN;
uint32_t x107 = 1458365491U;
int16_t x110 = 15045;
static volatile int32_t t28 = 0;
int16_t x121 = 9209;
int32_t x124 = 23;
int16_t x127 = 7801;
uint16_t x137 = 4797U;
volatile int32_t t34 = 180;
static volatile int16_t x146 = -7026;
static uint32_t x154 = 28U;
static uint8_t x165 = 5U;
uint64_t x166 = 865963211838776LLU;
int32_t t41 = 946;
uint32_t x170 = UINT32_MAX;
int64_t x175 = INT64_MIN;
volatile uint16_t x176 = UINT16_MAX;
volatile uint32_t x180 = 4U;
uint16_t x183 = UINT16_MAX;
int8_t x184 = INT8_MIN;
volatile int32_t t48 = 0;
int64_t x197 = 0LL;
static volatile int32_t t49 = 9035;
static int32_t t50 = 290520;
volatile int32_t t51 = -1;
int16_t x215 = INT16_MIN;
volatile uint32_t x217 = 31378U;
static uint32_t x219 = 254403U;
int32_t x223 = -1;
volatile int32_t x224 = INT32_MIN;
int32_t t55 = 133508;
int64_t x226 = -1LL;
int32_t x227 = -1;
volatile int32_t x233 = INT32_MIN;
static int16_t x234 = INT16_MIN;
uint32_t x240 = UINT32_MAX;
uint64_t x247 = 5429727051795LLU;
static uint32_t x254 = UINT32_MAX;
uint64_t x257 = UINT64_MAX;
int32_t x258 = INT32_MIN;
volatile int16_t x268 = -1;
static volatile int32_t t69 = 233;
int32_t t71 = -13;
int64_t x292 = INT64_MIN;
static int64_t x294 = INT64_MAX;
int64_t x295 = -120784LL;
int32_t t73 = 2815;
int64_t x298 = -14105343201733900LL;
uint32_t x300 = UINT32_MAX;
int32_t x305 = 0;
static volatile int32_t x308 = INT32_MAX;
static int32_t t77 = -5836940;
int8_t x320 = 10;
uint16_t x325 = UINT16_MAX;
uint8_t x326 = 1U;
uint32_t x327 = 2179223U;
int32_t x328 = INT32_MIN;
static uint8_t x330 = 13U;
uint16_t x332 = UINT16_MAX;
int32_t x333 = INT32_MAX;
uint64_t x335 = 1722690LLU;
uint64_t x339 = 16212020605490LLU;
uint64_t x341 = UINT64_MAX;
int16_t x347 = INT16_MIN;
int16_t x348 = INT16_MIN;
static volatile int32_t t85 = 25960056;
int32_t x350 = INT32_MIN;
uint64_t x352 = 3282641124LLU;
int16_t x356 = -1;
static int32_t x357 = -1;
static uint8_t x362 = UINT8_MAX;
int16_t x365 = 18;
volatile uint64_t x366 = UINT64_MAX;
int16_t x367 = INT16_MIN;
int8_t x370 = -44;
int32_t x375 = INT32_MIN;
int32_t x384 = -1;
volatile int16_t x388 = INT16_MIN;
uint64_t x390 = UINT64_MAX;
uint32_t x392 = UINT32_MAX;
int32_t x393 = -110;
static volatile int32_t x395 = INT32_MIN;
int8_t x398 = -2;
volatile int32_t t97 = -79411;
static int64_t x401 = INT64_MIN;
static int32_t x406 = 13164711;


void f0(void) {
	volatile uint8_t x2 = 1U;
	int64_t x3 = -1LL;
	int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = 87504;

	t0 = ((x1&(x2%x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MAX;

	t1 = ((x5&(x6%x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int32_t x10 = -1;
	volatile int8_t x11 = INT8_MIN;
	volatile int32_t x12 = INT32_MAX;

	t2 = ((x9&(x10%x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static uint64_t x14 = UINT64_MAX;
	volatile int64_t x16 = INT64_MIN;
	int32_t t3 = -62954;

	t3 = ((x13&(x14%x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = -1;
	volatile int32_t t4 = -303967;

	t4 = ((x17&(x18%x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = 7717U;
	int32_t x23 = -1;
	uint64_t x24 = 37309952896956430LLU;
	volatile int32_t t5 = -1082;

	t5 = ((x21&(x22%x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = -61;
	int64_t x27 = INT64_MIN;
	uint32_t x28 = 1868470923U;
	static volatile int32_t t6 = 4637;

	t6 = ((x25&(x26%x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	static int32_t x30 = -1;
	uint16_t x31 = UINT16_MAX;
	int32_t t7 = -87201607;

	t7 = ((x29&(x30%x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MAX;
	uint32_t x35 = 18U;
	int32_t x36 = INT32_MIN;

	t8 = ((x33&(x34%x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = -1;
	volatile uint8_t x39 = UINT8_MAX;
	volatile int32_t t9 = -3491;

	t9 = ((x37&(x38%x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -35;
	int32_t x42 = INT32_MAX;

	t10 = ((x41&(x42%x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MAX;
	static int8_t x46 = 26;
	static int64_t x48 = 15369171344821879LL;
	int32_t t11 = -3549;

	t11 = ((x45&(x46%x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 2196663U;
	uint64_t x50 = 14621478587324178LLU;
	int8_t x52 = INT8_MIN;
	int32_t t12 = 1399;

	t12 = ((x49&(x50%x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x55 = 2;
	static uint16_t x56 = 20U;
	volatile int32_t t13 = 46;

	t13 = ((x53&(x54%x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x57 = 551975531U;
	int32_t x59 = INT32_MIN;
	volatile int32_t t14 = 352;

	t14 = ((x57&(x58%x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = -20794182LL;
	static volatile int32_t x63 = -1;
	uint32_t x64 = 453431U;
	int32_t t15 = 130031640;

	t15 = ((x61&(x62%x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile int8_t x66 = -15;
	int64_t x67 = -1LL;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = -330;

	t16 = ((x65&(x66%x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 2878231;
	uint64_t x71 = 3706394051708LLU;
	uint16_t x72 = 313U;
	volatile int32_t t17 = 256010;

	t17 = ((x69&(x70%x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 43LLU;
	uint16_t x74 = UINT16_MAX;
	int32_t x75 = 896401;
	volatile int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -57;

	t18 = ((x73&(x74%x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MAX;
	int16_t x79 = INT16_MAX;
	static volatile int16_t x80 = INT16_MIN;

	t19 = ((x77&(x78%x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MAX;
	static int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MAX;
	static volatile int32_t t20 = -11626005;

	t20 = ((x81&(x82%x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x86 = UINT16_MAX;
	static uint32_t x87 = 12U;

	t21 = ((x85&(x86%x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 48U;
	int8_t x91 = -1;
	uint16_t x92 = 27U;
	int32_t t22 = 127857;

	t22 = ((x89&(x90%x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x94 = UINT32_MAX;
	uint32_t x96 = 53500648U;
	volatile int32_t t23 = 10;

	t23 = ((x93&(x94%x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	static volatile uint16_t x98 = 163U;
	int16_t x99 = -1625;
	static uint32_t x100 = 21784542U;
	volatile int32_t t24 = -87;

	t24 = ((x97&(x98%x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = 0;
	static volatile int8_t x103 = INT8_MIN;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -209021454;

	t25 = ((x101&(x102%x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 651U;
	uint8_t x106 = 10U;
	int16_t x108 = INT16_MIN;
	static int32_t t26 = 126776;

	t26 = ((x105&(x106%x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 0;
	volatile uint8_t x111 = 97U;
	uint16_t x112 = 0U;
	int32_t t27 = -20870;

	t27 = ((x109&(x110%x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 2863196803646LLU;
	static int64_t x114 = 343246792128877LL;
	volatile int32_t x115 = -885776904;
	int8_t x116 = INT8_MIN;

	t28 = ((x113&(x114%x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x117 = 11216848U;
	static int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MAX;
	int32_t t29 = -38;

	t29 = ((x117&(x118%x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = UINT64_MAX;
	int8_t x123 = 1;
	int32_t t30 = -1;

	t30 = ((x121&(x122%x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 145922590U;
	volatile uint16_t x126 = UINT16_MAX;
	int64_t x128 = -29310514LL;
	volatile int32_t t31 = -1;

	t31 = ((x125&(x126%x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	static volatile uint8_t x131 = 8U;
	int8_t x132 = -9;
	int32_t t32 = -3;

	t32 = ((x129&(x130%x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 1;
	int64_t x134 = INT64_MIN;
	int8_t x135 = INT8_MAX;
	int16_t x136 = -1;
	int32_t t33 = 1556352;

	t33 = ((x133&(x134%x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MAX;
	int16_t x140 = INT16_MIN;

	t34 = ((x137&(x138%x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	volatile int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MAX;
	volatile int32_t t35 = -18;

	t35 = ((x141&(x142%x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	volatile uint8_t x147 = 4U;
	volatile int32_t x148 = -71810;
	volatile int32_t t36 = -2949;

	t36 = ((x145&(x146%x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	uint32_t x150 = 110364605U;
	uint64_t x151 = 2963070673081LLU;
	static int64_t x152 = INT64_MIN;
	int32_t t37 = -5154500;

	t37 = ((x149&(x150%x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	static volatile int32_t x155 = 57768507;
	static volatile int16_t x156 = 99;
	volatile int32_t t38 = 0;

	t38 = ((x153&(x154%x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	static uint16_t x159 = UINT16_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = -406;

	t39 = ((x157&(x158%x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -4;
	uint32_t x162 = 48052U;
	int32_t x163 = -1;
	int64_t x164 = INT64_MIN;
	int32_t t40 = 9558;

	t40 = ((x161&(x162%x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x167 = INT64_MIN;
	uint32_t x168 = 80662U;

	t41 = ((x165&(x166%x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = 239317U;
	uint16_t x171 = 7U;
	uint8_t x172 = 75U;
	int32_t t42 = 1567;

	t42 = ((x169&(x170%x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = -1LL;
	static int64_t x174 = -2176606380644599688LL;
	volatile int32_t t43 = 61639;

	t43 = ((x173&(x174%x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -1LL;
	int8_t x178 = 2;
	uint16_t x179 = 604U;
	volatile int32_t t44 = 360696557;

	t44 = ((x177&(x178%x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	static uint16_t x182 = 2345U;
	volatile int32_t t45 = 4728234;

	t45 = ((x181&(x182%x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint64_t x186 = 286898465473718085LLU;
	uint32_t x187 = 16153U;
	static int64_t x188 = 10820LL;
	int32_t t46 = -49472472;

	t46 = ((x185&(x186%x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	volatile int8_t x190 = -14;
	volatile int64_t x191 = -204712386569LL;
	int32_t x192 = INT32_MAX;
	static int32_t t47 = 0;

	t47 = ((x189&(x190%x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint32_t x194 = UINT32_MAX;
	int32_t x195 = 4;
	uint16_t x196 = 285U;

	t48 = ((x193&(x194%x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x198 = -1;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = 0;

	t49 = ((x197&(x198%x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	int64_t x202 = 4190627567214LL;
	int16_t x203 = INT16_MAX;
	int8_t x204 = 1;

	t50 = ((x201&(x202%x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	int32_t x208 = INT32_MIN;

	t51 = ((x205&(x206%x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 1U;
	int64_t x210 = INT64_MIN;
	int16_t x211 = -1;
	int8_t x212 = INT8_MIN;
	static int32_t t52 = -1;

	t52 = ((x209&(x210%x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = 658;
	volatile int32_t x214 = 538;
	uint64_t x216 = 4279364907548LLU;
	volatile int32_t t53 = 154717;

	t53 = ((x213&(x214%x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x218 = 2633749LLU;
	int32_t x220 = -190207221;
	volatile int32_t t54 = -58;

	t54 = ((x217&(x218%x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x221 = -1LL;
	static volatile int64_t x222 = -1LL;

	t55 = ((x221&(x222%x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int64_t x228 = INT64_MIN;
	int32_t t56 = -177268;

	t56 = ((x225&(x226%x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	volatile uint32_t x230 = 248U;
	volatile int32_t x231 = -38176496;
	uint16_t x232 = 69U;
	volatile int32_t t57 = 7;

	t57 = ((x229&(x230%x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x235 = 505813187LL;
	static int16_t x236 = INT16_MIN;
	int32_t t58 = -1422832;

	t58 = ((x233&(x234%x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	static int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MIN;
	int32_t t59 = -29;

	t59 = ((x237&(x238%x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 2657;
	int32_t x242 = -1;
	int16_t x243 = 3;
	int8_t x244 = INT8_MAX;
	volatile int32_t t60 = -132433;

	t60 = ((x241&(x242%x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = 1;
	volatile int64_t x246 = -10LL;
	int32_t x248 = 552;
	volatile int32_t t61 = 470;

	t61 = ((x245&(x246%x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 1;
	int16_t x250 = -1;
	uint16_t x251 = 4086U;
	int8_t x252 = 60;
	volatile int32_t t62 = 166;

	t62 = ((x249&(x250%x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = 1U;
	uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 13886066188000267LLU;
	int32_t t63 = -307;

	t63 = ((x253&(x254%x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x259 = -1;
	static int32_t x260 = 211459;
	static volatile int32_t t64 = 10;

	t64 = ((x257&(x258%x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 14564806LLU;
	static int64_t x262 = INT64_MAX;
	uint32_t x263 = 176U;
	static int16_t x264 = -1;
	static int32_t t65 = 50449928;

	t65 = ((x261&(x262%x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -39054018LL;
	uint32_t x266 = 3890U;
	static volatile uint16_t x267 = 11U;
	int32_t t66 = 248277391;

	t66 = ((x265&(x266%x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	static volatile uint8_t x270 = UINT8_MAX;
	static uint8_t x271 = UINT8_MAX;
	volatile uint32_t x272 = 6361013U;
	int32_t t67 = -98;

	t67 = ((x269&(x270%x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 468250783;
	volatile int32_t x274 = 12357;
	static int32_t x275 = -1;
	static int16_t x276 = INT16_MIN;
	int32_t t68 = 684962;

	t68 = ((x273&(x274%x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	uint16_t x278 = 5069U;
	int16_t x279 = INT16_MIN;
	volatile int32_t x280 = -13576090;

	t69 = ((x277&(x278%x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -1;
	static int16_t x282 = INT16_MIN;
	static volatile int8_t x283 = INT8_MAX;
	int16_t x284 = 417;
	volatile int32_t t70 = -33;

	t70 = ((x281&(x282%x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -6;
	static int16_t x286 = 303;
	int16_t x287 = -102;
	volatile uint32_t x288 = UINT32_MAX;

	t71 = ((x285&(x286%x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = -26;
	static int16_t x290 = INT16_MIN;
	volatile int16_t x291 = INT16_MIN;
	volatile int32_t t72 = -6570;

	t72 = ((x289&(x290%x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int16_t x296 = INT16_MIN;

	t73 = ((x293&(x294%x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int16_t x299 = -53;
	volatile int32_t t74 = -29;

	t74 = ((x297&(x298%x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x306 = -1LL;
	int64_t x307 = INT64_MIN;
	int32_t t75 = 144086871;

	t75 = ((x305&(x306%x307))<x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x309 = 27762603U;
	static volatile uint64_t x310 = 118588759017LLU;
	uint16_t x311 = UINT16_MAX;
	uint16_t x312 = 205U;
	int32_t t76 = -436;

	t76 = ((x309&(x310%x311))<x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x313 = UINT64_MAX;
	int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MAX;
	int16_t x316 = -1;

	t77 = ((x313&(x314%x315))<x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x317 = -1;
	int16_t x318 = INT16_MIN;
	volatile int32_t x319 = INT32_MAX;
	static int32_t t78 = 1628;

	t78 = ((x317&(x318%x319))<x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x321 = -1LL;
	int64_t x322 = -1LL;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = 988430U;
	int32_t t79 = -81818654;

	t79 = ((x321&(x322%x323))<x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t t80 = -29283287;

	t80 = ((x325&(x326%x327))<x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x329 = 73U;
	static int16_t x331 = INT16_MAX;
	int32_t t81 = 25214;

	t81 = ((x329&(x330%x331))<x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x334 = INT64_MIN;
	int8_t x336 = -4;
	static volatile int32_t t82 = 40988;

	t82 = ((x333&(x334%x335))<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	uint8_t x340 = UINT8_MAX;
	int32_t t83 = 419344;

	t83 = ((x337&(x338%x339))<x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x342 = 76U;
	uint16_t x343 = 1665U;
	int16_t x344 = INT16_MAX;
	int32_t t84 = 665930;

	t84 = ((x341&(x342%x343))<x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x345 = UINT64_MAX;
	uint8_t x346 = UINT8_MAX;

	t85 = ((x345&(x346%x347))<x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = INT16_MIN;
	int32_t x351 = 13;
	volatile int32_t t86 = 3;

	t86 = ((x349&(x350%x351))<x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x353 = 2410412U;
	volatile int64_t x354 = INT64_MIN;
	uint64_t x355 = 34LLU;
	int32_t t87 = -842;

	t87 = ((x353&(x354%x355))<x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x358 = 3U;
	int64_t x359 = -1LL;
	int16_t x360 = INT16_MIN;
	volatile int32_t t88 = 9571483;

	t88 = ((x357&(x358%x359))<x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x361 = 3868U;
	volatile int32_t x363 = INT32_MAX;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t89 = -250255;

	t89 = ((x361&(x362%x363))<x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x368 = INT64_MAX;
	int32_t t90 = 15;

	t90 = ((x365&(x366%x367))<x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x369 = UINT8_MAX;
	volatile uint64_t x371 = 1287931180982290LLU;
	int8_t x372 = 1;
	volatile int32_t t91 = 2;

	t91 = ((x369&(x370%x371))<x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x373 = 31U;
	static int16_t x374 = -6;
	uint8_t x376 = UINT8_MAX;
	int32_t t92 = -3855283;

	t92 = ((x373&(x374%x375))<x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x381 = 0U;
	int32_t x382 = INT32_MAX;
	volatile int32_t x383 = INT32_MIN;
	volatile int32_t t93 = -2777648;

	t93 = ((x381&(x382%x383))<x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = -15720;
	int32_t x386 = 1598570;
	uint64_t x387 = 1705469LLU;
	int32_t t94 = 0;

	t94 = ((x385&(x386%x387))<x388);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MAX;
	uint8_t x391 = UINT8_MAX;
	int32_t t95 = 62;

	t95 = ((x389&(x390%x391))<x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x394 = INT16_MIN;
	int16_t x396 = -13327;
	int32_t t96 = -3159519;

	t96 = ((x393&(x394%x395))<x396);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x397 = 6U;
	volatile uint64_t x399 = UINT64_MAX;
	int8_t x400 = INT8_MIN;

	t97 = ((x397&(x398%x399))<x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x402 = -1;
	static uint32_t x403 = UINT32_MAX;
	uint8_t x404 = 1U;
	int32_t t98 = 448741086;

	t98 = ((x401&(x402%x403))<x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x405 = 1LLU;
	int16_t x407 = INT16_MIN;
	static uint32_t x408 = 469012U;
	volatile int32_t t99 = 12133404;

	t99 = ((x405&(x406%x407))<x408);

	if (t99 != 1) { NG(); } else { ; }
	
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

