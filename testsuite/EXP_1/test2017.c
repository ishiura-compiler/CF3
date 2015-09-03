#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
uint8_t x4 = UINT8_MAX;
int64_t x5 = INT64_MAX;
volatile int8_t x17 = INT8_MIN;
uint32_t x30 = UINT32_MAX;
volatile int64_t x33 = INT64_MIN;
uint8_t x35 = 84U;
int64_t x36 = INT64_MIN;
static volatile uint64_t t7 = 0LLU;
uint16_t x46 = 294U;
int32_t x52 = INT32_MIN;
uint8_t x54 = UINT8_MAX;
volatile int16_t x55 = INT16_MIN;
int64_t x59 = INT64_MIN;
int64_t t14 = -99LL;
int64_t x79 = INT64_MIN;
int16_t x84 = -1;
volatile uint16_t x91 = 510U;
volatile int64_t x92 = INT64_MIN;
uint16_t x97 = 815U;
int32_t t20 = 5436;
static volatile uint32_t t22 = 11349U;
uint8_t x110 = 52U;
volatile int64_t x115 = -4577686818LL;
static uint64_t x130 = 1108156737992LLU;
int32_t x131 = -1933528;
static volatile int16_t x136 = INT16_MIN;
int32_t x141 = -706;
int32_t x143 = INT32_MIN;
uint64_t x144 = UINT64_MAX;
volatile uint64_t t30 = 1319LLU;
static volatile int64_t x147 = INT64_MIN;
volatile uint32_t t32 = 2042450883U;
int16_t x157 = -1;
volatile int32_t x175 = -1;
volatile int32_t t39 = -935292911;
uint16_t x190 = 16377U;
volatile uint8_t x191 = 36U;
int8_t x192 = -1;
static volatile int32_t t41 = 95461;
static uint8_t x193 = UINT8_MAX;
volatile int16_t x196 = INT16_MIN;
int64_t t42 = 380743LL;
uint16_t x197 = UINT16_MAX;
uint64_t x199 = 17718071700LLU;
int64_t x201 = INT64_MIN;
uint8_t x203 = UINT8_MAX;
int16_t x205 = INT16_MIN;
volatile int64_t t45 = 1311186LL;
int64_t x209 = INT64_MAX;
uint64_t x217 = UINT64_MAX;
int8_t x223 = -20;
int64_t x224 = -26802LL;
int8_t x225 = INT8_MIN;
static uint8_t x227 = 9U;
volatile uint64_t t51 = 13LLU;
static volatile int64_t t54 = 1437739524LL;
uint16_t x251 = 9U;
int8_t x256 = 1;
uint16_t x258 = 132U;
int8_t x259 = INT8_MIN;
uint8_t x262 = UINT8_MAX;
static int32_t x264 = INT32_MIN;
uint32_t x269 = 0U;
int16_t x271 = INT16_MAX;
uint16_t x272 = UINT16_MAX;
uint64_t t60 = 15140709927434943LLU;
uint32_t x279 = 118926U;
int32_t x280 = -527644;
int16_t x282 = INT16_MIN;
uint8_t x284 = UINT8_MAX;
static int16_t x285 = INT16_MAX;
static int64_t x288 = -1LL;
static int64_t t64 = -404LL;
volatile int64_t x300 = INT64_MIN;
static volatile int64_t t65 = -47315231629LL;
int32_t x302 = -1;
static int16_t x319 = INT16_MIN;
uint8_t x320 = 1U;
int8_t x322 = 10;
static uint8_t x327 = 5U;
int8_t x328 = -2;
static int8_t x333 = 0;
int8_t x335 = 0;
static int16_t x340 = -39;
uint8_t x354 = UINT8_MAX;
static volatile int8_t x355 = 20;
int64_t t79 = 24745518032LL;
uint8_t x373 = 0U;
static volatile int32_t t80 = 73464591;
int32_t x387 = INT32_MIN;
volatile int32_t x390 = INT32_MIN;
uint16_t x391 = UINT16_MAX;
static int64_t x392 = 1908361815440023LL;
int16_t x397 = -1;
int32_t x398 = -1;
volatile int8_t x401 = -1;
static uint64_t x403 = 467433065766LLU;
int8_t x404 = -1;
uint8_t x405 = 2U;
int8_t x409 = 2;
static int64_t x410 = 1311559LL;
uint8_t x418 = UINT8_MAX;
volatile int8_t x423 = INT8_MIN;
int32_t x426 = 310;
static volatile uint8_t x430 = 79U;
volatile uint32_t x432 = UINT32_MAX;
int8_t x436 = INT8_MIN;
uint32_t t95 = 34712602U;
static volatile uint16_t x439 = UINT16_MAX;
volatile uint8_t x442 = 7U;
static uint64_t x444 = UINT64_MAX;
volatile uint32_t x447 = 11182U;
int16_t x449 = INT16_MIN;
int64_t x450 = INT64_MIN;
static uint16_t x452 = 0U;


void f0(void) {
	static volatile int64_t x2 = INT64_MAX;
	volatile int32_t x3 = -1;
	volatile int64_t t0 = 83324675087740954LL;

	t0 = (((x1|x2)^x3)-x4);

	if (t0 != -255LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int16_t x7 = -1;
	int32_t x8 = -1;
	int64_t t1 = 305806938763217742LL;

	t1 = (((x5|x6)^x7)-x8);

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x18 = -1LL;
	int64_t x19 = INT64_MIN;
	volatile uint8_t x20 = UINT8_MAX;
	volatile int64_t t2 = 8019LL;

	t2 = (((x17|x18)^x19)-x20);

	if (t2 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 7593U;
	uint16_t x22 = UINT16_MAX;
	volatile uint32_t x23 = 11726U;
	static volatile int64_t x24 = -1LL;
	volatile int64_t t3 = 9117085LL;

	t3 = (((x21|x22)^x23)-x24);

	if (t3 != 53810LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 12;
	volatile uint16_t x26 = 57U;
	static int16_t x27 = INT16_MIN;
	volatile int64_t x28 = INT64_MIN;
	int64_t t4 = 0LL;

	t4 = (((x25|x26)^x27)-x28);

	if (t4 != 9223372036854743101LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	int32_t x31 = 3052278;
	static int8_t x32 = 8;
	static uint32_t t5 = 52U;

	t5 = (((x29|x30)^x31)-x32);

	if (t5 != 4291915009U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x34 = UINT64_MAX;
	uint64_t t6 = 11592860665517LLU;

	t6 = (((x33|x34)^x35)-x36);

	if (t6 != 9223372036854775723LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MIN;
	uint64_t x38 = 1059253972488LLU;
	int8_t x39 = 1;
	static uint64_t x40 = 10261584621434LLU;

	t7 = (((x37|x38)^x39)-x40);

	if (t7 != 18446733812124930063LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	volatile uint16_t x47 = UINT16_MAX;
	uint8_t x48 = UINT8_MAX;
	int32_t t8 = 12;

	t8 = (((x45|x46)^x47)-x48);

	if (t8 != -65791) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MAX;
	static volatile int8_t x50 = INT8_MIN;
	int16_t x51 = 129;
	volatile int32_t t9 = 7;

	t9 = (((x49|x50)^x51)-x52);

	if (t9 != 2147483518) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x53 = -1;
	volatile uint16_t x56 = UINT16_MAX;
	volatile int32_t t10 = 31436;

	t10 = (((x53|x54)^x55)-x56);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MAX;
	int8_t x58 = INT8_MAX;
	int8_t x60 = INT8_MAX;
	static volatile int64_t t11 = 7613805898305250LL;

	t11 = (((x57|x58)^x59)-x60);

	if (t11 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = 1;
	uint32_t x62 = UINT32_MAX;
	int8_t x63 = INT8_MAX;
	int64_t x64 = 3LL;
	volatile int64_t t12 = 14LL;

	t12 = (((x61|x62)^x63)-x64);

	if (t12 != 4294967165LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x65 = INT16_MIN;
	uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 12022U;
	volatile uint64_t t13 = 1341502962259872221LLU;

	t13 = (((x65|x66)^x67)-x68);

	if (t13 != 18446744073709539466LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = INT16_MIN;
	int64_t x75 = -1LL;
	volatile int8_t x76 = -1;

	t14 = (((x73|x74)^x75)-x76);

	if (t14 != 32641LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x77 = -233646443507454LL;
	int32_t x78 = INT32_MAX;
	static volatile int32_t x80 = INT32_MIN;
	int64_t t15 = 715227382535LL;

	t15 = (((x77|x78)^x79)-x80);

	if (t15 != 9223138392781357055LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x81 = 366U;
	static volatile int64_t x82 = INT64_MAX;
	uint64_t x83 = 606LLU;
	static uint64_t t16 = 2016745191414LLU;

	t16 = (((x81|x82)^x83)-x84);

	if (t16 != 9223372036854775202LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MIN;
	uint16_t x86 = 3237U;
	uint32_t x87 = 224652304U;
	int64_t x88 = INT64_MAX;
	volatile int64_t t17 = 25LL;

	t17 = (((x85|x86)^x87)-x88);

	if (t17 != -9223372032784441162LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MAX;
	static int8_t x90 = -3;
	static volatile int64_t t18 = 20250632713LL;

	t18 = (((x89|x90)^x91)-x92);

	if (t18 != 9223372036854775297LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = INT8_MIN;
	int32_t x94 = INT32_MIN;
	uint64_t x95 = 31LLU;
	volatile int8_t x96 = 1;
	uint64_t t19 = 4LLU;

	t19 = (((x93|x94)^x95)-x96);

	if (t19 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MIN;
	int16_t x100 = 469;

	t20 = (((x97|x98)^x99)-x100);

	if (t20 != 346) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 12U;
	int8_t x102 = INT8_MAX;
	int32_t x103 = 7519;
	int32_t x104 = INT32_MAX;
	int32_t t21 = 5586845;

	t21 = (((x101|x102)^x103)-x104);

	if (t21 != -2147476191) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = 0;
	uint32_t x106 = 1U;
	static volatile uint32_t x107 = UINT32_MAX;
	static int8_t x108 = INT8_MAX;

	t22 = (((x105|x106)^x107)-x108);

	if (t22 != 4294967167U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 61439U;
	static int16_t x111 = INT16_MAX;
	int16_t x112 = -1;
	static volatile uint32_t t23 = 446402U;

	t23 = (((x109|x110)^x111)-x112);

	if (t23 != 36865U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MAX;
	uint8_t x114 = 26U;
	static uint16_t x116 = UINT16_MAX;
	static volatile int64_t t24 = 452826357087096021LL;

	t24 = (((x113|x114)^x115)-x116);

	if (t24 != -6159796958LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x121 = -1784567514LL;
	int32_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t25 = 871565LL;

	t25 = (((x121|x122)^x123)-x124);

	if (t25 != -65791LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = -1997585358218LL;
	int32_t x127 = -1;
	volatile uint8_t x128 = 3U;
	int64_t t26 = 4753309872697LL;

	t26 = (((x125|x126)^x127)-x128);

	if (t26 != 425565574LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x129 = 39U;
	static volatile int16_t x132 = INT16_MIN;
	static volatile uint64_t t27 = 44707887347277120LLU;

	t27 = (((x129|x130)^x131)-x132);

	if (t27 != 18446742965552158407LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = INT64_MAX;
	uint16_t x134 = 838U;
	int64_t x135 = INT64_MIN;
	volatile int64_t t28 = 3897398682LL;

	t28 = (((x133|x134)^x135)-x136);

	if (t28 != 32767LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = INT16_MIN;
	static int16_t x138 = INT16_MIN;
	int64_t x139 = -24972294792126486LL;
	static int16_t x140 = INT16_MIN;
	volatile int64_t t29 = 1360LL;

	t29 = (((x137|x138)^x139)-x140);

	if (t29 != 24972294792175594LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x142 = 52U;

	t30 = (((x141|x142)^x143)-x144);

	if (t30 != 2147482943LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MIN;
	static int32_t x146 = INT32_MAX;
	int8_t x148 = INT8_MAX;
	int64_t t31 = -47968016LL;

	t31 = (((x145|x146)^x147)-x148);

	if (t31 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MAX;
	int16_t x150 = 12;
	volatile uint32_t x151 = UINT32_MAX;
	int32_t x152 = INT32_MIN;

	t32 = (((x149|x150)^x151)-x152);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = -247;
	volatile int32_t x154 = INT32_MIN;
	static int8_t x155 = INT8_MIN;
	static int16_t x156 = 6;
	int32_t t33 = -53322906;

	t33 = (((x153|x154)^x155)-x156);

	if (t33 != 131) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x158 = INT8_MIN;
	static uint64_t x159 = 139284LLU;
	int32_t x160 = INT32_MIN;
	uint64_t t34 = 12163896459097LLU;

	t34 = (((x157|x158)^x159)-x160);

	if (t34 != 2147344363LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	int32_t x162 = -17987085;
	uint16_t x163 = 73U;
	volatile int8_t x164 = 40;
	static volatile int64_t t35 = -51364495LL;

	t35 = (((x161|x162)^x163)-x164);

	if (t35 != -17987182LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = 54169LL;
	volatile uint64_t x166 = 32818977177619LLU;
	volatile uint32_t x167 = UINT32_MAX;
	uint64_t x168 = 524895548507294LLU;
	volatile uint64_t t36 = 342894LLU;

	t36 = (((x165|x166)^x167)-x168);

	if (t36 != 18446251999168997318LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = 11U;
	static volatile int32_t x170 = INT32_MIN;
	int8_t x171 = -1;
	int64_t x172 = INT64_MAX;
	int64_t t37 = -3106683021804665050LL;

	t37 = (((x169|x170)^x171)-x172);

	if (t37 != -9223372034707292171LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = 53U;
	uint64_t x176 = 2041233858601906308LLU;
	volatile uint64_t t38 = 2253757734531148753LLU;

	t38 = (((x173|x174)^x175)-x176);

	if (t38 != 7182138178252869446LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x177 = 3904U;
	int16_t x178 = 0;
	uint8_t x179 = UINT8_MAX;
	volatile int16_t x180 = INT16_MAX;

	t39 = (((x177|x178)^x179)-x180);

	if (t39 != -28736) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 11178840U;
	int32_t x182 = INT32_MAX;
	int16_t x183 = -3111;
	volatile int16_t x184 = INT16_MIN;
	volatile uint32_t t40 = 125265022U;

	t40 = (((x181|x182)^x183)-x184);

	if (t40 != 2147519526U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x189 = INT16_MIN;

	t41 = (((x189|x190)^x191)-x192);

	if (t41 != -16418) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x194 = INT64_MIN;
	int64_t x195 = INT64_MIN;

	t42 = (((x193|x194)^x195)-x196);

	if (t42 != 33023LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x198 = 3277U;
	volatile int8_t x200 = 0;
	uint64_t t43 = 24324007459LLU;

	t43 = (((x197|x198)^x199)-x200);

	if (t43 != 17718095467LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x202 = INT16_MIN;
	int64_t x204 = INT64_MIN;
	volatile int64_t t44 = 25025738790198469LL;

	t44 = (((x201|x202)^x203)-x204);

	if (t44 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x206 = INT64_MIN;
	volatile uint32_t x207 = 973803U;
	int32_t x208 = -255648868;

	t45 = (((x205|x206)^x207)-x208);

	if (t45 != 254689359LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x210 = INT8_MIN;
	uint8_t x211 = UINT8_MAX;
	int32_t x212 = -950;
	volatile int64_t t46 = -764010LL;

	t46 = (((x209|x210)^x211)-x212);

	if (t46 != 694LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x213 = UINT32_MAX;
	volatile uint8_t x214 = UINT8_MAX;
	int16_t x215 = -1;
	int32_t x216 = -45735764;
	volatile uint32_t t47 = 3880451U;

	t47 = (((x213|x214)^x215)-x216);

	if (t47 != 45735764U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x218 = 184718771LLU;
	volatile int32_t x219 = -1;
	uint16_t x220 = UINT16_MAX;
	volatile uint64_t t48 = 5212916728703481854LLU;

	t48 = (((x217|x218)^x219)-x220);

	if (t48 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MAX;
	static uint16_t x222 = 16U;
	volatile int64_t t49 = 243615901819630177LL;

	t49 = (((x221|x222)^x223)-x224);

	if (t49 != -9223372036854748987LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x226 = INT32_MAX;
	volatile uint16_t x228 = 315U;
	static volatile int32_t t50 = 195808;

	t50 = (((x225|x226)^x227)-x228);

	if (t50 != -325) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = UINT32_MAX;
	uint64_t x230 = 16LLU;
	int32_t x231 = INT32_MIN;
	int16_t x232 = 476;

	t51 = (((x229|x230)^x231)-x232);

	if (t51 != 18446744071562067491LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = -10;
	int8_t x235 = -1;
	uint16_t x236 = 9U;
	volatile int32_t t52 = -203322;

	t52 = (((x233|x234)^x235)-x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x241 = INT32_MAX;
	int16_t x242 = INT16_MAX;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 562U;
	static int32_t t53 = 3;

	t53 = (((x241|x242)^x243)-x244);

	if (t53 != -2147451443) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = -47640518LL;
	uint16_t x246 = UINT16_MAX;
	static volatile uint32_t x247 = UINT32_MAX;
	uint32_t x248 = UINT32_MAX;

	t54 = (((x245|x246)^x247)-x248);

	if (t54 != -8542355455LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = -1LL;
	int32_t x250 = INT32_MIN;
	static int64_t x252 = -60299820489LL;
	volatile int64_t t55 = 30LL;

	t55 = (((x249|x250)^x251)-x252);

	if (t55 != 60299820479LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x253 = 9U;
	uint8_t x254 = UINT8_MAX;
	uint16_t x255 = 7942U;
	int32_t t56 = -1000;

	t56 = (((x253|x254)^x255)-x256);

	if (t56 != 8184) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MAX;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t57 = 7;

	t57 = (((x257|x258)^x259)-x260);

	if (t57 != 2147451007) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = -1;
	uint16_t x263 = UINT16_MAX;
	static int32_t t58 = 1993109;

	t58 = (((x261|x262)^x263)-x264);

	if (t58 != 2147418112) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x270 = 1U;
	volatile uint32_t t59 = 1990719U;

	t59 = (((x269|x270)^x271)-x272);

	if (t59 != 4294934527U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = 10;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = INT8_MIN;
	int32_t x276 = 84302;

	t60 = (((x273|x274)^x275)-x276);

	if (t60 != 18446744073709467441LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = 161093972183407993LL;
	int32_t x278 = INT32_MAX;
	int64_t t61 = 65024189122901LL;

	t61 = (((x277|x278)^x279)-x280);

	if (t61 != 161093973333916813LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x281 = UINT64_MAX;
	static volatile uint32_t x283 = 56U;
	volatile uint64_t t62 = 160LLU;

	t62 = (((x281|x282)^x283)-x284);

	if (t62 != 18446744073709551304LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x286 = UINT32_MAX;
	static uint16_t x287 = 13U;
	int64_t t63 = -7624476240105103LL;

	t63 = (((x285|x286)^x287)-x288);

	if (t63 != 4294967283LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MAX;
	static int16_t x290 = INT16_MIN;
	int16_t x291 = INT16_MAX;
	int8_t x292 = INT8_MIN;

	t64 = (((x289|x290)^x291)-x292);

	if (t64 != -32640LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = INT8_MAX;
	uint16_t x298 = 31602U;
	int16_t x299 = -71;

	t65 = (((x297|x298)^x299)-x300);

	if (t65 != 9223372036854744262LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MAX;
	int8_t x303 = -1;
	static int16_t x304 = INT16_MAX;
	int32_t t66 = 4119534;

	t66 = (((x301|x302)^x303)-x304);

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MAX;
	static volatile uint64_t x306 = UINT64_MAX;
	int8_t x307 = -1;
	volatile uint16_t x308 = UINT16_MAX;
	volatile uint64_t t67 = 61543334719416499LLU;

	t67 = (((x305|x306)^x307)-x308);

	if (t67 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = -1;
	volatile uint32_t x314 = UINT32_MAX;
	uint8_t x315 = UINT8_MAX;
	int16_t x316 = 0;
	volatile uint32_t t68 = 45768U;

	t68 = (((x313|x314)^x315)-x316);

	if (t68 != 4294967040U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	uint64_t t69 = 178260704LLU;

	t69 = (((x317|x318)^x319)-x320);

	if (t69 != 32766LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x321 = -1;
	uint32_t x323 = 734507U;
	uint64_t x324 = 881549859911868LLU;
	uint64_t t70 = 1216LLU;

	t70 = (((x321|x322)^x323)-x324);

	if (t70 != 18445862528143872536LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x325 = -3791;
	int32_t x326 = -194292861;
	volatile int32_t t71 = 763621652;

	t71 = (((x325|x326)^x327)-x328);

	if (t71 != -3144) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = INT32_MIN;
	static uint32_t x330 = 7580883U;
	int64_t x331 = INT64_MAX;
	volatile uint64_t x332 = 235373LLU;
	volatile uint64_t t72 = 25650645496284855LLU;

	t72 = (((x329|x330)^x331)-x332);

	if (t72 != 9223372034699475903LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x334 = -1LL;
	static uint32_t x336 = UINT32_MAX;
	volatile int64_t t73 = 61323256LL;

	t73 = (((x333|x334)^x335)-x336);

	if (t73 != -4294967296LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = -240256011163748323LL;
	uint32_t x338 = UINT32_MAX;
	volatile int32_t x339 = INT32_MIN;
	volatile int64_t t74 = -528LL;

	t74 = (((x337|x338)^x339)-x340);

	if (t74 != 240256010214703142LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = 16082;
	volatile int64_t x342 = -100979037461LL;
	uint32_t x343 = 26400932U;
	uint64_t x344 = 2553574985230097LLU;
	uint64_t t75 = 135768891701LLU;

	t75 = (((x341|x342)^x343)-x344);

	if (t75 != 18444190397737860942LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x345 = 11U;
	static int32_t x346 = INT32_MAX;
	int64_t x347 = -1LL;
	int16_t x348 = INT16_MAX;
	static volatile int64_t t76 = 4736906LL;

	t76 = (((x345|x346)^x347)-x348);

	if (t76 != -2147516415LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = -1;
	int8_t x356 = -9;
	int32_t t77 = 107282;

	t77 = (((x353|x354)^x355)-x356);

	if (t77 != -12) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = -3434;
	int16_t x358 = -20;
	int32_t x359 = -93679842;
	uint64_t x360 = 13LLU;
	static volatile uint64_t t78 = 327145816LLU;

	t78 = (((x357|x358)^x359)-x360);

	if (t78 != 93679827LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = -1LL;
	uint16_t x362 = 7U;
	static int8_t x363 = INT8_MAX;
	int64_t x364 = 2715722LL;

	t79 = (((x361|x362)^x363)-x364);

	if (t79 != -2715850LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x374 = INT16_MIN;
	int16_t x375 = 0;
	volatile uint8_t x376 = UINT8_MAX;

	t80 = (((x373|x374)^x375)-x376);

	if (t80 != -33023) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x377 = UINT64_MAX;
	uint64_t x378 = 58664064LLU;
	uint8_t x379 = 1U;
	uint16_t x380 = 122U;
	uint64_t t81 = 11LLU;

	t81 = (((x377|x378)^x379)-x380);

	if (t81 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x381 = 26U;
	int64_t x382 = -2LL;
	static volatile uint8_t x383 = UINT8_MAX;
	uint16_t x384 = 1U;
	volatile int64_t t82 = 1011619470399056986LL;

	t82 = (((x381|x382)^x383)-x384);

	if (t82 != -256LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x385 = 222689LLU;
	static volatile int32_t x386 = 8079484;
	volatile uint16_t x388 = 123U;
	uint64_t t83 = 0LLU;

	t83 = (((x385|x386)^x387)-x388);

	if (t83 != 18446744071570156930LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x389 = INT32_MIN;
	static volatile int64_t t84 = 117630451498317LL;

	t84 = (((x389|x390)^x391)-x392);

	if (t84 != -1908363962858136LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x393 = 33;
	uint64_t x394 = 1642241723572LLU;
	static uint16_t x395 = 7U;
	int32_t x396 = -1;
	uint64_t t85 = 3809382297422254LLU;

	t85 = (((x393|x394)^x395)-x396);

	if (t85 != 1642241723571LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x399 = -61;
	int8_t x400 = -27;
	volatile int32_t t86 = 1;

	t86 = (((x397|x398)^x399)-x400);

	if (t86 != 87) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x402 = -3;
	uint64_t t87 = 220685LLU;

	t87 = (((x401|x402)^x403)-x404);

	if (t87 != 18446743606276485850LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x406 = 104;
	int64_t x407 = INT64_MIN;
	int16_t x408 = 0;
	int64_t t88 = 43308LL;

	t88 = (((x405|x406)^x407)-x408);

	if (t88 != -9223372036854775702LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x411 = INT64_MAX;
	static int64_t x412 = INT64_MAX;
	volatile int64_t t89 = 807094185759012372LL;

	t89 = (((x409|x410)^x411)-x412);

	if (t89 != -1311559LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x413 = -1;
	int8_t x414 = -15;
	int16_t x415 = INT16_MAX;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t90 = 2;

	t90 = (((x413|x414)^x415)-x416);

	if (t90 != -98303) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x417 = 63U;
	int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	int32_t t91 = -476758;

	t91 = (((x417|x418)^x419)-x420);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x421 = INT8_MAX;
	uint8_t x422 = UINT8_MAX;
	int32_t x424 = -1;
	static int32_t t92 = 1;

	t92 = (((x421|x422)^x423)-x424);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x425 = INT16_MIN;
	volatile uint64_t x427 = 1065915931426LLU;
	static volatile int8_t x428 = INT8_MIN;
	uint64_t t93 = 262100114756511LLU;

	t93 = (((x425|x426)^x427)-x428);

	if (t93 != 18446743007793633940LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x429 = 9408;
	static int8_t x431 = -1;
	static uint32_t t94 = 73945U;

	t94 = (((x429|x430)^x431)-x432);

	if (t94 != 4294957873U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x433 = 3U;
	uint32_t x434 = UINT32_MAX;
	int16_t x435 = -1;

	t95 = (((x433|x434)^x435)-x436);

	if (t95 != 128U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = -1006158LL;
	int8_t x438 = 4;
	static uint64_t x440 = UINT64_MAX;
	static volatile uint64_t t96 = 3LLU;

	t96 = (((x437|x438)^x439)-x440);

	if (t96 != 18446744073708526154LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = INT16_MIN;
	int32_t x443 = INT32_MIN;
	static volatile uint64_t t97 = 60LLU;

	t97 = (((x441|x442)^x443)-x444);

	if (t97 != 2147450888LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = -1LL;
	static volatile int16_t x446 = INT16_MIN;
	int16_t x448 = 1011;
	int64_t t98 = -527002074402LL;

	t98 = (((x445|x446)^x447)-x448);

	if (t98 != -12194LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x451 = UINT8_MAX;
	int64_t t99 = -306124672LL;

	t99 = (((x449|x450)^x451)-x452);

	if (t99 != -32513LL) { NG(); } else { ; }
	
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

