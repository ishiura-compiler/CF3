#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
static int32_t x12 = INT32_MIN;
int32_t t2 = -238;
uint8_t x15 = 0U;
int32_t t3 = -13;
int16_t x27 = INT16_MAX;
int64_t t6 = 11377843LL;
uint32_t x29 = 39407478U;
static int64_t x33 = 427437482706LL;
uint32_t x34 = 79717U;
volatile int16_t x35 = 2239;
uint32_t x36 = 112U;
static volatile int32_t t9 = 9254;
static uint32_t x51 = 4U;
volatile uint8_t x56 = UINT8_MAX;
static int32_t x58 = INT32_MAX;
volatile int32_t x62 = INT32_MAX;
int8_t x70 = INT8_MIN;
uint8_t x79 = UINT8_MAX;
static int32_t x88 = 480943102;
volatile int32_t t20 = -120170731;
static uint64_t x102 = 1013449723LLU;
uint32_t x105 = UINT32_MAX;
int16_t x109 = INT16_MIN;
uint64_t t27 = 456LLU;
int16_t x118 = INT16_MAX;
int32_t t28 = -21859023;
int64_t x125 = -1LL;
int8_t x131 = -1;
static uint64_t x137 = UINT64_MAX;
uint32_t x139 = 1679U;
static int8_t x140 = INT8_MIN;
uint64_t t33 = 6667056535LLU;
int16_t x142 = INT16_MIN;
static int64_t t34 = -28802443120422466LL;
volatile int32_t x151 = -1;
int32_t x153 = INT32_MIN;
static int8_t x155 = INT8_MAX;
static int32_t x168 = -2;
volatile int32_t t40 = -2813;
int8_t x171 = INT8_MIN;
int32_t x179 = INT32_MIN;
uint64_t x181 = 2774174898746367LLU;
int8_t x183 = 6;
int8_t x186 = INT8_MIN;
int64_t x187 = INT64_MAX;
static int32_t t45 = 875;
volatile int64_t t46 = -192LL;
int16_t x196 = 6;
volatile uint8_t x197 = UINT8_MAX;
volatile int16_t x199 = INT16_MAX;
int32_t t48 = -3108591;
int8_t x207 = -1;
int8_t x209 = -1;
volatile uint16_t x213 = UINT16_MAX;
int64_t x216 = -13487LL;
volatile uint8_t x220 = 10U;
int64_t t54 = -273LL;
uint64_t x225 = UINT64_MAX;
int16_t x230 = -1482;
static int32_t t56 = 24;
volatile uint64_t x240 = 11513654309LLU;
int32_t x242 = -1;
volatile int64_t x246 = -1LL;
volatile int64_t x248 = INT64_MAX;
int8_t x250 = INT8_MIN;
static int64_t x253 = -97796807818144170LL;
int16_t x254 = -2114;
volatile int64_t t64 = -1810991435002LL;
static int16_t x269 = INT16_MIN;
int32_t x271 = -3036034;
uint8_t x275 = UINT8_MAX;
volatile uint64_t t66 = 67LLU;
int32_t x282 = INT32_MIN;
volatile uint64_t t69 = 87550890263725LLU;
int32_t x293 = 122167563;
int32_t t71 = 11033;
int8_t x297 = INT8_MIN;
volatile int32_t t72 = 221613;
volatile int16_t x304 = INT16_MIN;
uint64_t t73 = 353231LLU;
volatile uint16_t x305 = 7649U;
int64_t x307 = INT64_MIN;
int64_t x311 = INT64_MAX;
int64_t x314 = INT64_MIN;
int64_t t76 = -414LL;
int32_t x320 = INT32_MAX;
int64_t x324 = -29304899LL;
uint64_t t78 = 1061580873LLU;
int64_t t79 = 272920647032426677LL;
volatile int32_t x330 = INT32_MIN;
volatile int32_t x340 = INT32_MAX;
static int16_t x349 = INT16_MIN;
int8_t x360 = INT8_MIN;
uint8_t x363 = UINT8_MAX;
int8_t x374 = INT8_MIN;
uint64_t x383 = UINT64_MAX;
volatile int16_t x393 = INT16_MIN;
uint32_t t96 = 4773U;
int8_t x401 = INT8_MAX;
int16_t x405 = INT16_MAX;
int32_t x407 = INT32_MAX;


void f0(void) {
	uint8_t x1 = 66U;
	uint16_t x2 = 13898U;
	int32_t x3 = -1;
	int32_t t0 = -57433031;

	t0 = (x1&((x2==x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 824125U;
	volatile int32_t x6 = -1;
	volatile int16_t x7 = INT16_MAX;
	int8_t x8 = -12;
	volatile uint32_t t1 = 40454U;

	t1 = (x5&((x6==x7)/x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 443U;
	int8_t x10 = INT8_MIN;
	int16_t x11 = -1;

	t2 = (x9&((x10==x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	static int32_t x14 = -385476406;
	int32_t x16 = -1;

	t3 = (x13&((x14==x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	volatile uint16_t x18 = 0U;
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 1131176;

	t4 = (x17&((x18==x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -10772;
	int16_t x22 = INT16_MAX;
	static volatile int32_t x23 = INT32_MIN;
	volatile int16_t x24 = -1;
	volatile int32_t t5 = 204639;

	t5 = (x21&((x22==x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 50731U;
	int8_t x26 = -1;
	static int64_t x28 = -827304066083LL;

	t6 = (x25&((x26==x27)/x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 76470LLU;
	volatile int16_t x31 = INT16_MAX;
	volatile uint8_t x32 = 1U;
	volatile uint32_t t7 = 187685U;

	t7 = (x29&((x30==x31)/x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t t8 = 1060616745351153LL;

	t8 = (x33&((x34==x35)/x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = -1;
	int64_t x42 = -27654000LL;
	static int8_t x43 = -26;
	uint16_t x44 = 5U;

	t9 = (x41&((x42==x43)/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 122402363;
	int32_t x46 = INT32_MAX;
	uint8_t x47 = UINT8_MAX;
	int64_t x48 = -1LL;
	int64_t t10 = -36558930LL;

	t10 = (x45&((x46==x47)/x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x49 = INT8_MAX;
	int16_t x50 = INT16_MIN;
	uint64_t x52 = 667803592881LLU;
	volatile uint64_t t11 = 1669LLU;

	t11 = (x49&((x50==x51)/x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	static uint16_t x54 = 90U;
	uint8_t x55 = 1U;
	int32_t t12 = 142;

	t12 = (x53&((x54==x55)/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	static uint32_t x59 = UINT32_MAX;
	int32_t x60 = INT32_MIN;
	volatile uint32_t t13 = 9109U;

	t13 = (x57&((x58==x59)/x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = UINT32_MAX;
	volatile uint8_t x63 = 1U;
	int64_t x64 = INT64_MAX;
	int64_t t14 = -149338204748LL;

	t14 = (x61&((x62==x63)/x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	volatile int32_t x66 = INT32_MAX;
	int32_t x67 = -57104;
	int16_t x68 = INT16_MIN;
	static int32_t t15 = 0;

	t15 = (x65&((x66==x67)/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x71 = UINT16_MAX;
	static int64_t x72 = INT64_MIN;
	static volatile int64_t t16 = 16059384713LL;

	t16 = (x69&((x70==x71)/x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	uint16_t x74 = 0U;
	volatile int16_t x75 = INT16_MIN;
	int32_t x76 = -713760;
	volatile int32_t t17 = 59;

	t17 = (x73&((x74==x75)/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = -1;
	uint64_t x80 = 52715998LLU;
	static uint64_t t18 = 65342097592LLU;

	t18 = (x77&((x78==x79)/x80));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	volatile int16_t x82 = 6665;
	int64_t x83 = INT64_MAX;
	volatile int8_t x84 = -4;
	static int64_t t19 = -28583446149956LL;

	t19 = (x81&((x82==x83)/x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 66966646;
	static uint16_t x86 = 32233U;
	static volatile int16_t x87 = INT16_MIN;

	t20 = (x85&((x86==x87)/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MIN;
	static int16_t x91 = INT16_MAX;
	uint8_t x92 = 1U;
	int32_t t21 = -123448335;

	t21 = (x89&((x90==x91)/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	int16_t x94 = 1;
	volatile uint16_t x95 = UINT16_MAX;
	volatile uint16_t x96 = UINT16_MAX;
	int32_t t22 = -9291463;

	t22 = (x93&((x94==x95)/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = INT32_MIN;
	uint16_t x98 = UINT16_MAX;
	volatile uint32_t x99 = UINT32_MAX;
	int16_t x100 = INT16_MIN;
	int32_t t23 = -381;

	t23 = (x97&((x98==x99)/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MIN;
	volatile int64_t t24 = 3163LL;

	t24 = (x101&((x102==x103)/x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = -1LL;
	volatile int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	volatile int64_t t25 = 1765724223650110565LL;

	t25 = (x105&((x106==x107)/x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = INT32_MIN;
	int16_t x111 = -80;
	uint64_t x112 = 14742940685316281LLU;
	volatile uint64_t t26 = 1664240LLU;

	t26 = (x109&((x110==x111)/x112));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 7126140265806LLU;
	int16_t x114 = -27;
	uint8_t x115 = 0U;
	int32_t x116 = 1;

	t27 = (x113&((x114==x115)/x116));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = INT16_MAX;
	volatile int16_t x119 = 1;
	volatile int8_t x120 = -1;

	t28 = (x117&((x118==x119)/x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	static volatile uint8_t x122 = UINT8_MAX;
	volatile int64_t x123 = -6LL;
	int16_t x124 = -1;
	int32_t t29 = -771495397;

	t29 = (x121&((x122==x123)/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x126 = -10586168LL;
	volatile int16_t x127 = -1;
	int32_t x128 = -1296;
	int64_t t30 = 44635804665638024LL;

	t30 = (x125&((x126==x127)/x128));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 1552U;
	int64_t x130 = 18789688637LL;
	int32_t x132 = INT32_MIN;
	volatile int32_t t31 = 3426969;

	t31 = (x129&((x130==x131)/x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = INT8_MIN;
	int32_t x134 = -1;
	uint16_t x135 = 230U;
	static uint64_t x136 = 615115775811LLU;
	volatile uint64_t t32 = 72LLU;

	t32 = (x133&((x134==x135)/x136));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = 14LL;

	t33 = (x137&((x138==x139)/x140));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	int64_t x143 = -1LL;
	volatile int64_t x144 = -470875508153977955LL;

	t34 = (x141&((x142==x143)/x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x145 = 28073687U;
	uint16_t x146 = 15020U;
	uint8_t x147 = 73U;
	int32_t x148 = INT32_MAX;
	static uint32_t t35 = 36654711U;

	t35 = (x145&((x146==x147)/x148));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = 7333;
	int16_t x152 = -1201;
	volatile int32_t t36 = -53;

	t36 = (x149&((x150==x151)/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x154 = INT8_MIN;
	uint8_t x156 = 1U;
	int32_t t37 = 1883581;

	t37 = (x153&((x154==x155)/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = 15;
	int16_t x158 = -2;
	int32_t x159 = -1;
	int16_t x160 = -1;
	static int32_t t38 = 55325;

	t38 = (x157&((x158==x159)/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x161 = -1;
	volatile int64_t x162 = INT64_MIN;
	uint8_t x163 = 53U;
	volatile uint8_t x164 = 14U;
	int32_t t39 = 0;

	t39 = (x161&((x162==x163)/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = -81148;
	int64_t x166 = INT64_MIN;
	static uint32_t x167 = 52909449U;

	t40 = (x165&((x166==x167)/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -1;
	int64_t x170 = 45108493175LL;
	int32_t x172 = INT32_MIN;
	volatile int32_t t41 = 15;

	t41 = (x169&((x170==x171)/x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 0U;
	uint8_t x174 = UINT8_MAX;
	int32_t x175 = 610;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t42 = -168;

	t42 = (x173&((x174==x175)/x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 13191398U;
	static int8_t x178 = INT8_MIN;
	int32_t x180 = -121788;
	uint32_t t43 = 64362U;

	t43 = (x177&((x178==x179)/x180));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x182 = 2855599896218069LL;
	int64_t x184 = INT64_MAX;
	uint64_t t44 = 328158LLU;

	t44 = (x181&((x182==x183)/x184));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 1;
	int32_t x188 = -11964;

	t45 = (x185&((x186==x187)/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = -1LL;
	static volatile int32_t x190 = INT32_MAX;
	int16_t x191 = INT16_MAX;
	int8_t x192 = INT8_MIN;

	t46 = (x189&((x190==x191)/x192));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x193 = INT16_MIN;
	volatile uint32_t x194 = 1225763U;
	int64_t x195 = INT64_MIN;
	static volatile int32_t t47 = 113;

	t47 = (x193&((x194==x195)/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x198 = 10557379920885LL;
	int32_t x200 = -1;

	t48 = (x197&((x198==x199)/x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = UINT32_MAX;
	volatile uint16_t x202 = UINT16_MAX;
	static uint16_t x203 = 662U;
	int32_t x204 = INT32_MAX;
	volatile uint32_t t49 = 4500U;

	t49 = (x201&((x202==x203)/x204));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -1LL;
	int64_t x206 = -1LL;
	int32_t x208 = INT32_MAX;
	volatile int64_t t50 = 215455270081LL;

	t50 = (x205&((x206==x207)/x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x210 = INT64_MAX;
	volatile uint8_t x211 = 1U;
	uint8_t x212 = UINT8_MAX;
	static volatile int32_t t51 = -689;

	t51 = (x209&((x210==x211)/x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x214 = 31881U;
	volatile uint64_t x215 = UINT64_MAX;
	static int64_t t52 = 1LL;

	t52 = (x213&((x214==x215)/x216));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x217 = INT16_MIN;
	static int64_t x218 = 12LL;
	uint64_t x219 = 1LLU;
	static int32_t t53 = -1405747;

	t53 = (x217&((x218==x219)/x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x221 = INT64_MIN;
	static int64_t x222 = INT64_MIN;
	volatile int16_t x223 = 1;
	int8_t x224 = -1;

	t54 = (x221&((x222==x223)/x224));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x226 = -4;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	uint64_t t55 = 51250LLU;

	t55 = (x225&((x226==x227)/x228));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x231 = UINT16_MAX;
	volatile uint8_t x232 = UINT8_MAX;

	t56 = (x229&((x230==x231)/x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = 0;
	uint32_t x239 = UINT32_MAX;
	uint64_t t57 = 684924LLU;

	t57 = (x237&((x238==x239)/x240));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MAX;
	static volatile int8_t x243 = 2;
	int64_t x244 = INT64_MAX;
	volatile int64_t t58 = 1479910385482LL;

	t58 = (x241&((x242==x243)/x244));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	static int8_t x247 = -1;
	static volatile int64_t t59 = 110496887696088LL;

	t59 = (x245&((x246==x247)/x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = 3854;
	volatile int8_t x251 = -1;
	int16_t x252 = 2;
	volatile int32_t t60 = 45870086;

	t60 = (x249&((x250==x251)/x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x255 = INT32_MAX;
	volatile int8_t x256 = -57;
	static volatile int64_t t61 = 621039681262590790LL;

	t61 = (x253&((x254==x255)/x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x257 = 13549U;
	uint16_t x258 = 1U;
	int16_t x259 = INT16_MIN;
	int8_t x260 = -1;
	static int32_t t62 = -636247;

	t62 = (x257&((x258==x259)/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	uint16_t x262 = 60U;
	int64_t x263 = INT64_MAX;
	uint32_t x264 = 279152U;
	volatile uint32_t t63 = 491316030U;

	t63 = (x261&((x262==x263)/x264));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = -1LL;
	int8_t x266 = -1;
	uint8_t x267 = 14U;
	uint8_t x268 = UINT8_MAX;

	t64 = (x265&((x266==x267)/x268));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x270 = -24;
	int16_t x272 = INT16_MIN;
	static int32_t t65 = -43894580;

	t65 = (x269&((x270==x271)/x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 4681560817120LL;
	volatile int8_t x274 = INT8_MIN;
	uint64_t x276 = 25LLU;

	t66 = (x273&((x274==x275)/x276));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = 1;
	uint32_t x278 = UINT32_MAX;
	volatile uint8_t x279 = UINT8_MAX;
	uint8_t x280 = 1U;
	int32_t t67 = 3963;

	t67 = (x277&((x278==x279)/x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x281 = 0LLU;
	uint64_t x283 = 180264320LLU;
	uint16_t x284 = 105U;
	static volatile uint64_t t68 = 42131383LLU;

	t68 = (x281&((x282==x283)/x284));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 120893494924LLU;
	uint64_t x286 = 62LLU;
	int8_t x287 = -1;
	uint32_t x288 = UINT32_MAX;

	t69 = (x285&((x286==x287)/x288));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = INT64_MAX;
	int64_t x290 = INT64_MAX;
	volatile int16_t x291 = INT16_MIN;
	int8_t x292 = -15;
	volatile int64_t t70 = -672734119028642969LL;

	t70 = (x289&((x290==x291)/x292));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x294 = 1966674U;
	uint16_t x295 = 6507U;
	static int8_t x296 = INT8_MAX;

	t71 = (x293&((x294==x295)/x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x298 = INT64_MAX;
	volatile int16_t x299 = INT16_MAX;
	volatile int32_t x300 = 2214;

	t72 = (x297&((x298==x299)/x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 61LLU;
	static uint16_t x302 = UINT16_MAX;
	volatile uint8_t x303 = 3U;

	t73 = (x301&((x302==x303)/x304));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x306 = 3826U;
	volatile uint64_t x308 = 133624934495712626LLU;
	uint64_t t74 = 4646171094296299202LLU;

	t74 = (x305&((x306==x307)/x308));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x309 = 65U;
	int64_t x310 = -2LL;
	volatile int32_t x312 = INT32_MIN;
	int32_t t75 = -33844;

	t75 = (x309&((x310==x311)/x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x313 = INT64_MIN;
	volatile int64_t x315 = INT64_MIN;
	int32_t x316 = INT32_MIN;

	t76 = (x313&((x314==x315)/x316));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x317 = 57580U;
	uint16_t x318 = UINT16_MAX;
	static volatile uint32_t x319 = 688643U;
	volatile uint32_t t77 = 1222218795U;

	t77 = (x317&((x318==x319)/x320));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x321 = 246864LLU;
	int16_t x322 = INT16_MIN;
	int8_t x323 = -6;

	t78 = (x321&((x322==x323)/x324));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = 653029U;
	volatile int32_t x326 = 5042;
	int32_t x327 = 9;
	static int64_t x328 = INT64_MAX;

	t79 = (x325&((x326==x327)/x328));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MAX;
	volatile uint16_t x331 = UINT16_MAX;
	static int32_t x332 = -166723;
	int64_t t80 = -1805303336LL;

	t80 = (x329&((x330==x331)/x332));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	static volatile uint32_t x335 = UINT32_MAX;
	int32_t x336 = -1;
	int64_t t81 = 330LL;

	t81 = (x333&((x334==x335)/x336));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -27238;
	static int16_t x338 = 32;
	int8_t x339 = 1;
	int32_t t82 = -3617;

	t82 = (x337&((x338==x339)/x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 780U;
	int16_t x342 = INT16_MAX;
	volatile uint16_t x343 = 56U;
	static volatile uint32_t x344 = 118645936U;
	volatile uint32_t t83 = 6572U;

	t83 = (x341&((x342==x343)/x344));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = INT64_MAX;
	static uint8_t x346 = 1U;
	int16_t x347 = -2;
	static uint64_t x348 = 598852095760LLU;
	volatile uint64_t t84 = 120887LLU;

	t84 = (x345&((x346==x347)/x348));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x350 = INT8_MIN;
	int64_t x351 = -1LL;
	int8_t x352 = INT8_MIN;
	volatile int32_t t85 = -79163334;

	t85 = (x349&((x350==x351)/x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = 298U;
	static int64_t x354 = 12904767173LL;
	uint8_t x355 = 2U;
	static uint8_t x356 = 1U;
	int32_t t86 = 17423;

	t86 = (x353&((x354==x355)/x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = INT64_MAX;
	uint32_t x358 = 36822U;
	volatile int8_t x359 = INT8_MIN;
	static int64_t t87 = -1LL;

	t87 = (x357&((x358==x359)/x360));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = -1;
	static uint16_t x362 = UINT16_MAX;
	int8_t x364 = 2;
	volatile int32_t t88 = 8289037;

	t88 = (x361&((x362==x363)/x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x365 = 2U;
	int32_t x366 = INT32_MIN;
	static volatile int64_t x367 = -1LL;
	int32_t x368 = INT32_MIN;
	volatile int32_t t89 = -1;

	t89 = (x365&((x366==x367)/x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	int64_t x371 = -9917808815LL;
	int8_t x372 = -3;
	volatile int64_t t90 = -7689028364LL;

	t90 = (x369&((x370==x371)/x372));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = 7;
	static volatile uint32_t x375 = 23110U;
	int64_t x376 = 20419719943232816LL;
	volatile int64_t t91 = 1939105118LL;

	t91 = (x373&((x374==x375)/x376));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x377 = UINT8_MAX;
	int32_t x378 = INT32_MIN;
	static uint32_t x379 = UINT32_MAX;
	int8_t x380 = 10;
	volatile int32_t t92 = 1169248;

	t92 = (x377&((x378==x379)/x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x381 = 11U;
	int32_t x382 = INT32_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t93 = 3440388;

	t93 = (x381&((x382==x383)/x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MIN;
	int16_t x387 = -33;
	int8_t x388 = INT8_MIN;
	int64_t t94 = 6551394LL;

	t94 = (x385&((x386==x387)/x388));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int8_t x390 = INT8_MIN;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = INT32_MIN;
	uint32_t t95 = 217148U;

	t95 = (x389&((x390==x391)/x392));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x394 = 5647897807891LLU;
	volatile int64_t x395 = 3284583426185LL;
	volatile uint32_t x396 = UINT32_MAX;

	t96 = (x393&((x394==x395)/x396));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = 56U;
	static uint32_t x398 = 1U;
	volatile int32_t x399 = 18113;
	volatile uint64_t x400 = UINT64_MAX;
	uint64_t t97 = 2159LLU;

	t97 = (x397&((x398==x399)/x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x402 = 2900713332063LLU;
	int8_t x403 = INT8_MIN;
	int64_t x404 = INT64_MIN;
	static volatile int64_t t98 = -458985LL;

	t98 = (x401&((x402==x403)/x404));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x406 = INT64_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t99 = 42941;

	t99 = (x405&((x406==x407)/x408));

	if (t99 != 0) { NG(); } else { ; }
	
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

