#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 14U;
static uint8_t x9 = 0U;
static int32_t x18 = INT32_MIN;
int32_t x19 = -684536169;
uint16_t x20 = 15020U;
int64_t x21 = -16LL;
uint8_t x22 = 65U;
uint32_t x23 = 50598024U;
static int32_t t6 = 64093757;
int16_t x32 = INT16_MIN;
int8_t x37 = 1;
uint16_t x40 = 19U;
int32_t t9 = -159970955;
uint32_t x42 = 1U;
volatile int32_t t10 = -25998;
static uint64_t x47 = 5665263925171LLU;
int8_t x48 = INT8_MAX;
int64_t t12 = 7LL;
static int8_t x61 = INT8_MAX;
int32_t x67 = -1;
int16_t x76 = 6;
static int32_t t19 = 7773;
static volatile int16_t x88 = INT16_MIN;
static volatile int8_t x93 = INT8_MIN;
int32_t t23 = -464578;
static volatile uint16_t x97 = 28682U;
volatile uint32_t t24 = 240219941U;
uint16_t x115 = 68U;
int64_t x120 = -4234706717409904LL;
volatile int64_t t29 = -1899904670007902LL;
static uint16_t x126 = UINT16_MAX;
volatile uint8_t x128 = 6U;
int32_t t35 = 6;
uint8_t x146 = UINT8_MAX;
int64_t x149 = -1LL;
int8_t x150 = -1;
uint32_t x154 = 847U;
volatile int32_t t39 = 24522021;
int64_t x164 = INT64_MAX;
volatile uint16_t x165 = 0U;
static volatile uint8_t x173 = 0U;
volatile int64_t x180 = -1LL;
int16_t x182 = -1;
int8_t x183 = INT8_MIN;
int64_t x185 = -1LL;
uint16_t x187 = 3750U;
int8_t x196 = INT8_MIN;
static int16_t x208 = 2063;
static volatile int32_t t51 = -911093;
int32_t x209 = -1;
volatile int8_t x211 = -2;
static int8_t x216 = -1;
int32_t t53 = -481927887;
volatile int32_t t54 = 2772394;
volatile int64_t x228 = INT64_MIN;
volatile int32_t t59 = -22;
static uint64_t x247 = 1054244260LLU;
volatile int32_t x258 = -1;
volatile int32_t t64 = -14;
int8_t x261 = INT8_MIN;
uint64_t x264 = UINT64_MAX;
int16_t x266 = INT16_MIN;
uint64_t x278 = 456502634553LLU;
int32_t t69 = -11705327;
int32_t x286 = -4279123;
uint32_t x288 = 153879U;
int32_t t72 = 12457;
uint16_t x297 = 1464U;
int32_t x301 = INT32_MAX;
int8_t x302 = INT8_MIN;
int16_t x309 = -63;
static uint8_t x310 = 30U;
static int16_t x311 = INT16_MAX;
int8_t x312 = -1;
volatile int32_t t78 = -6;
int8_t x319 = 39;
static int16_t x322 = 91;
int64_t x325 = 32260444342639LL;
int64_t x337 = -1LL;
int32_t x343 = -1;
uint16_t x350 = 0U;
static volatile uint8_t x367 = 3U;
uint16_t x372 = UINT16_MAX;
int8_t x376 = -1;
uint32_t x377 = UINT32_MAX;
int32_t x380 = INT32_MIN;
volatile int64_t x400 = INT64_MAX;
int64_t t99 = -79LL;


void f0(void) {
	int64_t x2 = 764626784464644LL;
	int16_t x3 = INT16_MIN;
	int8_t x4 = -21;
	int32_t t0 = -13406051;

	t0 = ((x1<(x2|x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 768050657874263LLU;
	static volatile int8_t x6 = -1;
	static int64_t x7 = -1LL;
	uint16_t x8 = 186U;
	volatile int32_t t1 = 7342052;

	t1 = ((x5<(x6|x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = -1;
	volatile int64_t x11 = INT64_MAX;
	int32_t x12 = -16585043;
	volatile int32_t t2 = -263380;

	t2 = ((x9<(x10|x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	volatile uint8_t x15 = 1U;
	volatile uint8_t x16 = 2U;
	volatile int32_t t3 = 398197093;

	t3 = ((x13<(x14|x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t t4 = -54;

	t4 = ((x17<(x18|x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = -5393844;

	t5 = ((x21<(x22|x23))&x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MAX;
	uint8_t x26 = 32U;
	int32_t x27 = -1;
	int16_t x28 = 582;

	t6 = ((x25<(x26|x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 1;
	int32_t x30 = INT32_MIN;
	uint32_t x31 = 4098U;
	static int32_t t7 = -15474936;

	t7 = ((x29<(x30|x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 11486621418538480LLU;
	static uint64_t x34 = 4267886587821LLU;
	volatile int32_t x35 = INT32_MIN;
	int16_t x36 = 1;
	volatile int32_t t8 = -15868;

	t8 = ((x33<(x34|x35))&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = 1;
	int32_t x39 = -542;

	t9 = ((x37<(x38|x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = UINT8_MAX;

	t10 = ((x41<(x42|x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = 19;
	static uint16_t x46 = 1U;
	static volatile int32_t t11 = -419;

	t11 = ((x45<(x46|x47))&x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static volatile int8_t x50 = -1;
	int64_t x51 = INT64_MIN;
	static int64_t x52 = INT64_MAX;

	t12 = ((x49<(x50|x51))&x52);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint8_t x54 = 10U;
	volatile int8_t x55 = 44;
	int16_t x56 = -236;
	volatile int32_t t13 = 13;

	t13 = ((x53<(x54|x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = UINT8_MAX;
	volatile int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	uint64_t x60 = 625781LLU;
	volatile uint64_t t14 = 473822109403528170LLU;

	t14 = ((x57<(x58|x59))&x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -1LL;
	uint64_t x63 = UINT64_MAX;
	volatile uint16_t x64 = 0U;
	int32_t t15 = 1;

	t15 = ((x61<(x62|x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	int64_t x68 = INT64_MIN;
	static volatile int64_t t16 = -1LL;

	t16 = ((x65<(x66|x67))&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x70 = UINT16_MAX;
	int16_t x71 = 8836;
	int8_t x72 = -29;
	int32_t t17 = -93499215;

	t17 = ((x69<(x70|x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -2;
	int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MIN;
	int32_t t18 = 4019;

	t18 = ((x73<(x74|x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint8_t x78 = UINT8_MAX;
	uint64_t x79 = 15217334LLU;
	uint16_t x80 = UINT16_MAX;

	t19 = ((x77<(x78|x79))&x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int64_t x82 = 359495259LL;
	volatile int16_t x83 = -1;
	int64_t x84 = INT64_MIN;
	static volatile int64_t t20 = -53844593069LL;

	t20 = ((x81<(x82|x83))&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 183U;
	static int32_t x86 = -2;
	volatile int64_t x87 = 19063475620844LL;
	volatile int32_t t21 = -59438955;

	t21 = ((x85<(x86|x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 1584902LLU;
	int64_t x90 = -1LL;
	int64_t x91 = INT64_MIN;
	static int8_t x92 = INT8_MAX;
	int32_t t22 = -947160216;

	t22 = ((x89<(x90|x91))&x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x94 = 58;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = -1;

	t23 = ((x93<(x94|x95))&x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 83925989U;
	int8_t x99 = INT8_MIN;
	uint32_t x100 = 1788464586U;

	t24 = ((x97<(x98|x99))&x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 323090102;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MAX;
	static int16_t x104 = 88;
	volatile int32_t t25 = -2321941;

	t25 = ((x101<(x102|x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = 0;
	static uint8_t x106 = 31U;
	uint8_t x107 = 52U;
	uint32_t x108 = UINT32_MAX;
	uint32_t t26 = 0U;

	t26 = ((x105<(x106|x107))&x108);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	volatile uint32_t x110 = 945357U;
	int16_t x111 = INT16_MIN;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 4;

	t27 = ((x109<(x110|x111))&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 235560836U;
	uint64_t x114 = 10564LLU;
	volatile int32_t x116 = INT32_MAX;
	volatile int32_t t28 = 46151272;

	t28 = ((x113<(x114|x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = UINT64_MAX;
	int8_t x118 = -1;
	int16_t x119 = 107;

	t29 = ((x117<(x118|x119))&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = -1;
	int64_t x122 = -1LL;
	int16_t x123 = 2;
	volatile int16_t x124 = 693;
	int32_t t30 = -3824;

	t30 = ((x121<(x122|x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	uint32_t x127 = 0U;
	int32_t t31 = 449285;

	t31 = ((x125<(x126|x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x129 = 1U;
	int8_t x130 = -31;
	volatile int64_t x131 = INT64_MIN;
	int16_t x132 = -114;
	int32_t t32 = 29715;

	t32 = ((x129<(x130|x131))&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	static uint64_t x134 = 1003LLU;
	int16_t x135 = INT16_MAX;
	int8_t x136 = 1;
	static int32_t t33 = -30120793;

	t33 = ((x133<(x134|x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 1LLU;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MAX;
	static volatile int8_t x140 = INT8_MIN;
	int32_t t34 = 186835;

	t34 = ((x137<(x138|x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static int32_t x142 = -5703627;
	volatile uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MAX;

	t35 = ((x141<(x142|x143))&x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	int32_t x148 = -1;
	volatile int32_t t36 = -6080283;

	t36 = ((x145<(x146|x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x151 = INT64_MIN;
	uint8_t x152 = 3U;
	static int32_t t37 = 1;

	t37 = ((x149<(x150|x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x155 = -11;
	uint16_t x156 = 7131U;
	static volatile int32_t t38 = 745423135;

	t38 = ((x153<(x154|x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 3U;
	static uint64_t x158 = UINT64_MAX;
	volatile int8_t x159 = INT8_MIN;
	int16_t x160 = -11;

	t39 = ((x157<(x158|x159))&x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	volatile uint64_t x162 = UINT64_MAX;
	volatile int16_t x163 = INT16_MIN;
	int64_t t40 = -303738410LL;

	t40 = ((x161<(x162|x163))&x164);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x166 = -1LL;
	static volatile uint8_t x167 = 6U;
	int64_t x168 = 433LL;
	int64_t t41 = 129546LL;

	t41 = ((x165<(x166|x167))&x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MAX;
	int64_t x170 = -1LL;
	int16_t x171 = 229;
	static uint8_t x172 = UINT8_MAX;
	static int32_t t42 = 651688470;

	t42 = ((x169<(x170|x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x174 = INT64_MIN;
	uint16_t x175 = 2352U;
	int8_t x176 = INT8_MIN;
	int32_t t43 = 302597396;

	t43 = ((x173<(x174|x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 3897515U;
	int64_t x178 = -51LL;
	int64_t x179 = -1LL;
	static int64_t t44 = -256023975871711LL;

	t44 = ((x177<(x178|x179))&x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -279;
	static volatile uint32_t x184 = 4963U;
	volatile uint32_t t45 = 187997U;

	t45 = ((x181<(x182|x183))&x184);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -15;
	volatile int16_t x188 = INT16_MIN;
	int32_t t46 = -72280;

	t46 = ((x185<(x186|x187))&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	volatile int16_t x190 = INT16_MIN;
	int16_t x191 = 23;
	int16_t x192 = INT16_MIN;
	int32_t t47 = 33728826;

	t47 = ((x189<(x190|x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	uint8_t x194 = UINT8_MAX;
	volatile uint64_t x195 = UINT64_MAX;
	static int32_t t48 = 12;

	t48 = ((x193<(x194|x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	int64_t x198 = INT64_MIN;
	static uint16_t x199 = 3677U;
	uint32_t x200 = 58U;
	static volatile uint32_t t49 = 793614197U;

	t49 = ((x197<(x198|x199))&x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	volatile int8_t x202 = -1;
	int32_t x203 = INT32_MAX;
	static uint8_t x204 = 1U;
	int32_t t50 = -424;

	t50 = ((x201<(x202|x203))&x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	uint8_t x206 = 107U;
	uint64_t x207 = 119977500703LLU;

	t51 = ((x205<(x206|x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = -2456310278611611LL;
	static int32_t x212 = -1;
	volatile int32_t t52 = 93;

	t52 = ((x209<(x210|x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint8_t x214 = UINT8_MAX;
	int8_t x215 = -6;

	t53 = ((x213<(x214|x215))&x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -3;
	uint16_t x218 = 5U;
	int16_t x219 = 14;
	uint8_t x220 = 119U;

	t54 = ((x217<(x218|x219))&x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 21970439U;
	volatile int8_t x224 = -8;
	volatile int32_t t55 = -457556;

	t55 = ((x221<(x222|x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -477;
	uint8_t x226 = UINT8_MAX;
	int64_t x227 = INT64_MIN;
	volatile int64_t t56 = 62809LL;

	t56 = ((x225<(x226|x227))&x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	static int8_t x230 = -1;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = 66539826748436678LLU;
	volatile uint64_t t57 = 116583539895406012LLU;

	t57 = ((x229<(x230|x231))&x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 49083U;
	volatile int32_t x234 = -152065;
	int64_t x235 = INT64_MAX;
	int32_t x236 = 411;
	int32_t t58 = 8;

	t58 = ((x233<(x234|x235))&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 5157U;
	uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 806460275671205762LLU;
	int8_t x240 = 14;

	t59 = ((x237<(x238|x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int16_t x242 = 1;
	uint32_t x243 = 3U;
	int32_t x244 = INT32_MIN;
	static int32_t t60 = 3321559;

	t60 = ((x241<(x242|x243))&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MAX;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t61 = -64364195;

	t61 = ((x245<(x246|x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x249 = UINT16_MAX;
	int8_t x250 = INT8_MAX;
	static int8_t x251 = INT8_MAX;
	uint8_t x252 = UINT8_MAX;
	int32_t t62 = 2842;

	t62 = ((x249<(x250|x251))&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 19;
	uint64_t x254 = 71900LLU;
	volatile uint64_t x255 = 10267263826667LLU;
	uint32_t x256 = 8953U;
	uint32_t t63 = 4988U;

	t63 = ((x253<(x254|x255))&x256);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int64_t x259 = -1LL;
	uint8_t x260 = 2U;

	t64 = ((x257<(x258|x259))&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x262 = INT8_MIN;
	int8_t x263 = 26;
	volatile uint64_t t65 = 1LLU;

	t65 = ((x261<(x262|x263))&x264);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 14U;
	static uint64_t x267 = 3234454LLU;
	volatile int64_t x268 = 0LL;
	volatile int64_t t66 = -42LL;

	t66 = ((x265<(x266|x267))&x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = 0U;
	static int8_t x270 = INT8_MIN;
	uint32_t x271 = 236195633U;
	volatile int8_t x272 = -1;
	static volatile int32_t t67 = -607897295;

	t67 = ((x269<(x270|x271))&x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x274 = UINT32_MAX;
	static uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t68 = 180LL;

	t68 = ((x273<(x274|x275))&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	static int16_t x279 = 4437;
	int16_t x280 = 85;

	t69 = ((x277<(x278|x279))&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 69U;
	int32_t x282 = 1081791;
	int64_t x283 = INT64_MIN;
	int64_t x284 = 740349965LL;
	volatile int64_t t70 = -84838949442LL;

	t70 = ((x281<(x282|x283))&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -3;
	uint32_t x287 = UINT32_MAX;
	volatile uint32_t t71 = 109408617U;

	t71 = ((x285<(x286|x287))&x288);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x289 = -1;
	uint8_t x290 = UINT8_MAX;
	static int16_t x291 = -10613;
	int8_t x292 = -1;

	t72 = ((x289<(x290|x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	volatile int64_t x294 = INT64_MAX;
	int64_t x295 = 229LL;
	uint8_t x296 = 40U;
	volatile int32_t t73 = 827;

	t73 = ((x293<(x294|x295))&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = -3948842;
	int8_t x299 = 0;
	static int8_t x300 = -55;
	static volatile int32_t t74 = 47923104;

	t74 = ((x297<(x298|x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x303 = -1315;
	static int64_t x304 = 3LL;
	int64_t t75 = 9LL;

	t75 = ((x301<(x302|x303))&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = 6LLU;
	int8_t x306 = -1;
	uint16_t x307 = UINT16_MAX;
	static volatile uint8_t x308 = 9U;
	volatile int32_t t76 = 0;

	t76 = ((x305<(x306|x307))&x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t t77 = 94;

	t77 = ((x309<(x310|x311))&x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MAX;
	uint64_t x315 = UINT64_MAX;
	static int8_t x316 = 40;

	t78 = ((x313<(x314|x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 7005U;
	int16_t x318 = INT16_MIN;
	uint32_t x320 = UINT32_MAX;
	uint32_t t79 = 55U;

	t79 = ((x317<(x318|x319))&x320);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -21400399059434604LL;
	static volatile int8_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t80 = 2947444U;

	t80 = ((x321<(x322|x323))&x324);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MIN;
	int64_t x328 = 0LL;
	static volatile int64_t t81 = -661153476114017922LL;

	t81 = ((x325<(x326|x327))&x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = 36;
	int32_t t82 = 29333660;

	t82 = ((x329<(x330|x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	static int8_t x334 = INT8_MIN;
	static int8_t x335 = 23;
	volatile int32_t x336 = -15891;
	volatile int32_t t83 = -513112;

	t83 = ((x333<(x334|x335))&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MIN;
	int8_t x340 = 1;
	static volatile int32_t t84 = 58;

	t84 = ((x337<(x338|x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	static volatile int8_t x342 = INT8_MIN;
	uint32_t x344 = UINT32_MAX;
	uint32_t t85 = 30160893U;

	t85 = ((x341<(x342|x343))&x344);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = -79;
	int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 184;

	t86 = ((x345<(x346|x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = 250LL;
	uint16_t x351 = UINT16_MAX;
	uint32_t x352 = UINT32_MAX;
	static volatile uint32_t t87 = 48U;

	t87 = ((x349<(x350|x351))&x352);

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MIN;
	static uint32_t x354 = UINT32_MAX;
	volatile uint64_t x355 = 175LLU;
	volatile uint32_t x356 = UINT32_MAX;
	uint32_t t88 = 127510U;

	t88 = ((x353<(x354|x355))&x356);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MAX;
	static volatile int32_t x358 = 77136;
	int16_t x359 = -1;
	uint16_t x360 = 1U;
	static volatile int32_t t89 = -3260919;

	t89 = ((x357<(x358|x359))&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = -1;
	static int64_t x362 = INT64_MIN;
	static int32_t x363 = -1300575;
	uint16_t x364 = UINT16_MAX;
	int32_t t90 = -6;

	t90 = ((x361<(x362|x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1581684660607LL;
	volatile uint16_t x366 = 52U;
	int32_t x368 = INT32_MIN;
	int32_t t91 = -26577;

	t91 = ((x365<(x366|x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	volatile int32_t x370 = INT32_MIN;
	static int16_t x371 = INT16_MIN;
	volatile int32_t t92 = -372779685;

	t92 = ((x369<(x370|x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	volatile int16_t x374 = -87;
	int32_t x375 = INT32_MAX;
	volatile int32_t t93 = 682;

	t93 = ((x373<(x374|x375))&x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MAX;
	int32_t t94 = -247;

	t94 = ((x377<(x378|x379))&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int32_t x382 = INT32_MIN;
	uint32_t x383 = UINT32_MAX;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 123055;

	t95 = ((x381<(x382|x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MIN;
	static int64_t x387 = INT64_MAX;
	int64_t x388 = 336296LL;
	int64_t t96 = -432237LL;

	t96 = ((x385<(x386|x387))&x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -173431070;
	int32_t x390 = -1;
	int16_t x391 = INT16_MIN;
	static int64_t x392 = 1736403689155281172LL;
	static volatile int64_t t97 = 10143367948347LL;

	t97 = ((x389<(x390|x391))&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 8U;
	int8_t x394 = 12;
	uint16_t x395 = 39U;
	volatile int16_t x396 = INT16_MIN;
	int32_t t98 = -54;

	t98 = ((x393<(x394|x395))&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	volatile int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;

	t99 = ((x397<(x398|x399))&x400);

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

