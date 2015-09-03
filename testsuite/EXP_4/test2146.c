#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 77U;
volatile uint16_t x6 = UINT16_MAX;
int32_t x7 = INT32_MIN;
int32_t t1 = -118;
static volatile uint64_t x12 = 18277812897LLU;
uint8_t x16 = 0U;
int32_t t3 = 657396133;
static volatile int32_t x19 = -1923908;
int16_t x23 = INT16_MIN;
volatile int32_t t5 = 1;
int16_t x25 = INT16_MAX;
volatile int64_t x28 = -1LL;
int16_t x31 = 4337;
volatile uint16_t x33 = 2U;
int16_t x35 = -1;
uint16_t x40 = 507U;
int64_t x43 = -1LL;
volatile uint64_t x46 = UINT64_MAX;
volatile int64_t t11 = INT64_MIN;
uint64_t x53 = UINT64_MAX;
static int64_t x55 = -1LL;
volatile int32_t t14 = 247239;
int16_t x61 = INT16_MIN;
uint32_t x62 = 518513424U;
static int8_t x68 = 0;
int32_t t16 = -8815;
int32_t x70 = 11;
int64_t x78 = INT64_MIN;
int8_t x80 = INT8_MIN;
volatile int32_t t20 = -53;
static uint64_t x89 = UINT64_MAX;
uint8_t x92 = 1U;
static volatile int16_t x105 = -10815;
volatile int16_t x110 = INT16_MIN;
int32_t x111 = INT32_MIN;
int16_t x113 = -1;
volatile int32_t t28 = -7;
static int32_t x117 = 108771645;
static int32_t t29 = 176780;
static volatile int8_t x126 = -1;
int64_t t31 = -588281LL;
uint64_t x129 = 125098586LLU;
uint64_t t32 = 229008431245747478LLU;
volatile int8_t x136 = INT8_MAX;
volatile int8_t x140 = INT8_MAX;
static volatile int64_t t34 = 23952310781071LL;
int64_t x141 = 7566108LL;
volatile int8_t x149 = -1;
int16_t x150 = -1;
uint32_t x152 = 0U;
int8_t x157 = INT8_MAX;
volatile int8_t x158 = -53;
int64_t x167 = INT64_MIN;
static int32_t x168 = -3;
volatile int32_t t41 = 0;
volatile uint64_t x174 = UINT64_MAX;
static int32_t t43 = -189;
static int64_t x180 = INT64_MIN;
uint64_t x194 = 170334011915LLU;
uint64_t x196 = 4LLU;
volatile int32_t t49 = INT32_MIN;
int32_t x218 = 2126;
uint8_t x223 = 78U;
int8_t x225 = INT8_MAX;
int32_t t56 = -6;
uint16_t x244 = UINT16_MAX;
static volatile uint32_t t60 = 72U;
static volatile uint64_t x253 = UINT64_MAX;
int32_t x256 = -1;
int16_t x259 = INT16_MIN;
int32_t t63 = 967008331;
uint64_t x262 = 5LLU;
static int32_t t64 = 1662;
int16_t x265 = INT16_MAX;
int64_t x267 = INT64_MIN;
volatile int32_t x279 = -1;
static int32_t t70 = INT32_MAX;
int32_t t72 = 11;
volatile int16_t x302 = -1;
uint16_t x307 = UINT16_MAX;
uint32_t x314 = UINT32_MAX;
uint64_t x316 = 68041639000LLU;
uint8_t x320 = 0U;
uint32_t x328 = UINT32_MAX;
volatile int16_t x329 = -1;
uint64_t x333 = UINT64_MAX;
static uint64_t x345 = 4422LLU;
volatile int64_t x350 = INT64_MIN;
int16_t x351 = INT16_MAX;
volatile int32_t t86 = 13636;
static uint64_t x353 = UINT64_MAX;
uint32_t x358 = 3583U;
static volatile int8_t x360 = INT8_MAX;
volatile int32_t t88 = 19812533;
int64_t x369 = INT64_MAX;
uint8_t x374 = 94U;
volatile int32_t t91 = -52;
static int8_t x385 = -1;
volatile int32_t t94 = 456;
static uint8_t x395 = 14U;
uint32_t x401 = 3004U;
int64_t x403 = -152LL;
volatile int8_t x405 = -1;


void f0(void) {
	int8_t x1 = -1;
	uint16_t x2 = 7485U;
	int64_t x3 = 4666544LL;
	int32_t x4 = INT32_MAX;
	static volatile int32_t t0 = -181357298;

	t0 = (x1+(x2<=(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x8 = 2638;

	t1 = (x5+(x6<=(x7^x8)));

	if (t1 != 77) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile uint8_t x10 = UINT8_MAX;
	int16_t x11 = INT16_MIN;
	int64_t t2 = -26932831249208140LL;

	t2 = (x9+(x10<=(x11^x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 1;
	uint16_t x14 = UINT16_MAX;
	static int16_t x15 = -1;

	t3 = (x13+(x14<=(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -738620LL;
	static volatile int64_t x18 = -1LL;
	int64_t x20 = INT64_MIN;
	int64_t t4 = 10449013LL;

	t4 = (x17+(x18<=(x19^x20)));

	if (t4 != -738619LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 4;
	int16_t x22 = -1;
	int8_t x24 = -1;

	t5 = (x21+(x22<=(x23^x24)));

	if (t5 != 5) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MAX;
	volatile int64_t x27 = -703118144510755731LL;
	int32_t t6 = 1045634485;

	t6 = (x25+(x26<=(x27^x28)));

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 212U;
	int8_t x30 = INT8_MAX;
	int32_t x32 = INT32_MIN;
	volatile uint32_t t7 = 1426U;

	t7 = (x29+(x30<=(x31^x32)));

	if (t7 != 212U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 0U;
	volatile uint16_t x36 = 2953U;
	volatile int32_t t8 = -233486;

	t8 = (x33+(x34<=(x35^x36)));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = 20;
	static uint8_t x39 = 1U;
	int32_t t9 = 43;

	t9 = (x37+(x38<=(x39^x40)));

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	uint16_t x42 = 6234U;
	static uint32_t x44 = UINT32_MAX;
	static volatile int32_t t10 = INT32_MAX;

	t10 = (x41+(x42<=(x43^x44)));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	volatile int16_t x48 = INT16_MIN;

	t11 = (x45+(x46<=(x47^x48)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 7U;
	int64_t x51 = -1LL;
	int64_t x52 = INT64_MIN;
	uint32_t t12 = 251346702U;

	t12 = (x49+(x50<=(x51^x52)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = UINT8_MAX;
	volatile int16_t x56 = INT16_MIN;
	volatile uint64_t t13 = 233837687805826765LLU;

	t13 = (x53+(x54<=(x55^x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 28U;
	int32_t x58 = INT32_MAX;
	int16_t x59 = 1;
	int32_t x60 = INT32_MIN;

	t14 = (x57+(x58<=(x59^x60)));

	if (t14 != 28) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x63 = INT16_MAX;
	int64_t x64 = 211081729LL;
	volatile int32_t t15 = -4027979;

	t15 = (x61+(x62<=(x63^x64)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	uint64_t x66 = UINT64_MAX;
	static int16_t x67 = INT16_MAX;

	t16 = (x65+(x66<=(x67^x68)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile uint32_t x71 = 188U;
	uint32_t x72 = 4076U;
	volatile int32_t t17 = 1010002;

	t17 = (x69+(x70<=(x71^x72)));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 18353;
	int64_t x74 = -1LL;
	int16_t x75 = INT16_MIN;
	int32_t x76 = INT32_MIN;
	int32_t t18 = -100;

	t18 = (x73+(x74<=(x75^x76)));

	if (t18 != 18354) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 48905792U;
	int32_t x79 = 54149737;
	uint32_t t19 = 3720U;

	t19 = (x77+(x78<=(x79^x80)));

	if (t19 != 48905793U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -8061;
	int64_t x82 = -1LL;
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MIN;

	t20 = (x81+(x82<=(x83^x84)));

	if (t20 != -8060) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 24U;
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = INT16_MIN;
	int32_t x88 = 617831636;
	int32_t t21 = 6292;

	t21 = (x85+(x86<=(x87^x88)));

	if (t21 != 24) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MAX;
	static uint64_t t22 = 2083156752771LLU;

	t22 = (x89+(x90<=(x91^x92)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	static volatile int32_t x94 = -1;
	int64_t x95 = INT64_MIN;
	int16_t x96 = -919;
	static uint32_t t23 = 7684U;

	t23 = (x93+(x94<=(x95^x96)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint32_t x98 = 34U;
	int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MIN;
	volatile int64_t t24 = INT64_MIN;

	t24 = (x97+(x98<=(x99^x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 110595565342225671LLU;
	uint64_t x102 = 2084320191LLU;
	static int8_t x103 = -1;
	int32_t x104 = INT32_MAX;
	static volatile uint64_t t25 = 7659419340LLU;

	t25 = (x101+(x102<=(x103^x104)));

	if (t25 != 110595565342225672LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = UINT8_MAX;
	uint32_t x107 = 73U;
	static volatile uint32_t x108 = 190877U;
	volatile int32_t t26 = 1;

	t26 = (x105+(x106<=(x107^x108)));

	if (t26 != -10814) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 59069U;
	uint8_t x112 = UINT8_MAX;
	volatile uint32_t t27 = 53922U;

	t27 = (x109+(x110<=(x111^x112)));

	if (t27 != 59069U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 27U;
	int32_t x115 = INT32_MAX;
	volatile int32_t x116 = INT32_MIN;

	t28 = (x113+(x114<=(x115^x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x118 = UINT16_MAX;
	volatile int8_t x119 = 1;
	uint64_t x120 = UINT64_MAX;

	t29 = (x117+(x118<=(x119^x120)));

	if (t29 != 108771646) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = -680;
	uint32_t x123 = UINT32_MAX;
	uint16_t x124 = 0U;
	int32_t t30 = 333056;

	t30 = (x121+(x122<=(x123^x124)));

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 10867LL;
	volatile uint64_t x127 = 18938642588LLU;
	static int32_t x128 = INT32_MIN;

	t31 = (x125+(x126<=(x127^x128)));

	if (t31 != 10867LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x130 = 9U;
	int64_t x131 = -1LL;
	uint16_t x132 = 33U;

	t32 = (x129+(x130<=(x131^x132)));

	if (t32 != 125098586LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	volatile uint16_t x134 = UINT16_MAX;
	int32_t x135 = 0;
	volatile int32_t t33 = 10214;

	t33 = (x133+(x134<=(x135^x136)));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -105383LL;
	static int16_t x138 = INT16_MAX;
	int8_t x139 = -1;

	t34 = (x137+(x138<=(x139^x140)));

	if (t34 != -105383LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = INT64_MAX;
	int8_t x143 = 5;
	uint64_t x144 = 61232322805194LLU;
	volatile int64_t t35 = 1014LL;

	t35 = (x141+(x142<=(x143^x144)));

	if (t35 != 7566108LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 340;
	uint8_t x146 = 5U;
	int64_t x147 = -14004780267142429LL;
	int64_t x148 = INT64_MAX;
	static volatile int32_t t36 = 0;

	t36 = (x145+(x146<=(x147^x148)));

	if (t36 != 340) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x151 = -234530083226162096LL;
	volatile int32_t t37 = 655;

	t37 = (x149+(x150<=(x151^x152)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -1LL;
	static int64_t x154 = -30012888355366LL;
	volatile int32_t x155 = INT32_MIN;
	int8_t x156 = -1;
	int64_t t38 = -1LL;

	t38 = (x153+(x154<=(x155^x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x159 = 4171136754194738LLU;
	volatile uint8_t x160 = 8U;
	int32_t t39 = 54013036;

	t39 = (x157+(x158<=(x159^x160)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = -78410LL;
	volatile uint64_t x163 = 28717144LLU;
	int32_t x164 = -1;
	volatile int64_t t40 = INT64_MIN;

	t40 = (x161+(x162<=(x163^x164)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 13U;
	uint8_t x166 = 1U;

	t41 = (x165+(x166<=(x167^x168)));

	if (t41 != 14) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = 64954026716939134LL;
	uint8_t x171 = UINT8_MAX;
	volatile int64_t x172 = INT64_MIN;
	static int32_t t42 = -52542029;

	t42 = (x169+(x170<=(x171^x172)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int16_t x175 = 152;
	volatile int16_t x176 = INT16_MIN;

	t43 = (x173+(x174<=(x175^x176)));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 6;
	volatile int64_t x178 = -63580822895LL;
	uint8_t x179 = UINT8_MAX;
	static int32_t t44 = 803766;

	t44 = (x177+(x178<=(x179^x180)));

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = 36;
	uint64_t x182 = 62108891563977730LLU;
	int32_t x183 = -1;
	int64_t x184 = INT64_MIN;
	int32_t t45 = 1024;

	t45 = (x181+(x182<=(x183^x184)));

	if (t45 != 37) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	uint32_t x186 = 11U;
	int8_t x187 = INT8_MIN;
	static int8_t x188 = -1;
	uint64_t t46 = 210797792016LLU;

	t46 = (x185+(x186<=(x187^x188)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int8_t x190 = INT8_MAX;
	uint16_t x191 = 321U;
	static uint32_t x192 = 59U;
	volatile int64_t t47 = -1LL;

	t47 = (x189+(x190<=(x191^x192)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 46592U;
	uint32_t x195 = 919U;
	uint32_t t48 = 27974U;

	t48 = (x193+(x194<=(x195^x196)));

	if (t48 != 46592U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	uint16_t x198 = 102U;
	static int32_t x199 = 8;
	static int64_t x200 = -542812092LL;

	t49 = (x197+(x198<=(x199^x200)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MIN;
	static volatile int8_t x204 = INT8_MIN;
	int32_t t50 = 1338123;

	t50 = (x201+(x202<=(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	uint16_t x206 = 231U;
	uint16_t x207 = 15368U;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = (x205+(x206<=(x207^x208)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MIN;
	volatile int8_t x211 = -1;
	int16_t x212 = INT16_MIN;
	volatile uint32_t t52 = 11665953U;

	t52 = (x209+(x210<=(x211^x212)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 3U;
	int16_t x214 = INT16_MAX;
	uint8_t x215 = UINT8_MAX;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = -9326;

	t53 = (x213+(x214<=(x215^x216)));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MAX;
	int16_t x219 = -1;
	int8_t x220 = INT8_MIN;
	volatile int64_t t54 = INT64_MAX;

	t54 = (x217+(x218<=(x219^x220)));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1762203768100LL;
	int64_t x222 = 60617906LL;
	uint16_t x224 = UINT16_MAX;
	static int64_t t55 = 2873609584397984LL;

	t55 = (x221+(x222<=(x223^x224)));

	if (t55 != -1762203768100LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = 5;
	int32_t x227 = INT32_MAX;
	static int16_t x228 = -20;

	t56 = (x225+(x226<=(x227^x228)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	uint32_t x230 = 2402U;
	volatile uint32_t x231 = 3027769U;
	int64_t x232 = -517818141188008766LL;
	static volatile int32_t t57 = -3;

	t57 = (x229+(x230<=(x231^x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	uint32_t x234 = 1374U;
	int32_t x235 = INT32_MAX;
	static int8_t x236 = 7;
	int32_t t58 = 42;

	t58 = (x233+(x234<=(x235^x236)));

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	static volatile uint8_t x238 = 36U;
	volatile int64_t x239 = -243072362942LL;
	int32_t x240 = -8760;
	int32_t t59 = -96;

	t59 = (x237+(x238<=(x239^x240)));

	if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 1U;
	int8_t x242 = 0;
	int32_t x243 = INT32_MIN;

	t60 = (x241+(x242<=(x243^x244)));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = 475172U;
	uint16_t x250 = 11U;
	int32_t x251 = -1;
	uint8_t x252 = UINT8_MAX;
	uint32_t t61 = 2U;

	t61 = (x249+(x250<=(x251^x252)));

	if (t61 != 475172U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x254 = 3257LL;
	int64_t x255 = -12819672705LL;
	uint64_t t62 = 106908803LLU;

	t62 = (x253+(x254<=(x255^x256)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = -1;
	int64_t x258 = INT64_MAX;
	int8_t x260 = INT8_MIN;

	t63 = (x257+(x258<=(x259^x260)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x261 = 210;
	int16_t x263 = INT16_MAX;
	int8_t x264 = 1;

	t64 = (x261+(x262<=(x263^x264)));

	if (t64 != 211) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x266 = -31LL;
	uint8_t x268 = UINT8_MAX;
	int32_t t65 = -7504;

	t65 = (x265+(x266<=(x267^x268)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = 330;
	int8_t x270 = INT8_MAX;
	static int8_t x271 = -1;
	uint32_t x272 = 11591078U;
	int32_t t66 = 138267599;

	t66 = (x269+(x270<=(x271^x272)));

	if (t66 != 331) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x273 = 7213628549163LL;
	uint16_t x274 = 32561U;
	volatile uint32_t x275 = UINT32_MAX;
	int8_t x276 = 38;
	static volatile int64_t t67 = -7LL;

	t67 = (x273+(x274<=(x275^x276)));

	if (t67 != 7213628549164LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = 3281264065831023551LL;
	volatile int8_t x278 = INT8_MIN;
	int64_t x280 = -1LL;
	static volatile int64_t t68 = -433LL;

	t68 = (x277+(x278<=(x279^x280)));

	if (t68 != 3281264065831023552LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	static int16_t x282 = INT16_MAX;
	volatile int32_t x283 = -1;
	static int8_t x284 = INT8_MAX;
	static int32_t t69 = INT32_MIN;

	t69 = (x281+(x282<=(x283^x284)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x285 = INT32_MAX;
	uint8_t x286 = UINT8_MAX;
	int8_t x287 = -1;
	int8_t x288 = INT8_MAX;

	t70 = (x285+(x286<=(x287^x288)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = 3;
	volatile uint64_t x290 = 29720250833LLU;
	int32_t x291 = -143742;
	static uint16_t x292 = 77U;
	int32_t t71 = -7;

	t71 = (x289+(x290<=(x291^x292)));

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = -3;
	int8_t x294 = INT8_MAX;
	volatile uint8_t x295 = 126U;
	int32_t x296 = -42;

	t72 = (x293+(x294<=(x295^x296)));

	if (t72 != -3) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MAX;
	static uint16_t x298 = UINT16_MAX;
	int64_t x299 = -235LL;
	volatile uint32_t x300 = 1591269686U;
	volatile int32_t t73 = INT32_MAX;

	t73 = (x297+(x298<=(x299^x300)));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = 2065434LL;
	static int64_t x303 = INT64_MAX;
	int16_t x304 = INT16_MIN;
	static volatile int64_t t74 = 4579LL;

	t74 = (x301+(x302<=(x303^x304)));

	if (t74 != 2065434LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = 112U;
	int64_t x306 = INT64_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t75 = -1892;

	t75 = (x305+(x306<=(x307^x308)));

	if (t75 != 113) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x309 = INT16_MAX;
	volatile int64_t x310 = INT64_MAX;
	static uint32_t x311 = 13427U;
	uint8_t x312 = 103U;
	volatile int32_t t76 = 83959;

	t76 = (x309+(x310<=(x311^x312)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = INT8_MIN;
	static int32_t x315 = INT32_MIN;
	volatile int32_t t77 = 15303508;

	t77 = (x313+(x314<=(x315^x316)));

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = -1;
	int16_t x318 = 26;
	volatile int8_t x319 = INT8_MIN;
	volatile int32_t t78 = -2516;

	t78 = (x317+(x318<=(x319^x320)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x321 = -755;
	int64_t x322 = INT64_MIN;
	int16_t x323 = -6;
	int8_t x324 = 63;
	volatile int32_t t79 = -75;

	t79 = (x321+(x322<=(x323^x324)));

	if (t79 != -754) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 991438858LLU;
	static uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MAX;
	volatile uint64_t t80 = 32339LLU;

	t80 = (x325+(x326<=(x327^x328)));

	if (t80 != 991438859LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x330 = INT16_MIN;
	static int64_t x331 = INT64_MIN;
	volatile uint64_t x332 = 4326914271057815953LLU;
	int32_t t81 = -13522190;

	t81 = (x329+(x330<=(x331^x332)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x333+(x334<=(x335^x336)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x337 = 173282785939LLU;
	static int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MAX;
	volatile uint64_t t83 = 0LLU;

	t83 = (x337+(x338<=(x339^x340)));

	if (t83 != 173282785940LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -1;
	static volatile int8_t x342 = INT8_MAX;
	volatile int32_t x343 = INT32_MAX;
	static volatile int8_t x344 = -1;
	int32_t t84 = 62875;

	t84 = (x341+(x342<=(x343^x344)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x346 = 45290953;
	static volatile uint16_t x347 = 12U;
	int16_t x348 = -1;
	uint64_t t85 = 9690049623241LLU;

	t85 = (x345+(x346<=(x347^x348)));

	if (t85 != 4422LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = -1;
	static int8_t x352 = INT8_MIN;

	t86 = (x349+(x350<=(x351^x352)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x354 = 1417138U;
	volatile int32_t x355 = INT32_MIN;
	uint32_t x356 = UINT32_MAX;
	uint64_t t87 = 2388098252687503LLU;

	t87 = (x353+(x354<=(x355^x356)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = INT32_MIN;
	uint64_t x359 = UINT64_MAX;

	t88 = (x357+(x358<=(x359^x360)));

	if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x365 = -1;
	uint64_t x366 = 5203419464134547LLU;
	static int32_t x367 = -4235901;
	volatile int64_t x368 = INT64_MAX;
	static volatile int32_t t89 = -4;

	t89 = (x365+(x366<=(x367^x368)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x370 = INT32_MIN;
	static uint8_t x371 = 6U;
	static int64_t x372 = INT64_MIN;
	volatile int64_t t90 = INT64_MAX;

	t90 = (x369+(x370<=(x371^x372)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x373 = 4;
	uint32_t x375 = 3U;
	static volatile uint64_t x376 = 32280416LLU;

	t91 = (x373+(x374<=(x375^x376)));

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = 11;
	volatile int64_t x378 = INT64_MIN;
	static int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MAX;
	volatile int32_t t92 = -741407;

	t92 = (x377+(x378<=(x379^x380)));

	if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = 15;
	int32_t x382 = INT32_MIN;
	static uint16_t x383 = 223U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t93 = -19645;

	t93 = (x381+(x382<=(x383^x384)));

	if (t93 != 16) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x386 = INT8_MIN;
	int32_t x387 = -137805534;
	int16_t x388 = 1;

	t94 = (x385+(x386<=(x387^x388)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x389 = 1979534284U;
	int16_t x390 = -1819;
	static volatile int32_t x391 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;
	uint32_t t95 = 9048U;

	t95 = (x389+(x390<=(x391^x392)));

	if (t95 != 1979534284U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = -1;
	volatile uint64_t x394 = 5169417364LLU;
	int16_t x396 = INT16_MAX;
	volatile int32_t t96 = -1072924;

	t96 = (x393+(x394<=(x395^x396)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x397 = -3650;
	static volatile uint32_t x398 = 863U;
	static int16_t x399 = INT16_MIN;
	int8_t x400 = 1;
	int32_t t97 = -9;

	t97 = (x397+(x398<=(x399^x400)));

	if (t97 != -3649) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x402 = -657LL;
	int16_t x404 = INT16_MIN;
	uint32_t t98 = 21418767U;

	t98 = (x401+(x402<=(x403^x404)));

	if (t98 != 3005U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x406 = 1761365840465323LL;
	uint16_t x407 = 8U;
	int64_t x408 = -138931734467362993LL;
	volatile int32_t t99 = 884716;

	t99 = (x405+(x406<=(x407^x408)));

	if (t99 != -1) { NG(); } else { ; }
	
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

