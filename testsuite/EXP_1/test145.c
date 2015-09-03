#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x2 = UINT32_MAX;
int8_t x3 = INT8_MIN;
int16_t x7 = 1;
int32_t x12 = -1;
uint64_t x21 = 633928836LLU;
static uint64_t t5 = 1041496815308LLU;
int32_t x28 = INT32_MIN;
int32_t x37 = INT32_MIN;
int64_t x47 = -51434LL;
int8_t x48 = INT8_MIN;
volatile uint64_t t11 = 1251719874834392882LLU;
uint64_t x53 = 1631651LLU;
uint32_t x54 = UINT32_MAX;
int64_t x57 = INT64_MIN;
int16_t x59 = -1;
int8_t x61 = 0;
int32_t x76 = -1;
int64_t t16 = 260377LL;
volatile uint32_t x77 = 4153057U;
int64_t x80 = -49985250LL;
int64_t t17 = -20156862038205LL;
uint64_t x85 = 0LLU;
int8_t x87 = 14;
volatile int64_t t22 = -1104277468859616LL;
uint32_t x103 = 19747198U;
uint32_t t23 = 866280U;
int32_t x108 = INT32_MIN;
volatile uint64_t t24 = 17114148328243662LLU;
uint64_t x114 = UINT64_MAX;
static uint64_t t26 = 300204386225012693LLU;
static volatile int64_t x120 = -3526417596LL;
volatile uint16_t x122 = 24798U;
int32_t x127 = INT32_MIN;
int8_t x130 = 60;
uint32_t x132 = 3341790U;
volatile uint32_t t30 = 915U;
int64_t x138 = -1LL;
static uint32_t x140 = UINT32_MAX;
uint16_t x155 = 3249U;
int8_t x157 = INT8_MIN;
int32_t x167 = 4845864;
int16_t x170 = 3;
volatile int32_t x175 = 22518;
static int64_t x180 = 25728983LL;
int16_t x190 = INT16_MAX;
int32_t t42 = -283762637;
int64_t x200 = INT64_MIN;
static uint64_t x208 = UINT64_MAX;
uint64_t x211 = 29427711889344025LLU;
volatile uint64_t t46 = 884753500126657429LLU;
int8_t x217 = INT8_MAX;
static volatile int32_t t48 = 76161945;
volatile int8_t x221 = INT8_MAX;
int8_t x226 = -21;
int8_t x227 = INT8_MIN;
volatile int64_t t50 = 6282660811547LL;
static volatile int32_t x231 = INT32_MIN;
static volatile int64_t t51 = 3LL;
static uint8_t x234 = 111U;
volatile int64_t x236 = -1LL;
volatile int64_t t52 = -8367943006LL;
volatile int64_t x237 = -233067947311516962LL;
volatile int8_t x249 = -56;
volatile int64_t x255 = INT64_MIN;
int64_t x256 = INT64_MIN;
static volatile int16_t x263 = INT16_MAX;
uint8_t x266 = 31U;
int8_t x269 = -2;
static uint16_t x274 = 25U;
int8_t x282 = INT8_MIN;
int16_t x295 = -1;
uint64_t t67 = 2016LLU;
uint64_t x312 = 3772LLU;
int16_t x313 = INT16_MIN;
int16_t x314 = INT16_MIN;
static volatile uint32_t t69 = 1U;
static volatile int8_t x322 = -4;
uint32_t x334 = 320U;
int8_t x336 = -1;
uint32_t t73 = 6U;
uint32_t x342 = 2U;
volatile int32_t x344 = INT32_MIN;
volatile uint64_t t75 = 13781356LLU;
uint8_t x356 = 2U;
volatile int64_t t77 = 13313LL;
int8_t x358 = INT8_MIN;
int32_t x361 = -76447145;
int32_t x366 = INT32_MAX;
int8_t x370 = 2;
uint8_t x374 = UINT8_MAX;
volatile int32_t x377 = -1;
static int32_t x381 = INT32_MAX;
int16_t x382 = INT16_MIN;
static volatile int16_t x383 = -1;
int16_t x384 = -1;
static int8_t x387 = 4;
static int16_t x388 = 58;
uint64_t t85 = 276697LLU;
int16_t x396 = INT16_MIN;
uint8_t x406 = 43U;
int32_t x408 = 2;
static uint8_t x409 = UINT8_MAX;
int64_t t92 = 106518594050LL;
static volatile int16_t x438 = 5318;
int8_t x439 = -1;
volatile int64_t x440 = -1LL;
int32_t x443 = -704205;
volatile uint16_t x456 = UINT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int32_t x4 = INT32_MIN;
	uint32_t t0 = 56727U;

	t0 = (((x1+x2)|x3)-x4);

	if (t0 != 2147483646U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	volatile uint64_t x6 = 24471155444LLU;
	volatile int32_t x8 = -1;
	volatile uint64_t t1 = 121211661LLU;

	t1 = (((x5+x6)|x7)-x8);

	if (t1 != 24471122678LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 7403869169475LL;
	uint64_t x10 = UINT64_MAX;
	static int64_t x11 = INT64_MIN;
	uint64_t t2 = 467940LLU;

	t2 = (((x9+x10)|x11)-x12);

	if (t2 != 9223379440723945283LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 3LL;
	volatile uint32_t x14 = UINT32_MAX;
	static int64_t x15 = INT64_MIN;
	uint64_t x16 = 44202202004LLU;
	uint64_t t3 = 1852665641275LLU;

	t3 = (((x13+x14)|x15)-x16);

	if (t3 != 9223371996947541102LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = INT8_MAX;
	uint8_t x18 = 9U;
	int16_t x19 = -4;
	int16_t x20 = -1;
	volatile int32_t t4 = 3646777;

	t4 = (((x17+x18)|x19)-x20);

	if (t4 != -3) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 22924U;
	static int32_t x24 = INT32_MAX;

	t5 = (((x21+x22)|x23)-x24);

	if (t5 != 18446744072195997072LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -1;
	uint64_t x26 = 32097LLU;
	uint8_t x27 = 2U;
	volatile uint64_t t6 = 4025LLU;

	t6 = (((x25+x26)|x27)-x28);

	if (t6 != 2147515746LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -767604LL;
	int16_t x30 = INT16_MIN;
	volatile uint64_t x31 = 7LLU;
	uint16_t x32 = UINT16_MAX;
	static uint64_t t7 = 107LLU;

	t7 = (((x29+x30)|x31)-x32);

	if (t7 != 18446744073708685712LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 53317766367LLU;
	volatile int64_t x34 = INT64_MIN;
	uint16_t x35 = 1U;
	int16_t x36 = INT16_MIN;
	volatile uint64_t t8 = 585115237502452LLU;

	t8 = (((x33+x34)|x35)-x36);

	if (t8 != 9223372090172574943LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 117045960822LLU;
	int32_t x39 = -38983;
	volatile int64_t x40 = INT64_MIN;
	volatile uint64_t t9 = 1615491195804LLU;

	t9 = (((x37+x38)|x39)-x40);

	if (t9 != 9223372036854769663LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	static int16_t x46 = INT16_MAX;
	static volatile int64_t t10 = -12LL;

	t10 = (((x45+x46)|x47)-x48);

	if (t10 != -32641LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -3389083;
	volatile uint64_t x50 = 7994LLU;
	int16_t x51 = -1;
	int8_t x52 = INT8_MIN;

	t11 = (((x49+x50)|x51)-x52);

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	uint64_t t12 = 866LLU;

	t12 = (((x53+x54)|x55)-x56);

	if (t12 != 2147483647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x58 = 3058458U;
	int64_t x60 = -1LL;
	int64_t t13 = 1LL;

	t13 = (((x57+x58)|x59)-x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = INT32_MIN;
	int64_t x63 = -468156711011257216LL;
	uint16_t x64 = 12U;
	static int64_t t14 = 1LL;

	t14 = (((x61+x62)|x63)-x64);

	if (t14 != -1527417740LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = -19213;
	int16_t x66 = INT16_MIN;
	static int16_t x67 = INT16_MIN;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t15 = 5240675LLU;

	t15 = (((x65+x66)|x67)-x68);

	if (t15 != 18446744073709532404LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -4877396690744LL;
	uint32_t x74 = 22351432U;
	static volatile uint16_t x75 = 4662U;

	t16 = (((x73+x74)|x75)-x76);

	if (t16 != -4877374335177LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = INT16_MIN;
	int64_t x79 = -1LL;

	t17 = (((x77+x78)|x79)-x80);

	if (t17 != 49985249LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = 503;
	uint16_t x82 = 2743U;
	volatile int32_t x83 = INT32_MIN;
	int8_t x84 = -1;
	int32_t t18 = -12464771;

	t18 = (((x81+x82)|x83)-x84);

	if (t18 != -2147480401) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x86 = UINT8_MAX;
	uint8_t x88 = UINT8_MAX;
	uint64_t t19 = 8935951143551100LLU;

	t19 = (((x85+x86)|x87)-x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x89 = UINT64_MAX;
	int32_t x90 = -122195;
	int32_t x91 = 22;
	uint32_t x92 = 1U;
	volatile uint64_t t20 = 1554LLU;

	t20 = (((x89+x90)|x91)-x92);

	if (t20 != 18446744073709429437LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	volatile int32_t x94 = INT32_MIN;
	static uint32_t x95 = 4U;
	int32_t x96 = 26323245;
	volatile uint32_t t21 = 82039U;

	t21 = (((x93+x94)|x95)-x96);

	if (t21 != 2121160530U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = INT32_MIN;
	uint16_t x98 = UINT16_MAX;
	int64_t x99 = 749515905298LL;
	static uint32_t x100 = 130163841U;

	t22 = (((x97+x98)|x99)-x100);

	if (t22 != -2233476226LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	static int8_t x102 = INT8_MIN;
	int8_t x104 = -12;

	t23 = (((x101+x102)|x103)-x104);

	if (t23 != 4294967178U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x105 = -1;
	volatile uint64_t x106 = 2011982592LLU;
	int32_t x107 = INT32_MIN;

	t24 = (((x105+x106)|x107)-x108);

	if (t24 != 2011982591LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 6U;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = 18U;
	int64_t x112 = -1LL;
	volatile int64_t t25 = 213479097649195LL;

	t25 = (((x109+x110)|x111)-x112);

	if (t25 != -105LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x113 = 22U;
	static uint64_t x115 = UINT64_MAX;
	volatile int16_t x116 = INT16_MIN;

	t26 = (((x113+x114)|x115)-x116);

	if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = UINT16_MAX;
	uint16_t x118 = 1U;
	uint64_t x119 = 276863571770915904LLU;
	uint64_t t27 = 384244316760302657LLU;

	t27 = (((x117+x118)|x119)-x120);

	if (t27 != 276863575297399036LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = -1;
	volatile int16_t x123 = INT16_MIN;
	uint64_t x124 = 504479550473606104LLU;
	static volatile uint64_t t28 = 71100781851946LLU;

	t28 = (((x121+x122)|x123)-x124);

	if (t28 != 17942264523235937541LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x125 = UINT32_MAX;
	static uint32_t x126 = UINT32_MAX;
	static int32_t x128 = -15438925;
	uint32_t t29 = 2U;

	t29 = (((x125+x126)|x127)-x128);

	if (t29 != 15438923U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = INT8_MAX;
	volatile int32_t x131 = INT32_MIN;

	t30 = (((x129+x130)|x131)-x132);

	if (t30 != 2144142045U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x133 = 16U;
	uint16_t x134 = UINT16_MAX;
	static int64_t x135 = -1LL;
	int64_t x136 = 1LL;
	volatile int64_t t31 = 3811536516146025LL;

	t31 = (((x133+x134)|x135)-x136);

	if (t31 != -2LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = UINT16_MAX;
	static volatile int64_t x139 = INT64_MAX;
	int64_t t32 = -63302302386456258LL;

	t32 = (((x137+x138)|x139)-x140);

	if (t32 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MAX;
	int64_t x143 = -1560424691542LL;
	int32_t x144 = -1;
	volatile int64_t t33 = -48037604083LL;

	t33 = (((x141+x142)|x143)-x144);

	if (t33 != -1560424691456LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x153 = 3U;
	int64_t x154 = -146234028855728LL;
	int32_t x156 = 6780;
	volatile int64_t t34 = -184089782LL;

	t34 = (((x153+x154)|x155)-x156);

	if (t34 != -146234028862345LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x158 = UINT32_MAX;
	static int8_t x159 = INT8_MIN;
	int32_t x160 = INT32_MIN;
	uint32_t t35 = 2518U;

	t35 = (((x157+x158)|x159)-x160);

	if (t35 != 2147483647U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = 8692900829297844LL;
	int64_t x166 = 59901931711LL;
	volatile int8_t x168 = -11;
	static int64_t t36 = 113541954286LL;

	t36 = (((x165+x166)|x167)-x168);

	if (t36 != 8692960731331974LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x169 = INT8_MIN;
	int8_t x171 = -1;
	int64_t x172 = -1LL;
	volatile int64_t t37 = 393791150LL;

	t37 = (((x169+x170)|x171)-x172);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x173 = -3;
	int16_t x174 = INT16_MAX;
	uint16_t x176 = 62U;
	int32_t t38 = 624;

	t38 = (((x173+x174)|x175)-x176);

	if (t38 != 32704) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	volatile int8_t x178 = 31;
	int32_t x179 = INT32_MIN;
	int64_t t39 = 1LL;

	t39 = (((x177+x178)|x179)-x180);

	if (t39 != -25729080LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x181 = UINT64_MAX;
	int16_t x182 = 12;
	int8_t x183 = INT8_MAX;
	static int8_t x184 = -12;
	uint64_t t40 = 7800449388326205544LLU;

	t40 = (((x181+x182)|x183)-x184);

	if (t40 != 139LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = 1561;
	uint8_t x186 = 4U;
	uint64_t x187 = 20388600952957LLU;
	static int32_t x188 = INT32_MIN;
	static volatile uint64_t t41 = 105LLU;

	t41 = (((x185+x186)|x187)-x188);

	if (t41 != 20390748438141LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = 6U;
	int16_t x191 = INT16_MAX;
	uint8_t x192 = 61U;

	t42 = (((x189+x190)|x191)-x192);

	if (t42 != 65474) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 423U;
	int16_t x194 = INT16_MIN;
	volatile uint16_t x195 = 7818U;
	int64_t x196 = INT64_MAX;
	volatile int64_t t43 = -14506LL;

	t43 = (((x193+x194)|x195)-x196);

	if (t43 != -9223372032559833168LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = INT8_MAX;
	static int8_t x198 = 1;
	volatile int16_t x199 = -1;
	int64_t t44 = INT64_MAX;

	t44 = (((x197+x198)|x199)-x200);

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x205 = 45868048011444893LLU;
	uint16_t x206 = 5U;
	static int8_t x207 = INT8_MAX;
	static volatile uint64_t t45 = 45102823886216LLU;

	t45 = (((x205+x206)|x207)-x208);

	if (t45 != 45868048011444992LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = UINT8_MAX;
	static uint32_t x210 = 1565700U;
	int16_t x212 = -1;

	t46 = (((x209+x210)|x211)-x212);

	if (t46 != 29427711889368860LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x213 = 178U;
	int8_t x214 = -1;
	static int64_t x215 = -763265145LL;
	volatile int64_t x216 = -7LL;
	int64_t t47 = -950518566662786103LL;

	t47 = (((x213+x214)|x215)-x216);

	if (t47 != -763265090LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x218 = -1;
	int8_t x219 = -4;
	int32_t x220 = 102;

	t48 = (((x217+x218)|x219)-x220);

	if (t48 != -104) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x222 = -1LL;
	static int8_t x223 = INT8_MAX;
	uint8_t x224 = 47U;
	volatile int64_t t49 = 4060LL;

	t49 = (((x221+x222)|x223)-x224);

	if (t49 != 80LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x225 = INT64_MAX;
	int8_t x228 = INT8_MIN;

	t50 = (((x225+x226)|x227)-x228);

	if (t50 != 106LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = 1;
	int64_t x230 = -10664190264326LL;
	int32_t x232 = -691;

	t51 = (((x229+x230)|x231)-x232);

	if (t51 != -1933951314LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = 11;
	volatile uint32_t x235 = 4094U;

	t52 = (((x233+x234)|x235)-x236);

	if (t52 != 4095LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t53 = 8071950764921769LLU;

	t53 = (((x237+x238)|x239)-x240);

	if (t53 != 18213676130693001984LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = 14637340173929853LL;
	int32_t x242 = -1;
	uint8_t x243 = UINT8_MAX;
	int32_t x244 = 24217;
	int64_t t54 = 214733057215486463LL;

	t54 = (((x241+x242)|x243)-x244);

	if (t54 != 14637340173905766LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x245 = UINT64_MAX;
	int64_t x246 = 1568278763LL;
	int32_t x247 = INT32_MIN;
	static uint8_t x248 = UINT8_MAX;
	uint64_t t55 = 6056910374705950209LLU;

	t55 = (((x245+x246)|x247)-x248);

	if (t55 != 18446744073130346475LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x250 = INT16_MIN;
	int64_t x251 = -8288LL;
	int64_t x252 = INT64_MIN;
	int64_t t56 = -4260759478LL;

	t56 = (((x249+x250)|x251)-x252);

	if (t56 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x253 = -1LL;
	int64_t x254 = 30424LL;
	static volatile int64_t t57 = -27748491173LL;

	t57 = (((x253+x254)|x255)-x256);

	if (t57 != 30423LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = 846U;
	int16_t x262 = INT16_MIN;
	static int8_t x264 = -1;
	uint32_t t58 = 8917333U;

	t58 = (((x261+x262)|x263)-x264);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	static volatile int64_t t59 = -4177934412976610082LL;

	t59 = (((x265+x266)|x267)-x268);

	if (t59 != 9223372036854775711LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x270 = -1;
	volatile int32_t x271 = -1;
	int16_t x272 = INT16_MAX;
	int32_t t60 = -15071;

	t60 = (((x269+x270)|x271)-x272);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = -1LL;
	static int8_t x275 = INT8_MAX;
	int32_t x276 = INT32_MIN;
	static int64_t t61 = 242LL;

	t61 = (((x273+x274)|x275)-x276);

	if (t61 != 2147483775LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -26;
	static int8_t x278 = INT8_MIN;
	volatile uint8_t x279 = 97U;
	static volatile uint32_t x280 = 1928510198U;
	volatile uint32_t t62 = 1826U;

	t62 = (((x277+x278)|x279)-x280);

	if (t62 != 2366456945U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x281 = UINT8_MAX;
	static int64_t x283 = INT64_MIN;
	uint16_t x284 = 17U;
	volatile int64_t t63 = 1850074LL;

	t63 = (((x281+x282)|x283)-x284);

	if (t63 != -9223372036854775698LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x293 = -1;
	volatile uint32_t x294 = 11306U;
	static int16_t x296 = 1;
	volatile uint32_t t64 = 1931142108U;

	t64 = (((x293+x294)|x295)-x296);

	if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = 1277378832753637LLU;
	int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MIN;
	int64_t x300 = -1LL;
	uint64_t t65 = 25LLU;

	t65 = (((x297+x298)|x299)-x300);

	if (t65 != 18446744073709544422LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = -1;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = -32854593244LL;
	uint8_t x304 = 1U;
	static int64_t t66 = 1992949571LL;

	t66 = (((x301+x302)|x303)-x304);

	if (t66 != -32854573059LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = INT64_MAX;
	uint64_t x306 = UINT64_MAX;
	uint64_t x307 = 609312038543548896LLU;
	static int32_t x308 = INT32_MAX;

	t67 = (((x305+x306)|x307)-x308);

	if (t67 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x309 = UINT16_MAX;
	int16_t x310 = 0;
	uint16_t x311 = UINT16_MAX;
	volatile uint64_t t68 = 66370725LLU;

	t68 = (((x309+x310)|x311)-x312);

	if (t68 != 61763LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x315 = 417219U;
	int32_t x316 = INT32_MIN;

	t69 = (((x313+x314)|x315)-x316);

	if (t69 != 2147442115U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x323 = -104;
	int64_t x324 = -3237460350LL;
	uint64_t t70 = 30296493LLU;

	t70 = (((x321+x322)|x323)-x324);

	if (t70 != 3237460345LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = 15387809990881LL;
	int16_t x326 = 6;
	int8_t x327 = INT8_MIN;
	int32_t x328 = -1;
	volatile int64_t t71 = 430816281800LL;

	t71 = (((x325+x326)|x327)-x328);

	if (t71 != -24LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x329 = 11357376269777LL;
	uint8_t x330 = 6U;
	volatile int32_t x331 = -48839;
	volatile uint16_t x332 = 27U;
	int64_t t72 = 899LL;

	t72 = (((x329+x330)|x331)-x332);

	if (t72 != -12828LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x333 = INT8_MIN;
	int32_t x335 = -3187;

	t73 = (((x333+x334)|x335)-x336);

	if (t73 != 4294964174U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = 4512U;
	static uint16_t x338 = 58U;
	uint8_t x339 = UINT8_MAX;
	int64_t x340 = 5832LL;
	volatile int64_t t74 = -9623409745LL;

	t74 = (((x337+x338)|x339)-x340);

	if (t74 != -1225LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x341 = UINT64_MAX;
	volatile int8_t x343 = INT8_MIN;

	t75 = (((x341+x342)|x343)-x344);

	if (t75 != 2147483521LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x349 = 2591U;
	static int8_t x350 = 1;
	int32_t x351 = -125;
	uint16_t x352 = UINT16_MAX;
	int32_t t76 = -15740;

	t76 = (((x349+x350)|x351)-x352);

	if (t76 != -65628) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = -1LL;
	static int64_t x355 = INT64_MAX;

	t77 = (((x353+x354)|x355)-x356);

	if (t77 != -3LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x357 = -1;
	int32_t x359 = INT32_MAX;
	uint16_t x360 = 10U;
	static int32_t t78 = -412416881;

	t78 = (((x357+x358)|x359)-x360);

	if (t78 != -11) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x362 = UINT32_MAX;
	int64_t x363 = -1LL;
	static volatile uint16_t x364 = 10859U;
	int64_t t79 = 63LL;

	t79 = (((x361+x362)|x363)-x364);

	if (t79 != -10860LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x365 = -30;
	uint64_t x367 = UINT64_MAX;
	uint8_t x368 = 0U;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (((x365+x366)|x367)-x368);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x371 = 37081971264LL;
	volatile int16_t x372 = -1;
	volatile int64_t t81 = 50092LL;

	t81 = (((x369+x370)|x371)-x372);

	if (t81 != 37081971266LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x373 = 321579226U;
	volatile int32_t x375 = INT32_MIN;
	int16_t x376 = 1;
	uint32_t t82 = 28332485U;

	t82 = (((x373+x374)|x375)-x376);

	if (t82 != 2469063128U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x378 = 0U;
	volatile uint16_t x379 = UINT16_MAX;
	uint64_t x380 = 989148LLU;
	volatile uint64_t t83 = 7327277268816560341LLU;

	t83 = (((x377+x378)|x379)-x380);

	if (t83 != 18446744073708562467LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t t84 = -104505490;

	t84 = (((x381+x382)|x383)-x384);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MAX;
	static uint64_t x386 = UINT64_MAX;

	t85 = (((x385+x386)|x387)-x388);

	if (t85 != 32708LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = 222U;
	int64_t x390 = -60713LL;
	volatile uint32_t x391 = UINT32_MAX;
	int32_t x392 = INT32_MIN;
	int64_t t86 = -52LL;

	t86 = (((x389+x390)|x391)-x392);

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x393 = -1;
	int64_t x394 = -1LL;
	int64_t x395 = -128394327848604LL;
	int64_t t87 = 22172LL;

	t87 = (((x393+x394)|x395)-x396);

	if (t87 != 32766LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = -2LL;
	int32_t x398 = -1384655;
	static int32_t x399 = INT32_MIN;
	int32_t x400 = -48033500;
	int64_t t88 = -29594LL;

	t88 = (((x397+x398)|x399)-x400);

	if (t88 != 46648843LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = 1176986181LL;
	int16_t x402 = INT16_MAX;
	static int8_t x403 = INT8_MAX;
	volatile int16_t x404 = INT16_MIN;
	int64_t t89 = 508LL;

	t89 = (((x401+x402)|x403)-x404);

	if (t89 != 1177051775LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = 1204873;
	uint32_t x407 = UINT32_MAX;
	static uint32_t t90 = 2937446U;

	t90 = (((x405+x406)|x407)-x408);

	if (t90 != 4294967293U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x410 = UINT64_MAX;
	int64_t x411 = INT64_MIN;
	int16_t x412 = -1;
	volatile uint64_t t91 = 533308LLU;

	t91 = (((x409+x410)|x411)-x412);

	if (t91 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x417 = 41U;
	static int8_t x418 = INT8_MIN;
	static volatile int64_t x419 = -1LL;
	int64_t x420 = -115LL;

	t92 = (((x417+x418)|x419)-x420);

	if (t92 != 114LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x421 = INT8_MIN;
	static uint16_t x422 = UINT16_MAX;
	int16_t x423 = 1;
	volatile uint64_t x424 = 27498133LLU;
	volatile uint64_t t93 = 145342254LLU;

	t93 = (((x421+x422)|x423)-x424);

	if (t93 != 18446744073682118890LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = -1LL;
	volatile uint64_t x434 = 142458572408LLU;
	int64_t x435 = INT64_MIN;
	volatile int8_t x436 = 12;
	uint64_t t94 = 0LLU;

	t94 = (((x433+x434)|x435)-x436);

	if (t94 != 9223372179313348203LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x437 = 0U;
	int64_t t95 = 5179475957LL;

	t95 = (((x437+x438)|x439)-x440);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x441 = 1938;
	int32_t x442 = -83687;
	static int8_t x444 = -27;
	int32_t t96 = -33496;

	t96 = (((x441+x442)|x443)-x444);

	if (t96 != -15914) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = INT32_MAX;
	static volatile int8_t x446 = INT8_MIN;
	int8_t x447 = INT8_MIN;
	uint64_t x448 = UINT64_MAX;
	uint64_t t97 = 262369666839760165LLU;

	t97 = (((x445+x446)|x447)-x448);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x449 = 966U;
	int8_t x450 = INT8_MIN;
	int32_t x451 = -1;
	uint64_t x452 = 688LLU;
	static volatile uint64_t t98 = 29LLU;

	t98 = (((x449+x450)|x451)-x452);

	if (t98 != 4294966607LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x453 = 18540592998LLU;
	uint16_t x454 = UINT16_MAX;
	int16_t x455 = -1;
	volatile uint64_t t99 = 7760312263754306LLU;

	t99 = (((x453+x454)|x455)-x456);

	if (t99 != 18446744073709486080LLU) { NG(); } else { ; }
	
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

