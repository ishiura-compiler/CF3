#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x23 = 549745701868LL;
uint32_t x28 = 14U;
uint16_t x29 = 422U;
int8_t x37 = -1;
uint8_t x41 = UINT8_MAX;
int64_t x50 = INT64_MIN;
static int64_t t8 = -28798LL;
volatile uint32_t x54 = 1262U;
volatile int8_t x64 = -22;
int16_t x68 = INT16_MAX;
static uint32_t x72 = UINT32_MAX;
volatile int32_t x81 = INT32_MIN;
int32_t x86 = -14840151;
int64_t x87 = INT64_MAX;
volatile int64_t t15 = -499898022923624LL;
int16_t x98 = 789;
uint64_t x100 = UINT64_MAX;
static int64_t x102 = -1LL;
static volatile int32_t x104 = 452;
static volatile int64_t t17 = 916720835078226622LL;
int8_t x114 = -1;
static int8_t x119 = INT8_MAX;
volatile int64_t t21 = 8585234728LL;
volatile uint64_t x143 = UINT64_MAX;
int32_t x144 = -1;
volatile uint64_t t25 = 4046794547579LLU;
volatile uint64_t t26 = 17020420LLU;
int8_t x170 = INT8_MAX;
uint16_t x175 = 34U;
volatile int8_t x178 = INT8_MIN;
uint16_t x189 = 0U;
volatile int32_t x190 = INT32_MIN;
int64_t x196 = INT64_MIN;
static uint64_t t33 = 98705521817100801LLU;
uint8_t x199 = UINT8_MAX;
int8_t x205 = INT8_MIN;
static int16_t x211 = INT16_MAX;
int32_t x212 = 1406637;
static volatile uint32_t x216 = UINT32_MAX;
int64_t x217 = -5LL;
uint32_t x231 = 2830669U;
static volatile int64_t t43 = -18212344855143LL;
int16_t x242 = 84;
volatile int8_t x244 = -11;
int32_t x246 = INT32_MAX;
static int64_t x254 = 497342676LL;
int32_t x255 = -234444527;
uint16_t x256 = 23U;
volatile int64_t t47 = -1981824265667202LL;
uint32_t x261 = UINT32_MAX;
volatile uint8_t x264 = 3U;
int8_t x266 = INT8_MAX;
int8_t x277 = 0;
int64_t x278 = -1LL;
static int16_t x282 = -1;
int32_t x284 = INT32_MAX;
static uint8_t x290 = 1U;
uint8_t x296 = UINT8_MAX;
static int64_t t55 = 2345980022LL;
volatile int8_t x302 = -58;
volatile int32_t x330 = INT32_MIN;
int16_t x331 = INT16_MIN;
volatile int32_t x343 = 1;
int64_t x350 = -3442042825LL;
volatile int16_t x353 = INT16_MAX;
int32_t x354 = INT32_MIN;
volatile int32_t x357 = INT32_MAX;
static int64_t x364 = 12302464LL;
uint32_t x370 = UINT32_MAX;
uint8_t x382 = UINT8_MAX;
int32_t x392 = -1;
volatile uint16_t x394 = UINT16_MAX;
volatile int64_t x395 = -1422638890770LL;
uint32_t x400 = 220U;
int16_t x401 = INT16_MIN;
volatile uint32_t t76 = 53484U;
int32_t x425 = -1;
static volatile int32_t x430 = INT32_MIN;
int32_t x440 = -1;
uint64_t t81 = 2144115192752LLU;
static int32_t x442 = INT32_MIN;
int32_t t82 = 169319;
uint8_t x447 = 3U;
int16_t x448 = -1;
volatile int8_t x461 = INT8_MIN;
uint64_t t85 = 25905685345234LLU;
int32_t x467 = 20;
int64_t t86 = -3613LL;
static volatile int64_t x474 = -1LL;
volatile uint64_t t89 = 360LLU;
volatile uint32_t x489 = 0U;
volatile uint32_t x491 = UINT32_MAX;
uint16_t x504 = UINT16_MAX;
uint16_t x507 = 3547U;
int32_t x509 = INT32_MIN;
static volatile uint32_t x510 = 12U;


void f0(void) {
	uint8_t x1 = 43U;
	volatile int32_t x2 = -1;
	static uint64_t x3 = 28569LLU;
	volatile uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 402LLU;

	t0 = ((x1%(x2&x3))%x4);

	if (t0 != 43LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x6 = 6733U;
	int16_t x7 = 1;
	int8_t x8 = INT8_MIN;
	volatile uint32_t t1 = 17U;

	t1 = ((x5%(x6&x7))%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x21 = -1;
	static volatile uint64_t x22 = 99350580LLU;
	int8_t x24 = INT8_MAX;
	volatile uint64_t t2 = 568624885007LLU;

	t2 = ((x21%(x22&x23))%x24);

	if (t2 != 55LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = 16791748LLU;
	int16_t x27 = -1;
	static uint64_t t3 = 503014086LLU;

	t3 = ((x25%(x26&x27))%x28);

	if (t3 != 4LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x30 = INT32_MAX;
	int8_t x31 = 61;
	int16_t x32 = INT16_MIN;
	volatile int32_t t4 = 17715864;

	t4 = ((x29%(x30&x31))%x32);

	if (t4 != 56) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x33 = INT64_MIN;
	int8_t x34 = -1;
	volatile int8_t x35 = INT8_MAX;
	uint8_t x36 = 12U;
	volatile int64_t t5 = 391316630874567LL;

	t5 = ((x33%(x34&x35))%x36);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x38 = 388449LL;
	uint8_t x39 = 3U;
	volatile uint32_t x40 = 240332U;
	int64_t t6 = 52020133905492549LL;

	t6 = ((x37%(x38&x39))%x40);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x42 = INT16_MIN;
	static uint64_t x43 = 278688994591264683LLU;
	static int32_t x44 = -1;
	uint64_t t7 = 1184415LLU;

	t7 = ((x41%(x42&x43))%x44);

	if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x49 = 11U;
	int64_t x51 = -1LL;
	static volatile int8_t x52 = INT8_MIN;

	t8 = ((x49%(x50&x51))%x52);

	if (t8 != 11LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = INT8_MAX;
	static int32_t x55 = -7861512;
	uint8_t x56 = 37U;
	uint32_t t9 = 2820U;

	t9 = ((x53%(x54&x55))%x56);

	if (t9 != 16U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = UINT32_MAX;
	volatile int64_t x62 = -1LL;
	int16_t x63 = INT16_MAX;
	int64_t t10 = 14689LL;

	t10 = ((x61%(x62&x63))%x64);

	if (t10 != 3LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x65 = 694756051736217LLU;
	volatile int64_t x66 = -1LL;
	int64_t x67 = INT64_MIN;
	volatile uint64_t t11 = 17LLU;

	t11 = ((x65%(x66&x67))%x68);

	if (t11 != 13701LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = 58LLU;
	uint64_t x70 = 1310620684LLU;
	uint32_t x71 = 1013344U;
	static uint64_t t12 = 799332301722892LLU;

	t12 = ((x69%(x70&x71))%x72);

	if (t12 != 58LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x77 = -1;
	uint32_t x78 = 5916U;
	static int32_t x79 = INT32_MAX;
	volatile int64_t x80 = -1LL;
	volatile int64_t t13 = 59629LL;

	t13 = ((x77%(x78&x79))%x80);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x82 = -1559;
	static uint64_t x83 = 17159591384968194LLU;
	int32_t x84 = 629484;
	static uint64_t t14 = 30982LLU;

	t14 = ((x81%(x82&x83))%x84);

	if (t14 != 619160LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x85 = -1;
	int32_t x88 = INT32_MAX;

	t15 = ((x85%(x86&x87))%x88);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x97 = 1;
	int8_t x99 = 51;
	static volatile uint64_t t16 = 3LLU;

	t16 = ((x97%(x98&x99))%x100);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x101 = 6U;
	int32_t x103 = INT32_MIN;

	t17 = ((x101%(x102&x103))%x104);

	if (t17 != 6LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = 931609763LL;
	int16_t x106 = 1;
	static int16_t x107 = INT16_MAX;
	int32_t x108 = INT32_MIN;
	volatile int64_t t18 = 21LL;

	t18 = ((x105%(x106&x107))%x108);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x113 = INT64_MIN;
	static uint64_t x115 = UINT64_MAX;
	int64_t x116 = -163484793LL;
	volatile uint64_t t19 = 8622442900391118LLU;

	t19 = ((x113%(x114&x115))%x116);

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MAX;
	uint32_t x120 = 4584430U;
	uint32_t t20 = 10211U;

	t20 = ((x117%(x118&x119))%x120);

	if (t20 != 3940815U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x129 = 3;
	uint32_t x130 = UINT32_MAX;
	int64_t x131 = -1LL;
	static uint8_t x132 = 1U;

	t21 = ((x129%(x130&x131))%x132);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x133 = 1U;
	volatile int16_t x134 = INT16_MIN;
	static int32_t x135 = INT32_MAX;
	int8_t x136 = INT8_MAX;
	int32_t t22 = 1;

	t22 = ((x133%(x134&x135))%x136);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x141 = -7333678LL;
	int16_t x142 = -472;
	volatile uint64_t t23 = 44075223717303LLU;

	t23 = ((x141%(x142&x143))%x144);

	if (t23 != 18446744073702217938LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x145 = 0LLU;
	int32_t x146 = 1939;
	int64_t x147 = INT64_MAX;
	volatile uint8_t x148 = 84U;
	static volatile uint64_t t24 = 1182568LLU;

	t24 = ((x145%(x146&x147))%x148);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x153 = 247320527;
	int32_t x154 = INT32_MIN;
	uint64_t x155 = 326268245577462LLU;
	int32_t x156 = INT32_MIN;

	t25 = ((x153%(x154&x155))%x156);

	if (t25 != 247320527LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x157 = -1;
	int32_t x158 = INT32_MAX;
	uint64_t x159 = 248458495LLU;
	uint64_t x160 = 7669886LLU;

	t26 = ((x157%(x158&x159))%x160);

	if (t26 != 6845720LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x169 = -1;
	int64_t x171 = -212332473021160LL;
	volatile uint8_t x172 = 115U;
	volatile int64_t t27 = 110279600701611659LL;

	t27 = ((x169%(x170&x171))%x172);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x173 = INT64_MIN;
	static int32_t x174 = INT32_MAX;
	uint16_t x176 = 3U;
	volatile int64_t t28 = 4537436444368LL;

	t28 = ((x173%(x174&x175))%x176);

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x177 = INT16_MIN;
	volatile int32_t x179 = 876;
	uint64_t x180 = UINT64_MAX;
	static volatile uint64_t t29 = 3LLU;

	t29 = ((x177%(x178&x179))%x180);

	if (t29 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x181 = 7;
	volatile int32_t x182 = -16713850;
	volatile uint64_t x183 = UINT64_MAX;
	volatile uint16_t x184 = 46U;
	static volatile uint64_t t30 = 358027482938992LLU;

	t30 = ((x181%(x182&x183))%x184);

	if (t30 != 7LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x185 = INT64_MAX;
	uint64_t x186 = 213349368LLU;
	static int16_t x187 = -19;
	volatile uint8_t x188 = 7U;
	uint64_t t31 = 9780090934516829LLU;

	t31 = ((x185%(x186&x187))%x188);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x191 = -100;
	static uint8_t x192 = 9U;
	int32_t t32 = -220;

	t32 = ((x189%(x190&x191))%x192);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MAX;
	uint64_t x195 = 40852905021951LLU;

	t33 = ((x193%(x194&x195))%x196);

	if (t33 != 659151332LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x197 = 1566U;
	uint32_t x198 = 798U;
	int8_t x200 = INT8_MIN;
	static uint32_t t34 = 29253773U;

	t34 = ((x197%(x198&x199))%x200);

	if (t34 != 6U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x201 = 54333LLU;
	uint32_t x202 = 54109147U;
	volatile int16_t x203 = INT16_MIN;
	int64_t x204 = 372303102LL;
	uint64_t t35 = 190637771322905LLU;

	t35 = ((x201%(x202&x203))%x204);

	if (t35 != 54333LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x206 = -64505;
	int16_t x207 = INT16_MIN;
	volatile uint64_t x208 = UINT64_MAX;
	uint64_t t36 = 5423231LLU;

	t36 = ((x205%(x206&x207))%x208);

	if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x209 = -1LL;
	uint16_t x210 = 18U;
	int64_t t37 = 44444108LL;

	t37 = ((x209%(x210&x211))%x212);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x213 = 7;
	volatile int32_t x214 = -48601;
	volatile int8_t x215 = INT8_MIN;
	volatile uint32_t t38 = 18605975U;

	t38 = ((x213%(x214&x215))%x216);

	if (t38 != 7U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x218 = INT8_MIN;
	uint16_t x219 = UINT16_MAX;
	int16_t x220 = 10;
	volatile int64_t t39 = -499985985854LL;

	t39 = ((x217%(x218&x219))%x220);

	if (t39 != -5LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x221 = 708319821;
	static volatile int32_t x222 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	int16_t x224 = 15786;
	static volatile int32_t t40 = 780;

	t40 = ((x221%(x222&x223))%x224);

	if (t40 != 2001) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x225 = 39U;
	int64_t x226 = INT64_MAX;
	static int8_t x227 = -1;
	volatile int8_t x228 = INT8_MIN;
	int64_t t41 = -245085LL;

	t41 = ((x225%(x226&x227))%x228);

	if (t41 != 39LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x229 = INT64_MIN;
	uint16_t x230 = 564U;
	int64_t x232 = INT64_MIN;
	volatile int64_t t42 = 1774587832586713LL;

	t42 = ((x229%(x230&x231))%x232);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x233 = 49232091555LL;
	volatile int32_t x234 = -1;
	int64_t x235 = INT64_MIN;
	static uint32_t x236 = UINT32_MAX;

	t43 = ((x233%(x234&x235))%x236);

	if (t43 != 1987451310LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x237 = 25U;
	int16_t x238 = -26;
	int8_t x239 = -1;
	int64_t x240 = -8LL;
	int64_t t44 = 47756494630503LL;

	t44 = ((x237%(x238&x239))%x240);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x241 = INT8_MIN;
	uint8_t x243 = UINT8_MAX;
	static volatile int32_t t45 = 6574134;

	t45 = ((x241%(x242&x243))%x244);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x245 = INT8_MAX;
	static int8_t x247 = INT8_MAX;
	volatile int16_t x248 = INT16_MIN;
	static volatile int32_t t46 = 64192698;

	t46 = ((x245%(x246&x247))%x248);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x253 = INT64_MAX;

	t47 = ((x253%(x254&x255))%x256);

	if (t47 != 3LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x262 = 2048874083669210085LL;
	int64_t x263 = -1LL;
	int64_t t48 = -17LL;

	t48 = ((x261%(x262&x263))%x264);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x265 = INT16_MIN;
	uint64_t x267 = UINT64_MAX;
	static volatile uint8_t x268 = UINT8_MAX;
	volatile uint64_t t49 = 2062LLU;

	t49 = ((x265%(x266&x267))%x268);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x269 = -2;
	volatile uint64_t x270 = 6973946729440LLU;
	static volatile int16_t x271 = INT16_MIN;
	int16_t x272 = -1;
	uint64_t t50 = 23001369176326673LLU;

	t50 = ((x269%(x270&x271))%x272);

	if (t50 != 6410753146878LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x279 = 4;
	int64_t x280 = INT64_MIN;
	static int64_t t51 = 33560182070553272LL;

	t51 = ((x277%(x278&x279))%x280);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x281 = INT32_MIN;
	int64_t x283 = 1LL;
	int64_t t52 = 23327316LL;

	t52 = ((x281%(x282&x283))%x284);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = -6114158;
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	uint64_t x288 = 19398922504LLU;
	volatile uint64_t t53 = 203013119618LLU;

	t53 = ((x285%(x286&x287))%x288);

	if (t53 != 8399971162LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x289 = 90368236;
	int16_t x291 = INT16_MAX;
	int64_t x292 = -1LL;
	static volatile int64_t t54 = 1776159067064523LL;

	t54 = ((x289%(x290&x291))%x292);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x293 = INT8_MIN;
	static volatile int64_t x294 = INT64_MIN;
	int8_t x295 = -1;

	t55 = ((x293%(x294&x295))%x296);

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x301 = 22764U;
	volatile uint8_t x303 = UINT8_MAX;
	uint32_t x304 = 45U;
	uint32_t t56 = 103952U;

	t56 = ((x301%(x302&x303))%x304);

	if (t56 != 12U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x309 = 1098032U;
	int64_t x310 = -1LL;
	uint16_t x311 = UINT16_MAX;
	static volatile uint8_t x312 = 2U;
	static volatile int64_t t57 = 1LL;

	t57 = ((x309%(x310&x311))%x312);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = 3353784294949217LL;
	static int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	static int32_t x328 = INT32_MIN;
	int64_t t58 = -5LL;

	t58 = ((x325%(x326&x327))%x328);

	if (t58 != 16737LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int32_t x332 = INT32_MIN;
	int32_t t59 = 15;

	t59 = ((x329%(x330&x331))%x332);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x337 = -3;
	int64_t x338 = 260580722088640LL;
	uint64_t x339 = UINT64_MAX;
	uint16_t x340 = 41U;
	static uint64_t t60 = 1101713346395LLU;

	t60 = ((x337%(x338&x339))%x340);

	if (t60 != 28LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x341 = UINT8_MAX;
	int64_t x342 = INT64_MAX;
	int64_t x344 = 158754370LL;
	static int64_t t61 = -3095948787545470548LL;

	t61 = ((x341%(x342&x343))%x344);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x345 = 7U;
	static uint8_t x346 = 73U;
	int32_t x347 = -1589217;
	int8_t x348 = -1;
	volatile int32_t t62 = 1;

	t62 = ((x345%(x346&x347))%x348);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x349 = INT16_MIN;
	uint64_t x351 = 2043931511071245LLU;
	volatile int32_t x352 = INT32_MAX;
	volatile uint64_t t63 = 0LLU;

	t63 = ((x349%(x350&x351))%x352);

	if (t63 != 736125400LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x355 = -1LL;
	volatile int8_t x356 = -14;
	volatile int64_t t64 = -270476281LL;

	t64 = ((x353%(x354&x355))%x356);

	if (t64 != 7LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x358 = -59;
	volatile int64_t x359 = INT64_MIN;
	static uint16_t x360 = 108U;
	static int64_t t65 = 703138100253822000LL;

	t65 = ((x357%(x358&x359))%x360);

	if (t65 != 91LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x361 = INT32_MIN;
	uint64_t x362 = 5026LLU;
	static int64_t x363 = INT64_MAX;
	static volatile uint64_t t66 = 1978707292LLU;

	t66 = ((x361%(x362&x363))%x364);

	if (t66 != 3318LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x369 = INT64_MIN;
	int16_t x371 = INT16_MAX;
	int8_t x372 = INT8_MIN;
	static volatile int64_t t67 = -11570852LL;

	t67 = ((x369%(x370&x371))%x372);

	if (t67 != -8LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x373 = -1;
	uint32_t x374 = 23214U;
	int16_t x375 = -1;
	volatile uint64_t x376 = 3722523533178LLU;
	volatile uint64_t t68 = 167106144599738LLU;

	t68 = ((x373%(x374&x375))%x376);

	if (t68 != 5871LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = -574;
	uint32_t x378 = UINT32_MAX;
	uint64_t x379 = 5LLU;
	int32_t x380 = INT32_MIN;
	static uint64_t t69 = 263159355657219175LLU;

	t69 = ((x377%(x378&x379))%x380);

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x381 = 4U;
	static volatile uint32_t x383 = 1062395U;
	volatile int32_t x384 = 1;
	static volatile uint32_t t70 = 2445U;

	t70 = ((x381%(x382&x383))%x384);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x385 = -1;
	int8_t x386 = -1;
	uint16_t x387 = 47U;
	int64_t x388 = INT64_MAX;
	volatile int64_t t71 = -265482102LL;

	t71 = ((x385%(x386&x387))%x388);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x389 = INT64_MIN;
	volatile int32_t x390 = 90135;
	static int16_t x391 = -1;
	static volatile int64_t t72 = 3022163LL;

	t72 = ((x389%(x390&x391))%x392);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x393 = INT32_MAX;
	int8_t x396 = -20;
	static int64_t t73 = -3LL;

	t73 = ((x393%(x394&x395))%x396);

	if (t73 != 17LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x397 = 6;
	static int8_t x398 = 4;
	int32_t x399 = -1;
	volatile uint32_t t74 = 1937152U;

	t74 = ((x397%(x398&x399))%x400);

	if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x402 = -1LL;
	int16_t x403 = -1;
	volatile int16_t x404 = -5;
	volatile int64_t t75 = -619LL;

	t75 = ((x401%(x402&x403))%x404);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x409 = 3U;
	int32_t x410 = 35;
	volatile uint16_t x411 = 13U;
	uint32_t x412 = 458U;

	t76 = ((x409%(x410&x411))%x412);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x417 = UINT8_MAX;
	int8_t x418 = 13;
	static int32_t x419 = -282761473;
	int64_t x420 = INT64_MIN;
	int64_t t77 = -1407781562658728LL;

	t77 = ((x417%(x418&x419))%x420);

	if (t77 != 8LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x426 = UINT8_MAX;
	int32_t x427 = 316;
	volatile uint8_t x428 = 25U;
	volatile int32_t t78 = 1251;

	t78 = ((x425%(x426&x427))%x428);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x429 = INT32_MAX;
	int32_t x431 = INT32_MIN;
	uint64_t x432 = UINT64_MAX;
	uint64_t t79 = 246319343603701LLU;

	t79 = ((x429%(x430&x431))%x432);

	if (t79 != 2147483647LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x433 = INT32_MIN;
	static int16_t x434 = -1;
	uint32_t x435 = 81U;
	int8_t x436 = -1;
	static volatile uint32_t t80 = 94074538U;

	t80 = ((x433%(x434&x435))%x436);

	if (t80 != 65U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x437 = 216U;
	uint64_t x438 = 3981807LLU;
	uint64_t x439 = UINT64_MAX;

	t81 = ((x437%(x438&x439))%x440);

	if (t81 != 216LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x441 = 1038;
	int8_t x443 = INT8_MIN;
	int32_t x444 = INT32_MIN;

	t82 = ((x441%(x442&x443))%x444);

	if (t82 != 1038) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x445 = INT8_MIN;
	uint8_t x446 = UINT8_MAX;
	volatile int32_t t83 = -337;

	t83 = ((x445%(x446&x447))%x448);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x457 = INT32_MAX;
	volatile int32_t x458 = INT32_MAX;
	int16_t x459 = -11949;
	int64_t x460 = 5LL;
	int64_t t84 = -156LL;

	t84 = ((x457%(x458&x459))%x460);

	if (t84 != 3LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x462 = UINT64_MAX;
	static int64_t x463 = 895814375684LL;
	static int8_t x464 = INT8_MAX;

	t85 = ((x461%(x462&x463))%x464);

	if (t85 != 120LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x465 = INT64_MIN;
	int32_t x466 = -601868;
	uint8_t x468 = UINT8_MAX;

	t86 = ((x465%(x466&x467))%x468);

	if (t86 != -8LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x469 = -1692345LL;
	static uint16_t x470 = 1618U;
	static uint32_t x471 = 814800026U;
	volatile uint32_t x472 = 165484334U;
	int64_t t87 = -20329478636665LL;

	t87 = ((x469%(x470&x471))%x472);

	if (t87 != -137LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x473 = INT32_MIN;
	int16_t x475 = -1;
	int32_t x476 = -1;
	static int64_t t88 = -33165859LL;

	t88 = ((x473%(x474&x475))%x476);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x477 = UINT32_MAX;
	uint64_t x478 = 10LLU;
	uint64_t x479 = UINT64_MAX;
	uint64_t x480 = UINT64_MAX;

	t89 = ((x477%(x478&x479))%x480);

	if (t89 != 5LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x481 = INT16_MAX;
	uint64_t x482 = 2210591LLU;
	uint64_t x483 = UINT64_MAX;
	static uint64_t x484 = UINT64_MAX;
	volatile uint64_t t90 = 22855478308658LLU;

	t90 = ((x481%(x482&x483))%x484);

	if (t90 != 32767LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x485 = INT8_MIN;
	static int32_t x486 = INT32_MAX;
	uint8_t x487 = UINT8_MAX;
	volatile uint64_t x488 = 3773351326LLU;
	volatile uint64_t t91 = 44679918034LLU;

	t91 = ((x485%(x486&x487))%x488);

	if (t91 != 2397200556LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x490 = INT8_MIN;
	int64_t x492 = -1LL;
	int64_t t92 = -11718660975639LL;

	t92 = ((x489%(x490&x491))%x492);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x493 = -1;
	int8_t x494 = INT8_MIN;
	int64_t x495 = INT64_MIN;
	static int32_t x496 = 6097;
	int64_t t93 = 127836455123LL;

	t93 = ((x493%(x494&x495))%x496);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x497 = UINT32_MAX;
	static uint32_t x498 = 1969U;
	uint8_t x499 = 44U;
	int64_t x500 = INT64_MAX;
	int64_t t94 = -129746124922387LL;

	t94 = ((x497%(x498&x499))%x500);

	if (t94 != 31LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x501 = -1;
	int64_t x502 = INT64_MAX;
	int16_t x503 = 9;
	int64_t t95 = -959139640752293LL;

	t95 = ((x501%(x502&x503))%x504);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x505 = INT16_MAX;
	uint32_t x506 = 56237199U;
	int16_t x508 = -1;
	volatile uint32_t t96 = 63U;

	t96 = ((x505%(x506&x507))%x508);

	if (t96 != 657U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x511 = -1691;
	uint16_t x512 = 65U;
	static volatile uint32_t t97 = 1U;

	t97 = ((x509%(x510&x511))%x512);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x513 = INT8_MIN;
	static uint32_t x514 = 1032330272U;
	int8_t x515 = INT8_MIN;
	int16_t x516 = INT16_MIN;
	uint32_t t98 = 2U;

	t98 = ((x513%(x514&x515))%x516);

	if (t98 != 165646208U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x517 = 36U;
	volatile uint8_t x518 = 34U;
	int64_t x519 = 26300223LL;
	int8_t x520 = -1;
	int64_t t99 = -230785165824160414LL;

	t99 = ((x517%(x518&x519))%x520);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

