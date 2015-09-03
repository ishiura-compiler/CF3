#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 168644162;
volatile uint8_t x5 = 0U;
int16_t x7 = INT16_MIN;
int8_t x15 = -63;
int8_t x26 = 0;
static int16_t x29 = INT16_MIN;
int32_t t6 = -3185;
uint32_t x38 = 1860952U;
int64_t x41 = INT64_MIN;
int16_t x46 = 0;
static volatile uint64_t x52 = UINT64_MAX;
uint8_t x54 = 0U;
volatile int32_t x58 = INT32_MIN;
int32_t x62 = INT32_MIN;
uint64_t x72 = 4249451581189312303LLU;
uint8_t x75 = UINT8_MAX;
uint64_t x82 = 12267LLU;
int64_t x83 = INT64_MIN;
int32_t x86 = INT32_MAX;
int32_t t19 = -38996;
int32_t x92 = INT32_MAX;
uint32_t x94 = UINT32_MAX;
static int32_t t23 = 55;
volatile int32_t t25 = -119263;
int64_t x121 = -1442401764LL;
volatile int32_t t31 = -165302912;
uint64_t t33 = 1633003267LLU;
int64_t x156 = 536394764325878LL;
static int8_t x159 = 2;
uint16_t x160 = UINT16_MAX;
static int16_t x163 = INT16_MAX;
int16_t x164 = 7345;
int8_t x166 = -11;
volatile uint32_t x167 = UINT32_MAX;
int32_t x169 = INT32_MIN;
int16_t x173 = -1;
uint32_t x174 = 163265637U;
volatile int32_t t41 = 200562;
int32_t x177 = INT32_MIN;
static volatile int16_t x182 = INT16_MIN;
int64_t t43 = -826228671LL;
volatile int8_t x189 = INT8_MIN;
uint32_t x198 = 38465U;
static volatile int64_t t47 = 188601807204146422LL;
int64_t x201 = -1LL;
static int32_t x209 = -266976693;
volatile uint32_t t50 = 15636U;
uint32_t t52 = 919500972U;
uint64_t x221 = UINT64_MAX;
int64_t x226 = -9423338LL;
static int16_t x227 = -1;
static int64_t x231 = INT64_MIN;
uint64_t x235 = 2420LLU;
volatile uint64_t x241 = 24LLU;
int8_t x256 = INT8_MAX;
int64_t t63 = 7040716LL;
volatile int16_t x268 = 264;
static volatile int16_t x269 = -1;
volatile int64_t t65 = -8247083804LL;
int16_t x275 = -1;
volatile int64_t t66 = -1542169515042305418LL;
uint64_t x277 = 1103446467286LLU;
volatile uint64_t x284 = 739572024LLU;
volatile uint64_t t71 = 28LLU;
uint32_t x301 = UINT32_MAX;
uint32_t x302 = UINT32_MAX;
volatile uint16_t x303 = 14U;
int32_t t74 = 12400318;
int8_t x309 = 13;
volatile int16_t x311 = -1;
int8_t x313 = -8;
uint16_t x315 = 2766U;
int16_t x320 = INT16_MIN;
uint64_t x328 = 112525255LLU;
int32_t x329 = INT32_MIN;
int16_t x331 = 296;
static int64_t x335 = INT64_MAX;
uint64_t x339 = 1384LLU;
volatile int64_t t82 = -66282435LL;
int8_t x352 = -1;
int16_t x363 = 8;
int16_t x372 = -1;
int32_t t90 = 0;
int64_t x377 = INT64_MIN;
uint32_t x381 = 22486U;
int8_t x385 = 2;
volatile uint16_t x387 = 520U;
uint16_t x394 = 0U;
uint8_t x398 = UINT8_MAX;
uint64_t x399 = UINT64_MAX;
volatile uint32_t x402 = UINT32_MAX;
volatile int32_t t98 = 6;
int8_t x405 = 4;
int8_t x407 = -1;
int64_t x408 = 1038989559646913293LL;


void f0(void) {
	static int16_t x1 = -1;
	int32_t x2 = 0;
	int32_t x3 = -1;
	int16_t x4 = 1677;

	t0 = ((x1+(x2==x3))%x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = 8U;
	static int8_t x8 = -8;
	int32_t t1 = 489820;

	t1 = ((x5+(x6==x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	volatile int32_t x10 = INT32_MAX;
	int32_t x11 = INT32_MIN;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -13791626;

	t2 = ((x9+(x10==x11))%x12);

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 53U;
	static int16_t x14 = 0;
	static volatile int64_t x16 = -1LL;
	int64_t t3 = -128740LL;

	t3 = ((x13+(x14==x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = UINT8_MAX;
	volatile int32_t x22 = INT32_MIN;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t4 = 896;

	t4 = ((x21+(x22==x23))%x24);

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	volatile uint8_t x27 = 108U;
	int32_t x28 = INT32_MAX;
	volatile int32_t t5 = 11028;

	t5 = ((x25+(x26==x27))%x28);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x30 = -9239;
	volatile int32_t x31 = -1;
	static int8_t x32 = INT8_MIN;

	t6 = ((x29+(x30==x31))%x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 849U;
	int8_t x34 = INT8_MIN;
	static int8_t x35 = 2;
	volatile int32_t x36 = -7;
	volatile uint32_t t7 = 10648652U;

	t7 = ((x33+(x34==x35))%x36);

	if (t7 != 849U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 5U;
	uint8_t x39 = UINT8_MAX;
	static int8_t x40 = -14;
	volatile int32_t t8 = 2;

	t8 = ((x37+(x38==x39))%x40);

	if (t8 != 5) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x42 = 5U;
	int32_t x43 = INT32_MAX;
	volatile uint8_t x44 = UINT8_MAX;
	volatile int64_t t9 = 81LL;

	t9 = ((x41+(x42==x43))%x44);

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MIN;
	int16_t x47 = INT16_MAX;
	volatile int8_t x48 = INT8_MIN;
	static volatile int32_t t10 = -282375;

	t10 = ((x45+(x46==x47))%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	volatile uint64_t x50 = 593677965371LLU;
	uint32_t x51 = 1189U;
	volatile uint64_t t11 = 204852287782LLU;

	t11 = ((x49+(x50==x51))%x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 561U;
	uint8_t x55 = UINT8_MAX;
	volatile int16_t x56 = INT16_MIN;
	int32_t t12 = -17283162;

	t12 = ((x53+(x54==x55))%x56);

	if (t12 != 561) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	uint8_t x59 = UINT8_MAX;
	volatile uint8_t x60 = UINT8_MAX;
	volatile int32_t t13 = 65;

	t13 = ((x57+(x58==x59))%x60);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -2219160493874882433LL;
	static volatile int8_t x63 = INT8_MAX;
	volatile int8_t x64 = INT8_MAX;
	volatile int64_t t14 = -149LL;

	t14 = ((x61+(x62==x63))%x64);

	if (t14 != -81LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 24U;
	uint16_t x70 = 427U;
	uint16_t x71 = UINT16_MAX;
	volatile uint64_t t15 = 441563LLU;

	t15 = ((x69+(x70==x71))%x72);

	if (t15 != 24LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 55972992U;
	uint32_t x74 = UINT32_MAX;
	volatile uint16_t x76 = 55U;
	uint32_t t16 = 997324017U;

	t16 = ((x73+(x74==x75))%x76);

	if (t16 != 42U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 100680LLU;
	int8_t x78 = 1;
	int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MIN;
	uint64_t t17 = 1LLU;

	t17 = ((x77+(x78==x79))%x80);

	if (t17 != 100680LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x81 = 2946906687LL;
	volatile uint32_t x84 = UINT32_MAX;
	int64_t t18 = 812705LL;

	t18 = ((x81+(x82==x83))%x84);

	if (t18 != 2946906687LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 0;
	int8_t x87 = -1;
	static int8_t x88 = 4;

	t19 = ((x85+(x86==x87))%x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	static int32_t x90 = -8;
	int16_t x91 = 0;
	volatile int32_t t20 = -14102;

	t20 = ((x89+(x90==x91))%x92);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 910857778410773LLU;
	int8_t x95 = INT8_MIN;
	int64_t x96 = 15993804139746985LL;
	static volatile uint64_t t21 = 36648086LLU;

	t21 = ((x93+(x94==x95))%x96);

	if (t21 != 910857778410773LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 26851U;
	int16_t x98 = INT16_MAX;
	volatile int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t22 = 6532600;

	t22 = ((x97+(x98==x99))%x100);

	if (t22 != 99) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -15;
	int8_t x102 = -1;
	static int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;

	t23 = ((x101+(x102==x103))%x104);

	if (t23 != -15) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	int16_t x106 = -1;
	int8_t x107 = INT8_MIN;
	volatile int8_t x108 = INT8_MIN;
	volatile uint64_t t24 = 760979807070LLU;

	t24 = ((x105+(x106==x107))%x108);

	if (t24 != 127LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = -1;
	volatile int32_t x110 = -7125;
	uint64_t x111 = 953807528LLU;
	int16_t x112 = 2;

	t25 = ((x109+(x110==x111))%x112);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MAX;
	uint64_t x114 = 0LLU;
	int16_t x115 = INT16_MIN;
	int64_t x116 = -34407LL;
	volatile int64_t t26 = -7340069221612038LL;

	t26 = ((x113+(x114==x115))%x116);

	if (t26 != 127LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = 4;
	int16_t x118 = -19;
	int16_t x119 = INT16_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t27 = 46813;

	t27 = ((x117+(x118==x119))%x120);

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x122 = INT32_MAX;
	static int64_t x123 = INT64_MIN;
	uint64_t x124 = UINT64_MAX;
	uint64_t t28 = 242357LLU;

	t28 = ((x121+(x122==x123))%x124);

	if (t28 != 18446744072267149852LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x125 = UINT16_MAX;
	volatile uint16_t x126 = 4934U;
	static int64_t x127 = -1LL;
	uint32_t x128 = 859U;
	uint32_t t29 = 1394U;

	t29 = ((x125+(x126==x127))%x128);

	if (t29 != 251U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = 6272LL;
	uint16_t x130 = 1671U;
	int8_t x131 = -3;
	int64_t x132 = INT64_MIN;
	volatile int64_t t30 = -18374927617925LL;

	t30 = ((x129+(x130==x131))%x132);

	if (t30 != 6272LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = -3;
	static volatile uint64_t x134 = UINT64_MAX;
	int64_t x135 = 34840373490181LL;
	int8_t x136 = -1;

	t31 = ((x133+(x134==x135))%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	static int16_t x138 = -194;
	int64_t x139 = -1LL;
	int16_t x140 = INT16_MIN;
	static int32_t t32 = -114;

	t32 = ((x137+(x138==x139))%x140);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = -3784556318859374LL;
	static uint8_t x142 = UINT8_MAX;
	static int64_t x143 = -2438789664910076728LL;
	uint64_t x144 = 9432419LLU;

	t33 = ((x141+(x142==x143))%x144);

	if (t33 != 6514386LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t34 = 1;

	t34 = ((x145+(x146==x147))%x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = INT8_MAX;
	int8_t x150 = -1;
	int64_t x151 = INT64_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t35 = 15944981LLU;

	t35 = ((x149+(x150==x151))%x152);

	if (t35 != 127LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x153 = 381340366662168187LL;
	int32_t x154 = -3;
	static uint32_t x155 = 3168363U;
	volatile int64_t t36 = 9765620LL;

	t36 = ((x153+(x154==x155))%x156);

	if (t36 != 500083990794807LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x157 = 1U;
	int64_t x158 = -1LL;
	volatile int32_t t37 = -1;

	t37 = ((x157+(x158==x159))%x160);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x161 = 1895U;
	int32_t x162 = -1;
	int32_t t38 = -23416;

	t38 = ((x161+(x162==x163))%x164);

	if (t38 != 1895) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = 1;
	int32_t x168 = INT32_MIN;
	int32_t t39 = 292;

	t39 = ((x165+(x166==x167))%x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x170 = INT32_MIN;
	static volatile int16_t x171 = INT16_MAX;
	int32_t x172 = -1;
	int32_t t40 = 33;

	t40 = ((x169+(x170==x171))%x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;

	t41 = ((x173+(x174==x175))%x176);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = 316;
	volatile uint16_t x179 = UINT16_MAX;
	volatile int16_t x180 = INT16_MIN;
	int32_t t42 = 2808246;

	t42 = ((x177+(x178==x179))%x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = 3;
	uint64_t x183 = 1554926LLU;
	int64_t x184 = INT64_MIN;

	t43 = ((x181+(x182==x183))%x184);

	if (t43 != 3LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x185 = 0;
	volatile int8_t x186 = INT8_MIN;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = 1;
	int32_t t44 = 339;

	t44 = ((x185+(x186==x187))%x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x190 = -1;
	static int8_t x191 = INT8_MIN;
	volatile int64_t x192 = INT64_MIN;
	volatile int64_t t45 = 202LL;

	t45 = ((x189+(x190==x191))%x192);

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -117570781481LL;
	volatile uint64_t x194 = UINT64_MAX;
	int32_t x195 = -1;
	static uint16_t x196 = UINT16_MAX;
	int64_t t46 = 19595590564287LL;

	t46 = ((x193+(x194==x195))%x196);

	if (t46 != -8455LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x197 = INT64_MIN;
	uint16_t x199 = 2U;
	volatile uint32_t x200 = UINT32_MAX;

	t47 = ((x197+(x198==x199))%x200);

	if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x202 = 0U;
	int64_t x203 = -12941LL;
	uint16_t x204 = UINT16_MAX;
	int64_t t48 = -5390983422333LL;

	t48 = ((x201+(x202==x203))%x204);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	int64_t x207 = INT64_MIN;
	static int32_t x208 = INT32_MAX;
	int32_t t49 = 265;

	t49 = ((x205+(x206==x207))%x208);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x210 = -1;
	int32_t x211 = -1;
	uint32_t x212 = 1671U;

	t50 = ((x209+(x210==x211))%x212);

	if (t50 != 1658U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = 0U;
	int16_t x214 = 2210;
	int32_t x215 = -1;
	int8_t x216 = 1;
	volatile uint32_t t51 = 2003192491U;

	t51 = ((x213+(x214==x215))%x216);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x217 = 1463316U;
	int32_t x218 = INT32_MIN;
	static volatile int8_t x219 = INT8_MAX;
	volatile uint8_t x220 = 2U;

	t52 = ((x217+(x218==x219))%x220);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x222 = -1LL;
	uint8_t x223 = UINT8_MAX;
	uint16_t x224 = UINT16_MAX;
	static volatile uint64_t t53 = 15LLU;

	t53 = ((x221+(x222==x223))%x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x225 = -1;
	static int16_t x228 = 26;
	int32_t t54 = 838531;

	t54 = ((x225+(x226==x227))%x228);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -30;
	int64_t x230 = INT64_MAX;
	int64_t x232 = -302LL;
	int64_t t55 = -1835364LL;

	t55 = ((x229+(x230==x231))%x232);

	if (t55 != -30LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 73613314066050LLU;
	int8_t x234 = INT8_MIN;
	int16_t x236 = INT16_MIN;
	static volatile uint64_t t56 = 3728662644759LLU;

	t56 = ((x233+(x234==x235))%x236);

	if (t56 != 73613314066050LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 37U;
	int64_t x238 = -1LL;
	int64_t x239 = INT64_MAX;
	int32_t x240 = INT32_MIN;
	volatile int32_t t57 = -118455670;

	t57 = ((x237+(x238==x239))%x240);

	if (t57 != 37) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x242 = INT64_MAX;
	static uint32_t x243 = 1003331458U;
	static int8_t x244 = 4;
	uint64_t t58 = 223395LLU;

	t58 = ((x241+(x242==x243))%x244);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x245 = INT64_MIN;
	static volatile int16_t x246 = INT16_MIN;
	uint32_t x247 = 7U;
	uint32_t x248 = 416965388U;
	static int64_t t59 = -13294388618650LL;

	t59 = ((x245+(x246==x247))%x248);

	if (t59 != -166975432LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x249 = -1;
	volatile int32_t x250 = -1;
	int64_t x251 = -244LL;
	int64_t x252 = INT64_MIN;
	int64_t t60 = -60961474651405LL;

	t60 = ((x249+(x250==x251))%x252);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = 1U;
	static uint16_t x254 = 5875U;
	int16_t x255 = -345;
	volatile int32_t t61 = 877;

	t61 = ((x253+(x254==x255))%x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x257 = INT64_MIN;
	volatile uint8_t x258 = 31U;
	uint16_t x259 = UINT16_MAX;
	uint16_t x260 = UINT16_MAX;
	int64_t t62 = 91LL;

	t62 = ((x257+(x258==x259))%x260);

	if (t62 != -32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = 997U;
	int16_t x262 = INT16_MAX;
	int64_t x263 = INT64_MIN;
	int64_t x264 = INT64_MIN;

	t63 = ((x261+(x262==x263))%x264);

	if (t63 != 997LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = INT8_MAX;
	volatile int16_t x266 = INT16_MIN;
	volatile int64_t x267 = -18836873915622069LL;
	volatile int32_t t64 = 472759;

	t64 = ((x265+(x266==x267))%x268);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	int64_t x272 = 65151040006LL;

	t65 = ((x269+(x270==x271))%x272);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = -1;
	int64_t x276 = INT64_MAX;

	t66 = ((x273+(x274==x275))%x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x278 = -1;
	int64_t x279 = 6LL;
	static int32_t x280 = INT32_MIN;
	volatile uint64_t t67 = 4494LLU;

	t67 = ((x277+(x278==x279))%x280);

	if (t67 != 1103446467286LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -1;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = INT8_MIN;
	uint64_t t68 = 7963195669LLU;

	t68 = ((x281+(x282==x283))%x284);

	if (t68 != 332189991LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = -745;
	int32_t x286 = INT32_MIN;
	static uint8_t x287 = 0U;
	int16_t x288 = 108;
	volatile int32_t t69 = 248;

	t69 = ((x285+(x286==x287))%x288);

	if (t69 != -97) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 6U;
	static int64_t x290 = 3079056213180676825LL;
	static int8_t x291 = -1;
	int32_t x292 = -1097311;
	volatile int32_t t70 = 109599;

	t70 = ((x289+(x290==x291))%x292);

	if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 2U;
	volatile int32_t x294 = 347;
	int16_t x295 = -1;
	uint64_t x296 = 61084LLU;

	t71 = ((x293+(x294==x295))%x296);

	if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x297 = 109U;
	volatile int64_t x298 = INT64_MIN;
	uint64_t x299 = UINT64_MAX;
	static int16_t x300 = -49;
	volatile int32_t t72 = 453;

	t72 = ((x297+(x298==x299))%x300);

	if (t72 != 11) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x304 = 1074U;
	volatile uint32_t t73 = 2855U;

	t73 = ((x301+(x302==x303))%x304);

	if (t73 != 483U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 1818U;
	static uint16_t x306 = UINT16_MAX;
	uint32_t x307 = 1052421U;
	static uint16_t x308 = 2U;

	t74 = ((x305+(x306==x307))%x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x310 = INT16_MIN;
	static uint64_t x312 = 729LLU;
	volatile uint64_t t75 = 616459854513187LLU;

	t75 = ((x309+(x310==x311))%x312);

	if (t75 != 13LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x314 = 475042495;
	uint16_t x316 = 29775U;
	int32_t t76 = 15836236;

	t76 = ((x313+(x314==x315))%x316);

	if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x317 = INT32_MIN;
	static uint32_t x318 = UINT32_MAX;
	int64_t x319 = INT64_MIN;
	int32_t t77 = 335584;

	t77 = ((x317+(x318==x319))%x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x321 = UINT32_MAX;
	int8_t x322 = INT8_MIN;
	int32_t x323 = 7;
	volatile int64_t x324 = 63373LL;
	static volatile int64_t t78 = 7LL;

	t78 = ((x321+(x322==x323))%x324);

	if (t78 != 52339LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -1;
	static volatile int16_t x326 = INT16_MIN;
	static uint16_t x327 = 5540U;
	uint64_t t79 = 85229302750921LLU;

	t79 = ((x325+(x326==x327))%x328);

	if (t79 != 86188300LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x330 = 259292319961789982LLU;
	static uint8_t x332 = 53U;
	static int32_t t80 = 507057;

	t80 = ((x329+(x330==x331))%x332);

	if (t80 != -21) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = 2789635LLU;
	int8_t x334 = INT8_MAX;
	uint8_t x336 = 4U;
	volatile uint64_t t81 = 48086299844LLU;

	t81 = ((x333+(x334==x335))%x336);

	if (t81 != 3LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x337 = INT16_MAX;
	volatile uint64_t x338 = 8836167462963616LLU;
	static volatile int64_t x340 = INT64_MAX;

	t82 = ((x337+(x338==x339))%x340);

	if (t82 != 32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x341 = 14U;
	uint8_t x342 = 15U;
	int8_t x343 = INT8_MIN;
	static int8_t x344 = -1;
	int32_t t83 = -319867;

	t83 = ((x341+(x342==x343))%x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x345 = INT16_MAX;
	int8_t x346 = -2;
	volatile int8_t x347 = INT8_MAX;
	int64_t x348 = -1LL;
	static int64_t t84 = 79320379788LL;

	t84 = ((x345+(x346==x347))%x348);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x349 = 0;
	static int64_t x350 = -2419735LL;
	static uint16_t x351 = 9121U;
	int32_t t85 = 579959433;

	t85 = ((x349+(x350==x351))%x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 1U;
	int8_t x354 = 6;
	int8_t x355 = 0;
	static int32_t x356 = -1;
	static volatile int32_t t86 = 6036;

	t86 = ((x353+(x354==x355))%x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x357 = 5;
	int8_t x358 = INT8_MIN;
	static volatile int8_t x359 = INT8_MIN;
	uint64_t x360 = UINT64_MAX;
	uint64_t t87 = 3LLU;

	t87 = ((x357+(x358==x359))%x360);

	if (t87 != 6LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x361 = UINT16_MAX;
	int32_t x362 = INT32_MAX;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t88 = -119195329;

	t88 = ((x361+(x362==x363))%x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x365 = UINT8_MAX;
	volatile int32_t x366 = INT32_MIN;
	uint64_t x367 = 238176LLU;
	int64_t x368 = -1LL;
	volatile int64_t t89 = -113063LL;

	t89 = ((x365+(x366==x367))%x368);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x369 = 7U;
	int64_t x370 = INT64_MIN;
	int8_t x371 = -49;

	t90 = ((x369+(x370==x371))%x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x373 = UINT16_MAX;
	int64_t x374 = -3155049762306126223LL;
	volatile uint16_t x375 = 8U;
	uint64_t x376 = 1191142510LLU;
	volatile uint64_t t91 = 208474661LLU;

	t91 = ((x373+(x374==x375))%x376);

	if (t91 != 65535LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x378 = INT8_MAX;
	int64_t x379 = -1LL;
	int16_t x380 = INT16_MAX;
	int64_t t92 = -67679173952LL;

	t92 = ((x377+(x378==x379))%x380);

	if (t92 != -8LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x382 = -1067661486434813235LL;
	static int16_t x383 = -1;
	int32_t x384 = -1;
	uint32_t t93 = 2436U;

	t93 = ((x381+(x382==x383))%x384);

	if (t93 != 22486U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x386 = 1;
	int16_t x388 = 19;
	volatile int32_t t94 = 58;

	t94 = ((x385+(x386==x387))%x388);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = UINT64_MAX;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = 0;
	uint16_t x392 = 1317U;
	volatile uint64_t t95 = 8535680345165LLU;

	t95 = ((x389+(x390==x391))%x392);

	if (t95 != 432LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = INT8_MAX;
	static uint32_t x395 = UINT32_MAX;
	int16_t x396 = 3;
	volatile int32_t t96 = -779118090;

	t96 = ((x393+(x394==x395))%x396);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x397 = 3U;
	int64_t x400 = -10183582692955914LL;
	int64_t t97 = -795LL;

	t97 = ((x397+(x398==x399))%x400);

	if (t97 != 3LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = INT32_MIN;
	static int32_t x403 = INT32_MAX;
	volatile int32_t x404 = -3;

	t98 = ((x401+(x402==x403))%x404);

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x406 = INT8_MIN;
	int64_t t99 = 90LL;

	t99 = ((x405+(x406==x407))%x408);

	if (t99 != 4LL) { NG(); } else { ; }
	
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

