#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 29U;
static int32_t x12 = -6411;
uint8_t x15 = 38U;
int16_t x16 = 1;
static int32_t t3 = -66451;
static int16_t x17 = -1;
volatile int64_t t4 = 714898176043LL;
static int8_t x21 = 1;
int64_t x25 = INT64_MIN;
uint32_t x40 = 106U;
int16_t x43 = -1;
volatile int32_t t11 = 23413;
int16_t x49 = -1;
volatile int16_t x61 = INT16_MIN;
static uint16_t x63 = 0U;
static int16_t x64 = -6486;
int32_t t15 = -150626;
int32_t x70 = -1;
int8_t x72 = 1;
uint16_t x76 = UINT16_MAX;
uint32_t x82 = UINT32_MAX;
int64_t t21 = 24992132052LL;
uint8_t x95 = 2U;
static uint32_t x97 = UINT32_MAX;
static uint16_t x98 = 3U;
volatile int16_t x101 = INT16_MAX;
int8_t x102 = INT8_MIN;
int16_t x105 = INT16_MIN;
volatile int32_t t27 = 183500;
volatile int32_t t28 = -871614266;
int64_t x121 = -137976843LL;
int32_t x122 = -26983;
uint32_t x123 = 774785108U;
int32_t x129 = 885812762;
int8_t x137 = INT8_MIN;
volatile int32_t x139 = INT32_MIN;
uint16_t x143 = 3U;
uint32_t t33 = 147U;
uint16_t x148 = UINT16_MAX;
uint32_t t34 = 1U;
int64_t x153 = -18312435749373LL;
uint16_t x154 = UINT16_MAX;
static int64_t x158 = -1LL;
uint32_t x160 = 923U;
volatile uint8_t x162 = 53U;
int64_t x165 = INT64_MIN;
int32_t x173 = 42258;
static int64_t x180 = INT64_MIN;
uint64_t x182 = 871275LLU;
static int8_t x187 = -1;
volatile int32_t t44 = 58985166;
static uint16_t x189 = 945U;
int8_t x193 = -1;
static int8_t x195 = -8;
volatile uint64_t x199 = UINT64_MAX;
static int64_t x200 = INT64_MIN;
uint64_t t47 = 1119666842132250LLU;
int64_t x203 = -1LL;
static int64_t x204 = INT64_MIN;
volatile uint64_t x205 = UINT64_MAX;
uint64_t x207 = 163155LLU;
int16_t x215 = INT16_MIN;
uint64_t x220 = 415LLU;
static uint8_t x225 = 1U;
volatile int64_t x236 = INT64_MIN;
volatile int16_t x239 = INT16_MIN;
int32_t x250 = INT32_MIN;
int32_t x258 = INT32_MIN;
static uint64_t x262 = 3788LLU;
static uint32_t x265 = UINT32_MAX;
uint64_t x268 = UINT64_MAX;
uint32_t x270 = 32691715U;
uint64_t x271 = UINT64_MAX;
uint16_t x273 = 7U;
volatile int16_t x275 = -11;
int64_t x277 = -1991100742013386LL;
volatile int32_t t67 = -39651089;
int8_t x287 = -1;
volatile uint64_t x288 = 23510098LLU;
volatile uint64_t t69 = 3031512435598162LLU;
volatile uint32_t x293 = 982019814U;
volatile int64_t t71 = -8177893676027LL;
volatile int16_t x301 = -1;
int8_t x306 = INT8_MAX;
int8_t x307 = 1;
int16_t x308 = -1;
int64_t x310 = -1LL;
int64_t t75 = 26LL;
static volatile uint64_t x316 = UINT64_MAX;
uint64_t x318 = UINT64_MAX;
int8_t x319 = 8;
static int32_t t77 = 358860667;
volatile int64_t x325 = INT64_MAX;
int32_t x326 = INT32_MIN;
static uint8_t x327 = UINT8_MAX;
static uint16_t x329 = UINT16_MAX;
volatile int16_t x331 = 1;
uint16_t x337 = 198U;
uint8_t x339 = UINT8_MAX;
uint64_t x346 = UINT64_MAX;
uint32_t x347 = 6974126U;
volatile int16_t x349 = INT16_MAX;
int8_t x352 = 4;
int64_t t85 = -1582554097LL;
uint32_t x363 = 13U;
static volatile int64_t x364 = -1LL;
int64_t t88 = 816115193626757LL;
static volatile uint32_t x365 = UINT32_MAX;
int64_t x377 = -7106581576LL;
static int64_t x382 = -217686403576230LL;
uint32_t t94 = 256595U;
uint8_t x392 = UINT8_MAX;
uint64_t x394 = UINT64_MAX;
volatile int32_t t96 = -262953;
static int32_t t99 = -17510876;


void f0(void) {
	int32_t x1 = -1;
	static int8_t x3 = INT8_MIN;
	volatile uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = 2LLU;

	t0 = (((x1==x2)*x3)*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int32_t x6 = -1;
	static int32_t x7 = INT32_MAX;
	volatile int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 293899;

	t1 = (((x5==x6)*x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 2;
	volatile uint8_t x10 = 2U;
	int64_t x11 = -1LL;
	int64_t t2 = -863LL;

	t2 = (((x9==x10)*x11)*x12);

	if (t2 != 6411LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 77U;
	int64_t x14 = -1LL;

	t3 = (((x13==x14)*x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MAX;
	volatile int8_t x19 = -1;
	static int64_t x20 = -170180086228965115LL;

	t4 = (((x17==x18)*x19)*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -15;
	uint32_t x23 = UINT32_MAX;
	int8_t x24 = 14;
	volatile uint32_t t5 = 15460U;

	t5 = (((x21==x22)*x23)*x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = 7U;
	volatile uint16_t x27 = UINT16_MAX;
	int64_t x28 = -3097101450616445LL;
	static volatile int64_t t6 = 98453LL;

	t6 = (((x25==x26)*x27)*x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 21;
	volatile int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = 2056658951U;
	volatile uint32_t t7 = 104430622U;

	t7 = (((x29==x30)*x31)*x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MAX;
	int64_t x34 = 69535644644314LL;
	static uint16_t x35 = UINT16_MAX;
	uint32_t x36 = 417644732U;
	static volatile uint32_t t8 = 255677151U;

	t8 = (((x33==x34)*x35)*x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 23U;
	int64_t x38 = -1LL;
	static int16_t x39 = 1;
	static uint32_t t9 = 8781U;

	t9 = (((x37==x38)*x39)*x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 5;
	volatile int8_t x42 = INT8_MIN;
	int8_t x44 = -1;
	static int32_t t10 = 60312078;

	t10 = (((x41==x42)*x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -812987043;
	volatile int32_t x46 = -1;
	int16_t x47 = -1;
	int16_t x48 = INT16_MIN;

	t11 = (((x45==x46)*x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = INT16_MAX;
	uint16_t x51 = 59U;
	static uint8_t x52 = 17U;
	volatile int32_t t12 = -67879756;

	t12 = (((x49==x50)*x51)*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = 2;
	uint64_t x54 = 38053675996717531LLU;
	volatile int64_t x55 = -1LL;
	int16_t x56 = -7060;
	int64_t t13 = 49012LL;

	t13 = (((x53==x54)*x55)*x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int32_t x58 = 16;
	int32_t x59 = 3;
	int8_t x60 = 1;
	static int32_t t14 = -15;

	t14 = (((x57==x58)*x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = 70U;

	t15 = (((x61==x62)*x63)*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 1480521270LLU;
	int8_t x66 = -1;
	uint8_t x67 = 1U;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -810885457;

	t16 = (((x65==x66)*x67)*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int32_t x71 = -33;
	static volatile int32_t t17 = 735288275;

	t17 = (((x69==x70)*x71)*x72);

	if (t17 != -33) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = -3;
	int64_t x74 = 6431789820805LL;
	static volatile int8_t x75 = -1;
	volatile int32_t t18 = -2;

	t18 = (((x73==x74)*x75)*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int16_t x78 = -1;
	uint64_t x79 = 3099718219LLU;
	static uint8_t x80 = 0U;
	uint64_t t19 = 850LLU;

	t19 = (((x77==x78)*x79)*x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = 127LL;
	int32_t x83 = INT32_MAX;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t20 = 1505018LLU;

	t20 = (((x81==x82)*x83)*x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 1234U;
	int64_t x86 = INT64_MIN;
	static uint16_t x87 = 3605U;
	int64_t x88 = -1LL;

	t21 = (((x85==x86)*x87)*x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	static int32_t x90 = -1;
	int8_t x91 = -1;
	int32_t x92 = 103833;
	volatile int32_t t22 = -238;

	t22 = (((x89==x90)*x91)*x92);

	if (t22 != -103833) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -534156195LL;
	uint8_t x94 = 1U;
	volatile uint64_t x96 = UINT64_MAX;
	volatile uint64_t t23 = 14620294975291076LLU;

	t23 = (((x93==x94)*x95)*x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x99 = 3U;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = 5353;

	t24 = (((x97==x98)*x99)*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x103 = 0U;
	static int8_t x104 = -2;
	static int32_t t25 = 4694;

	t25 = (((x101==x102)*x103)*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MIN;
	volatile int16_t x107 = INT16_MAX;
	uint64_t x108 = 56662883775149LLU;
	static uint64_t t26 = 15LLU;

	t26 = (((x105==x106)*x107)*x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 12063U;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MAX;
	static uint8_t x112 = UINT8_MAX;

	t27 = (((x109==x110)*x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MAX;
	uint8_t x116 = 0U;

	t28 = (((x113==x114)*x115)*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x124 = INT64_MIN;
	volatile int64_t t29 = 1832LL;

	t29 = (((x121==x122)*x123)*x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x130 = INT64_MIN;
	int32_t x131 = 0;
	static int16_t x132 = -1;
	int32_t t30 = -1722554;

	t30 = (((x129==x130)*x131)*x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x133 = UINT8_MAX;
	int32_t x134 = 201943;
	uint64_t x135 = UINT64_MAX;
	static int8_t x136 = INT8_MIN;
	volatile uint64_t t31 = 120LLU;

	t31 = (((x133==x134)*x135)*x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x138 = 648910U;
	volatile int64_t x140 = -1621672008344LL;
	int64_t t32 = -2053775624587506246LL;

	t32 = (((x137==x138)*x139)*x140);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 33870;
	int8_t x142 = -1;
	uint32_t x144 = UINT32_MAX;

	t33 = (((x141==x142)*x143)*x144);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	uint8_t x146 = 15U;
	uint32_t x147 = UINT32_MAX;

	t34 = (((x145==x146)*x147)*x148);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 12U;
	static int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	volatile int16_t x152 = -1;
	volatile int32_t t35 = -1;

	t35 = (((x149==x150)*x151)*x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x155 = 8231320LLU;
	static int8_t x156 = INT8_MIN;
	static volatile uint64_t t36 = 966LLU;

	t36 = (((x153==x154)*x155)*x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 29797749013520LLU;
	int32_t x159 = INT32_MIN;
	uint32_t t37 = 3338614U;

	t37 = (((x157==x158)*x159)*x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MAX;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	volatile int64_t t38 = 300364180LL;

	t38 = (((x161==x162)*x163)*x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x166 = UINT64_MAX;
	uint64_t x167 = 2LLU;
	static volatile int16_t x168 = INT16_MAX;
	static volatile uint64_t t39 = 58950178LLU;

	t39 = (((x165==x166)*x167)*x168);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -1;
	int32_t x170 = INT32_MIN;
	volatile uint16_t x171 = 7U;
	volatile int16_t x172 = -1;
	int32_t t40 = -68355257;

	t40 = (((x169==x170)*x171)*x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x174 = INT64_MIN;
	int16_t x175 = -1;
	int32_t x176 = INT32_MIN;
	volatile int32_t t41 = 1;

	t41 = (((x173==x174)*x175)*x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -49;
	static int8_t x178 = INT8_MAX;
	static int8_t x179 = INT8_MAX;
	int64_t t42 = 3548470415020677LL;

	t42 = (((x177==x178)*x179)*x180);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 21U;
	static int8_t x183 = INT8_MAX;
	int16_t x184 = 0;
	int32_t t43 = -17787;

	t43 = (((x181==x182)*x183)*x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	uint8_t x186 = 26U;
	int32_t x188 = INT32_MIN;

	t44 = (((x185==x186)*x187)*x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x190 = -1LL;
	static int64_t x191 = INT64_MAX;
	static volatile uint32_t x192 = UINT32_MAX;
	volatile int64_t t45 = 67LL;

	t45 = (((x189==x190)*x191)*x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x194 = 796416U;
	volatile int16_t x196 = INT16_MAX;
	int32_t t46 = 938366;

	t46 = (((x193==x194)*x195)*x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MIN;

	t47 = (((x197==x198)*x199)*x200);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MIN;
	volatile int8_t x202 = INT8_MAX;
	volatile int64_t t48 = -102077348174291226LL;

	t48 = (((x201==x202)*x203)*x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x206 = UINT32_MAX;
	int8_t x208 = INT8_MAX;
	uint64_t t49 = 167190603833621944LLU;

	t49 = (((x205==x206)*x207)*x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 506452U;
	int16_t x210 = -1;
	static int16_t x211 = 0;
	int8_t x212 = -1;
	volatile int32_t t50 = -4808841;

	t50 = (((x209==x210)*x211)*x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x213 = INT32_MAX;
	volatile int8_t x214 = INT8_MAX;
	uint8_t x216 = 3U;
	int32_t t51 = -118;

	t51 = (((x213==x214)*x215)*x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = UINT8_MAX;
	static int64_t x218 = INT64_MAX;
	volatile int16_t x219 = 465;
	volatile uint64_t t52 = 184085LLU;

	t52 = (((x217==x218)*x219)*x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -1LL;
	volatile int64_t x222 = INT64_MIN;
	static uint16_t x223 = 15279U;
	int32_t x224 = INT32_MIN;
	int32_t t53 = -2;

	t53 = (((x221==x222)*x223)*x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x226 = 0U;
	static int16_t x227 = -338;
	int32_t x228 = 0;
	static int32_t t54 = 19019;

	t54 = (((x225==x226)*x227)*x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x229 = 19779LLU;
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	static int8_t x232 = 2;
	static volatile int32_t t55 = 1413522;

	t55 = (((x229==x230)*x231)*x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x233 = 1U;
	int64_t x234 = -1LL;
	int32_t x235 = -1;
	volatile int64_t t56 = -257110007022640793LL;

	t56 = (((x233==x234)*x235)*x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = 22;
	static int16_t x238 = INT16_MAX;
	volatile int8_t x240 = -11;
	static volatile int32_t t57 = -17746;

	t57 = (((x237==x238)*x239)*x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x241 = UINT32_MAX;
	uint64_t x242 = 688841358800221218LLU;
	static int8_t x243 = INT8_MAX;
	static uint32_t x244 = UINT32_MAX;
	static volatile uint32_t t58 = 20695537U;

	t58 = (((x241==x242)*x243)*x244);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x245 = 1U;
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = 1;
	volatile int64_t x248 = INT64_MAX;
	int64_t t59 = -556830276233498LL;

	t59 = (((x245==x246)*x247)*x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 1U;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = INT16_MAX;
	static volatile int32_t t60 = 0;

	t60 = (((x249==x250)*x251)*x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x253 = 63U;
	uint8_t x254 = 0U;
	int16_t x255 = -1602;
	int8_t x256 = INT8_MAX;
	volatile int32_t t61 = -211722904;

	t61 = (((x253==x254)*x255)*x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x257 = 693U;
	volatile int8_t x259 = 3;
	int32_t x260 = INT32_MIN;
	static volatile int32_t t62 = -418589103;

	t62 = (((x257==x258)*x259)*x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	int32_t x263 = -2048;
	uint32_t x264 = 145534U;
	volatile uint32_t t63 = 45290354U;

	t63 = (((x261==x262)*x263)*x264);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x266 = INT32_MAX;
	static volatile int8_t x267 = -1;
	uint64_t t64 = 808LLU;

	t64 = (((x265==x266)*x267)*x268);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 1596864749U;
	volatile int32_t x272 = INT32_MAX;
	uint64_t t65 = 27166947636795273LLU;

	t65 = (((x269==x270)*x271)*x272);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x274 = 1U;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t66 = 243603360;

	t66 = (((x273==x274)*x275)*x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x278 = -3;
	static int8_t x279 = -1;
	static int16_t x280 = INT16_MAX;

	t67 = (((x277==x278)*x279)*x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x281 = INT8_MIN;
	volatile int16_t x282 = INT16_MIN;
	int16_t x283 = -110;
	volatile int32_t x284 = -1;
	int32_t t68 = -119201;

	t68 = (((x281==x282)*x283)*x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x285 = INT16_MAX;
	int16_t x286 = INT16_MIN;

	t69 = (((x285==x286)*x287)*x288);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = UINT8_MAX;
	int64_t x290 = -1LL;
	uint64_t x291 = 8LLU;
	uint16_t x292 = 1877U;
	volatile uint64_t t70 = 14640LLU;

	t70 = (((x289==x290)*x291)*x292);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x294 = INT8_MIN;
	volatile int64_t x295 = INT64_MIN;
	static uint16_t x296 = 29U;

	t71 = (((x293==x294)*x295)*x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x297 = UINT32_MAX;
	int64_t x298 = -1LL;
	uint16_t x299 = UINT16_MAX;
	static int8_t x300 = 1;
	volatile int32_t t72 = -7449800;

	t72 = (((x297==x298)*x299)*x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x302 = 54U;
	int32_t x303 = -3;
	volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t73 = 104027173539175265LLU;

	t73 = (((x301==x302)*x303)*x304);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int32_t t74 = 20;

	t74 = (((x305==x306)*x307)*x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x311 = 36672586U;
	int64_t x312 = INT64_MIN;

	t75 = (((x309==x310)*x311)*x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = INT64_MAX;
	int32_t x314 = INT32_MAX;
	int16_t x315 = 1;
	uint64_t t76 = 9LLU;

	t76 = (((x313==x314)*x315)*x316);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 8098089493213360281LLU;
	static int8_t x320 = -1;

	t77 = (((x317==x318)*x319)*x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x321 = 62U;
	int16_t x322 = INT16_MIN;
	int32_t x323 = 29333866;
	int64_t x324 = INT64_MIN;
	volatile int64_t t78 = -383024040085LL;

	t78 = (((x321==x322)*x323)*x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x328 = 507001608U;
	volatile uint32_t t79 = 3U;

	t79 = (((x325==x326)*x327)*x328);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x330 = 2414754U;
	uint32_t x332 = 386386U;
	static uint32_t t80 = 956651233U;

	t80 = (((x329==x330)*x331)*x332);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -1;
	volatile uint16_t x334 = UINT16_MAX;
	int32_t x335 = -7;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t81 = -8610347;

	t81 = (((x333==x334)*x335)*x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x338 = INT64_MIN;
	volatile int32_t x340 = -1001993874;
	volatile int32_t t82 = -3;

	t82 = (((x337==x338)*x339)*x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x341 = INT64_MAX;
	int16_t x342 = INT16_MAX;
	uint64_t x343 = UINT64_MAX;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t83 = 956005168391689789LLU;

	t83 = (((x341==x342)*x343)*x344);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MAX;
	uint64_t x348 = 201377404296LLU;
	volatile uint64_t t84 = 2731965LLU;

	t84 = (((x345==x346)*x347)*x348);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x350 = -1;
	int64_t x351 = -1LL;

	t85 = (((x349==x350)*x351)*x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 1U;
	uint32_t x354 = 2145U;
	int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MIN;
	static int64_t t86 = -3125653LL;

	t86 = (((x353==x354)*x355)*x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x357 = 321U;
	int64_t x358 = -1LL;
	static int8_t x359 = -13;
	static uint16_t x360 = 794U;
	volatile int32_t t87 = -91614;

	t87 = (((x357==x358)*x359)*x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x361 = 1649U;
	uint16_t x362 = 128U;

	t88 = (((x361==x362)*x363)*x364);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x366 = 9062U;
	volatile uint64_t x367 = UINT64_MAX;
	volatile uint8_t x368 = 3U;
	uint64_t t89 = 0LLU;

	t89 = (((x365==x366)*x367)*x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x369 = -1;
	volatile int16_t x370 = -549;
	volatile int32_t x371 = INT32_MIN;
	static uint8_t x372 = 19U;
	static volatile int32_t t90 = -22734;

	t90 = (((x369==x370)*x371)*x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x373 = INT64_MAX;
	static int16_t x374 = -1;
	int32_t x375 = INT32_MAX;
	int8_t x376 = -1;
	volatile int32_t t91 = -251;

	t91 = (((x373==x374)*x375)*x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x378 = 368U;
	int16_t x379 = INT16_MAX;
	int8_t x380 = -3;
	int32_t t92 = 73496841;

	t92 = (((x377==x378)*x379)*x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = -4;
	static int8_t x383 = 1;
	static uint8_t x384 = 6U;
	volatile int32_t t93 = -4;

	t93 = (((x381==x382)*x383)*x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x385 = 128691950U;
	int8_t x386 = -1;
	volatile int8_t x387 = -1;
	static uint32_t x388 = 23026U;

	t94 = (((x385==x386)*x387)*x388);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = -742467433;
	int32_t x390 = -90928;
	int32_t x391 = -1;
	int32_t t95 = 14;

	t95 = (((x389==x390)*x391)*x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = UINT64_MAX;
	uint16_t x395 = UINT16_MAX;
	uint8_t x396 = UINT8_MAX;

	t96 = (((x393==x394)*x395)*x396);

	if (t96 != 16711425) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x397 = INT64_MIN;
	static int32_t x398 = 469657;
	volatile int32_t x399 = INT32_MIN;
	uint64_t x400 = 1LLU;
	volatile uint64_t t97 = 3967LLU;

	t97 = (((x397==x398)*x399)*x400);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x401 = -1;
	uint8_t x402 = 1U;
	int8_t x403 = -1;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t98 = 244;

	t98 = (((x401==x402)*x403)*x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MAX;
	static int8_t x408 = -1;

	t99 = (((x405==x406)*x407)*x408);

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

