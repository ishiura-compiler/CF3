#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 9;
volatile uint64_t x12 = 7340560811741LLU;
uint64_t t2 = 18963455900LLU;
uint16_t x15 = 1808U;
int8_t x16 = INT8_MIN;
int32_t x23 = -1;
int16_t x26 = INT16_MAX;
volatile uint32_t x28 = 8U;
int16_t x30 = -1;
volatile uint32_t x39 = 3232560U;
int32_t x40 = 2945187;
static uint8_t x43 = 14U;
int16_t x44 = INT16_MAX;
int32_t t10 = 352;
static uint32_t x45 = 55691U;
static int8_t x49 = 60;
volatile uint32_t x56 = 361U;
volatile int32_t x66 = INT32_MIN;
int32_t x67 = 25735;
static int32_t x69 = INT32_MIN;
int16_t x81 = -1;
int64_t x85 = -154LL;
uint64_t x86 = 32122545081005906LLU;
int64_t x87 = -1LL;
volatile uint64_t t21 = 4618LLU;
uint8_t x92 = 87U;
int64_t t22 = 1613603290LL;
int64_t x95 = -80325917957555LL;
static int8_t x100 = INT8_MIN;
uint32_t x112 = 7U;
int8_t x116 = 23;
int8_t x117 = INT8_MIN;
volatile int8_t x120 = -1;
uint16_t x123 = UINT16_MAX;
static volatile int16_t x127 = INT16_MIN;
static int64_t t31 = -638993451762269LL;
static volatile uint32_t x129 = 7323U;
int32_t x130 = -1;
static int16_t x136 = INT16_MIN;
static int32_t t33 = -4430603;
static uint64_t x139 = 21663LLU;
uint64_t t34 = 413229026726797777LLU;
int64_t t35 = 11424022LL;
int8_t x145 = INT8_MIN;
static int16_t x146 = INT16_MIN;
uint32_t x148 = 31U;
uint64_t x176 = UINT64_MAX;
uint64_t x177 = UINT64_MAX;
int64_t x183 = INT64_MIN;
int16_t x188 = INT16_MIN;
int64_t x191 = INT64_MAX;
volatile int32_t x194 = -1;
int16_t x196 = -1;
static volatile uint64_t t48 = 1472299LLU;
int16_t x199 = -1;
uint16_t x201 = 3U;
int32_t x203 = 5600309;
volatile uint64_t t54 = 127163LLU;
volatile uint64_t x229 = UINT64_MAX;
int32_t t58 = 10192;
volatile uint8_t x240 = UINT8_MAX;
int64_t x243 = -1LL;
int16_t x244 = INT16_MIN;
int8_t x255 = INT8_MIN;
static int16_t x256 = INT16_MAX;
volatile int64_t x260 = INT64_MIN;
static int16_t x263 = INT16_MIN;
static volatile int8_t x264 = INT8_MAX;
uint16_t x273 = UINT16_MAX;
volatile int32_t t68 = 2303023;
volatile int8_t x277 = -1;
int32_t t69 = 821991406;
int32_t t71 = -83;
int8_t x294 = 0;
uint8_t x299 = 101U;
int32_t x303 = INT32_MIN;
volatile int32_t t77 = -1590525;
volatile int64_t t78 = 137972547859092494LL;
volatile uint64_t x320 = 237264LLU;
uint64_t t79 = 2227LLU;
uint8_t x338 = UINT8_MAX;
volatile int16_t x340 = INT16_MIN;
int32_t x357 = -1;
static volatile int32_t x362 = INT32_MIN;
int32_t t90 = -4953;
int16_t x365 = INT16_MIN;
int64_t x375 = -4097896428945964846LL;
static int16_t x377 = INT16_MIN;
int64_t t95 = 102163413376LL;
static int16_t x387 = INT16_MIN;
uint64_t x392 = 224051819778863445LLU;


void f0(void) {
	int16_t x1 = 0;
	int8_t x2 = -1;
	static int32_t x3 = INT32_MIN;
	volatile int32_t t0 = 4580464;

	t0 = ((x1%(x2|x3))^x4);

	if (t0 != 9) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2705642U;
	volatile int8_t x6 = INT8_MIN;
	uint32_t x7 = UINT32_MAX;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 22097U;

	t1 = ((x5%(x6|x7))^x8);

	if (t1 != 4292261653U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -4799;
	uint8_t x10 = UINT8_MAX;
	int32_t x11 = INT32_MAX;

	t2 = ((x9%(x10|x11))^x12);

	if (t2 != 18446736733148736412LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 48380210544LL;
	uint16_t x14 = UINT16_MAX;
	static int64_t t3 = 1LL;

	t3 = ((x13%(x14|x15))^x16);

	if (t3 != -45398LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 3;
	uint16_t x18 = 31U;
	int64_t x19 = INT64_MIN;
	static volatile int32_t x20 = INT32_MIN;
	int64_t t4 = 235308LL;

	t4 = ((x17%(x18|x19))^x20);

	if (t4 != -2147483645LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static volatile uint8_t x22 = UINT8_MAX;
	int32_t x24 = -1;
	volatile int64_t t5 = 12435629043LL;

	t5 = ((x21%(x22|x23))^x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint64_t x27 = 1162808146228565758LLU;
	uint64_t t6 = 19984692314419048LLU;

	t6 = ((x25%(x26|x27))^x28);

	if (t6 != 4294967287LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -721825209751612062LL;
	volatile int64_t x31 = INT64_MAX;
	volatile int8_t x32 = -1;
	int64_t t7 = -28LL;

	t7 = ((x29%(x30|x31))^x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint32_t x34 = UINT32_MAX;
	volatile int8_t x35 = -1;
	int8_t x36 = -2;
	static uint32_t t8 = 166721895U;

	t8 = ((x33%(x34|x35))^x36);

	if (t8 != 2147483646U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	uint32_t x38 = 1098780U;
	uint32_t t9 = 187355511U;

	t9 = ((x37%(x38|x39))^x40);

	if (t9 != 118436U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 21;
	int32_t x42 = INT32_MIN;

	t10 = ((x41%(x42|x43))^x44);

	if (t10 != 32746) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 1751U;
	uint32_t x47 = 628216492U;
	volatile int64_t x48 = -2902811LL;
	volatile int64_t t11 = -26675635976LL;

	t11 = ((x45%(x46|x47))^x48);

	if (t11 != -2921106LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 105554U;
	volatile uint32_t x51 = 1346U;
	uint64_t x52 = 19LLU;
	uint64_t t12 = 11810LLU;

	t12 = ((x49%(x50|x51))^x52);

	if (t12 != 47LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MIN;
	static volatile int64_t t13 = 2292657768LL;

	t13 = ((x53%(x54|x55))^x56);

	if (t13 != 361LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = 76;
	volatile int16_t x58 = INT16_MIN;
	uint64_t x59 = 4LLU;
	static uint32_t x60 = 596480U;
	uint64_t t14 = 471LLU;

	t14 = ((x57%(x58|x59))^x60);

	if (t14 != 596556LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MIN;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = -86211;

	t15 = ((x61%(x62|x63))^x64);

	if (t15 != 32512) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = 384503828731LL;
	uint8_t x68 = 0U;
	int64_t t16 = -523143365446145075LL;

	t16 = ((x65%(x66|x67))^x68);

	if (t16 != 108862304LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MIN;
	static int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = INT32_MIN;

	t17 = ((x69%(x70|x71))^x72);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MIN;
	static uint8_t x75 = UINT8_MAX;
	volatile int8_t x76 = -1;
	int32_t t18 = -885;

	t18 = ((x73%(x74|x75))^x76);

	if (t18 != -255) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	int64_t x80 = -1LL;
	volatile int64_t t19 = -1038111057LL;

	t19 = ((x77%(x78|x79))^x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x82 = INT32_MIN;
	uint32_t x83 = 23896251U;
	int32_t x84 = INT32_MIN;
	volatile uint32_t t20 = 80U;

	t20 = ((x81%(x82|x83))^x84);

	if (t20 != 4271071044U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x88 = INT64_MAX;

	t21 = ((x85%(x86|x87))^x88);

	if (t21 != 9223372036854775961LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	int64_t x91 = 628LL;

	t22 = ((x89%(x90|x91))^x92);

	if (t22 != -81LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 3974110431LLU;
	static uint32_t x94 = 3U;
	int8_t x96 = -5;
	volatile uint64_t t23 = 8471098403261906600LLU;

	t23 = ((x93%(x94|x95))^x96);

	if (t23 != 18446744069735441188LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x97 = 92U;
	int32_t x98 = INT32_MAX;
	uint16_t x99 = 5U;
	int32_t t24 = 66295331;

	t24 = ((x97%(x98|x99))^x100);

	if (t24 != -36) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1;
	volatile uint8_t x102 = 2U;
	static int8_t x103 = 1;
	int16_t x104 = 644;
	static int32_t t25 = -2385;

	t25 = ((x101%(x102|x103))^x104);

	if (t25 != -645) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	int64_t x106 = 112LL;
	uint64_t x107 = 3145444729958400LLU;
	static int8_t x108 = INT8_MAX;
	static volatile uint64_t t26 = 156470LLU;

	t26 = ((x105%(x106|x107))^x108);

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MAX;
	uint32_t t27 = 413606165U;

	t27 = ((x109%(x110|x111))^x112);

	if (t27 != 248U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MAX;
	volatile int32_t t28 = -39515;

	t28 = ((x113%(x114|x115))^x116);

	if (t28 != 23) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MAX;
	int32_t t29 = -175;

	t29 = ((x117%(x118|x119))^x120);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 10468U;
	static int32_t x122 = -1;
	int64_t x124 = 2647418347126615580LL;
	static int64_t t30 = 49144143690LL;

	t30 = ((x121%(x122|x123))^x124);

	if (t30 != 2647418347126605560LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	volatile uint32_t x126 = 354133U;
	int16_t x128 = 3;

	t31 = ((x125%(x126|x127))^x128);

	if (t31 != -2167420102LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x131 = 14803U;
	int32_t x132 = INT32_MAX;
	volatile uint32_t t32 = 361620528U;

	t32 = ((x129%(x130|x131))^x132);

	if (t32 != 2147476324U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MAX;
	static int16_t x135 = INT16_MIN;

	t33 = ((x133%(x134|x135))^x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int8_t x138 = 1;
	int64_t x140 = INT64_MIN;

	t34 = ((x137%(x138|x139))^x140);

	if (t34 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	int64_t x142 = INT64_MIN;
	volatile uint8_t x143 = 1U;
	int16_t x144 = -1;

	t35 = ((x141%(x142|x143))^x144);

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x147 = INT16_MIN;
	uint32_t t36 = 59U;

	t36 = ((x145%(x146|x147))^x148);

	if (t36 != 4294967199U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	volatile int64_t x150 = INT64_MAX;
	uint32_t x151 = 2U;
	int16_t x152 = -1;
	static int64_t t37 = -9049378748534LL;

	t37 = ((x149%(x150|x151))^x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 15045735;
	uint64_t x154 = UINT64_MAX;
	static volatile uint8_t x155 = UINT8_MAX;
	int64_t x156 = INT64_MIN;
	uint64_t t38 = 25695156352LLU;

	t38 = ((x153%(x154|x155))^x156);

	if (t38 != 9223372036869821543LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int16_t x158 = INT16_MIN;
	volatile int32_t x159 = INT32_MIN;
	int16_t x160 = 185;
	static int32_t t39 = 8;

	t39 = ((x157%(x158|x159))^x160);

	if (t39 != 185) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MAX;
	int8_t x162 = 10;
	int16_t x163 = INT16_MIN;
	static int64_t x164 = -191LL;
	int64_t t40 = -24838523702LL;

	t40 = ((x161%(x162|x163))^x164);

	if (t40 != -122LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static int8_t x166 = 1;
	int16_t x167 = 2;
	uint16_t x168 = 3U;
	int32_t t41 = -1941;

	t41 = ((x165%(x166|x167))^x168);

	if (t41 != -3) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 1127;
	volatile int16_t x170 = INT16_MAX;
	volatile uint8_t x171 = UINT8_MAX;
	volatile int32_t x172 = INT32_MIN;
	int32_t t42 = 7;

	t42 = ((x169%(x170|x171))^x172);

	if (t42 != -2147482521) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -66894622;
	static int16_t x174 = INT16_MIN;
	uint64_t x175 = 325212023LLU;
	volatile uint64_t t43 = 1734868446612LLU;

	t43 = ((x173%(x174|x175))^x176);

	if (t43 != 66894621LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MAX;
	static volatile uint64_t t44 = 29935627778LLU;

	t44 = ((x177%(x178|x179))^x180);

	if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -1;
	static int64_t x182 = INT64_MIN;
	volatile int32_t x184 = 12304;
	volatile int64_t t45 = 232181357405983LL;

	t45 = ((x181%(x182|x183))^x184);

	if (t45 != -12305LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 4U;
	uint8_t x186 = 12U;
	uint64_t x187 = 16878806LLU;
	volatile uint64_t t46 = 32186988639479LLU;

	t46 = ((x185%(x186|x187))^x188);

	if (t46 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -1;
	static volatile int16_t x190 = INT16_MIN;
	static uint16_t x192 = 13303U;
	volatile int64_t t47 = 34012721LL;

	t47 = ((x189%(x190|x191))^x192);

	if (t47 != 13303LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	static uint64_t x195 = 3748331LLU;

	t48 = ((x193%(x194|x195))^x196);

	if (t48 != 32767LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 33U;
	int64_t x198 = INT64_MIN;
	int64_t x200 = -20670414932LL;
	volatile int64_t t49 = -2874LL;

	t49 = ((x197%(x198|x199))^x200);

	if (t49 != -20670414932LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = -28439192LL;
	uint64_t x204 = 96275682743372222LLU;
	volatile uint64_t t50 = 802802530583352LLU;

	t50 = ((x201%(x202|x203))^x204);

	if (t50 != 96275682743372221LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = INT64_MIN;
	static volatile int64_t t51 = INT64_MIN;

	t51 = ((x205%(x206|x207))^x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 9U;
	volatile uint32_t x210 = 1642060U;
	int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	volatile uint32_t t52 = 140128556U;

	t52 = ((x209%(x210|x211))^x212);

	if (t52 != 2147483657U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MAX;
	static volatile int8_t x215 = INT8_MIN;
	int64_t x216 = 3270571971176442304LL;
	int64_t t53 = 23605LL;

	t53 = ((x213%(x214|x215))^x216);

	if (t53 != 3270571971176442304LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	int32_t x218 = INT32_MAX;
	volatile uint64_t x219 = 62996125LLU;
	volatile uint32_t x220 = UINT32_MAX;

	t54 = ((x217%(x218|x219))^x220);

	if (t54 != 4294967294LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	static volatile int8_t x222 = 5;
	static int16_t x223 = 1865;
	int64_t x224 = INT64_MIN;
	static volatile int64_t t55 = -55377283679LL;

	t55 = ((x221%(x222|x223))^x224);

	if (t55 != 9223372036854775107LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = 64498U;
	int64_t x226 = -1LL;
	uint32_t x227 = 191836U;
	volatile int32_t x228 = INT32_MIN;
	static volatile int64_t t56 = -5442446439LL;

	t56 = ((x225%(x226|x227))^x228);

	if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x230 = INT16_MAX;
	int16_t x231 = -1;
	int8_t x232 = 3;
	volatile uint64_t t57 = 1731046078888LLU;

	t57 = ((x229%(x230|x231))^x232);

	if (t57 != 3LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 16;
	static volatile int32_t x234 = 2861273;
	uint16_t x235 = 0U;
	int16_t x236 = -1;

	t58 = ((x233%(x234|x235))^x236);

	if (t58 != -17) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MIN;
	volatile int32_t x239 = INT32_MAX;
	volatile int32_t t59 = -46;

	t59 = ((x237%(x238|x239))^x240);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 1U;
	volatile uint64_t t60 = 486447916534585622LLU;

	t60 = ((x241%(x242|x243))^x244);

	if (t60 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 8690789LLU;
	int8_t x246 = INT8_MAX;
	int8_t x247 = INT8_MIN;
	int8_t x248 = INT8_MIN;
	static volatile uint64_t t61 = 51699LLU;

	t61 = ((x245%(x246|x247))^x248);

	if (t61 != 18446744073700860901LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 427026569712LLU;
	volatile int64_t x250 = -3030995LL;
	static volatile uint32_t x251 = UINT32_MAX;
	uint16_t x252 = 3436U;
	static uint64_t t62 = 0LLU;

	t62 = ((x249%(x250|x251))^x252);

	if (t62 != 427026568348LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	int32_t t63 = 44;

	t63 = ((x253%(x254|x255))^x256);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	uint16_t x258 = UINT16_MAX;
	int32_t x259 = INT32_MAX;
	int64_t t64 = -1LL;

	t64 = ((x257%(x258|x259))^x260);

	if (t64 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = -5;
	static int32_t x262 = INT32_MAX;
	volatile int32_t t65 = -47;

	t65 = ((x261%(x262|x263))^x264);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MAX;
	int16_t x266 = 5;
	uint32_t x267 = UINT32_MAX;
	volatile int8_t x268 = 31;
	static uint32_t t66 = 216201661U;

	t66 = ((x265%(x266|x267))^x268);

	if (t66 != 2147483616U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = -1LL;
	volatile uint8_t x270 = 15U;
	static uint16_t x271 = 1U;
	int64_t x272 = -1960496296477078716LL;
	int64_t t67 = 8134265248062LL;

	t67 = ((x269%(x270|x271))^x272);

	if (t67 != 1960496296477078715LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = UINT16_MAX;

	t68 = ((x273%(x274|x275))^x276);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = 3;
	static int32_t x279 = INT32_MAX;
	int8_t x280 = 27;

	t69 = ((x277%(x278|x279))^x280);

	if (t69 != -28) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile int64_t t70 = -2804377217926676LL;

	t70 = ((x281%(x282|x283))^x284);

	if (t70 != -2147483393LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	static volatile uint8_t x286 = 15U;
	volatile uint16_t x287 = 2U;
	int16_t x288 = -1;

	t71 = ((x285%(x286|x287))^x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	int16_t x290 = INT16_MIN;
	int32_t x291 = -5508;
	uint16_t x292 = 1U;
	volatile int32_t t72 = -12582;

	t72 = ((x289%(x290|x291))^x292);

	if (t72 != 5226) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = 0;
	uint64_t x295 = 3576753LLU;
	uint16_t x296 = UINT16_MAX;
	volatile uint64_t t73 = 486696141519LLU;

	t73 = ((x293%(x294|x295))^x296);

	if (t73 != 65535LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 74U;
	int16_t x298 = 60;
	uint16_t x300 = 2168U;
	volatile int32_t t74 = -453324984;

	t74 = ((x297%(x298|x299))^x300);

	if (t74 != 2098) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	static int16_t x302 = INT16_MAX;
	uint64_t x304 = 12LLU;
	uint64_t t75 = 1951729371818119LLU;

	t75 = ((x301%(x302|x303))^x304);

	if (t75 != 32754LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = 22579982;
	int64_t x306 = -2042602833871LL;
	int8_t x307 = -1;
	int16_t x308 = -877;
	volatile int64_t t76 = 848103752280LL;

	t76 = ((x305%(x306|x307))^x308);

	if (t76 != -877LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 1U;
	static int8_t x310 = 7;
	int16_t x311 = INT16_MAX;
	int32_t x312 = 590;

	t77 = ((x309%(x310|x311))^x312);

	if (t77 != 591) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 127191LL;
	static volatile int64_t x314 = INT64_MAX;
	uint8_t x315 = 13U;
	uint8_t x316 = 2U;

	t78 = ((x313%(x314|x315))^x316);

	if (t78 != 127189LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	volatile uint8_t x318 = 120U;
	int16_t x319 = INT16_MIN;

	t79 = ((x317%(x318|x319))^x320);

	if (t79 != 18446744073709314392LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MAX;
	uint16_t x322 = 3U;
	uint64_t x323 = UINT64_MAX;
	int16_t x324 = INT16_MIN;
	static volatile uint64_t t80 = 215774000LLU;

	t80 = ((x321%(x322|x323))^x324);

	if (t80 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -17;
	int32_t x326 = 1;
	static int8_t x327 = -1;
	uint8_t x328 = 7U;
	static volatile int32_t t81 = 89877;

	t81 = ((x325%(x326|x327))^x328);

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = -1LL;
	static uint16_t x330 = 2U;
	uint32_t x331 = UINT32_MAX;
	int16_t x332 = -1;
	static int64_t t82 = -3071358990672LL;

	t82 = ((x329%(x330|x331))^x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	volatile int16_t x335 = -1;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t83 = 27763LLU;

	t83 = ((x333%(x334|x335))^x336);

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 34U;
	int64_t x339 = -458734044459927LL;
	int64_t t84 = 939071695LL;

	t84 = ((x337%(x338|x339))^x340);

	if (t84 != -32734LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 51660725U;
	int64_t x342 = -3459164LL;
	volatile int16_t x343 = INT16_MAX;
	int32_t x344 = -1;
	volatile int64_t t85 = -1075665962111217690LL;

	t85 = ((x341%(x342|x343))^x344);

	if (t85 != -51111LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MAX;
	uint8_t x346 = 0U;
	int32_t x347 = INT32_MAX;
	static uint16_t x348 = UINT16_MAX;
	static volatile int32_t t86 = -1024839;

	t86 = ((x345%(x346|x347))^x348);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 46LLU;
	volatile int8_t x350 = INT8_MIN;
	int32_t x351 = 64512;
	int32_t x352 = INT32_MIN;
	static uint64_t t87 = 0LLU;

	t87 = ((x349%(x350|x351))^x352);

	if (t87 != 18446744071562068014LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MAX;
	uint64_t x354 = 4285760LLU;
	static int16_t x355 = 13;
	int32_t x356 = INT32_MIN;
	volatile uint64_t t88 = 3LLU;

	t88 = ((x353%(x354|x355))^x356);

	if (t88 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x358 = 527;
	uint32_t x359 = UINT32_MAX;
	volatile int64_t x360 = INT64_MAX;
	int64_t t89 = INT64_MAX;

	t89 = ((x357%(x358|x359))^x360);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 14;
	volatile int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MIN;

	t90 = ((x361%(x362|x363))^x364);

	if (t90 != -2147483634) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x366 = INT32_MIN;
	uint16_t x367 = UINT16_MAX;
	uint32_t x368 = 46655U;
	uint32_t t91 = 37U;

	t91 = ((x365%(x366|x367))^x368);

	if (t91 != 4294915647U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x369 = -1;
	int64_t x370 = -519827315LL;
	int64_t x371 = -13744333LL;
	volatile int32_t x372 = INT32_MIN;
	volatile int64_t t92 = -749278LL;

	t92 = ((x369%(x370|x371))^x372);

	if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = 0;
	int8_t x374 = INT8_MIN;
	static int64_t x376 = 436LL;
	int64_t t93 = 100205005828LL;

	t93 = ((x373%(x374|x375))^x376);

	if (t93 != 436LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = 94U;
	static uint8_t x379 = 108U;
	int32_t x380 = -1;
	int32_t t94 = 25201;

	t94 = ((x377%(x378|x379))^x380);

	if (t94 != 7) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 0U;
	uint8_t x382 = 56U;
	int64_t x383 = 468636641996541528LL;
	uint32_t x384 = 36U;

	t95 = ((x381%(x382|x383))^x384);

	if (t95 != 36LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 3065461972088976LLU;
	static uint32_t x386 = UINT32_MAX;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t96 = 4509110241583025960LLU;

	t96 = ((x385%(x386|x387))^x388);

	if (t96 != 18446744071629824874LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = -242606675;
	static uint64_t x390 = 114400922442LLU;
	uint64_t x391 = UINT64_MAX;
	uint64_t t97 = 626747LLU;

	t97 = ((x389%(x390|x391))^x392);

	if (t97 != 18222692253962923256LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	uint8_t x394 = UINT8_MAX;
	volatile int16_t x395 = -1;
	static uint16_t x396 = 11U;
	int32_t t98 = -2655025;

	t98 = ((x393%(x394|x395))^x396);

	if (t98 != 11) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = 2U;
	int32_t x398 = INT32_MAX;
	static int8_t x399 = 3;
	volatile uint32_t x400 = UINT32_MAX;
	static uint32_t t99 = 9878U;

	t99 = ((x397%(x398|x399))^x400);

	if (t99 != 4294967293U) { NG(); } else { ; }
	
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

