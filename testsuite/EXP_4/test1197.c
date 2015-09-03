#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
int32_t t2 = 1100;
static uint8_t x20 = 0U;
int64_t t4 = 72712LL;
static int16_t x21 = INT16_MIN;
volatile int32_t x23 = 1;
volatile int16_t x33 = 14;
static volatile int32_t t8 = -517;
int32_t t9 = 14978481;
static uint16_t x56 = UINT16_MAX;
uint16_t x63 = 3178U;
uint16_t x64 = 10U;
volatile int32_t x69 = INT32_MAX;
static volatile int64_t t14 = 389227674046651LL;
volatile uint16_t x87 = 39U;
volatile int8_t x109 = -5;
static int8_t x110 = 14;
uint64_t x111 = 6216881594868705LLU;
uint16_t x119 = 18U;
int64_t t22 = INT64_MIN;
volatile int32_t t24 = -606;
int32_t x129 = INT32_MIN;
int8_t x136 = 33;
static uint32_t x137 = UINT32_MAX;
int32_t x138 = -29289625;
int64_t x139 = -611886927530628927LL;
int64_t x149 = INT64_MAX;
volatile int32_t x154 = INT32_MIN;
uint8_t x169 = 29U;
int32_t t35 = -27584305;
static uint8_t x174 = 1U;
uint16_t x183 = 16746U;
int32_t t39 = 1116555;
static uint16_t x196 = 36U;
static volatile int8_t x198 = -1;
static int64_t x199 = -7035991521LL;
int32_t t42 = -5742;
int8_t x208 = -43;
static int8_t x216 = -1;
int64_t x221 = -3719315086834LL;
int64_t x229 = INT64_MAX;
static int8_t x234 = INT8_MIN;
int32_t x235 = -1;
int16_t x237 = INT16_MIN;
uint64_t x255 = 143085717233712LLU;
volatile uint32_t t52 = 111192184U;
int8_t x265 = INT8_MAX;
int64_t x268 = 60193592LL;
int64_t x272 = -32057239414035LL;
static int8_t x273 = 7;
uint64_t t58 = 3544416287519362241LLU;
volatile uint32_t x287 = UINT32_MAX;
static int64_t x301 = 3068697LL;
uint16_t x305 = 4340U;
int8_t x306 = 1;
int16_t x307 = INT16_MAX;
volatile uint16_t x311 = 474U;
volatile int8_t x315 = -1;
int32_t x317 = -92503;
volatile int32_t t68 = -13571;
int16_t x325 = INT16_MIN;
int64_t x330 = INT64_MIN;
int64_t t73 = -49073785996LL;
int8_t x350 = INT8_MIN;
int64_t x352 = -183698238854514LL;
static int32_t x353 = INT32_MIN;
uint64_t x354 = UINT64_MAX;
uint16_t x366 = 204U;
volatile int32_t t79 = -1336764;
volatile int32_t x371 = INT32_MAX;
volatile int16_t x374 = -1;
static volatile uint64_t x375 = 67545LLU;
static volatile int32_t x377 = INT32_MIN;
static int32_t t82 = 748760607;
volatile int16_t x387 = -1;
int32_t x388 = 1753524;
int64_t x389 = 472747LL;
static int32_t x398 = -1;
int16_t x404 = INT16_MIN;
uint64_t t90 = 188440LLU;
int16_t x418 = INT16_MAX;
uint32_t x420 = UINT32_MAX;
int16_t x424 = INT16_MAX;
int16_t x429 = -1;
uint16_t x430 = 78U;
int32_t t94 = 13813831;
volatile uint64_t x433 = 243608567LLU;
uint64_t x434 = 927885049LLU;
int16_t x439 = 162;
static uint32_t t96 = 169U;
volatile uint64_t t97 = 6498063LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = UINT64_MAX;
	int64_t x3 = -39431824LL;
	int64_t x4 = INT64_MIN;
	uint64_t t0 = 43191195235225LLU;

	t0 = (x1+(x2-(x3==x4)));

	if (t0 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int32_t x6 = 27537819;
	int64_t x7 = INT64_MAX;
	volatile int32_t t1 = -17094912;

	t1 = (x5+(x6-(x7==x8)));

	if (t1 != 27537691) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int8_t x10 = INT8_MAX;
	int64_t x11 = INT64_MIN;
	static uint64_t x12 = UINT64_MAX;

	t2 = (x9+(x10-(x11==x12)));

	if (t2 != 126) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 74;
	int32_t x14 = -154004622;
	int16_t x15 = 1007;
	int32_t x16 = -1690402;
	volatile int32_t t3 = 61239045;

	t3 = (x13+(x14-(x15==x16)));

	if (t3 != -154004548) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	int16_t x18 = 5707;
	uint32_t x19 = 392898532U;

	t4 = (x17+(x18-(x19==x20)));

	if (t4 != 5706LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -1;
	volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 12;

	t5 = (x21+(x22-(x23==x24)));

	if (t5 != -32769) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x34 = -1;
	int8_t x35 = 27;
	int8_t x36 = -10;
	int32_t t6 = 934733010;

	t6 = (x33+(x34-(x35==x36)));

	if (t6 != 13) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	int16_t x38 = 8239;
	int8_t x39 = INT8_MAX;
	static int32_t x40 = INT32_MAX;
	static volatile int32_t t7 = 6762;

	t7 = (x37+(x38-(x39==x40)));

	if (t7 != 73774) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = -1;
	volatile int8_t x46 = 58;
	uint32_t x47 = 2U;
	uint8_t x48 = 87U;

	t8 = (x45+(x46-(x47==x48)));

	if (t8 != 57) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x49 = -859;
	int8_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	int32_t x52 = -231;

	t9 = (x49+(x50-(x51==x52)));

	if (t9 != -860) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x53 = -1LL;
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MIN;
	int64_t t10 = -243993590047973LL;

	t10 = (x53+(x54-(x55==x56)));

	if (t10 != 254LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x61 = 13004;
	int32_t x62 = -90640;
	int32_t t11 = -14;

	t11 = (x61+(x62-(x63==x64)));

	if (t11 != -77636) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	static int8_t x66 = INT8_MAX;
	volatile int32_t x67 = INT32_MIN;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t12 = 52699095;

	t12 = (x65+(x66-(x67==x68)));

	if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x70 = INT16_MIN;
	int32_t x71 = -1;
	int8_t x72 = -1;
	int32_t t13 = -1;

	t13 = (x69+(x70-(x71==x72)));

	if (t13 != 2147450878) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -6710677LL;
	static int32_t x82 = -1;
	static uint16_t x83 = 167U;
	int32_t x84 = INT32_MIN;

	t14 = (x81+(x82-(x83==x84)));

	if (t14 != -6710678LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = 5U;
	volatile int64_t x86 = -1LL;
	int32_t x88 = 1;
	static volatile int64_t t15 = -84532576682833205LL;

	t15 = (x85+(x86-(x87==x88)));

	if (t15 != 4LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = INT32_MAX;
	uint32_t x90 = 1622U;
	int32_t x91 = -105252;
	uint16_t x92 = 3072U;
	volatile uint32_t t16 = 310U;

	t16 = (x89+(x90-(x91==x92)));

	if (t16 != 2147485269U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = -1;
	static uint32_t x98 = UINT32_MAX;
	uint16_t x99 = 26394U;
	volatile int64_t x100 = INT64_MIN;
	static volatile uint32_t t17 = 223513U;

	t17 = (x97+(x98-(x99==x100)));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x101 = UINT8_MAX;
	uint8_t x102 = UINT8_MAX;
	uint8_t x103 = 6U;
	int8_t x104 = INT8_MIN;
	int32_t t18 = -7496;

	t18 = (x101+(x102-(x103==x104)));

	if (t18 != 510) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x105 = UINT8_MAX;
	static int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	static uint64_t x108 = UINT64_MAX;
	int32_t t19 = -745265353;

	t19 = (x105+(x106-(x107==x108)));

	if (t19 != -32513) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t20 = -8901;

	t20 = (x109+(x110-(x111==x112)));

	if (t20 != 9) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x113 = 2U;
	uint8_t x114 = 35U;
	volatile int8_t x115 = -1;
	int32_t x116 = -166;
	volatile int32_t t21 = -4627;

	t21 = (x113+(x114-(x115==x116)));

	if (t21 != 37) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x117 = 0U;
	int64_t x118 = INT64_MIN;
	static uint8_t x120 = 1U;

	t22 = (x117+(x118-(x119==x120)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = 18;
	static int8_t x123 = INT8_MAX;
	volatile int64_t x124 = INT64_MIN;
	volatile int32_t t23 = -25;

	t23 = (x121+(x122-(x123==x124)));

	if (t23 != -32750) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = -51;
	int16_t x127 = INT16_MIN;
	static int8_t x128 = INT8_MAX;

	t24 = (x125+(x126-(x127==x128)));

	if (t24 != -179) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x130 = 264670782;
	uint32_t x131 = 234U;
	int64_t x132 = -7588507584314671LL;
	static volatile int32_t t25 = -345875;

	t25 = (x129+(x130-(x131==x132)));

	if (t25 != -1882812866) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x133 = -1;
	uint32_t x134 = 5U;
	uint16_t x135 = 6U;
	volatile uint32_t t26 = 33610941U;

	t26 = (x133+(x134-(x135==x136)));

	if (t26 != 4U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x140 = UINT32_MAX;
	static uint32_t t27 = 13278U;

	t27 = (x137+(x138-(x139==x140)));

	if (t27 != 4265677670U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = INT64_MAX;
	int32_t x144 = -1;
	volatile int32_t t28 = -5788850;

	t28 = (x141+(x142-(x143==x144)));

	if (t28 != -32513) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = 3386LL;
	volatile int64_t x146 = -1LL;
	volatile int32_t x147 = -1;
	int16_t x148 = INT16_MAX;
	int64_t t29 = -4054160301576328LL;

	t29 = (x145+(x146-(x147==x148)));

	if (t29 != 3385LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x150 = INT32_MIN;
	volatile int8_t x151 = INT8_MIN;
	uint64_t x152 = 652089319LLU;
	int64_t t30 = -78841LL;

	t30 = (x149+(x150-(x151==x152)));

	if (t30 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x153 = -1LL;
	static int32_t x155 = INT32_MAX;
	static int64_t x156 = INT64_MIN;
	int64_t t31 = 27LL;

	t31 = (x153+(x154-(x155==x156)));

	if (t31 != -2147483649LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x157 = INT64_MIN;
	uint16_t x158 = 627U;
	int64_t x159 = INT64_MAX;
	volatile uint8_t x160 = 5U;
	int64_t t32 = 5477LL;

	t32 = (x157+(x158-(x159==x160)));

	if (t32 != -9223372036854775181LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = -1;
	volatile int8_t x162 = 14;
	int16_t x163 = -1;
	uint32_t x164 = 1069785067U;
	volatile int32_t t33 = 381850;

	t33 = (x161+(x162-(x163==x164)));

	if (t33 != 13) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x165 = UINT16_MAX;
	uint64_t x166 = UINT64_MAX;
	static int32_t x167 = -1;
	int8_t x168 = INT8_MAX;
	uint64_t t34 = 67718496LLU;

	t34 = (x165+(x166-(x167==x168)));

	if (t34 != 65534LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x170 = -3;
	static uint32_t x171 = UINT32_MAX;
	int8_t x172 = INT8_MAX;

	t35 = (x169+(x170-(x171==x172)));

	if (t35 != 26) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = UINT64_MAX;
	uint32_t x175 = UINT32_MAX;
	volatile int64_t x176 = -7LL;
	volatile uint64_t t36 = 4251479496LLU;

	t36 = (x173+(x174-(x175==x176)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = 13U;
	int16_t x178 = INT16_MIN;
	int64_t x179 = INT64_MAX;
	volatile uint32_t x180 = UINT32_MAX;
	static volatile int32_t t37 = 0;

	t37 = (x177+(x178-(x179==x180)));

	if (t37 != -32755) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x181 = -1;
	volatile int64_t x182 = 44438043LL;
	volatile int16_t x184 = -1;
	volatile int64_t t38 = 54LL;

	t38 = (x181+(x182-(x183==x184)));

	if (t38 != 44438042LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = 1598;
	int8_t x186 = INT8_MAX;
	volatile int8_t x187 = 1;
	int32_t x188 = INT32_MAX;

	t39 = (x185+(x186-(x187==x188)));

	if (t39 != 1725) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x189 = -495334731445538569LL;
	static int8_t x190 = -19;
	static int32_t x191 = 457332541;
	volatile int32_t x192 = INT32_MAX;
	volatile int64_t t40 = -67506971938461LL;

	t40 = (x189+(x190-(x191==x192)));

	if (t40 != -495334731445538588LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = -24;
	volatile uint8_t x194 = 0U;
	int32_t x195 = INT32_MIN;
	volatile int32_t t41 = 728;

	t41 = (x193+(x194-(x195==x196)));

	if (t41 != -24) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x197 = 2047U;
	int8_t x200 = INT8_MIN;

	t42 = (x197+(x198-(x199==x200)));

	if (t42 != 2046) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x205 = 6;
	static int64_t x206 = INT64_MIN;
	uint8_t x207 = UINT8_MAX;
	volatile int64_t t43 = -5997LL;

	t43 = (x205+(x206-(x207==x208)));

	if (t43 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MAX;
	volatile int32_t x215 = 268;
	volatile int32_t t44 = -44916241;

	t44 = (x213+(x214-(x215==x216)));

	if (t44 != 32639) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = -1;
	volatile int64_t x218 = -20996088LL;
	int16_t x219 = INT16_MIN;
	static uint16_t x220 = 416U;
	static volatile int64_t t45 = 33289423736458988LL;

	t45 = (x217+(x218-(x219==x220)));

	if (t45 != -20996089LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x222 = INT32_MIN;
	volatile int32_t x223 = INT32_MAX;
	int16_t x224 = 0;
	int64_t t46 = 72940LL;

	t46 = (x221+(x222-(x223==x224)));

	if (t46 != -3721462570482LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = -1;
	int64_t x226 = -23977885228049LL;
	uint32_t x227 = 436209455U;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t47 = -1250LL;

	t47 = (x225+(x226-(x227==x228)));

	if (t47 != -23977885228050LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x230 = INT32_MIN;
	static int32_t x231 = -85247;
	static volatile int64_t x232 = INT64_MAX;
	int64_t t48 = 1026862LL;

	t48 = (x229+(x230-(x231==x232)));

	if (t48 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = -1LL;
	int8_t x236 = INT8_MAX;
	static volatile int64_t t49 = 564216006666028282LL;

	t49 = (x233+(x234-(x235==x236)));

	if (t49 != -129LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x238 = INT8_MIN;
	volatile int16_t x239 = -1;
	uint8_t x240 = UINT8_MAX;
	int32_t t50 = 1045127134;

	t50 = (x237+(x238-(x239==x240)));

	if (t50 != -32896) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x249 = 197207LL;
	int64_t x250 = -1LL;
	volatile uint64_t x251 = 955957811074572748LLU;
	volatile int32_t x252 = INT32_MAX;
	int64_t t51 = -3961LL;

	t51 = (x249+(x250-(x251==x252)));

	if (t51 != 197206LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = 3U;
	int16_t x254 = -1;
	uint64_t x256 = 1172690182079LLU;

	t52 = (x253+(x254-(x255==x256)));

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x257 = -31;
	volatile int16_t x258 = INT16_MAX;
	uint32_t x259 = 5U;
	static int16_t x260 = INT16_MIN;
	int32_t t53 = 17601;

	t53 = (x257+(x258-(x259==x260)));

	if (t53 != 32736) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x261 = UINT8_MAX;
	static int8_t x262 = -1;
	static volatile uint8_t x263 = 0U;
	int32_t x264 = INT32_MAX;
	int32_t t54 = 3921;

	t54 = (x261+(x262-(x263==x264)));

	if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x266 = INT16_MIN;
	volatile uint16_t x267 = 3933U;
	volatile int32_t t55 = -780910;

	t55 = (x265+(x266-(x267==x268)));

	if (t55 != -32641) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x269 = 0;
	static int16_t x270 = INT16_MIN;
	static uint8_t x271 = 53U;
	volatile int32_t t56 = -1140168;

	t56 = (x269+(x270-(x271==x272)));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MAX;
	static uint16_t x276 = 5U;
	volatile int64_t t57 = 124788002298518LL;

	t57 = (x273+(x274-(x275==x276)));

	if (t57 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x277 = 1186441971U;
	volatile uint64_t x278 = 8212LLU;
	int32_t x279 = -4470761;
	uint64_t x280 = UINT64_MAX;

	t58 = (x277+(x278-(x279==x280)));

	if (t58 != 1186450183LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x281 = 971276280LLU;
	int64_t x282 = -248838506123162LL;
	volatile int32_t x283 = -1;
	uint8_t x284 = UINT8_MAX;
	uint64_t t59 = 61438032277LLU;

	t59 = (x281+(x282-(x283==x284)));

	if (t59 != 18446495236174704734LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = 0;
	volatile int64_t x286 = -1LL;
	uint8_t x288 = 19U;
	int64_t t60 = 489LL;

	t60 = (x285+(x286-(x287==x288)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = INT64_MIN;
	uint8_t x290 = UINT8_MAX;
	static volatile int8_t x291 = INT8_MAX;
	int32_t x292 = INT32_MIN;
	int64_t t61 = 1685621067LL;

	t61 = (x289+(x290-(x291==x292)));

	if (t61 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x293 = -1;
	int8_t x294 = 1;
	uint64_t x295 = 37307LLU;
	volatile uint16_t x296 = 1361U;
	volatile int32_t t62 = 129288;

	t62 = (x293+(x294-(x295==x296)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x297 = -1;
	volatile uint8_t x298 = UINT8_MAX;
	int16_t x299 = INT16_MIN;
	static volatile uint16_t x300 = 510U;
	int32_t t63 = -6140;

	t63 = (x297+(x298-(x299==x300)));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x302 = -1;
	int32_t x303 = 0;
	uint16_t x304 = 20570U;
	int64_t t64 = 72741048322912LL;

	t64 = (x301+(x302-(x303==x304)));

	if (t64 != 3068696LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x308 = -1LL;
	volatile int32_t t65 = -29801651;

	t65 = (x305+(x306-(x307==x308)));

	if (t65 != 4341) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = INT8_MAX;
	volatile int8_t x310 = 4;
	static uint8_t x312 = UINT8_MAX;
	int32_t t66 = 138593137;

	t66 = (x309+(x310-(x311==x312)));

	if (t66 != 131) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = -487554622941400501LL;
	int32_t x316 = -716369;
	volatile int64_t t67 = -915869928443240157LL;

	t67 = (x313+(x314-(x315==x316)));

	if (t67 != -487554625088884149LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x318 = -1;
	int64_t x319 = 1220438222434031427LL;
	int32_t x320 = -1;

	t68 = (x317+(x318-(x319==x320)));

	if (t68 != -92504) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x326 = -32190724556284171LL;
	int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	volatile int64_t t69 = -607427723140LL;

	t69 = (x325+(x326-(x327==x328)));

	if (t69 != -32190724556316939LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = INT8_MAX;
	int64_t x331 = INT64_MIN;
	static volatile int16_t x332 = INT16_MIN;
	static volatile int64_t t70 = 702622267827464LL;

	t70 = (x329+(x330-(x331==x332)));

	if (t70 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x333 = -1;
	int32_t x334 = INT32_MAX;
	uint32_t x335 = 7U;
	int8_t x336 = INT8_MAX;
	int32_t t71 = 16754;

	t71 = (x333+(x334-(x335==x336)));

	if (t71 != 2147483646) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = INT64_MAX;
	volatile int32_t x338 = -3;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = UINT32_MAX;
	volatile int64_t t72 = 3387400486761339299LL;

	t72 = (x337+(x338-(x339==x340)));

	if (t72 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x341 = INT32_MIN;
	volatile int64_t x342 = -198106745232LL;
	static volatile int8_t x343 = INT8_MIN;
	static volatile uint8_t x344 = 7U;

	t73 = (x341+(x342-(x343==x344)));

	if (t73 != -200254228880LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x345 = 1092475510259173649LL;
	uint64_t x346 = UINT64_MAX;
	static int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	uint64_t t74 = 5LLU;

	t74 = (x345+(x346-(x347==x348)));

	if (t74 != 1092475510259173648LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x349 = UINT16_MAX;
	int32_t x351 = 19;
	static volatile int32_t t75 = -957053;

	t75 = (x349+(x350-(x351==x352)));

	if (t75 != 65407) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x355 = -1;
	int8_t x356 = INT8_MAX;
	static volatile uint64_t t76 = 263067981LLU;

	t76 = (x353+(x354-(x355==x356)));

	if (t76 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x357 = INT64_MIN;
	uint16_t x358 = 66U;
	int64_t x359 = 87714LL;
	int16_t x360 = INT16_MIN;
	int64_t t77 = 1LL;

	t77 = (x357+(x358-(x359==x360)));

	if (t77 != -9223372036854775742LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x361 = INT32_MAX;
	int16_t x362 = -1;
	static int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t78 = 1155971;

	t78 = (x361+(x362-(x363==x364)));

	if (t78 != 2147483646) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = -1;
	int16_t x367 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;

	t79 = (x365+(x366-(x367==x368)));

	if (t79 != 203) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	static uint16_t x372 = 244U;
	volatile int32_t t80 = -6;

	t80 = (x369+(x370-(x371==x372)));

	if (t80 != -32769) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = -1LL;
	int8_t x376 = -1;
	static volatile int64_t t81 = -134LL;

	t81 = (x373+(x374-(x375==x376)));

	if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x378 = 134489;
	static int32_t x379 = INT32_MIN;
	volatile uint16_t x380 = 20U;

	t82 = (x377+(x378-(x379==x380)));

	if (t82 != -2147349159) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x381 = INT64_MAX;
	int64_t x382 = -1LL;
	static int8_t x383 = INT8_MIN;
	static uint16_t x384 = 11786U;
	static int64_t t83 = -482LL;

	t83 = (x381+(x382-(x383==x384)));

	if (t83 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x385 = -1;
	volatile int8_t x386 = INT8_MAX;
	static volatile int32_t t84 = 1;

	t84 = (x385+(x386-(x387==x388)));

	if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x390 = INT16_MAX;
	volatile int16_t x391 = -2890;
	static int16_t x392 = 213;
	int64_t t85 = 2062179646582347351LL;

	t85 = (x389+(x390-(x391==x392)));

	if (t85 != 505514LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x393 = -29;
	static int32_t x394 = -1;
	volatile int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MIN;
	static volatile int32_t t86 = -3;

	t86 = (x393+(x394-(x395==x396)));

	if (t86 != -30) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = -352151289;
	uint8_t x399 = 18U;
	int64_t x400 = -1LL;
	volatile int32_t t87 = 888;

	t87 = (x397+(x398-(x399==x400)));

	if (t87 != -352151290) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x401 = INT16_MIN;
	volatile uint32_t x402 = UINT32_MAX;
	static uint64_t x403 = 522544609LLU;
	uint32_t t88 = 960176U;

	t88 = (x401+(x402-(x403==x404)));

	if (t88 != 4294934527U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x405 = 0U;
	uint16_t x406 = 6485U;
	static uint16_t x407 = UINT16_MAX;
	uint16_t x408 = 44U;
	static volatile int32_t t89 = -52157458;

	t89 = (x405+(x406-(x407==x408)));

	if (t89 != 6485) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x409 = 2LLU;
	int16_t x410 = 18;
	uint64_t x411 = 51220LLU;
	uint8_t x412 = UINT8_MAX;

	t90 = (x409+(x410-(x411==x412)));

	if (t90 != 20LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = -1;
	static volatile uint32_t x419 = 22503716U;
	static volatile int32_t t91 = -1037;

	t91 = (x417+(x418-(x419==x420)));

	if (t91 != 32766) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x421 = -6993825;
	uint16_t x422 = 95U;
	static int64_t x423 = -24414998578726LL;
	volatile int32_t t92 = -3215;

	t92 = (x421+(x422-(x423==x424)));

	if (t92 != -6993730) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x425 = 1051935U;
	uint32_t x426 = 2609U;
	int16_t x427 = INT16_MIN;
	static int8_t x428 = -1;
	uint32_t t93 = 89159325U;

	t93 = (x425+(x426-(x427==x428)));

	if (t93 != 1054544U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x431 = 46784;
	volatile int16_t x432 = INT16_MIN;

	t94 = (x429+(x430-(x431==x432)));

	if (t94 != 77) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x435 = 8U;
	int64_t x436 = 993926LL;
	static volatile uint64_t t95 = 1563520387LLU;

	t95 = (x433+(x434-(x435==x436)));

	if (t95 != 1171493616LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = -1;
	uint32_t x438 = UINT32_MAX;
	volatile uint8_t x440 = UINT8_MAX;

	t96 = (x437+(x438-(x439==x440)));

	if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x441 = -1;
	static uint64_t x442 = 570248649189683960LLU;
	uint16_t x443 = 29U;
	int16_t x444 = INT16_MIN;

	t97 = (x441+(x442-(x443==x444)));

	if (t97 != 570248649189683959LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x445 = 131044395;
	int8_t x446 = INT8_MIN;
	int16_t x447 = -1;
	int16_t x448 = -1784;
	int32_t t98 = -1267416;

	t98 = (x445+(x446-(x447==x448)));

	if (t98 != 131044267) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x449 = 0U;
	int64_t x450 = INT64_MIN;
	int16_t x451 = -31;
	volatile uint16_t x452 = 17U;
	int64_t t99 = INT64_MIN;

	t99 = (x449+(x450-(x451==x452)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

