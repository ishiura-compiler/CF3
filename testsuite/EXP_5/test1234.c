#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x12 = INT16_MAX;
int32_t t2 = -161;
int64_t x13 = 2304LL;
int32_t x24 = INT32_MAX;
volatile int8_t x25 = -1;
int8_t x47 = -51;
uint8_t x50 = 5U;
int32_t x57 = -400;
volatile int64_t x61 = INT64_MAX;
uint16_t x67 = 27707U;
volatile uint32_t t16 = UINT32_MAX;
int32_t x71 = INT32_MIN;
uint32_t t17 = 95783U;
int32_t x73 = 1;
static int16_t x74 = INT16_MIN;
static int64_t x75 = INT64_MIN;
int64_t x78 = INT64_MAX;
int8_t x89 = -6;
uint16_t x92 = UINT16_MAX;
uint32_t x97 = 1466U;
int64_t t24 = -586179494060930LL;
int32_t x101 = INT32_MIN;
int32_t x107 = INT32_MIN;
int32_t t26 = -406924174;
static int8_t x109 = INT8_MIN;
volatile int16_t x111 = 413;
static uint8_t x112 = 1U;
int32_t t27 = 28;
volatile uint32_t t28 = 1615618058U;
int8_t x123 = -1;
static int16_t x124 = INT16_MIN;
uint8_t x125 = UINT8_MAX;
int16_t x130 = 2;
int16_t x140 = INT16_MIN;
int64_t x143 = INT64_MAX;
uint64_t t35 = UINT64_MAX;
int32_t x158 = INT32_MAX;
static uint64_t x165 = UINT64_MAX;
volatile int8_t x166 = -1;
static int32_t x169 = INT32_MIN;
int64_t x174 = 49LL;
volatile int8_t x175 = INT8_MIN;
int32_t t43 = -13088;
uint32_t x185 = 3152619U;
uint64_t x187 = 592462833LLU;
volatile int8_t x192 = 15;
static volatile int32_t t46 = -1152366;
int8_t x193 = -1;
int64_t x203 = INT64_MIN;
volatile int32_t t49 = 1707534;
static volatile uint8_t x206 = 7U;
static int32_t x209 = -1063706904;
int32_t x210 = -1;
volatile int64_t x211 = INT64_MAX;
volatile int64_t x213 = INT64_MIN;
int16_t x216 = INT16_MAX;
int64_t t52 = INT64_MIN;
int8_t x222 = INT8_MIN;
uint32_t x224 = 11700U;
uint32_t t54 = 0U;
int32_t t56 = INT32_MIN;
int8_t x236 = -1;
uint32_t x237 = UINT32_MAX;
int16_t x245 = INT16_MAX;
uint64_t x248 = 5399564892736655222LLU;
int64_t x259 = -1534834LL;
volatile int64_t t63 = INT64_MAX;
uint16_t x263 = 513U;
int32_t t64 = -15289;
uint32_t t65 = 4U;
uint8_t x276 = 61U;
volatile uint64_t t67 = 67747381132881LLU;
int8_t x290 = INT8_MIN;
uint16_t x293 = 812U;
static int32_t t71 = 1123814;
static volatile uint64_t x300 = 1898751918394156178LLU;
static volatile uint64_t t72 = UINT64_MAX;
static int32_t t74 = -44799862;
volatile uint64_t t75 = 774934237940959804LLU;
volatile int16_t x324 = INT16_MIN;
int32_t x325 = -16615158;
static volatile int8_t x326 = -1;
volatile uint32_t x331 = 97148951U;
volatile int16_t x332 = -1;
static uint64_t t80 = 80675821197588LLU;
int64_t x333 = INT64_MIN;
volatile int8_t x335 = -1;
int8_t x337 = -1;
int16_t x339 = -69;
int32_t x340 = INT32_MIN;
uint16_t x344 = 1U;
static int32_t t83 = -92837;
int8_t x352 = INT8_MIN;
volatile uint8_t x355 = UINT8_MAX;
int8_t x360 = INT8_MAX;
int64_t x365 = INT64_MIN;
int32_t x366 = -1;
uint32_t x368 = UINT32_MAX;
static int64_t t89 = INT64_MIN;
uint64_t x369 = 64357725353876LLU;
int16_t x378 = -1;
static int16_t x381 = 54;
static int64_t x384 = -1LL;
uint32_t x386 = 10141U;
uint8_t x393 = 2U;
int32_t x394 = -3018;
int64_t x399 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int16_t x2 = INT16_MIN;
	volatile int8_t x3 = -31;
	volatile uint64_t x4 = 4137453245701823LLU;
	uint64_t t0 = 3066038924048LLU;

	t0 = (x1|((x2==x3)/x4));

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint8_t x6 = UINT8_MAX;
	int8_t x7 = -1;
	int8_t x8 = 15;
	int32_t t1 = 786;

	t1 = (x5|((x6==x7)/x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 85;
	int16_t x10 = INT16_MAX;
	static int32_t x11 = -1;

	t2 = (x9|((x10==x11)/x12));

	if (t2 != 85) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 25244U;
	int32_t x15 = -3134;
	int32_t x16 = -1296;
	volatile int64_t t3 = -4341061475704883575LL;

	t3 = (x13|((x14==x15)/x16));

	if (t3 != 2304LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 57U;
	int8_t x18 = INT8_MIN;
	static uint64_t x19 = 20LLU;
	static uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 2556;

	t4 = (x17|((x18==x19)/x20));

	if (t4 != 57) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint64_t x22 = UINT64_MAX;
	static volatile uint32_t x23 = UINT32_MAX;
	int32_t t5 = -216274583;

	t5 = (x21|((x22==x23)/x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 1LLU;
	int32_t x27 = 5;
	int16_t x28 = -6243;
	int32_t t6 = -1604062;

	t6 = (x25|((x26==x27)/x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 3LLU;
	int32_t x30 = 74364;
	int64_t x31 = INT64_MIN;
	int64_t x32 = -1LL;
	uint64_t t7 = 4LLU;

	t7 = (x29|((x30==x31)/x32));

	if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	int8_t x34 = INT8_MAX;
	int64_t x35 = INT64_MIN;
	int8_t x36 = -1;
	int32_t t8 = 955904942;

	t8 = (x33|((x34==x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 1U;
	int16_t x38 = 95;
	volatile int32_t x39 = -1;
	int64_t x40 = -1LL;
	int64_t t9 = 4130662874677LL;

	t9 = (x37|((x38==x39)/x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 26U;
	uint64_t x42 = 36453414211461LLU;
	volatile int16_t x43 = 6;
	static int32_t x44 = -1;
	volatile int32_t t10 = 1;

	t10 = (x41|((x42==x43)/x44));

	if (t10 != 26) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint8_t x46 = UINT8_MAX;
	static int16_t x48 = -1;
	int32_t t11 = INT32_MAX;

	t11 = (x45|((x46==x47)/x48));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MAX;
	int32_t t12 = 59;

	t12 = (x49|((x50==x51)/x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 27U;
	uint16_t x54 = 60U;
	int32_t x55 = -1;
	uint8_t x56 = 1U;
	int32_t t13 = -92048831;

	t13 = (x53|((x54==x55)/x56));

	if (t13 != 27) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 203833U;
	volatile int64_t x59 = -1LL;
	uint32_t x60 = 837U;
	uint32_t t14 = 0U;

	t14 = (x57|((x58==x59)/x60));

	if (t14 != 4294966896U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = 172107U;
	int8_t x63 = -1;
	uint16_t x64 = 227U;
	int64_t t15 = INT64_MAX;

	t15 = (x61|((x62==x63)/x64));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint16_t x66 = 58U;
	uint32_t x68 = 11U;

	t16 = (x65|((x66==x67)/x68));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 22568U;
	int64_t x70 = INT64_MAX;
	int32_t x72 = 126;

	t17 = (x69|((x70==x71)/x72));

	if (t17 != 22568U) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x76 = 42825498300LL;
	int64_t t18 = 1133453LL;

	t18 = (x73|((x74==x75)/x76));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 796060610876LL;
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MAX;
	volatile int64_t t19 = 5270928445505591LL;

	t19 = (x77|((x78==x79)/x80));

	if (t19 != 796060610876LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint16_t x82 = 61U;
	int16_t x83 = INT16_MIN;
	uint64_t x84 = 246LLU;
	volatile uint64_t t20 = 6694902805138780516LLU;

	t20 = (x81|((x82==x83)/x84));

	if (t20 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	static uint16_t x86 = UINT16_MAX;
	static volatile uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 387082720;

	t21 = (x85|((x86==x87)/x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = 4U;
	int16_t x91 = -1;
	volatile int32_t t22 = -205;

	t22 = (x89|((x90==x91)/x92));

	if (t22 != -6) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	int32_t x94 = INT32_MAX;
	int64_t x95 = INT64_MIN;
	volatile int8_t x96 = -1;
	volatile int32_t t23 = -1766192;

	t23 = (x93|((x94==x95)/x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MAX;
	volatile int32_t x99 = -32026628;
	int64_t x100 = INT64_MIN;

	t24 = (x97|((x98==x99)/x100));

	if (t24 != 1466LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = 1259U;
	volatile int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = INT32_MIN;

	t25 = (x101|((x102==x103)/x104));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 1;
	int64_t x106 = 125954825243234LL;
	int16_t x108 = INT16_MIN;

	t26 = (x105|((x106==x107)/x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = 30054618LL;

	t27 = (x109|((x110==x111)/x112));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x113 = 1217079U;
	static volatile int16_t x114 = -1;
	static volatile int8_t x115 = INT8_MIN;
	int8_t x116 = 8;

	t28 = (x113|((x114==x115)/x116));

	if (t28 != 1217079U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = 44;
	int64_t x118 = 302183895068LL;
	volatile uint8_t x119 = 2U;
	uint8_t x120 = 33U;
	static volatile int32_t t29 = 0;

	t29 = (x117|((x118==x119)/x120));

	if (t29 != 44) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = UINT16_MAX;
	int16_t x122 = -1;
	int32_t t30 = -544693;

	t30 = (x121|((x122==x123)/x124));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x126 = 1;
	int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MAX;
	int32_t t31 = -92494;

	t31 = (x125|((x126==x127)/x128));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -604;
	static int64_t x131 = INT64_MAX;
	int64_t x132 = INT64_MIN;
	int64_t t32 = -127552865314068102LL;

	t32 = (x129|((x130==x131)/x132));

	if (t32 != -604LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -6426663626753LL;
	int64_t x134 = 282195LL;
	static uint64_t x135 = UINT64_MAX;
	uint16_t x136 = 198U;
	volatile int64_t t33 = -5007076424320LL;

	t33 = (x133|((x134==x135)/x136));

	if (t33 != -6426663626753LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 121U;
	int64_t x138 = INT64_MIN;
	volatile int8_t x139 = INT8_MIN;
	int32_t t34 = -291155;

	t34 = (x137|((x138==x139)/x140));

	if (t34 != 121) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = UINT64_MAX;
	static uint8_t x142 = UINT8_MAX;
	int8_t x144 = INT8_MIN;

	t35 = (x141|((x142==x143)/x144));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static int8_t x146 = INT8_MIN;
	volatile int64_t x147 = -62472LL;
	int32_t x148 = INT32_MIN;
	int32_t t36 = 52;

	t36 = (x145|((x146==x147)/x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x153 = -765068;
	int8_t x154 = INT8_MIN;
	int32_t x155 = -1;
	volatile int64_t x156 = -1LL;
	static int64_t t37 = -1098834842284147808LL;

	t37 = (x153|((x154==x155)/x156));

	if (t37 != -765068LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = INT8_MAX;
	volatile int32_t x159 = INT32_MIN;
	static int32_t x160 = -1;
	int32_t t38 = 19328325;

	t38 = (x157|((x158==x159)/x160));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x161 = 162U;
	volatile uint32_t x162 = UINT32_MAX;
	volatile int32_t x163 = -1;
	static int16_t x164 = INT16_MIN;
	int32_t t39 = -9937862;

	t39 = (x161|((x162==x163)/x164));

	if (t39 != 162) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x167 = INT16_MAX;
	volatile int32_t x168 = -3;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x165|((x166==x167)/x168));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x170 = INT16_MIN;
	static int8_t x171 = INT8_MIN;
	int8_t x172 = 8;
	int32_t t41 = INT32_MIN;

	t41 = (x169|((x170==x171)/x172));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x173 = UINT8_MAX;
	int16_t x176 = INT16_MAX;
	volatile int32_t t42 = -1396;

	t42 = (x173|((x174==x175)/x176));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = -1;
	int32_t x178 = 250698;
	int32_t x179 = -1;
	uint16_t x180 = UINT16_MAX;

	t43 = (x177|((x178==x179)/x180));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = INT16_MAX;
	static int64_t x182 = -1LL;
	int16_t x183 = INT16_MAX;
	uint8_t x184 = 97U;
	volatile int32_t t44 = -212;

	t44 = (x181|((x182==x183)/x184));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x186 = INT64_MIN;
	int16_t x188 = -5511;
	volatile uint32_t t45 = 121605534U;

	t45 = (x185|((x186==x187)/x188));

	if (t45 != 3152619U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x189 = INT16_MIN;
	uint16_t x190 = 5143U;
	static int16_t x191 = INT16_MAX;

	t46 = (x189|((x190==x191)/x192));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x194 = INT64_MIN;
	int64_t x195 = 236921LL;
	uint8_t x196 = 7U;
	volatile int32_t t47 = -545;

	t47 = (x193|((x194==x195)/x196));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 1U;
	volatile int16_t x198 = 33;
	int16_t x199 = -3461;
	int32_t x200 = INT32_MIN;
	volatile int32_t t48 = -13051;

	t48 = (x197|((x198==x199)/x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int8_t x204 = INT8_MAX;

	t49 = (x201|((x202==x203)/x204));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = INT64_MAX;
	uint16_t x207 = 171U;
	volatile int32_t x208 = INT32_MIN;
	int64_t t50 = INT64_MAX;

	t50 = (x205|((x206==x207)/x208));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x212 = 168259U;
	volatile uint32_t t51 = 2U;

	t51 = (x209|((x210==x211)/x212));

	if (t51 != 3231260392U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x214 = 111U;
	static uint32_t x215 = 1034932381U;

	t52 = (x213|((x214==x215)/x216));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MIN;
	int64_t x218 = INT64_MIN;
	uint32_t x219 = 37484U;
	volatile int8_t x220 = INT8_MIN;
	static int64_t t53 = INT64_MIN;

	t53 = (x217|((x218==x219)/x220));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	int32_t x223 = INT32_MIN;

	t54 = (x221|((x222==x223)/x224));

	if (t54 != 4294934528U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -1LL;
	static uint8_t x226 = 13U;
	uint16_t x227 = 4543U;
	uint16_t x228 = 7641U;
	volatile int64_t t55 = 2888LL;

	t55 = (x225|((x226==x227)/x228));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MIN;
	static volatile int32_t x231 = INT32_MIN;
	static volatile int8_t x232 = INT8_MIN;

	t56 = (x229|((x230==x231)/x232));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = 103102344;
	int32_t x234 = -1;
	int32_t x235 = -173138572;
	volatile int32_t t57 = 491;

	t57 = (x233|((x234==x235)/x236));

	if (t57 != 103102344) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x238 = INT32_MAX;
	int32_t x239 = 8788;
	uint32_t x240 = UINT32_MAX;
	static uint32_t t58 = UINT32_MAX;

	t58 = (x237|((x238==x239)/x240));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = -1742;
	uint32_t x242 = UINT32_MAX;
	volatile int16_t x243 = -1;
	int64_t x244 = -1LL;
	static volatile int64_t t59 = -193LL;

	t59 = (x241|((x242==x243)/x244));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x246 = -1;
	uint32_t x247 = 15517978U;
	volatile uint64_t t60 = 303LLU;

	t60 = (x245|((x246==x247)/x248));

	if (t60 != 32767LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = 1;
	static uint16_t x251 = 0U;
	static int8_t x252 = -14;
	static volatile int64_t t61 = INT64_MAX;

	t61 = (x249|((x250==x251)/x252));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x253 = 1634603766728168LLU;
	int32_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	static int64_t x256 = INT64_MIN;
	static uint64_t t62 = 41595516577866676LLU;

	t62 = (x253|((x254==x255)/x256));

	if (t62 != 1634603766728168LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MAX;
	int64_t x258 = INT64_MIN;
	volatile uint32_t x260 = 43U;

	t63 = (x257|((x258==x259)/x260));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = UINT8_MAX;
	volatile uint32_t x262 = 16U;
	int32_t x264 = INT32_MAX;

	t64 = (x261|((x262==x263)/x264));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 1947907079U;
	int8_t x270 = INT8_MAX;
	static int64_t x271 = INT64_MAX;
	volatile int16_t x272 = -1;

	t65 = (x269|((x270==x271)/x272));

	if (t65 != 1947907079U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int32_t x274 = INT32_MIN;
	static uint64_t x275 = UINT64_MAX;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x273|((x274==x275)/x276));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = 113981LLU;
	int32_t x278 = -1;
	volatile int64_t x279 = -1046428LL;
	int64_t x280 = 1LL;

	t67 = (x277|((x278==x279)/x280));

	if (t67 != 113981LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x281 = 24;
	volatile int64_t x282 = INT64_MAX;
	static volatile uint8_t x283 = 1U;
	int32_t x284 = INT32_MAX;
	int32_t t68 = -28204921;

	t68 = (x281|((x282==x283)/x284));

	if (t68 != 24) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MIN;
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = INT32_MAX;
	int32_t x288 = -72017672;
	volatile int32_t t69 = INT32_MIN;

	t69 = (x285|((x286==x287)/x288));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x289 = UINT16_MAX;
	int32_t x291 = INT32_MIN;
	int32_t x292 = INT32_MAX;
	volatile int32_t t70 = 450;

	t70 = (x289|((x290==x291)/x292));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x294 = INT8_MIN;
	volatile int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MIN;

	t71 = (x293|((x294==x295)/x296));

	if (t71 != 812) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -1;
	static uint64_t x298 = UINT64_MAX;
	static volatile int64_t x299 = -1LL;

	t72 = (x297|((x298==x299)/x300));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MAX;
	static volatile int32_t x302 = INT32_MAX;
	volatile uint64_t x303 = 401440009209LLU;
	uint8_t x304 = 22U;
	int32_t t73 = INT32_MAX;

	t73 = (x301|((x302==x303)/x304));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x305 = 3U;
	static volatile uint64_t x306 = 74924LLU;
	int16_t x307 = -1;
	uint8_t x308 = 6U;

	t74 = (x305|((x306==x307)/x308));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x309 = 0U;
	uint32_t x310 = 473344U;
	int64_t x311 = INT64_MIN;
	volatile uint64_t x312 = 2322LLU;

	t75 = (x309|((x310==x311)/x312));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = 17861;
	static uint16_t x314 = 525U;
	int8_t x315 = -28;
	uint8_t x316 = 73U;
	static int32_t t76 = -6340;

	t76 = (x313|((x314==x315)/x316));

	if (t76 != 17861) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = -1;
	uint8_t x319 = UINT8_MAX;
	static int16_t x320 = INT16_MIN;
	int32_t t77 = -1;

	t77 = (x317|((x318==x319)/x320));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MIN;
	static volatile int64_t x322 = INT64_MIN;
	uint32_t x323 = UINT32_MAX;
	volatile int32_t t78 = INT32_MIN;

	t78 = (x321|((x322==x323)/x324));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x327 = -1216;
	int32_t x328 = INT32_MAX;
	volatile int32_t t79 = -7;

	t79 = (x325|((x326==x327)/x328));

	if (t79 != -16615158) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 82277844LLU;
	static volatile int16_t x330 = INT16_MIN;

	t80 = (x329|((x330==x331)/x332));

	if (t80 != 82277844LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x334 = 31;
	int64_t x336 = INT64_MAX;
	static int64_t t81 = INT64_MIN;

	t81 = (x333|((x334==x335)/x336));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x338 = 0U;
	int32_t t82 = 447815600;

	t82 = (x337|((x338==x339)/x340));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 2U;
	uint32_t x342 = 56U;
	static uint8_t x343 = UINT8_MAX;

	t83 = (x341|((x342==x343)/x344));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x345 = UINT16_MAX;
	uint64_t x346 = UINT64_MAX;
	static int32_t x347 = INT32_MAX;
	int64_t x348 = 56352LL;
	int64_t t84 = 73325529513727LL;

	t84 = (x345|((x346==x347)/x348));

	if (t84 != 65535LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = 0;
	int64_t x350 = 66353989733794LL;
	volatile int32_t x351 = INT32_MAX;
	int32_t t85 = 59;

	t85 = (x349|((x350==x351)/x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x353 = INT32_MIN;
	static int8_t x354 = INT8_MIN;
	int32_t x356 = INT32_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x353|((x354==x355)/x356));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x357 = 98U;
	static volatile int32_t x358 = INT32_MIN;
	int16_t x359 = -1;
	static volatile uint32_t t87 = 243539U;

	t87 = (x357|((x358==x359)/x360));

	if (t87 != 98U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x361 = INT8_MIN;
	int64_t x362 = -1801108813LL;
	volatile int32_t x363 = INT32_MAX;
	int64_t x364 = -1LL;
	int64_t t88 = 61865686207354658LL;

	t88 = (x361|((x362==x363)/x364));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x367 = INT32_MIN;

	t89 = (x365|((x366==x367)/x368));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x370 = 8;
	volatile int64_t x371 = INT64_MAX;
	int16_t x372 = 8097;
	uint64_t t90 = 22389348LLU;

	t90 = (x369|((x370==x371)/x372));

	if (t90 != 64357725353876LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = -1;
	static int16_t x374 = INT16_MAX;
	static int8_t x375 = -3;
	uint8_t x376 = 10U;
	volatile int32_t t91 = 436983;

	t91 = (x373|((x374==x375)/x376));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x377 = 8241320U;
	volatile uint8_t x379 = 0U;
	uint64_t x380 = 3535623LLU;
	static uint64_t t92 = 454137076186156LLU;

	t92 = (x377|((x378==x379)/x380));

	if (t92 != 8241320LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = INT32_MAX;
	int64_t x383 = INT64_MIN;
	int64_t t93 = 223LL;

	t93 = (x381|((x382==x383)/x384));

	if (t93 != 54LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x385 = 425631392504290LLU;
	static int32_t x387 = INT32_MIN;
	static uint16_t x388 = 17U;
	uint64_t t94 = 1632LLU;

	t94 = (x385|((x386==x387)/x388));

	if (t94 != 425631392504290LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = 25;
	int64_t x390 = -1LL;
	uint32_t x391 = 231U;
	static int64_t x392 = -1LL;
	static volatile int64_t t95 = -12042795LL;

	t95 = (x389|((x390==x391)/x392));

	if (t95 != 25LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x395 = 47U;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t96 = 47LLU;

	t96 = (x393|((x394==x395)/x396));

	if (t96 != 2LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x398 = INT64_MIN;
	int16_t x400 = INT16_MAX;
	uint32_t t97 = UINT32_MAX;

	t97 = (x397|((x398==x399)/x400));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = -3;
	static uint64_t x402 = 6570312050LLU;
	int64_t x403 = 313160LL;
	int16_t x404 = INT16_MIN;
	static int32_t t98 = -517331;

	t98 = (x401|((x402==x403)/x404));

	if (t98 != -3) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x405 = 647551LL;
	int8_t x406 = 54;
	int8_t x407 = -1;
	volatile uint32_t x408 = UINT32_MAX;
	int64_t t99 = -49LL;

	t99 = (x405|((x406==x407)/x408));

	if (t99 != 647551LL) { NG(); } else { ; }
	
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

