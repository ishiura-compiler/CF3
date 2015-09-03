#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
static uint32_t t0 = 61U;
int64_t x6 = 57368601797466LL;
static uint32_t x11 = 103552U;
static uint32_t x12 = UINT32_MAX;
int64_t x13 = -1LL;
uint16_t x19 = 95U;
uint16_t x21 = 37U;
uint32_t x26 = UINT32_MAX;
uint32_t x34 = 17761U;
int16_t x35 = INT16_MAX;
volatile int16_t x39 = INT16_MIN;
int8_t x41 = INT8_MAX;
volatile int64_t t10 = 267972649255LL;
static uint8_t x61 = 7U;
static uint32_t x72 = 1U;
volatile int64_t t17 = -1352412LL;
int16_t x73 = INT16_MIN;
static int16_t x82 = INT16_MIN;
int64_t x83 = INT64_MIN;
volatile int32_t t21 = 463561616;
volatile int64_t t22 = 691531133LL;
uint8_t x101 = UINT8_MAX;
int16_t x105 = 314;
int8_t x113 = -1;
static uint32_t x115 = 0U;
static uint16_t x129 = 12869U;
int64_t x131 = INT64_MAX;
int8_t x135 = INT8_MAX;
volatile int64_t t32 = -40182997231LL;
int8_t x142 = INT8_MAX;
int64_t x144 = 203022LL;
int32_t x156 = INT32_MIN;
uint16_t x168 = 11U;
uint64_t t40 = 433118321LLU;
int64_t x185 = -1LL;
int16_t x188 = -116;
int64_t t44 = 1LL;
volatile uint32_t x191 = 56U;
uint64_t t47 = 78289LLU;
uint32_t x204 = 69312U;
uint64_t x214 = 2677LLU;
volatile uint32_t t53 = 8693U;
uint16_t x227 = UINT16_MAX;
int64_t t54 = 117053954674LL;
volatile int64_t x236 = 357LL;
uint64_t x243 = 772920853969541LLU;
int64_t x246 = INT64_MIN;
int64_t x250 = -30645993LL;
volatile uint16_t x255 = 3U;
static volatile uint32_t t62 = 167U;
int8_t x267 = 7;
int64_t x268 = -1LL;
volatile int64_t t64 = 3616LL;
volatile int8_t x269 = -3;
volatile int8_t x273 = 40;
int32_t x281 = -1945045;
uint16_t x285 = UINT16_MAX;
uint8_t x286 = 51U;
uint32_t x288 = UINT32_MAX;
static uint64_t x291 = UINT64_MAX;
int64_t x300 = INT64_MIN;
int64_t x316 = INT64_MAX;
static int16_t x317 = INT16_MIN;
int32_t x319 = INT32_MAX;
int64_t t76 = -1841506711111161LL;
volatile int8_t x325 = -9;
int8_t x329 = -1;
uint8_t x333 = UINT8_MAX;
int64_t x334 = 4667039387311986LL;
static uint8_t x335 = 0U;
int16_t x339 = INT16_MAX;
int8_t x341 = INT8_MIN;
static uint32_t t81 = 729U;
static volatile int64_t t82 = -135572644216026LL;
int64_t x353 = -1LL;
static int32_t x354 = 32221304;
volatile int32_t x357 = -1;
static int64_t x358 = -1LL;
int64_t t86 = 1586736407246181LL;
int8_t x365 = 1;
volatile int64_t t89 = -15405LL;
volatile int16_t x392 = INT16_MIN;
int32_t x409 = INT32_MIN;


void f0(void) {
	uint16_t x1 = 4844U;
	int8_t x2 = -1;
	uint16_t x3 = 25U;

	t0 = (x1&(x2%(x3^x4)));

	if (t0 != 8U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	int16_t x7 = 1;
	int32_t x8 = INT32_MIN;
	int64_t t1 = -195168893340LL;

	t1 = (x5&(x6%(x7^x8)));

	if (t1 != 180LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int16_t x10 = 1;
	uint32_t t2 = 1U;

	t2 = (x9&(x10%(x11^x12)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	int64_t x15 = INT64_MAX;
	int16_t x16 = -1;
	volatile int64_t t3 = 39982974009LL;

	t3 = (x13&(x14%(x15^x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x18 = INT32_MIN;
	static uint32_t x20 = 152466U;
	uint32_t t4 = 9859U;

	t4 = (x17&(x18%(x19^x20)));

	if (t4 != 205U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 19761901LLU;
	static uint16_t x23 = 29662U;
	int8_t x24 = INT8_MIN;
	volatile uint64_t t5 = 31815263657215211LLU;

	t5 = (x21&(x22%(x23^x24)));

	if (t5 != 37LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 20U;
	uint16_t x27 = 0U;
	uint64_t x28 = 6050441077215018414LLU;
	uint64_t t6 = 15513374300LLU;

	t6 = (x25&(x26%(x27^x28)));

	if (t6 != 20LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -11593763LL;
	int64_t x30 = INT64_MIN;
	int32_t x31 = INT32_MAX;
	static uint16_t x32 = UINT16_MAX;
	int64_t t7 = -200200266LL;

	t7 = (x29&(x30%(x31^x32)));

	if (t7 != -11796480LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	int8_t x36 = INT8_MIN;
	uint32_t t8 = 12213633U;

	t8 = (x33&(x34%(x35^x36)));

	if (t8 != 17761U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 120U;
	static volatile int16_t x38 = -1;
	volatile int32_t x40 = INT32_MAX;
	int32_t t9 = -20;

	t9 = (x37&(x38%(x39^x40)));

	if (t9 != 120) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MIN;
	int64_t x43 = 421013LL;
	int16_t x44 = 4;

	t10 = (x41&(x42%(x43^x44)));

	if (t10 != 44LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	static int16_t x46 = -10;
	uint16_t x47 = 38U;
	static int8_t x48 = INT8_MIN;
	static int32_t t11 = 0;

	t11 = (x45&(x46%(x47^x48)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 80U;
	uint8_t x50 = 37U;
	static int32_t x51 = -1;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = -7;

	t12 = (x49&(x50%(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 44U;
	volatile int8_t x54 = INT8_MIN;
	volatile uint64_t x55 = 390LLU;
	uint32_t x56 = 92U;
	static volatile uint64_t t13 = 10832375151017867LLU;

	t13 = (x53&(x54%(x55^x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int64_t x58 = -1LL;
	int16_t x59 = INT16_MAX;
	int16_t x60 = 1;
	static int64_t t14 = -249916915202618LL;

	t14 = (x57&(x58%(x59^x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = 25;
	int8_t x63 = -8;
	int16_t x64 = 11;
	volatile int32_t t15 = 395;

	t15 = (x61&(x62%(x63^x64)));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -6036183LL;
	static int32_t x66 = -1;
	static int32_t x67 = -24194790;
	int16_t x68 = INT16_MIN;
	volatile int64_t t16 = 1LL;

	t16 = (x65&(x66%(x67^x68)));

	if (t16 != -6036183LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	uint16_t x70 = 852U;
	volatile int64_t x71 = INT64_MIN;

	t17 = (x69&(x70%(x71^x72)));

	if (t17 != 84LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	int64_t x75 = 177LL;
	uint8_t x76 = 23U;
	static int64_t t18 = 2511559LL;

	t18 = (x73&(x74%(x75^x76)));

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = UINT64_MAX;
	static volatile uint8_t x78 = 47U;
	volatile int16_t x79 = INT16_MAX;
	int8_t x80 = -1;
	static volatile uint64_t t19 = 1669231005120069LLU;

	t19 = (x77&(x78%(x79^x80)));

	if (t19 != 47LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int64_t x84 = INT64_MAX;
	static int64_t t20 = 0LL;

	t20 = (x81&(x82%(x83^x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	int16_t x87 = -20;
	volatile int16_t x88 = -244;

	t21 = (x85&(x86%(x87^x88)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MAX;
	volatile int64_t x91 = INT64_MIN;
	static volatile int64_t x92 = 966074LL;

	t22 = (x89&(x90%(x91^x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 81;
	static int8_t x94 = INT8_MAX;
	int16_t x95 = -432;
	volatile int8_t x96 = INT8_MIN;
	int32_t t23 = -7520098;

	t23 = (x93&(x94%(x95^x96)));

	if (t23 != 81) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 19U;
	int16_t x98 = INT16_MAX;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = -1LL;
	int64_t t24 = -2991784301LL;

	t24 = (x97&(x98%(x99^x100)));

	if (t24 != 19LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	static int64_t x104 = INT64_MAX;
	int64_t t25 = 35464LL;

	t25 = (x101&(x102%(x103^x104)));

	if (t25 != 255LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x106 = UINT16_MAX;
	uint16_t x107 = UINT16_MAX;
	uint64_t x108 = 446691524LLU;
	uint64_t t26 = 464LLU;

	t26 = (x105&(x106%(x107^x108)));

	if (t26 != 314LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x114 = UINT8_MAX;
	static int16_t x116 = -1;
	static volatile uint32_t t27 = 23424U;

	t27 = (x113&(x114%(x115^x116)));

	if (t27 != 255U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x117 = 279U;
	volatile int8_t x118 = -1;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = UINT64_MAX;
	uint64_t t28 = 32155LLU;

	t28 = (x117&(x118%(x119^x120)));

	if (t28 != 7LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = 1807064;
	uint64_t x122 = 28836040211329LLU;
	uint8_t x123 = 104U;
	uint8_t x124 = 23U;
	volatile uint64_t t29 = 31497686332139LLU;

	t29 = (x121&(x122%(x123^x124)));

	if (t29 != 72LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x125 = 1754626802789205561LLU;
	int8_t x126 = -1;
	static int16_t x127 = -1;
	volatile uint16_t x128 = 1U;
	uint64_t t30 = 4678LLU;

	t30 = (x125&(x126%(x127^x128)));

	if (t30 != 1754626802789205561LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x130 = UINT16_MAX;
	static uint32_t x132 = 48552U;
	volatile int64_t t31 = 428413660932LL;

	t31 = (x129&(x130%(x131^x132)));

	if (t31 != 12869LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -217;
	volatile int64_t x134 = -14611909LL;
	int64_t x136 = -17207292803003395LL;

	t32 = (x133&(x134%(x135^x136)));

	if (t32 != -14611933LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = 175;
	static int16_t x139 = 3366;
	int64_t x140 = INT64_MIN;
	volatile int64_t t33 = 1LL;

	t33 = (x137&(x138%(x139^x140)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x141 = 137904076;
	int16_t x143 = INT16_MAX;
	int64_t t34 = -28004685LL;

	t34 = (x141&(x142%(x143^x144)));

	if (t34 != 76LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = INT8_MAX;
	int16_t x146 = 3;
	int64_t x147 = -1LL;
	uint8_t x148 = UINT8_MAX;
	volatile int64_t t35 = -734LL;

	t35 = (x145&(x146%(x147^x148)));

	if (t35 != 3LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = 62U;
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	volatile int64_t t36 = 126LL;

	t36 = (x149&(x150%(x151^x152)));

	if (t36 != 62LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = -1;
	static int16_t x154 = -1;
	int32_t x155 = 0;
	static volatile int32_t t37 = 6009876;

	t37 = (x153&(x154%(x155^x156)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = 23724U;
	volatile int8_t x158 = INT8_MIN;
	volatile int32_t x159 = -201573835;
	uint64_t x160 = 3098996236499799499LLU;
	uint64_t t38 = 3LLU;

	t38 = (x157&(x158%(x159^x160)));

	if (t38 != 1152LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MIN;
	volatile int16_t x162 = INT16_MIN;
	int16_t x163 = 717;
	uint64_t x164 = UINT64_MAX;
	uint64_t t39 = 3934LLU;

	t39 = (x161&(x162%(x163^x164)));

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x165 = UINT64_MAX;
	int16_t x166 = 65;
	int16_t x167 = INT16_MIN;

	t40 = (x165&(x166%(x167^x168)));

	if (t40 != 65LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 714U;
	uint32_t x170 = UINT32_MAX;
	volatile uint32_t x171 = UINT32_MAX;
	volatile uint16_t x172 = UINT16_MAX;
	uint32_t t41 = 2580U;

	t41 = (x169&(x170%(x171^x172)));

	if (t41 != 714U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -1;
	int32_t x174 = -1;
	uint32_t x175 = 1949431U;
	volatile uint32_t x176 = 12U;
	static uint32_t t42 = 16336995U;

	t42 = (x173&(x174%(x175^x176)));

	if (t42 != 361990U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = -1;
	uint64_t x182 = 16362647LLU;
	int8_t x183 = 1;
	int16_t x184 = 7099;
	static volatile uint64_t t43 = 32020LLU;

	t43 = (x181&(x182%(x183^x184)));

	if (t43 != 1757LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x186 = INT8_MAX;
	int8_t x187 = 20;

	t44 = (x185&(x186%(x187^x188)));

	if (t44 != 23LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x189 = 1;
	uint16_t x190 = UINT16_MAX;
	uint64_t x192 = UINT64_MAX;
	uint64_t t45 = 157LLU;

	t45 = (x189&(x190%(x191^x192)));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = -29;
	volatile int32_t x194 = INT32_MAX;
	int16_t x195 = -1;
	int32_t x196 = INT32_MAX;
	volatile int32_t t46 = -3212155;

	t46 = (x193&(x194%(x195^x196)));

	if (t46 != 2147483619) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x197 = INT8_MIN;
	uint64_t x198 = 3856LLU;
	volatile int16_t x199 = INT16_MAX;
	int64_t x200 = 263135891747290166LL;

	t47 = (x197&(x198%(x199^x200)));

	if (t47 != 3840LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x201 = -4;
	static volatile int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MAX;
	volatile int64_t t48 = -8657323LL;

	t48 = (x201&(x202%(x203^x204)));

	if (t48 != 41540LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x205 = 2U;
	volatile int64_t x206 = 6824885782LL;
	int16_t x207 = -1;
	int64_t x208 = -921691LL;
	int64_t t49 = 1LL;

	t49 = (x205&(x206%(x207^x208)));

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	static int32_t x210 = INT32_MIN;
	int32_t x211 = -2043;
	static uint32_t x212 = 47470U;
	volatile uint32_t t50 = 60934U;

	t50 = (x209&(x210%(x211^x212)));

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MAX;
	volatile int64_t x215 = -1LL;
	int64_t x216 = INT64_MAX;
	volatile uint64_t t51 = 18509920408918271LLU;

	t51 = (x213&(x214%(x215^x216)));

	if (t51 != 2677LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x217 = 5869903803659499504LLU;
	volatile uint8_t x218 = UINT8_MAX;
	int16_t x219 = INT16_MIN;
	int16_t x220 = -16061;
	volatile uint64_t t52 = 1976LLU;

	t52 = (x217&(x218%(x219^x220)));

	if (t52 != 240LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x221 = INT8_MIN;
	volatile uint32_t x222 = 3U;
	uint8_t x223 = 7U;
	uint16_t x224 = UINT16_MAX;

	t53 = (x221&(x222%(x223^x224)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x225 = UINT8_MAX;
	volatile int64_t x226 = -944176298893486145LL;
	int32_t x228 = INT32_MAX;

	t54 = (x225&(x226%(x227^x228)));

	if (t54 != 191LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x229 = 679076289800977974LLU;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = -959366277694608LL;
	int64_t x232 = -41993216472LL;
	volatile uint64_t t55 = 772195666100LLU;

	t55 = (x229&(x230%(x231^x232)));

	if (t55 != 2767863350LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = UINT64_MAX;
	int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	volatile uint64_t t56 = 95277114959800LLU;

	t56 = (x233&(x234%(x235^x236)));

	if (t56 != 18446744073709551259LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -1;
	static int32_t x238 = INT32_MIN;
	volatile int8_t x239 = INT8_MAX;
	static volatile int8_t x240 = INT8_MIN;
	int32_t t57 = 29;

	t57 = (x237&(x238%(x239^x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x241 = -1;
	int8_t x242 = INT8_MIN;
	static int64_t x244 = INT64_MAX;
	volatile uint64_t t58 = 64522422LLU;

	t58 = (x241&(x242%(x243^x244)));

	if (t58 != 1545841707938956LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = -1;
	static int64_t x247 = 502611LL;
	static int8_t x248 = -1;
	volatile int64_t t59 = 1LL;

	t59 = (x245&(x246%(x247^x248)));

	if (t59 != -190352LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x249 = 24711U;
	volatile int64_t x251 = 1756LL;
	int64_t x252 = INT64_MIN;
	volatile int64_t t60 = -4055292259898LL;

	t60 = (x249&(x250%(x251^x252)));

	if (t60 != 24583LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -1;
	uint64_t x254 = 1013791278470LLU;
	uint8_t x256 = 4U;
	uint64_t t61 = 2LLU;

	t61 = (x253&(x254%(x255^x256)));

	if (t61 != 5LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MAX;
	uint32_t x260 = 5358480U;

	t62 = (x257&(x258%(x259^x260)));

	if (t62 != 49U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = 3;
	volatile uint64_t x262 = 81LLU;
	uint8_t x263 = 6U;
	int8_t x264 = INT8_MIN;
	uint64_t t63 = 8186655258LLU;

	t63 = (x261&(x262%(x263^x264)));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x265 = 27441U;
	int64_t x266 = -443407356LL;

	t64 = (x265&(x266%(x267^x268)));

	if (t64 != 27440LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x270 = INT8_MAX;
	int64_t x271 = -1LL;
	uint16_t x272 = 3963U;
	int64_t t65 = 69198987662402LL;

	t65 = (x269&(x270%(x271^x272)));

	if (t65 != 125LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x274 = 8;
	static int32_t x275 = INT32_MIN;
	int64_t x276 = -1LL;
	int64_t t66 = 6LL;

	t66 = (x273&(x274%(x275^x276)));

	if (t66 != 8LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	uint64_t x278 = 728040426323556555LLU;
	int64_t x279 = INT64_MAX;
	volatile int64_t x280 = -263818899605550715LL;
	uint64_t t67 = 18738218763958LLU;

	t67 = (x277&(x278%(x279^x280)));

	if (t67 != 728040426323542016LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x282 = UINT16_MAX;
	volatile uint32_t x283 = 202371718U;
	uint8_t x284 = UINT8_MAX;
	uint32_t t68 = 1941U;

	t68 = (x281&(x282%(x283^x284)));

	if (t68 != 21035U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x287 = UINT16_MAX;
	uint32_t t69 = 1534827U;

	t69 = (x285&(x286%(x287^x288)));

	if (t69 != 51U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x289 = 556120457827597LL;
	volatile int16_t x290 = 1;
	volatile int16_t x292 = INT16_MIN;
	uint64_t t70 = 1735307183LLU;

	t70 = (x289&(x290%(x291^x292)));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 354U;
	static int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int32_t x296 = -1;
	static int32_t t71 = -98160810;

	t71 = (x293&(x294%(x295^x296)));

	if (t71 != 354) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MAX;
	int16_t x298 = -10879;
	int16_t x299 = INT16_MAX;
	volatile int64_t t72 = -1752LL;

	t72 = (x297&(x298%(x299^x300)));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = 9307;
	static int8_t x306 = INT8_MAX;
	uint8_t x307 = UINT8_MAX;
	uint64_t x308 = 23450002LLU;
	static volatile uint64_t t73 = 98320284LLU;

	t73 = (x305&(x306%(x307^x308)));

	if (t73 != 91LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = -1;
	static uint64_t x310 = 4LLU;
	uint64_t x311 = 1587898073438378LLU;
	uint8_t x312 = 1U;
	volatile uint64_t t74 = 37316163154LLU;

	t74 = (x309&(x310%(x311^x312)));

	if (t74 != 4LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = -40859347223307LL;
	static uint8_t x314 = 1U;
	uint16_t x315 = 2U;
	volatile int64_t t75 = 84616LL;

	t75 = (x313&(x314%(x315^x316)));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x318 = INT64_MAX;
	int64_t x320 = INT64_MIN;

	t76 = (x317&(x318%(x319^x320)));

	if (t76 != 2147450880LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x326 = -1;
	uint16_t x327 = 22U;
	int64_t x328 = -1125691619049294LL;
	int64_t t77 = -214740016741232LL;

	t77 = (x325&(x326%(x327^x328)));

	if (t77 != -9LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x330 = -17;
	uint32_t x331 = 185U;
	int64_t x332 = INT64_MIN;
	volatile int64_t t78 = -3983437LL;

	t78 = (x329&(x330%(x331^x332)));

	if (t78 != -17LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x336 = -13055545052881LL;
	int64_t t79 = 2423454802LL;

	t79 = (x333&(x334%(x335^x336)));

	if (t79 != 253LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = -1;
	uint32_t x340 = 103U;
	static uint32_t t80 = 101U;

	t80 = (x337&(x338%(x339^x340)));

	if (t80 != 10496U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x342 = 1787U;
	uint16_t x343 = 9888U;
	volatile uint32_t x344 = UINT32_MAX;

	t81 = (x341&(x342%(x343^x344)));

	if (t81 != 1664U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = -1;
	static uint8_t x346 = UINT8_MAX;
	volatile uint32_t x347 = 110921719U;
	int64_t x348 = -1817133792LL;

	t82 = (x345&(x346%(x347^x348)));

	if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x349 = -7;
	int16_t x350 = -1;
	uint64_t x351 = 808305LLU;
	int64_t x352 = INT64_MAX;
	volatile uint64_t t83 = 48275260395LLU;

	t83 = (x349&(x350%(x351^x352)));

	if (t83 != 1616609LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x355 = UINT16_MAX;
	int8_t x356 = INT8_MAX;
	int64_t t84 = -395705094547144LL;

	t84 = (x353&(x354%(x355^x356)));

	if (t84 != 40568LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x359 = 287U;
	int8_t x360 = INT8_MAX;
	volatile int64_t t85 = -6733635LL;

	t85 = (x357&(x358%(x359^x360)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = INT64_MIN;
	volatile uint16_t x362 = 10U;
	static int8_t x363 = INT8_MIN;
	static uint8_t x364 = 9U;

	t86 = (x361&(x362%(x363^x364)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x366 = 5927U;
	int16_t x367 = INT16_MIN;
	int16_t x368 = -1;
	int32_t t87 = 56868;

	t87 = (x365&(x366%(x367^x368)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x369 = UINT8_MAX;
	static int32_t x370 = 1586;
	uint32_t x371 = UINT32_MAX;
	static volatile int64_t x372 = -1LL;
	int64_t t88 = 16883953072LL;

	t88 = (x369&(x370%(x371^x372)));

	if (t88 != 50LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x373 = 7503502U;
	int64_t x374 = -205413934070115LL;
	static int32_t x375 = -1;
	int8_t x376 = INT8_MAX;

	t89 = (x373&(x374%(x375^x376)));

	if (t89 != 7503500LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -1;
	int32_t x378 = 37937;
	static uint32_t x379 = 55U;
	volatile int16_t x380 = INT16_MAX;
	volatile uint32_t t90 = 6U;

	t90 = (x377&(x378%(x379^x380)));

	if (t90 != 5225U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x381 = 24U;
	int32_t x382 = INT32_MAX;
	int16_t x383 = -1;
	volatile int32_t x384 = INT32_MIN;
	int32_t t91 = -17;

	t91 = (x381&(x382%(x383^x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x385 = INT16_MIN;
	volatile int16_t x386 = 1;
	static volatile int16_t x387 = INT16_MIN;
	int32_t x388 = 2654124;
	int32_t t92 = -83590;

	t92 = (x385&(x386%(x387^x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = 5041840621LL;
	volatile uint8_t x390 = 2U;
	int32_t x391 = -1;
	static int64_t t93 = 128222840017505034LL;

	t93 = (x389&(x390%(x391^x392)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x393 = 1586U;
	uint8_t x394 = UINT8_MAX;
	static volatile uint16_t x395 = UINT16_MAX;
	uint32_t x396 = 32502441U;
	uint32_t t94 = 3994350U;

	t94 = (x393&(x394%(x395^x396)));

	if (t94 != 50U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = -1;
	volatile int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;
	volatile int32_t t95 = -830;

	t95 = (x397&(x398%(x399^x400)));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x401 = 1982658U;
	int32_t x402 = 1009;
	static int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MIN;
	int64_t t96 = 3130149906605023LL;

	t96 = (x401&(x402%(x403^x404)));

	if (t96 != 192LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	volatile uint64_t x408 = UINT64_MAX;
	uint64_t t97 = 2020LLU;

	t97 = (x405&(x406%(x407^x408)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x410 = INT16_MIN;
	uint64_t x411 = 3335182710579LLU;
	int32_t x412 = 10756961;
	volatile uint64_t t98 = 3417LLU;

	t98 = (x409&(x410%(x411^x412)));

	if (t98 != 2407329169408LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x413 = 1;
	int32_t x414 = -87;
	int8_t x415 = INT8_MAX;
	volatile int64_t x416 = -83672655153LL;
	volatile int64_t t99 = 1613159690918616LL;

	t99 = (x413&(x414%(x415^x416)));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

