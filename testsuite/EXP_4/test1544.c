#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MAX;
int16_t x9 = 0;
int16_t x12 = INT16_MIN;
volatile int32_t t2 = 76269;
uint64_t x18 = UINT64_MAX;
int32_t x23 = -1;
int64_t x27 = INT64_MIN;
int16_t x28 = 1;
int64_t x31 = INT64_MAX;
int64_t x36 = INT64_MIN;
int32_t t8 = 1328352;
static int64_t x40 = INT64_MIN;
static uint32_t x43 = 1829522U;
int64_t x51 = 15122194496LL;
volatile int32_t t12 = 2767;
int16_t x55 = -1;
int8_t x56 = INT8_MIN;
int64_t x57 = INT64_MAX;
int64_t x59 = INT64_MIN;
int64_t x63 = -1LL;
int32_t t15 = 273;
uint8_t x68 = UINT8_MAX;
int32_t t18 = -20005398;
int16_t x78 = 522;
int8_t x80 = 0;
int8_t x81 = INT8_MIN;
int8_t x98 = INT8_MAX;
static uint8_t x99 = 1U;
uint32_t x101 = UINT32_MAX;
int16_t x108 = INT16_MIN;
int32_t t27 = 618074076;
uint8_t x114 = 46U;
static int64_t x121 = -796LL;
uint16_t x131 = UINT16_MAX;
uint8_t x147 = 55U;
volatile int32_t x149 = INT32_MAX;
int8_t x151 = INT8_MAX;
uint16_t x154 = 6251U;
int16_t x155 = INT16_MIN;
uint16_t x156 = 611U;
volatile int16_t x158 = 229;
int32_t x161 = INT32_MIN;
int8_t x179 = 1;
volatile uint32_t x187 = 17482407U;
uint8_t x190 = 10U;
uint16_t x191 = UINT16_MAX;
volatile int32_t t47 = 54125192;
volatile int8_t x193 = 6;
volatile int16_t x202 = -2388;
static int64_t x203 = 6198LL;
int16_t x209 = -8;
uint16_t x211 = 441U;
uint8_t x214 = UINT8_MAX;
int32_t t53 = -653574365;
static int64_t x218 = -6254652054797LL;
uint8_t x219 = 2U;
static int8_t x220 = INT8_MAX;
volatile int64_t x222 = INT64_MIN;
uint8_t x224 = 1U;
int16_t x226 = 5801;
static volatile int32_t t58 = 15455;
uint16_t x238 = 1070U;
int32_t t60 = -83269;
int64_t x257 = INT64_MIN;
int64_t x258 = INT64_MIN;
uint64_t x262 = 21549643628051LLU;
uint16_t x263 = 0U;
volatile int32_t t64 = 82713;
int64_t x265 = -2871LL;
int16_t x266 = 4091;
static int16_t x267 = INT16_MIN;
int64_t x271 = INT64_MIN;
static int8_t x286 = -30;
uint32_t x288 = UINT32_MAX;
uint32_t x294 = UINT32_MAX;
uint64_t x298 = 106016842116LLU;
volatile int16_t x302 = -1;
int32_t t74 = 103;
uint32_t x308 = 1019U;
volatile int16_t x315 = INT16_MIN;
uint64_t x326 = 60959084LLU;
volatile int32_t t82 = -82774299;
static int8_t x348 = INT8_MIN;
volatile int32_t t84 = 28421;
int8_t x355 = -1;
static uint8_t x360 = UINT8_MAX;
int16_t x362 = INT16_MAX;
uint8_t x385 = 63U;
static int32_t x386 = 1;
int32_t x395 = INT32_MIN;
static int32_t t93 = 1;
int8_t x397 = -1;
int16_t x405 = INT16_MAX;
uint16_t x406 = 18031U;
int16_t x407 = -6;
int16_t x410 = INT16_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int64_t x2 = -1LL;
	static volatile int16_t x3 = INT16_MIN;
	static int32_t x4 = -49903;
	static volatile int32_t t0 = -4867;

	t0 = (x1<=(x2-(x3<=x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint8_t x7 = UINT8_MAX;
	uint8_t x8 = 9U;
	volatile int32_t t1 = -1;

	t1 = (x5<=(x6-(x7<=x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = 199111765829LLU;
	int64_t x11 = -45516699342632LL;

	t2 = (x9<=(x10-(x11<=x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = 1;
	int8_t x15 = 20;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -3115704;

	t3 = (x13<=(x14-(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	uint8_t x19 = UINT8_MAX;
	volatile int32_t x20 = INT32_MIN;
	int32_t t4 = 26751773;

	t4 = (x17<=(x18-(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	volatile uint32_t x22 = 1993949U;
	int16_t x24 = INT16_MAX;
	int32_t t5 = 50706;

	t5 = (x21<=(x22-(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static uint32_t x26 = UINT32_MAX;
	volatile int32_t t6 = 0;

	t6 = (x25<=(x26-(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1LL;
	int8_t x30 = INT8_MIN;
	int16_t x32 = 169;
	volatile int32_t t7 = -64145;

	t7 = (x29<=(x30-(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;

	t8 = (x33<=(x34-(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = 50;
	volatile int8_t x39 = INT8_MIN;
	int32_t t9 = -1977005;

	t9 = (x37<=(x38-(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 1;
	int8_t x42 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	int32_t t10 = 4567868;

	t10 = (x41<=(x42-(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int64_t x46 = -1LL;
	uint32_t x47 = UINT32_MAX;
	int16_t x48 = -1;
	int32_t t11 = 18;

	t11 = (x45<=(x46-(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	static volatile int32_t x50 = -1;
	int16_t x52 = 1;

	t12 = (x49<=(x50-(x51<=x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	volatile int32_t x54 = INT32_MIN;
	int32_t t13 = -741;

	t13 = (x53<=(x54-(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = UINT8_MAX;
	int32_t x60 = -1;
	volatile int32_t t14 = 3;

	t14 = (x57<=(x58-(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -128566923;
	uint64_t x62 = 4240738226182901LLU;
	int32_t x64 = -248842;

	t15 = (x61<=(x62-(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static int8_t x66 = 0;
	volatile int8_t x67 = -1;
	volatile int32_t t16 = 1657;

	t16 = (x65<=(x66-(x67<=x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static int32_t x70 = 17302;
	int16_t x71 = -1;
	int32_t x72 = 1311125;
	volatile int32_t t17 = -891615545;

	t17 = (x69<=(x70-(x71<=x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 1692939869272175523LLU;
	int8_t x74 = 52;
	int32_t x75 = INT32_MIN;
	uint16_t x76 = 1U;

	t18 = (x73<=(x74-(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	volatile int16_t x79 = 0;
	int32_t t19 = 79352;

	t19 = (x77<=(x78-(x79<=x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x82 = INT16_MAX;
	static int16_t x83 = 14113;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -206359152;

	t20 = (x81<=(x82-(x83<=x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 2U;
	int32_t x86 = 213943;
	uint32_t x87 = 6295751U;
	volatile int64_t x88 = INT64_MIN;
	int32_t t21 = 4;

	t21 = (x85<=(x86-(x87<=x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 1LLU;
	uint8_t x90 = 7U;
	int16_t x91 = 0;
	int32_t x92 = INT32_MIN;
	static int32_t t22 = 242220482;

	t22 = (x89<=(x90-(x91<=x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int32_t x94 = 196459;
	int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MIN;
	static volatile int32_t t23 = -1555;

	t23 = (x93<=(x94-(x95<=x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = -480760655;

	t24 = (x97<=(x98-(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = 691692362LLU;
	static uint32_t x103 = UINT32_MAX;
	volatile int16_t x104 = -1;
	volatile int32_t t25 = -17;

	t25 = (x101<=(x102-(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = -259545549;
	uint16_t x106 = 2877U;
	int16_t x107 = INT16_MIN;
	static volatile int32_t t26 = -1;

	t26 = (x105<=(x106-(x107<=x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 1699715555769LLU;
	uint8_t x110 = UINT8_MAX;
	uint64_t x111 = UINT64_MAX;
	volatile uint32_t x112 = 25827U;

	t27 = (x109<=(x110-(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 21507812903962LLU;
	int8_t x115 = INT8_MIN;
	volatile int64_t x116 = -1LL;
	int32_t t28 = -625981745;

	t28 = (x113<=(x114-(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int64_t x118 = INT64_MIN;
	int16_t x119 = -1;
	static uint64_t x120 = 4059847LLU;
	volatile int32_t t29 = -35;

	t29 = (x117<=(x118-(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = 19;
	int16_t x123 = INT16_MAX;
	uint32_t x124 = 414514U;
	int32_t t30 = 342196;

	t30 = (x121<=(x122-(x123<=x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 10551580LL;
	int16_t x126 = INT16_MAX;
	volatile int32_t x127 = -1;
	int64_t x128 = INT64_MAX;
	int32_t t31 = -177;

	t31 = (x125<=(x126-(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	uint64_t x130 = UINT64_MAX;
	static uint64_t x132 = 26206LLU;
	static int32_t t32 = 1069040794;

	t32 = (x129<=(x130-(x131<=x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	volatile uint16_t x134 = 11917U;
	uint16_t x135 = 0U;
	volatile int64_t x136 = 89851234854473LL;
	volatile int32_t t33 = 3412568;

	t33 = (x133<=(x134-(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	static int64_t x138 = INT64_MIN;
	volatile uint16_t x139 = UINT16_MAX;
	int64_t x140 = -1LL;
	static volatile int32_t t34 = -306184827;

	t34 = (x137<=(x138-(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 7333877762839LLU;
	uint32_t x142 = 65589U;
	uint8_t x143 = 12U;
	volatile uint64_t x144 = UINT64_MAX;
	volatile int32_t t35 = -5;

	t35 = (x141<=(x142-(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = -1;
	int32_t x148 = -8;
	int32_t t36 = 86440223;

	t36 = (x145<=(x146-(x147<=x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MIN;
	uint32_t x152 = 29U;
	int32_t t37 = -291993;

	t37 = (x149<=(x150-(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -1;
	int32_t t38 = -55633617;

	t38 = (x153<=(x154-(x155<=x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MAX;
	volatile int8_t x159 = -1;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -15;

	t39 = (x157<=(x158-(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = 1390U;
	uint64_t x163 = 131702570541348729LLU;
	volatile uint64_t x164 = 16355789798060060LLU;
	int32_t t40 = 7;

	t40 = (x161<=(x162-(x163<=x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 1522U;
	volatile int64_t x166 = -1054333LL;
	int8_t x167 = INT8_MAX;
	int64_t x168 = INT64_MIN;
	int32_t t41 = -680137626;

	t41 = (x165<=(x166-(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = 27;
	uint16_t x170 = 102U;
	static uint64_t x171 = 189541350702786402LLU;
	static volatile int8_t x172 = INT8_MAX;
	volatile int32_t t42 = -689;

	t42 = (x169<=(x170-(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int8_t x174 = -1;
	uint32_t x175 = 104731U;
	int64_t x176 = 15536LL;
	static int32_t t43 = 7825;

	t43 = (x173<=(x174-(x175<=x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = -1;
	int64_t x178 = -1LL;
	static volatile uint64_t x180 = 20116LLU;
	int32_t t44 = 8909315;

	t44 = (x177<=(x178-(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	uint64_t x182 = UINT64_MAX;
	static volatile int64_t x183 = -1LL;
	volatile int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 13400;

	t45 = (x181<=(x182-(x183<=x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static int32_t x186 = 62984;
	int32_t x188 = 559398241;
	static int32_t t46 = -1200;

	t46 = (x185<=(x186-(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 15U;
	int64_t x192 = INT64_MIN;

	t47 = (x189<=(x190-(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x194 = -1;
	int64_t x195 = INT64_MIN;
	uint32_t x196 = UINT32_MAX;
	int32_t t48 = 146912459;

	t48 = (x193<=(x194-(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 5460212581993907796LLU;
	int16_t x198 = INT16_MIN;
	static int32_t x199 = -6;
	uint16_t x200 = 47U;
	int32_t t49 = 373;

	t49 = (x197<=(x198-(x199<=x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	static int32_t t50 = -1758129;

	t50 = (x201<=(x202-(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = 91516914363238LL;
	int32_t x206 = 98814;
	volatile int32_t x207 = 3;
	static int8_t x208 = -3;
	volatile int32_t t51 = -131055;

	t51 = (x205<=(x206-(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MIN;
	uint8_t x212 = UINT8_MAX;
	static int32_t t52 = 5187;

	t52 = (x209<=(x210-(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x215 = 0U;
	int32_t x216 = INT32_MIN;

	t53 = (x213<=(x214-(x215<=x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -21;
	volatile int32_t t54 = -3790;

	t54 = (x217<=(x218-(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 6U;
	static uint64_t x223 = 169038992038LLU;
	volatile int32_t t55 = -430562281;

	t55 = (x221<=(x222-(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x227 = INT64_MIN;
	int32_t x228 = INT32_MAX;
	volatile int32_t t56 = 7;

	t56 = (x225<=(x226-(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	volatile uint8_t x230 = 38U;
	volatile uint8_t x231 = UINT8_MAX;
	uint64_t x232 = 6373LLU;
	int32_t t57 = -4282;

	t57 = (x229<=(x230-(x231<=x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 884LLU;
	int64_t x234 = INT64_MAX;
	uint8_t x235 = UINT8_MAX;
	volatile int16_t x236 = INT16_MIN;

	t58 = (x233<=(x234-(x235<=x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 0U;
	int32_t x239 = -1;
	static uint64_t x240 = 195LLU;
	int32_t t59 = 1;

	t59 = (x237<=(x238-(x239<=x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	static int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	int64_t x244 = INT64_MIN;

	t60 = (x241<=(x242-(x243<=x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -1;
	int16_t x250 = 1;
	int32_t x251 = 14330;
	int32_t x252 = INT32_MIN;
	int32_t t61 = -127000;

	t61 = (x249<=(x250-(x251<=x252)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x253 = -1LL;
	uint32_t x254 = 1400U;
	uint16_t x255 = 5U;
	int8_t x256 = -2;
	int32_t t62 = -201950858;

	t62 = (x253<=(x254-(x255<=x256)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x259 = INT16_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t63 = 16881578;

	t63 = (x257<=(x258-(x259<=x260)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -1;
	int16_t x264 = -1;

	t64 = (x261<=(x262-(x263<=x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x268 = -1;
	static int32_t t65 = -440650;

	t65 = (x265<=(x266-(x267<=x268)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x269 = 1U;
	static int16_t x270 = -64;
	int16_t x272 = -330;
	int32_t t66 = -5517;

	t66 = (x269<=(x270-(x271<=x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MIN;
	static int16_t x274 = INT16_MIN;
	int16_t x275 = -1;
	uint32_t x276 = 57U;
	volatile int32_t t67 = 27275046;

	t67 = (x273<=(x274-(x275<=x276)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = 5;
	int64_t x278 = INT64_MIN;
	static int8_t x279 = INT8_MAX;
	int8_t x280 = -1;
	int32_t t68 = 0;

	t68 = (x277<=(x278-(x279<=x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x281 = UINT64_MAX;
	volatile uint8_t x282 = 7U;
	volatile int64_t x283 = 14LL;
	int8_t x284 = INT8_MIN;
	int32_t t69 = -73;

	t69 = (x281<=(x282-(x283<=x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x285 = UINT16_MAX;
	int16_t x287 = INT16_MAX;
	volatile int32_t t70 = 848;

	t70 = (x285<=(x286-(x287<=x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x289 = 27892U;
	uint64_t x290 = 143538044463971LLU;
	int16_t x291 = -1;
	int32_t x292 = -60;
	volatile int32_t t71 = 916238916;

	t71 = (x289<=(x290-(x291<=x292)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x293 = 34U;
	int8_t x295 = INT8_MAX;
	int16_t x296 = -218;
	int32_t t72 = -1504636;

	t72 = (x293<=(x294-(x295<=x296)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	volatile int32_t x299 = -1;
	static int8_t x300 = 31;
	static int32_t t73 = 39470;

	t73 = (x297<=(x298-(x299<=x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x301 = 68646939U;
	int8_t x303 = 0;
	int32_t x304 = INT32_MIN;

	t74 = (x301<=(x302-(x303<=x304)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = INT32_MIN;
	int16_t x306 = 26;
	static int16_t x307 = INT16_MIN;
	static int32_t t75 = -27;

	t75 = (x305<=(x306-(x307<=x308)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MIN;
	int64_t x311 = 219200LL;
	static int8_t x312 = 14;
	int32_t t76 = 120289795;

	t76 = (x309<=(x310-(x311<=x312)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x313 = INT32_MAX;
	int32_t x314 = 7;
	int32_t x316 = 4;
	int32_t t77 = -4057462;

	t77 = (x313<=(x314-(x315<=x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = UINT64_MAX;
	static volatile int32_t x322 = INT32_MIN;
	volatile int16_t x323 = INT16_MAX;
	volatile int8_t x324 = 27;
	volatile int32_t t78 = -72942780;

	t78 = (x321<=(x322-(x323<=x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x325 = -1;
	uint64_t x327 = 3597555960938844LLU;
	static uint16_t x328 = UINT16_MAX;
	static volatile int32_t t79 = -226273037;

	t79 = (x325<=(x326-(x327<=x328)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = 17;
	static int8_t x330 = 13;
	uint16_t x331 = 14U;
	uint16_t x332 = 46U;
	int32_t t80 = 3;

	t80 = (x329<=(x330-(x331<=x332)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x337 = 508128884LLU;
	uint16_t x338 = UINT16_MAX;
	int8_t x339 = INT8_MIN;
	uint8_t x340 = 105U;
	int32_t t81 = 853;

	t81 = (x337<=(x338-(x339<=x340)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x341 = 33499072U;
	int16_t x342 = INT16_MIN;
	int8_t x343 = -1;
	int64_t x344 = INT64_MAX;

	t82 = (x341<=(x342-(x343<=x344)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = -15;
	int32_t x346 = 119320;
	static volatile int8_t x347 = INT8_MIN;
	volatile int32_t t83 = -252;

	t83 = (x345<=(x346-(x347<=x348)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = -1;
	static uint64_t x350 = UINT64_MAX;
	int64_t x351 = INT64_MAX;
	int8_t x352 = 3;

	t84 = (x349<=(x350-(x351<=x352)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = UINT8_MAX;
	static uint16_t x354 = 41U;
	int16_t x356 = 0;
	static volatile int32_t t85 = 6514;

	t85 = (x353<=(x354-(x355<=x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x357 = 2717272359150989LL;
	static volatile int8_t x358 = 3;
	static int64_t x359 = INT64_MIN;
	volatile int32_t t86 = -225804170;

	t86 = (x357<=(x358-(x359<=x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = 3015843423494LLU;
	int16_t x363 = INT16_MIN;
	static volatile int8_t x364 = -1;
	int32_t t87 = -16;

	t87 = (x361<=(x362-(x363<=x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x369 = 356U;
	int64_t x370 = INT64_MIN;
	volatile int64_t x371 = 6630539859LL;
	int64_t x372 = INT64_MIN;
	static volatile int32_t t88 = -21;

	t88 = (x369<=(x370-(x371<=x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x373 = 345935895U;
	int8_t x374 = INT8_MIN;
	int32_t x375 = INT32_MAX;
	int8_t x376 = 11;
	int32_t t89 = -206662356;

	t89 = (x373<=(x374-(x375<=x376)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x381 = 0;
	volatile uint32_t x382 = UINT32_MAX;
	static uint16_t x383 = 2U;
	static int16_t x384 = 14;
	volatile int32_t t90 = -6;

	t90 = (x381<=(x382-(x383<=x384)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x387 = 10U;
	int16_t x388 = -7510;
	volatile int32_t t91 = 87412;

	t91 = (x385<=(x386-(x387<=x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = 432LLU;
	uint8_t x390 = 101U;
	int16_t x391 = INT16_MIN;
	int16_t x392 = 6241;
	static int32_t t92 = -1;

	t92 = (x389<=(x390-(x391<=x392)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x393 = 17;
	volatile int8_t x394 = -53;
	int8_t x396 = -1;

	t93 = (x393<=(x394-(x395<=x396)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x398 = 642685533LLU;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	int32_t t94 = 10348;

	t94 = (x397<=(x398-(x399<=x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int32_t x402 = 2264;
	int8_t x403 = 27;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t95 = -28;

	t95 = (x401<=(x402-(x403<=x404)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x408 = 1963U;
	int32_t t96 = -7579;

	t96 = (x405<=(x406-(x407<=x408)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x409 = UINT32_MAX;
	static uint64_t x411 = 694766LLU;
	volatile int32_t x412 = 11922;
	volatile int32_t t97 = -16314;

	t97 = (x409<=(x410-(x411<=x412)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -1837;
	volatile uint32_t x414 = UINT32_MAX;
	int8_t x415 = -1;
	uint8_t x416 = 67U;
	int32_t t98 = 1596059;

	t98 = (x413<=(x414-(x415<=x416)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = INT8_MIN;
	uint32_t x418 = 3U;
	static uint32_t x419 = UINT32_MAX;
	int32_t x420 = -1958819;
	int32_t t99 = 687;

	t99 = (x417<=(x418-(x419<=x420)));

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

