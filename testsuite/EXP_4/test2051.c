#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MIN;
int16_t x8 = 11;
static int64_t x10 = INT64_MAX;
int16_t x21 = -1;
static int64_t x23 = 6276LL;
uint64_t x26 = UINT64_MAX;
volatile int8_t x30 = -1;
int16_t x31 = 12891;
uint8_t x38 = 30U;
int64_t x41 = 364578751322414296LL;
int32_t t9 = 109921;
volatile int64_t x45 = -1LL;
int64_t x47 = INT64_MIN;
uint64_t x49 = 18041035862LLU;
uint64_t x50 = 5622254953770655LLU;
static uint8_t x65 = UINT8_MAX;
int8_t x68 = INT8_MAX;
static int16_t x71 = -5240;
int32_t x78 = INT32_MAX;
int8_t x87 = INT8_MAX;
int16_t x95 = INT16_MIN;
static int32_t t23 = -715;
int8_t x111 = -1;
volatile int32_t t25 = 62267147;
int32_t x117 = INT32_MIN;
volatile int8_t x119 = 1;
static volatile int32_t t26 = 291197;
uint32_t x123 = UINT32_MAX;
volatile uint8_t x126 = 8U;
static int32_t x133 = INT32_MIN;
static volatile int32_t t31 = 0;
static volatile int32_t t32 = 5889;
static int16_t x157 = -1;
static int8_t x158 = -7;
volatile uint16_t x166 = 67U;
int32_t t37 = 104426766;
int32_t t40 = -44554;
static uint16_t x188 = 0U;
static int32_t x191 = -1;
uint32_t x194 = UINT32_MAX;
uint64_t x195 = 44080318617029LLU;
volatile int32_t t44 = -9243;
volatile int32_t t45 = 44230;
volatile uint16_t x208 = 13U;
int32_t x211 = INT32_MIN;
static volatile int32_t t50 = 136051708;
int8_t x226 = 18;
volatile int32_t x227 = INT32_MAX;
int32_t t53 = 4173344;
static int64_t x237 = -142427LL;
uint8_t x238 = UINT8_MAX;
int32_t x240 = 1752255;
int8_t x243 = -1;
int32_t x250 = INT32_MAX;
int16_t x254 = INT16_MIN;
int32_t t62 = 261;
static uint32_t x278 = 14U;
static int8_t x284 = INT8_MIN;
int8_t x292 = INT8_MAX;
volatile int32_t t65 = 408556;
int16_t x295 = 2105;
volatile int32_t t67 = 41;
int8_t x301 = INT8_MIN;
static int64_t x302 = 402699621LL;
uint64_t x307 = 0LLU;
uint32_t x308 = 488651U;
int64_t x312 = -13006489016228417LL;
volatile uint8_t x314 = 75U;
volatile uint64_t x318 = 2645093935LLU;
volatile int8_t x326 = -1;
int16_t x333 = INT16_MIN;
volatile int32_t t75 = -14484662;
volatile int16_t x345 = INT16_MIN;
static int16_t x347 = INT16_MIN;
uint64_t x353 = 209242104LLU;
static volatile int32_t t80 = 0;
static int64_t x357 = INT64_MAX;
static int64_t x360 = -7LL;
int16_t x361 = -97;
int32_t x368 = INT32_MIN;
int16_t x373 = INT16_MIN;
uint32_t x374 = 122250U;
volatile int32_t x377 = 522516382;
volatile uint64_t x384 = UINT64_MAX;
uint64_t x390 = 9233942549LLU;
int16_t x392 = 0;
int64_t x393 = -1LL;
uint16_t x396 = 126U;
int64_t x397 = -1LL;
static uint16_t x398 = UINT16_MAX;
uint8_t x401 = UINT8_MAX;
int32_t t93 = -77064938;
int16_t x421 = INT16_MIN;
int8_t x423 = INT8_MIN;
volatile int32_t t94 = -7484044;
uint32_t x428 = 0U;
static int64_t x434 = INT64_MIN;
uint64_t x440 = 1548011260LLU;
static uint32_t x442 = 7775U;


void f0(void) {
	int32_t x1 = 65;
	int16_t x2 = -16;
	volatile uint8_t x3 = 1U;
	static uint16_t x4 = 56U;
	volatile int32_t t0 = 7752745;

	t0 = (x1<=(x2-(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -11;
	int64_t x6 = INT64_MIN;
	int32_t t1 = -6;

	t1 = (x5<=(x6-(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 89U;
	int64_t x11 = INT64_MIN;
	volatile int8_t x12 = INT8_MIN;
	static volatile int32_t t2 = -8;

	t2 = (x9<=(x10-(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -912832;
	uint16_t x14 = UINT16_MAX;
	uint16_t x15 = 3681U;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = -565;

	t3 = (x13<=(x14-(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = -1;
	int64_t x24 = -1LL;
	static volatile int32_t t4 = -280785523;

	t4 = (x21<=(x22-(x23^x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	volatile int64_t x27 = 1362564LL;
	int32_t x28 = 923;
	int32_t t5 = -99;

	t5 = (x25<=(x26-(x27^x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int16_t x32 = -1;
	volatile int32_t t6 = -1930;

	t6 = (x29<=(x30-(x31^x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = 537477201446554LLU;
	int8_t x34 = INT8_MAX;
	uint32_t x35 = 181962U;
	uint8_t x36 = UINT8_MAX;
	static volatile int32_t t7 = 17563189;

	t7 = (x33<=(x34-(x35^x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	volatile uint64_t x39 = UINT64_MAX;
	uint64_t x40 = 228812087401676076LLU;
	int32_t t8 = -107;

	t8 = (x37<=(x38-(x39^x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x42 = 3U;
	int32_t x43 = INT32_MIN;
	int64_t x44 = -5LL;

	t9 = (x41<=(x42-(x43^x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = INT16_MIN;
	uint32_t x48 = UINT32_MAX;
	int32_t t10 = -30466325;

	t10 = (x45<=(x46-(x47^x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x51 = 10;
	int64_t x52 = -66199053288277165LL;
	static int32_t t11 = -2963;

	t11 = (x49<=(x50-(x51^x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -9;
	volatile int16_t x54 = INT16_MIN;
	volatile int64_t x55 = 2813973289LL;
	int16_t x56 = INT16_MAX;
	volatile int32_t t12 = 267138;

	t12 = (x53<=(x54-(x55^x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	static uint8_t x62 = 54U;
	static int16_t x63 = INT16_MIN;
	uint64_t x64 = 684281914758LLU;
	int32_t t13 = -1;

	t13 = (x61<=(x62-(x63^x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x66 = INT32_MAX;
	volatile int8_t x67 = INT8_MAX;
	static volatile int32_t t14 = 39;

	t14 = (x65<=(x66-(x67^x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 7;
	int8_t x70 = 35;
	int64_t x72 = -534575671LL;
	volatile int32_t t15 = 141;

	t15 = (x69<=(x70-(x71^x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -1;
	static int32_t x74 = 9308028;
	volatile int8_t x75 = -1;
	static int16_t x76 = -381;
	int32_t t16 = 16166;

	t16 = (x73<=(x74-(x75^x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = INT8_MAX;
	int8_t x79 = 7;
	volatile uint16_t x80 = 4158U;
	static volatile int32_t t17 = -5313765;

	t17 = (x77<=(x78-(x79^x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 5658U;
	volatile int8_t x82 = INT8_MIN;
	int8_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	static volatile int32_t t18 = -46160;

	t18 = (x81<=(x82-(x83^x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x85 = 1U;
	int16_t x86 = INT16_MIN;
	int8_t x88 = -1;
	volatile int32_t t19 = -799651416;

	t19 = (x85<=(x86-(x87^x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x90 = INT32_MAX;
	int64_t x91 = 44LL;
	volatile int32_t x92 = INT32_MIN;
	int32_t t20 = -56389;

	t20 = (x89<=(x90-(x91^x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x93 = 5381U;
	uint32_t x94 = 125566U;
	uint16_t x96 = UINT16_MAX;
	static int32_t t21 = -51464057;

	t21 = (x93<=(x94-(x95^x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 680476440U;
	int8_t x98 = INT8_MAX;
	uint8_t x99 = UINT8_MAX;
	int16_t x100 = INT16_MIN;
	int32_t t22 = 166;

	t22 = (x97<=(x98-(x99^x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -1;
	int16_t x102 = -1;
	volatile int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;

	t23 = (x101<=(x102-(x103^x104)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = 59U;
	uint8_t x107 = 23U;
	int16_t x108 = -1;
	volatile int32_t t24 = -1;

	t24 = (x105<=(x106-(x107^x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x109 = 17U;
	volatile int8_t x110 = 13;
	volatile int64_t x112 = INT64_MIN;

	t25 = (x109<=(x110-(x111^x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = -801;
	static volatile int16_t x120 = -22;

	t26 = (x117<=(x118-(x119^x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x121 = 1574LLU;
	uint64_t x122 = 202707375431635984LLU;
	uint32_t x124 = 15538U;
	volatile int32_t t27 = -1228;

	t27 = (x121<=(x122-(x123^x124)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x125 = -1LL;
	int8_t x127 = INT8_MIN;
	static int16_t x128 = INT16_MIN;
	volatile int32_t t28 = -141;

	t28 = (x125<=(x126-(x127^x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x129 = INT16_MAX;
	static volatile int16_t x130 = INT16_MIN;
	volatile uint8_t x131 = UINT8_MAX;
	volatile int8_t x132 = -1;
	volatile int32_t t29 = 1181506;

	t29 = (x129<=(x130-(x131^x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = INT32_MAX;
	int32_t x135 = 63180;
	uint16_t x136 = 75U;
	int32_t t30 = -122519;

	t30 = (x133<=(x134-(x135^x136)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = UINT16_MAX;
	volatile int32_t x142 = INT32_MIN;
	uint8_t x143 = UINT8_MAX;
	int8_t x144 = -1;

	t31 = (x141<=(x142-(x143^x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MIN;
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = UINT64_MAX;

	t32 = (x145<=(x146-(x147^x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int8_t x150 = INT8_MIN;
	int16_t x151 = -1;
	int32_t x152 = -1;
	static volatile int32_t t33 = -97318;

	t33 = (x149<=(x150-(x151^x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -2;
	volatile int8_t x154 = INT8_MAX;
	int32_t x155 = 2420400;
	uint8_t x156 = 102U;
	volatile int32_t t34 = -421772;

	t34 = (x153<=(x154-(x155^x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x159 = INT32_MIN;
	int64_t x160 = INT64_MAX;
	int32_t t35 = -31446190;

	t35 = (x157<=(x158-(x159^x160)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = 243;
	int64_t x162 = -1LL;
	volatile int16_t x163 = -1;
	int8_t x164 = INT8_MIN;
	static int32_t t36 = 72555668;

	t36 = (x161<=(x162-(x163^x164)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = 7;
	volatile int8_t x167 = INT8_MIN;
	int64_t x168 = -12626363769940LL;

	t37 = (x165<=(x166-(x167^x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x173 = 5U;
	static uint16_t x174 = UINT16_MAX;
	int8_t x175 = -5;
	static int8_t x176 = INT8_MAX;
	static int32_t t38 = -6609;

	t38 = (x173<=(x174-(x175^x176)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x177 = 153589435401544LLU;
	int8_t x178 = INT8_MIN;
	int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t39 = -2567;

	t39 = (x177<=(x178-(x179^x180)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = INT32_MAX;
	static int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	static int8_t x184 = INT8_MIN;

	t40 = (x181<=(x182-(x183^x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = -8;
	int64_t x186 = 206504344186868LL;
	static uint16_t x187 = 124U;
	volatile int32_t t41 = 9811857;

	t41 = (x185<=(x186-(x187^x188)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x189 = INT8_MIN;
	volatile uint32_t x190 = 2033378129U;
	uint16_t x192 = UINT16_MAX;
	static int32_t t42 = 125;

	t42 = (x189<=(x190-(x191^x192)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x193 = -1LL;
	uint32_t x196 = 226259U;
	volatile int32_t t43 = 1673;

	t43 = (x193<=(x194-(x195^x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 7U;
	int16_t x198 = 13;
	int64_t x199 = INT64_MIN;
	volatile uint8_t x200 = 16U;

	t44 = (x197<=(x198-(x199^x200)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = 300982993LLU;
	static int16_t x202 = -1;
	uint64_t x203 = 7922LLU;
	int32_t x204 = 181817;

	t45 = (x201<=(x202-(x203^x204)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = 2;
	uint8_t x206 = 0U;
	int16_t x207 = 562;
	static volatile int32_t t46 = 2538443;

	t46 = (x205<=(x206-(x207^x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x209 = 55U;
	int32_t x210 = -243;
	static volatile int16_t x212 = INT16_MIN;
	static int32_t t47 = -57;

	t47 = (x209<=(x210-(x211^x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MIN;
	volatile uint32_t x214 = UINT32_MAX;
	uint8_t x215 = 119U;
	int64_t x216 = -1LL;
	volatile int32_t t48 = 217012525;

	t48 = (x213<=(x214-(x215^x216)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = INT32_MIN;
	volatile int16_t x218 = -1;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MAX;
	volatile int32_t t49 = 174171;

	t49 = (x217<=(x218-(x219^x220)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = 0;
	volatile int64_t x222 = -1LL;
	int32_t x223 = INT32_MAX;
	int64_t x224 = -1767451336271LL;

	t50 = (x221<=(x222-(x223^x224)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = 4339594865022319LLU;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t51 = 648255844;

	t51 = (x225<=(x226-(x227^x228)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x229 = INT64_MIN;
	int16_t x230 = 13571;
	uint16_t x231 = 31U;
	static int64_t x232 = 6019887015655320LL;
	static int32_t t52 = 3343;

	t52 = (x229<=(x230-(x231^x232)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x233 = INT64_MIN;
	uint64_t x234 = 2765133LLU;
	int8_t x235 = -21;
	static int32_t x236 = INT32_MIN;

	t53 = (x233<=(x234-(x235^x236)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x239 = -1751624229383958LL;
	volatile int32_t t54 = -306077780;

	t54 = (x237<=(x238-(x239^x240)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x241 = UINT8_MAX;
	int64_t x242 = 921443LL;
	int8_t x244 = INT8_MAX;
	int32_t t55 = 18656671;

	t55 = (x241<=(x242-(x243^x244)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x245 = 294169295U;
	int64_t x246 = -129274LL;
	int64_t x247 = INT64_MAX;
	int16_t x248 = INT16_MIN;
	int32_t t56 = 8067329;

	t56 = (x245<=(x246-(x247^x248)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = UINT16_MAX;
	static uint8_t x251 = 1U;
	int32_t x252 = 35;
	volatile int32_t t57 = -1773385;

	t57 = (x249<=(x250-(x251^x252)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MIN;
	uint64_t x255 = 53078970791955261LLU;
	int64_t x256 = INT64_MAX;
	int32_t t58 = -141;

	t58 = (x253<=(x254-(x255^x256)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x261 = 6U;
	volatile uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MIN;
	uint32_t x264 = UINT32_MAX;
	int32_t t59 = -853;

	t59 = (x261<=(x262-(x263^x264)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = 11;
	int8_t x266 = INT8_MIN;
	static uint64_t x267 = UINT64_MAX;
	volatile int64_t x268 = -64600861793698LL;
	int32_t t60 = 1079;

	t60 = (x265<=(x266-(x267^x268)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = 31;
	int32_t x270 = INT32_MAX;
	uint64_t x271 = UINT64_MAX;
	volatile uint64_t x272 = 2054071668LLU;
	volatile int32_t t61 = 11234;

	t61 = (x269<=(x270-(x271^x272)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = 28U;
	int32_t x274 = 178357;
	static uint64_t x275 = UINT64_MAX;
	int32_t x276 = 16586;

	t62 = (x273<=(x274-(x275^x276)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x279 = -1;
	volatile int32_t x280 = -2763691;
	int32_t t63 = 31;

	t63 = (x277<=(x278-(x279^x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x281 = UINT8_MAX;
	int32_t x282 = 1;
	int64_t x283 = INT64_MIN;
	volatile int32_t t64 = -37117;

	t64 = (x281<=(x282-(x283^x284)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MAX;
	uint8_t x290 = 112U;
	int32_t x291 = INT32_MIN;

	t65 = (x289<=(x290-(x291^x292)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = -1;
	int32_t x294 = 1;
	int32_t x296 = INT32_MAX;
	static int32_t t66 = -71035190;

	t66 = (x293<=(x294-(x295^x296)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x297 = -1;
	volatile uint16_t x298 = 1U;
	volatile uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MIN;

	t67 = (x297<=(x298-(x299^x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x303 = -1;
	static uint64_t x304 = 29164LLU;
	static int32_t t68 = -109674;

	t68 = (x301<=(x302-(x303^x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = -8LL;
	int8_t x306 = -1;
	static int32_t t69 = 1;

	t69 = (x305<=(x306-(x307^x308)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x309 = UINT64_MAX;
	static uint16_t x310 = UINT16_MAX;
	static int32_t x311 = -1;
	static volatile int32_t t70 = 1;

	t70 = (x309<=(x310-(x311^x312)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x313 = UINT16_MAX;
	static uint32_t x315 = 7895316U;
	uint8_t x316 = 78U;
	volatile int32_t t71 = 89;

	t71 = (x313<=(x314-(x315^x316)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x317 = 28075U;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = -860;
	int32_t t72 = -320058244;

	t72 = (x317<=(x318-(x319^x320)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = 32910330633052883LL;
	volatile int8_t x322 = INT8_MIN;
	static uint16_t x323 = UINT16_MAX;
	volatile int64_t x324 = INT64_MIN;
	volatile int32_t t73 = 1;

	t73 = (x321<=(x322-(x323^x324)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x325 = -1LL;
	int16_t x327 = -1;
	int8_t x328 = INT8_MAX;
	volatile int32_t t74 = 7;

	t74 = (x325<=(x326-(x327^x328)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x334 = UINT16_MAX;
	uint64_t x335 = 131LLU;
	uint32_t x336 = 1660U;

	t75 = (x333<=(x334-(x335^x336)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x337 = 4U;
	volatile int32_t x338 = 215301;
	int32_t x339 = INT32_MAX;
	int64_t x340 = INT64_MAX;
	static volatile int32_t t76 = 11912;

	t76 = (x337<=(x338-(x339^x340)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = -1316196647LL;
	int64_t x342 = INT64_MAX;
	static int8_t x343 = -1;
	static volatile int16_t x344 = -1;
	volatile int32_t t77 = 396776095;

	t77 = (x341<=(x342-(x343^x344)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x346 = -1;
	static volatile int16_t x348 = -2828;
	static volatile int32_t t78 = -6311;

	t78 = (x345<=(x346-(x347^x348)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x349 = 0U;
	uint32_t x350 = UINT32_MAX;
	static int16_t x351 = INT16_MIN;
	uint64_t x352 = 253LLU;
	static volatile int32_t t79 = 3323706;

	t79 = (x349<=(x350-(x351^x352)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x354 = INT32_MIN;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = -1;

	t80 = (x353<=(x354-(x355^x356)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x358 = 2667LLU;
	static volatile int16_t x359 = -1;
	volatile int32_t t81 = 56990912;

	t81 = (x357<=(x358-(x359^x360)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x362 = INT32_MIN;
	int64_t x363 = INT64_MIN;
	static volatile int8_t x364 = 5;
	int32_t t82 = -53851;

	t82 = (x361<=(x362-(x363^x364)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x365 = 1047760470837LLU;
	static uint64_t x366 = 2049LLU;
	int16_t x367 = -33;
	volatile int32_t t83 = 7;

	t83 = (x365<=(x366-(x367^x368)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x375 = INT8_MIN;
	static volatile int16_t x376 = INT16_MAX;
	int32_t t84 = 20;

	t84 = (x373<=(x374-(x375^x376)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	int8_t x380 = INT8_MIN;
	static int32_t t85 = 333885;

	t85 = (x377<=(x378-(x379^x380)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x381 = INT8_MIN;
	int8_t x382 = -1;
	int32_t x383 = 2412;
	static int32_t t86 = 420298;

	t86 = (x381<=(x382-(x383^x384)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = -1;
	int16_t x386 = INT16_MAX;
	uint8_t x387 = UINT8_MAX;
	static volatile int16_t x388 = 31;
	int32_t t87 = -43701417;

	t87 = (x385<=(x386-(x387^x388)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x389 = 32;
	static int32_t x391 = INT32_MAX;
	int32_t t88 = 7;

	t88 = (x389<=(x390-(x391^x392)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x394 = -864568554LL;
	static int8_t x395 = INT8_MIN;
	volatile int32_t t89 = 2090652;

	t89 = (x393<=(x394-(x395^x396)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x399 = -1LL;
	uint64_t x400 = UINT64_MAX;
	int32_t t90 = 10698030;

	t90 = (x397<=(x398-(x399^x400)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x402 = UINT16_MAX;
	int64_t x403 = 560831LL;
	volatile int16_t x404 = -1;
	volatile int32_t t91 = 22781;

	t91 = (x401<=(x402-(x403^x404)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = -1;
	uint16_t x410 = UINT16_MAX;
	int16_t x411 = -1;
	int8_t x412 = INT8_MAX;
	int32_t t92 = -13;

	t92 = (x409<=(x410-(x411^x412)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x417 = 3U;
	volatile uint8_t x418 = 18U;
	static volatile int32_t x419 = -1;
	uint8_t x420 = 31U;

	t93 = (x417<=(x418-(x419^x420)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x422 = 2U;
	int32_t x424 = -3431866;

	t94 = (x421<=(x422-(x423^x424)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x425 = -11372286864LL;
	int8_t x426 = INT8_MIN;
	uint8_t x427 = 11U;
	static volatile int32_t t95 = 299;

	t95 = (x425<=(x426-(x427^x428)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x429 = -1LL;
	volatile uint8_t x430 = 13U;
	int64_t x431 = INT64_MIN;
	static uint16_t x432 = 1720U;
	volatile int32_t t96 = 39236676;

	t96 = (x429<=(x430-(x431^x432)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x433 = 38U;
	int8_t x435 = 8;
	int8_t x436 = -2;
	volatile int32_t t97 = -10583490;

	t97 = (x433<=(x434-(x435^x436)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x437 = INT8_MIN;
	int16_t x438 = -1295;
	int8_t x439 = -5;
	volatile int32_t t98 = 82960496;

	t98 = (x437<=(x438-(x439^x440)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x441 = UINT32_MAX;
	uint16_t x443 = 9197U;
	static volatile int64_t x444 = INT64_MAX;
	volatile int32_t t99 = -515776635;

	t99 = (x441<=(x442-(x443^x444)));

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

