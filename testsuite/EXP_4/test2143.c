#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
static volatile uint32_t x3 = UINT32_MAX;
static int16_t x13 = 24;
static uint64_t x15 = 1828LLU;
uint16_t x17 = 8U;
static int16_t x19 = INT16_MAX;
uint64_t x20 = 2465480899LLU;
uint64_t x21 = 300675512LLU;
int16_t x24 = 14355;
static int16_t x39 = 38;
volatile int32_t t10 = -979546;
static volatile uint32_t x55 = UINT32_MAX;
uint8_t x56 = 22U;
volatile int16_t x59 = INT16_MIN;
static int64_t x61 = 89501722LL;
volatile int64_t t15 = -348677647157745LL;
static int32_t x65 = -1;
int16_t x67 = INT16_MIN;
volatile int32_t t16 = -2029;
static uint8_t x71 = 46U;
int16_t x80 = -1;
volatile int32_t t19 = -76877;
static volatile int64_t x83 = 1226LL;
static int32_t t20 = -3;
int8_t x91 = -1;
int64_t x92 = -6755821442434LL;
volatile int64_t x93 = 13541120839856776LL;
volatile int64_t t23 = -2102LL;
int8_t x99 = INT8_MIN;
volatile int32_t t25 = 12935632;
int32_t x108 = -1;
volatile int32_t t26 = -14395078;
uint64_t x109 = 130347563826LLU;
uint16_t x115 = 461U;
static int64_t x120 = INT64_MAX;
uint64_t x121 = UINT64_MAX;
volatile uint32_t x125 = 319612641U;
volatile int64_t x126 = -1LL;
static uint32_t x129 = 33245169U;
int64_t x130 = INT64_MIN;
int16_t x133 = INT16_MIN;
static volatile int32_t t33 = -14432226;
static volatile int16_t x138 = INT16_MIN;
volatile int32_t t34 = -484808724;
int64_t t35 = 118969815117658LL;
uint32_t x145 = 60U;
int8_t x146 = INT8_MIN;
int8_t x149 = INT8_MIN;
static int16_t x154 = INT16_MIN;
int32_t t38 = -81777;
static volatile uint64_t t39 = 7594773384830LLU;
volatile int32_t t40 = 17015203;
int8_t x177 = INT8_MIN;
volatile int64_t x178 = -8149517856LL;
int16_t x183 = -1;
volatile int32_t t45 = 6238;
int8_t x186 = 13;
uint16_t x187 = UINT16_MAX;
volatile uint32_t x189 = 3906566U;
uint8_t x191 = 7U;
volatile int32_t x195 = -44631;
uint64_t x202 = UINT64_MAX;
static uint64_t x208 = 8895569161906LLU;
volatile int32_t t51 = 140;
static int8_t x210 = INT8_MIN;
uint16_t x213 = 163U;
static int32_t x222 = INT32_MAX;
uint32_t x223 = UINT32_MAX;
volatile uint8_t x227 = 30U;
int32_t x228 = INT32_MAX;
int16_t x231 = 7612;
int32_t t57 = -12;
int8_t x234 = 0;
static int8_t x244 = 2;
uint64_t x247 = 3650150071987540378LLU;
static uint8_t x252 = 15U;
int8_t x253 = INT8_MIN;
volatile int32_t t63 = -4697735;
int16_t x257 = INT16_MIN;
uint64_t x259 = UINT64_MAX;
uint64_t x260 = 710587598LLU;
volatile int32_t t64 = 844;
int8_t x272 = -1;
uint16_t x273 = 221U;
int16_t x276 = INT16_MIN;
int32_t t68 = -264942495;
int64_t x281 = INT64_MAX;
volatile int8_t x291 = -1;
static uint8_t x295 = UINT8_MAX;
int64_t x296 = -210187821287641LL;
static int32_t x309 = -1;
static uint64_t x318 = UINT64_MAX;
uint64_t x322 = UINT64_MAX;
int32_t x336 = -323994094;
uint64_t t85 = 4041609500550008LLU;
int16_t x348 = INT16_MIN;
uint8_t x349 = 3U;
int64_t x351 = INT64_MIN;
uint64_t x353 = UINT64_MAX;
volatile int32_t x354 = INT32_MIN;
static volatile int32_t x356 = -1;
int8_t x360 = -2;
uint64_t x362 = UINT64_MAX;
uint8_t x364 = 3U;
static int32_t t91 = 163;
uint64_t x371 = 866507LLU;
int64_t t92 = -1919222292848LL;
static volatile int32_t x373 = INT32_MAX;
uint16_t x383 = 6161U;
int8_t x388 = -6;
int32_t t96 = -23980485;
int64_t x395 = 132147203LL;
int8_t x397 = -1;
int8_t x399 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x4 = 279;
	int32_t t0 = -7;

	t0 = (x1&(x2<(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	static uint8_t x6 = UINT8_MAX;
	volatile int32_t x7 = -110032751;
	static uint8_t x8 = 0U;
	static int32_t t1 = -1;

	t1 = (x5&(x6<(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int64_t x10 = -544LL;
	uint32_t x11 = 24U;
	volatile uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = -3148402;

	t2 = (x9&(x10<(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x14 = INT32_MAX;
	int8_t x16 = -1;
	int32_t t3 = -37826;

	t3 = (x13&(x14<(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int32_t t4 = -2614;

	t4 = (x17&(x18<(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x22 = UINT16_MAX;
	int32_t x23 = -1;
	uint64_t t5 = 45LLU;

	t5 = (x21&(x22<(x23^x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 29850U;
	int32_t x26 = INT32_MIN;
	uint8_t x27 = 53U;
	static uint8_t x28 = 1U;
	volatile int32_t t6 = -1147;

	t6 = (x25&(x26<(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int64_t x30 = -1LL;
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = 11;
	int32_t t7 = 4798;

	t7 = (x29&(x30<(x31^x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint8_t x34 = 1U;
	static volatile uint8_t x35 = 1U;
	static volatile int64_t x36 = 0LL;
	static volatile int32_t t8 = -34699836;

	t8 = (x33&(x34<(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = 923234123191759930LL;
	volatile int32_t x38 = -79520168;
	int32_t x40 = INT32_MIN;
	static volatile int64_t t9 = 4061171435026680LL;

	t9 = (x37&(x38<(x39^x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int32_t x42 = 86567;
	static uint8_t x43 = 4U;
	static int8_t x44 = -1;

	t10 = (x41&(x42<(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint16_t x46 = 1195U;
	int32_t x47 = -1678;
	int16_t x48 = INT16_MIN;
	int64_t t11 = 2253996711004805190LL;

	t11 = (x45&(x46<(x47^x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MIN;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = -73546;

	t12 = (x49&(x50<(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 83875055LLU;
	uint32_t x54 = 675U;
	static volatile uint64_t t13 = 10339041783824687LLU;

	t13 = (x53&(x54<(x55^x56)));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -56;
	uint8_t x58 = 53U;
	int32_t x60 = -1;
	int32_t t14 = 167845399;

	t14 = (x57&(x58<(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	static volatile uint64_t x63 = 15086850958444LLU;
	uint32_t x64 = UINT32_MAX;

	t15 = (x61&(x62<(x63^x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 2705;
	static volatile uint8_t x68 = 0U;

	t16 = (x65&(x66<(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 15712594U;
	int64_t x70 = INT64_MIN;
	volatile int16_t x72 = INT16_MAX;
	uint32_t t17 = 3606433U;

	t17 = (x69&(x70<(x71^x72)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 7;
	uint8_t x74 = 66U;
	int32_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = -9;

	t18 = (x73&(x74<(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = INT8_MIN;
	int64_t x78 = -1LL;
	uint64_t x79 = 1LLU;

	t19 = (x77&(x78<(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	uint32_t x82 = 198U;
	int32_t x84 = INT32_MIN;

	t20 = (x81&(x82<(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 13U;
	static int16_t x86 = 1619;
	uint32_t x87 = 1647433U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -3157;

	t21 = (x85&(x86<(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = 1;
	uint32_t x90 = 1066808889U;
	int32_t t22 = 1113944;

	t22 = (x89&(x90<(x91^x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x94 = 1;
	volatile uint32_t x95 = UINT32_MAX;
	uint64_t x96 = 3914LLU;

	t23 = (x93&(x94<(x95^x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	volatile uint32_t x98 = UINT32_MAX;
	int64_t x100 = 289842048790383926LL;
	volatile int32_t t24 = -937332;

	t24 = (x97&(x98<(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 27U;
	uint32_t x104 = 237179100U;

	t25 = (x101&(x102<(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 20642U;
	uint8_t x106 = 7U;
	int16_t x107 = -1;

	t26 = (x105&(x106<(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	int16_t x111 = -167;
	uint8_t x112 = UINT8_MAX;
	volatile uint64_t t27 = 62094333LLU;

	t27 = (x109&(x110<(x111^x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	static volatile int32_t x114 = -14623;
	static int64_t x116 = 42609486939308LL;
	int64_t t28 = -1620LL;

	t28 = (x113&(x114<(x115^x116)));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 1898U;
	int8_t x118 = -1;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t t29 = 104151091;

	t29 = (x117&(x118<(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = UINT64_MAX;
	static uint32_t x123 = 9U;
	int64_t x124 = INT64_MIN;
	uint64_t t30 = 0LLU;

	t30 = (x121&(x122<(x123^x124)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x127 = INT64_MIN;
	uint8_t x128 = 2U;
	volatile uint32_t t31 = 11875U;

	t31 = (x125&(x126<(x127^x128)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x131 = 520;
	uint8_t x132 = 40U;
	uint32_t t32 = 274537U;

	t32 = (x129&(x130<(x131^x132)));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MIN;
	static uint32_t x135 = UINT32_MAX;
	uint64_t x136 = UINT64_MAX;

	t33 = (x133&(x134<(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	volatile int64_t x139 = 12483LL;
	uint64_t x140 = 3831277LLU;

	t34 = (x137&(x138<(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -6LL;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	int32_t x144 = -1;

	t35 = (x141&(x142<(x143^x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x147 = -1;
	uint16_t x148 = 1887U;
	uint32_t t36 = 56266U;

	t36 = (x145&(x146<(x147^x148)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 3U;
	static int8_t x151 = 0;
	volatile int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 0;

	t37 = (x149&(x150<(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	volatile int8_t x155 = -1;
	static int16_t x156 = 26;

	t38 = (x153&(x154<(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x157 = 3LLU;
	int8_t x158 = INT8_MAX;
	static int16_t x159 = -1;
	static uint16_t x160 = UINT16_MAX;

	t39 = (x157&(x158<(x159^x160)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint64_t x162 = UINT64_MAX;
	uint32_t x163 = 4U;
	int8_t x164 = -1;

	t40 = (x161&(x162<(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	int16_t x166 = 2667;
	uint8_t x167 = UINT8_MAX;
	static uint16_t x168 = 3U;
	int32_t t41 = -1;

	t41 = (x165&(x166<(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 23U;
	int64_t x170 = INT64_MAX;
	int64_t x171 = INT64_MAX;
	int8_t x172 = -6;
	volatile int32_t t42 = 23;

	t42 = (x169&(x170<(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	uint64_t x174 = 1698167498974LLU;
	int8_t x175 = INT8_MIN;
	volatile uint32_t x176 = 17749U;
	static volatile int32_t t43 = -61188;

	t43 = (x173&(x174<(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x179 = 217224U;
	static int32_t x180 = -1;
	static int32_t t44 = 6688;

	t44 = (x177&(x178<(x179^x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -1;
	static volatile int32_t x182 = INT32_MIN;
	volatile int16_t x184 = INT16_MIN;

	t45 = (x181&(x182<(x183^x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 20U;
	int16_t x188 = INT16_MIN;
	uint32_t t46 = 65123675U;

	t46 = (x185&(x186<(x187^x188)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MAX;
	int16_t x192 = 0;
	uint32_t t47 = 352483U;

	t47 = (x189&(x190<(x191^x192)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 16U;
	volatile int64_t x194 = INT64_MIN;
	int64_t x196 = -1LL;
	volatile int32_t t48 = -753769144;

	t48 = (x193&(x194<(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = -1;
	volatile int8_t x199 = -1;
	int64_t x200 = INT64_MAX;
	volatile int32_t t49 = -366766962;

	t49 = (x197&(x198<(x199^x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	volatile uint32_t x203 = 457U;
	int32_t x204 = INT32_MIN;
	uint32_t t50 = 62790481U;

	t50 = (x201&(x202<(x203^x204)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1;
	int64_t x206 = INT64_MIN;
	static int64_t x207 = 21836437519137LL;

	t51 = (x205&(x206<(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	static int16_t x211 = INT16_MAX;
	uint8_t x212 = UINT8_MAX;
	int32_t t52 = 856;

	t52 = (x209&(x210<(x211^x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = UINT8_MAX;
	int8_t x215 = -1;
	volatile uint8_t x216 = 23U;
	volatile int32_t t53 = -92209042;

	t53 = (x213&(x214<(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile int16_t x218 = 68;
	int16_t x219 = -4176;
	static int8_t x220 = -59;
	volatile int32_t t54 = 10634;

	t54 = (x217&(x218<(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = 66;
	int32_t x224 = INT32_MIN;
	static int32_t t55 = -51465802;

	t55 = (x221&(x222<(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	int32_t t56 = -137183990;

	t56 = (x225&(x226<(x227^x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = -1;
	int32_t x232 = -21275617;

	t57 = (x229&(x230<(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MIN;
	static int32_t t58 = -46849994;

	t58 = (x233&(x234<(x235^x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 5976816;
	uint32_t x238 = 70676634U;
	static uint32_t x239 = 1U;
	static volatile uint8_t x240 = 31U;
	volatile int32_t t59 = 330410;

	t59 = (x237&(x238<(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MIN;
	volatile int8_t x243 = INT8_MAX;
	volatile int64_t t60 = -514821478232488449LL;

	t60 = (x241&(x242<(x243^x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MAX;
	uint8_t x246 = 21U;
	int16_t x248 = INT16_MIN;
	static int32_t t61 = 494;

	t61 = (x245&(x246<(x247^x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = -1;
	volatile uint16_t x251 = UINT16_MAX;
	volatile int32_t t62 = 6;

	t62 = (x249&(x250<(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x254 = 7U;
	volatile int8_t x255 = -1;
	int32_t x256 = 32289;

	t63 = (x253&(x254<(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x258 = INT16_MIN;

	t64 = (x257&(x258<(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int8_t x262 = INT8_MIN;
	static uint32_t x263 = UINT32_MAX;
	static int32_t x264 = 0;
	int64_t t65 = 15788941883977397LL;

	t65 = (x261&(x262<(x263^x264)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -186;
	static uint16_t x266 = 20U;
	int32_t x267 = -29102;
	volatile uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = -5613116;

	t66 = (x265&(x266<(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 387U;
	static int64_t x270 = -1LL;
	int64_t x271 = INT64_MAX;
	uint32_t t67 = 1266U;

	t67 = (x269&(x270<(x271^x272)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x274 = 194U;
	int64_t x275 = -132722854847LL;

	t68 = (x273&(x274<(x275^x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = 0;
	uint8_t x279 = 1U;
	volatile int8_t x280 = -4;
	volatile int32_t t69 = 68687;

	t69 = (x277&(x278<(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = INT32_MIN;
	uint8_t x283 = 81U;
	uint32_t x284 = 414806U;
	volatile int64_t t70 = 4LL;

	t70 = (x281&(x282<(x283^x284)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 265231148LLU;
	uint8_t x286 = 79U;
	uint64_t x287 = UINT64_MAX;
	uint32_t x288 = 6542U;
	static volatile uint64_t t71 = 3371671635LLU;

	t71 = (x285&(x286<(x287^x288)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = 1301427831LLU;
	uint64_t x290 = UINT64_MAX;
	uint32_t x292 = 544583674U;
	volatile uint64_t t72 = 5221LLU;

	t72 = (x289&(x290<(x291^x292)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	static volatile int32_t x294 = INT32_MAX;
	int32_t t73 = 17;

	t73 = (x293&(x294<(x295^x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	volatile uint8_t x298 = 51U;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = 31555U;
	volatile int32_t t74 = 20288;

	t74 = (x297&(x298<(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	static uint8_t x302 = 6U;
	volatile int8_t x303 = 0;
	int64_t x304 = -1LL;
	int32_t t75 = -782456274;

	t75 = (x301&(x302<(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x305 = -1;
	int64_t x306 = -1LL;
	int16_t x307 = INT16_MIN;
	volatile int32_t x308 = 9;
	volatile int32_t t76 = -2;

	t76 = (x305&(x306<(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 553624U;
	uint64_t x311 = 0LLU;
	int16_t x312 = -2;
	volatile int32_t t77 = 276;

	t77 = (x309&(x310<(x311^x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	static int16_t x314 = 887;
	int8_t x315 = INT8_MIN;
	volatile int32_t x316 = INT32_MAX;
	int32_t t78 = -9160;

	t78 = (x313&(x314<(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int32_t x319 = -270;
	int32_t x320 = INT32_MAX;
	static int32_t t79 = -16050180;

	t79 = (x317&(x318<(x319^x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 63;
	static uint32_t x323 = 16577661U;
	int16_t x324 = -12428;
	int32_t t80 = -48200099;

	t80 = (x321&(x322<(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 6;
	uint16_t x326 = 53U;
	int16_t x327 = INT16_MIN;
	static volatile uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = 918;

	t81 = (x325&(x326<(x327^x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x329 = 616036415426074LL;
	int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MIN;
	static volatile int16_t x332 = INT16_MIN;
	static int64_t t82 = 227267798845444779LL;

	t82 = (x329&(x330<(x331^x332)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 26134U;
	int32_t x334 = INT32_MAX;
	int64_t x335 = -1553055543610883429LL;
	int32_t t83 = -380976421;

	t83 = (x333&(x334<(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = 455074433;
	static uint32_t x339 = 23U;
	uint8_t x340 = 0U;
	int32_t t84 = -449;

	t84 = (x337&(x338<(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 211714065288LLU;
	int32_t x342 = -596302;
	int64_t x343 = INT64_MIN;
	volatile int32_t x344 = -465627;

	t85 = (x341&(x342<(x343^x344)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -1;
	int64_t x346 = -3LL;
	static uint8_t x347 = UINT8_MAX;
	volatile int32_t t86 = -13;

	t86 = (x345&(x346<(x347^x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x350 = 24421081U;
	int16_t x352 = 0;
	volatile int32_t t87 = 10198;

	t87 = (x349&(x350<(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x355 = -8;
	uint64_t t88 = 16493724351LLU;

	t88 = (x353&(x354<(x355^x356)));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	static uint32_t x358 = UINT32_MAX;
	int32_t x359 = INT32_MIN;
	static volatile int32_t t89 = -25583;

	t89 = (x357&(x358<(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 1U;
	static uint16_t x363 = 7708U;
	int32_t t90 = 22;

	t90 = (x361&(x362<(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MIN;
	volatile int16_t x366 = -5;
	static int64_t x367 = INT64_MIN;
	volatile uint8_t x368 = UINT8_MAX;

	t91 = (x365&(x366<(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = -447LL;
	static int16_t x370 = INT16_MIN;
	uint8_t x372 = 0U;

	t92 = (x369&(x370<(x371^x372)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x374 = INT8_MIN;
	static uint16_t x375 = UINT16_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -55556;

	t93 = (x373&(x374<(x375^x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	static uint64_t x378 = UINT64_MAX;
	int32_t x379 = 0;
	static volatile int32_t x380 = INT32_MIN;
	int64_t t94 = -12629LL;

	t94 = (x377&(x378<(x379^x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = -1;
	int16_t x382 = 10416;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 61297;

	t95 = (x381&(x382<(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = 2U;
	int32_t x386 = -494834785;
	uint8_t x387 = 21U;

	t96 = (x385&(x386<(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	uint8_t x390 = 3U;
	int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = -1308945;

	t97 = (x389&(x390<(x391^x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int16_t x394 = -1;
	static uint64_t x396 = 34LLU;
	int32_t t98 = 366;

	t98 = (x393&(x394<(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = 257770;
	int64_t x400 = -332638204826029LL;
	int32_t t99 = 76;

	t99 = (x397&(x398<(x399^x400)));

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

